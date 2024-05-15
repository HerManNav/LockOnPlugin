// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/LockOnComponent.h"
#include "Interfaces/LockOnInterface.h"

#include "Camera/CameraComponent.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Character.h"

#include "Curves/CurveFloat.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

ULockOnComponent::ULockOnComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULockOnComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!TimelineCurve || !CameraTiltCurve || !CameraRightDisplacementCurve)
	{
		UE_LOG(LogTemp, Warning, TEXT("CurvesNotSet"));
		return;
	}

	FOnTimelineFloat InterpFunction;
	InterpFunction.BindUFunction(this, TEXT("LerpRotationToFaceEnemy"));

	RotationTimeline.AddInterpFloat(TimelineCurve, InterpFunction);
}

void ULockOnComponent::Init(ACharacter* InOwner, UCameraComponent* Camera)
{
	Owner = InOwner;
	ViewCamera = Camera;

	ControlledActor = Cast<AActor>(Owner->GetController());
}

/** Enable */

int32 ULockOnComponent::Enable()
{
	if (!bActivated) return 0;

	GetLockOnTargets(Targets);
	if (Targets.Num() > 0)
	{
		CurrentTargetIndex = 0;
		CurrentTarget = Targets[CurrentTargetIndex];
		ShowLockOnWidgetOnActor(CurrentTarget);
	}

	return Targets.Num();
}

void ULockOnComponent::GetLockOnTargets(TArray<AActor*>& InTargets)
{
	TArray<FHitResult> PawnHits;

	GetHitsToPawnsInFront(PawnHits);
	GetVisibleImpactedActors(InTargets, PawnHits);
}

void ULockOnComponent::GetHitsToPawnsInFront(TArray<FHitResult>& OutPawnHits)
{
	FVector OwnerLocation = Owner->GetActorLocation();

	FVector TraceStart = OwnerLocation;
	FVector TraceEnd = OwnerLocation + TraceLength * ViewCamera->GetForwardVector().GetSafeNormal2D();
	FVector HalfSize = FVector(500.f, 500.f, 200.f);
	FRotator Orientation = FRotator(0.f, 0.f, 0.f);

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));

	TArray<AActor*> ActorsToIgnore;

	UKismetSystemLibrary::BoxTraceMultiForObjects(
		this,
		TraceStart, TraceEnd,
		HalfSize, Orientation,
		ObjectTypes, false,
		ActorsToIgnore,
		bDrawDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		OutPawnHits,
		true
	);
}

void ULockOnComponent::GetVisibleImpactedActors(TArray<AActor*>& OutVisiblePawns, const TArray<FHitResult>& PawnHits)
{
	for (FHitResult PawnHit : PawnHits)
	{
		FHitResult HitResult;
		DoLineTraceAgainstWorldStatic(
			HitResult,
			ViewCamera->GetComponentLocation(), PawnHit.ImpactPoint);

		if (!HitResult.bBlockingHit)
			OutVisiblePawns.Add(PawnHit.GetActor());
	}
}

void ULockOnComponent::DoLineTraceAgainstWorldStatic(FHitResult& OutHitResult, const FVector& TraceStart, const FVector& TraceEnd)
{
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));

	TArray<AActor*> ActorsToIgnore;

	UKismetSystemLibrary::LineTraceSingleForObjects(
		this,
		TraceStart, TraceEnd,
		ObjectTypes, false,
		ActorsToIgnore,
		bDrawDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		OutHitResult,
		true
	);
}

/** Disable */

void ULockOnComponent::Disable()
{
	if (!bActivated) return;

	Targets.Empty();
	CurrentTargetIndex = 0;
	MovementDirectionDeg = 0.f;

	HideLockOnWidgetOnActor(CurrentTarget);
	RotationTimeline.Stop();
}

void ULockOnComponent::ShowLockOnWidgetOnActor(AActor* Actor)
{
	if (Actor->Implements<ULockOnInterface>())
		ILockOnInterface::Execute_SetLockOnWidgetVisibility(Actor, true);
}

void ULockOnComponent::HideLockOnWidgetOnActor(AActor* Actor)
{
	if (Actor->Implements<ULockOnInterface>())
		ILockOnInterface::Execute_SetLockOnWidgetVisibility(Actor, false);
}

/** Swap target */

void ULockOnComponent::SwitchTarget()
{
	if (!IsLockOnActive()) return;

	HideLockOnWidgetOnActor(CurrentTarget);

	CurrentTargetIndex = SelectNextIndex();
	CurrentTarget = Targets[CurrentTargetIndex];
	ShowLockOnWidgetOnActor(CurrentTarget);
}

