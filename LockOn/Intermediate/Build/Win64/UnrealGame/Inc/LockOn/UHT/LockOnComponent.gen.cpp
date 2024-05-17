// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOn/Public/Components/LockOnComponent.h"
#include "../../Source/Runtime/Engine/Classes/Components/TimelineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	LOCKON_API UClass* Z_Construct_UClass_ULockOnComponent();
	LOCKON_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LockOn();
// End Cross Module References
	DEFINE_FUNCTION(ULockOnComponent::execGetMovementDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execLerpRotationToFaceEnemy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LerpRotationToFaceEnemy(Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execFaceCurrentControllerDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FaceCurrentControllerDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execUpdateMovementVector)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MovementDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMovementVector(Z_Param_MovementDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execSwitchTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Enable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execInit)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InOwner);
		P_GET_OBJECT(UCameraComponent,Z_Param_Camera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InOwner,Z_Param_Camera);
		P_NATIVE_END;
	}
	void ULockOnComponent::StaticRegisterNativesULockOnComponent()
	{
		UClass* Class = ULockOnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &ULockOnComponent::execDisable },
			{ "Enable", &ULockOnComponent::execEnable },
			{ "FaceCurrentControllerDirection", &ULockOnComponent::execFaceCurrentControllerDirection },
			{ "GetMovementDirection", &ULockOnComponent::execGetMovementDirection },
			{ "Init", &ULockOnComponent::execInit },
			{ "LerpRotationToFaceEnemy", &ULockOnComponent::execLerpRotationToFaceEnemy },
			{ "Pause", &ULockOnComponent::execPause },
			{ "Resume", &ULockOnComponent::execResume },
			{ "SwitchTarget", &ULockOnComponent::execSwitchTarget },
			{ "UpdateMovementVector", &ULockOnComponent::execUpdateMovementVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockOnComponent_Disable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "Disable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Disable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_Disable_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULockOnComponent_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_Enable_Statics
	{
		struct LockOnComponent_eventEnable_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULockOnComponent_Enable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventEnable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_Enable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_Enable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "Comment", "/** Returns the number of found targets */" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
		{ "ToolTip", "Returns the number of found targets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "Enable", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_Enable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Enable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_Enable_Statics::LockOnComponent_eventEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Enable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_Enable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Enable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_Enable_Statics::LockOnComponent_eventEnable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "FaceCurrentControllerDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics
	{
		struct LockOnComponent_eventGetMovementDirection_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventGetMovementDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "Comment", "/** Returns the movement direction in degrees */" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
		{ "ToolTip", "Returns the movement direction in degrees" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "GetMovementDirection", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::LockOnComponent_eventGetMovementDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::LockOnComponent_eventGetMovementDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_GetMovementDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_GetMovementDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_Init_Statics
	{
		struct LockOnComponent_eventInit_Parms
		{
			ACharacter* InOwner;
			UCameraComponent* Camera;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULockOnComponent_Init_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventInit_Parms, InOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_Init_Statics::NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULockOnComponent_Init_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventInit_Parms, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Init_Statics::NewProp_Camera_MetaData), Z_Construct_UFunction_ULockOnComponent_Init_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_Init_Statics::NewProp_InOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_Init_Statics::NewProp_Camera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_Init_Statics::LockOnComponent_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_Init_Statics::LockOnComponent_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics
	{
		struct LockOnComponent_eventLerpRotationToFaceEnemy_Parms
		{
			float Alpha;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventLerpRotationToFaceEnemy_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "LerpRotationToFaceEnemy", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::LockOnComponent_eventLerpRotationToFaceEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::LockOnComponent_eventLerpRotationToFaceEnemy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_Pause_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULockOnComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_Resume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "Resume", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_Resume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_Resume_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULockOnComponent_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_SwitchTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_SwitchTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_SwitchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "SwitchTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_SwitchTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_SwitchTarget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULockOnComponent_SwitchTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_SwitchTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics
	{
		struct LockOnComponent_eventUpdateMovementVector_Parms
		{
			float MovementDirection;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventUpdateMovementVector_Parms, MovementDirection), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::NewProp_MovementDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "UpdateMovementVector", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::LockOnComponent_eventUpdateMovementVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::LockOnComponent_eventUpdateMovementVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnComponent);
	UClass* Z_Construct_UClass_ULockOnComponent_NoRegister()
	{
		return ULockOnComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULockOnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlledActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivated_MetaData[];
#endif
		static void NewProp_bActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToDeactivateLockOn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToDeactivateLockOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimelineCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTiltCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTiltCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRightDisplacementCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRightDisplacementCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CurrentTargetIndex;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToCurrentEnemy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToCurrentEnemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusToTargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusToTargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirectionDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementDirectionDeg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOn,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockOnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnComponent_Disable, "Disable" }, // 395110648
		{ &Z_Construct_UFunction_ULockOnComponent_Enable, "Enable" }, // 4042793247
		{ &Z_Construct_UFunction_ULockOnComponent_FaceCurrentControllerDirection, "FaceCurrentControllerDirection" }, // 14432299
		{ &Z_Construct_UFunction_ULockOnComponent_GetMovementDirection, "GetMovementDirection" }, // 850116656
		{ &Z_Construct_UFunction_ULockOnComponent_Init, "Init" }, // 1203222074
		{ &Z_Construct_UFunction_ULockOnComponent_LerpRotationToFaceEnemy, "LerpRotationToFaceEnemy" }, // 3901014619
		{ &Z_Construct_UFunction_ULockOnComponent_Pause, "Pause" }, // 1632125499
		{ &Z_Construct_UFunction_ULockOnComponent_Resume, "Resume" }, // 967159776
		{ &Z_Construct_UFunction_ULockOnComponent_SwitchTarget, "SwitchTarget" }, // 57036266
		{ &Z_Construct_UFunction_ULockOnComponent_UpdateMovementVector, "UpdateMovementVector" }, // 1390065788
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/LockOnComponent.h" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ViewCamera_MetaData[] = {
		{ "Comment", "/** Inherit from owner */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
		{ "ToolTip", "Inherit from owner" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ViewCamera_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ViewCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, Owner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Owner_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ControlledActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ControlledActor = { "ControlledActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, ControlledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ControlledActor_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ControlledActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bActivated_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "Comment", "/** If bActivated = false, the whole LockOn system will be disabled */" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
		{ "ToolTip", "If bActivated = false, the whole LockOn system will be disabled" },
	};
#endif
	void Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bActivated_SetBit(void* Obj)
	{
		((ULockOnComponent*)Obj)->bActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bActivated = { "bActivated", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULockOnComponent), &Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bActivated_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bActivated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((ULockOnComponent*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULockOnComponent), &Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bDrawDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TraceLength_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TraceLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToDeactivateLockOn_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToDeactivateLockOn = { "DistanceToDeactivateLockOn", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, DistanceToDeactivateLockOn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToDeactivateLockOn_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToDeactivateLockOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TimelineCurve_MetaData[] = {
		{ "Category", "LockOn Properties|Timeline" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TimelineCurve = { "TimelineCurve", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, TimelineCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TimelineCurve_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TimelineCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraTiltCurve_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraTiltCurve = { "CameraTiltCurve", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, CameraTiltCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraTiltCurve_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraTiltCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraRightDisplacementCurve_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraRightDisplacementCurve = { "CameraRightDisplacementCurve", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, CameraRightDisplacementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraRightDisplacementCurve_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraRightDisplacementCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetIndex_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetIndex = { "CurrentTargetIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, CurrentTargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetIndex_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetIndex_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Targets_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Targets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTarget_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToCurrentEnemy_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToCurrentEnemy = { "DistanceToCurrentEnemy", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, DistanceToCurrentEnemy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToCurrentEnemy_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToCurrentEnemy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_FocusToTargetRotation_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_FocusToTargetRotation = { "FocusToTargetRotation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, FocusToTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_FocusToTargetRotation_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_FocusToTargetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_RotationTimeline_MetaData[] = {
		{ "Category", "LockOn Properties|Timeline" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_RotationTimeline = { "RotationTimeline", nullptr, (EPropertyFlags)0x0040008000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, RotationTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_RotationTimeline_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_RotationTimeline_MetaData) }; // 2173395903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementDirectionDeg_MetaData[] = {
		{ "Category", "LockOn Properties" },
		{ "ModuleRelativePath", "Public/Components/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementDirectionDeg = { "MovementDirectionDeg", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, MovementDirectionDeg), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementDirectionDeg_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementDirectionDeg_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULockOnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ViewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_ControlledActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToDeactivateLockOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_TimelineCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraTiltCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CameraRightDisplacementCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_DistanceToCurrentEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_FocusToTargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_RotationTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementDirectionDeg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnComponent_Statics::ClassParams = {
		&ULockOnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULockOnComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULockOnComponent()
	{
		if (!Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton, Z_Construct_UClass_ULockOnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton;
	}
	template<> LOCKON_API UClass* StaticClass<ULockOnComponent>()
	{
		return ULockOnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnComponent);
	ULockOnComponent::~ULockOnComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnComponent, ULockOnComponent::StaticClass, TEXT("ULockOnComponent"), &Z_Registration_Info_UClass_ULockOnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnComponent), 3319064095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_525259109(TEXT("/Script/LockOn"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
