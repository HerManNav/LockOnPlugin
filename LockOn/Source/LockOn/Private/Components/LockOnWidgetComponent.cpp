// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/LockOnWidgetComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void ULockOnWidgetComponent::UpdateLockOnWidget()
{
	if (this->IsVisible())
	{
		FVector StartPoint = this->GetComponentLocation();
		FVector TargetPoint = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation();

		FRotator RotationToFaceCamera = UKismetMathLibrary::FindLookAtRotation(StartPoint, TargetPoint);
		this->SetWorldRotation(RotationToFaceCamera);
	}
}