int16 ULockOnComponent::SelectNextIndex()
{
	return (CurrentTargetIndex + 1) % Targets.Num();
}

/** Tick */

void ULockOnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (!IsLockOnActive()) return;

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	DistanceToCurrentEnemy = GetDistanceToTarget(CurrentTarget);
	if (DistanceToCurrentEnemy > DistanceToDeactivateLockOn)
	{
		FocusToTargetRotation = GetFocusToTargetRotation();

		// This logic implies that the Timeline will be only played for the first of its Alpha values (in each frame it will fire
		// the delegate LerpControllerRotation(Alpha)) for the first Alpha > 0.f, but this is ok since in the next frame, the Lerp
		// will consider the current controller (camera) position and move towards the Target more slowly than in the previus one,
		// resulting in a kind of a logarithmic curve (see notes), which feels smoother and better overall.
		RotationTimeline.PlayFromStart();
		RotationTimeline.TickTimeline(DeltaTime);
	}
}

float ULockOnComponent::GetDistanceToTarget(const AActor* Target)
{
	return (Target && Owner) ? (Target->GetActorLocation() - Owner->GetActorLocation()).Size() : -1.f;
}

/** Focus target */

FRotator ULockOnComponent::GetFocusToTargetRotation()
{
	if (!CameraTiltCurve || !CameraRightDisplacementCurve) return FRotator();

	FVector OwnerLocation = Owner->GetActorLocation();

	FVector CameraTilt = FVector(OwnerLocation.X, OwnerLocation.Y, OwnerLocation.Z + CameraTiltCurve->GetFloatValue(DistanceToCurrentEnemy));
	FVector CameraRightDisplacement = FVector(ViewCamera->GetRightVector() * CameraRightDisplacementCurve->GetFloatValue(DistanceToCurrentEnemy));
	FVector CameraLocation = CameraTilt + CameraRightDisplacement;

	FVector CurrentTargetLocation = CurrentTarget->GetActorLocation();

	return UKismetMathLibrary::FindLookAtRotation(CameraLocation, CurrentTargetLocation);
}

void ULockOnComponent::LerpRotationToFaceEnemy(float Alpha)
{
	LerpControllerRotation(Alpha);
	LerpCharacterYawRotation(Alpha);
}

void ULockOnComponent::LerpControllerRotation(float Alpha)
{
	FRotator CurrentControllerRotation = ControlledActor->GetActorRotation();
	FRotator FocusToTargetRotation_ForLerp = FocusToTargetRotation;
	FRotator ControllerLerpedRotation = UKismetMathLibrary::RLerp(CurrentControllerRotation, FocusToTargetRotation_ForLerp, Alpha, false);

	Owner->GetController()->SetControlRotation(ControllerLerpedRotation);
}

void ULockOnComponent::LerpCharacterYawRotation(float Alpha)
{
	FRotator OwnerRotation = FRotator(0.f, Owner->GetActorRotation().Yaw, 0.f);
	FRotator FocusToTargetRotation_ForLerp = FRotator(0.f, FocusToTargetRotation.Yaw, 0.f);
	FRotator OwnerLerpedRotation = UKismetMathLibrary::RLerp(OwnerRotation, FocusToTargetRotation_ForLerp, Alpha, false);

	Owner->SetActorRotation(OwnerLerpedRotation);
}

/** General methods */

bool ULockOnComponent::IsLockOnActive()
{
	return bActivated && Targets.Num() > 0;
}

void ULockOnComponent::UpdateMovementVector(float MovementDirection)
{
	MovementDirectionDeg = MovementDirection;
}

void ULockOnComponent::Pause()
{
	SetComponentTickEnabled(false);
	RotationTimeline.Stop();
}

void ULockOnComponent::Resume()
{
	SetComponentTickEnabled(true);
}

void ULockOnComponent::FaceCurrentControllerDirection()
{
	FVector CameraForward = ViewCamera->GetForwardVector().GetSafeNormal2D();
	FVector ActorForward = GetOwner()->GetActorForwardVector().GetSafeNormal2D();

	float ActorFacingDirection = UKismetMathLibrary::DegAcos(FVector::DotProduct(CameraForward, ActorForward));
	float RightOrLeft = FVector::CrossProduct(CameraForward, ActorForward).Z > 0 ? 1.f : -1.f;
	ActorFacingDirection *= RightOrLeft;

	float DegreesFromCurrentFacingToController = MovementDirectionDeg - ActorFacingDirection;
	GetOwner()->AddActorWorldRotation(FRotator(0.f, DegreesFromCurrentFacingToController, 0.f));
}