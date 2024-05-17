// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOn/Public/Components/LockOnWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnWidgetComponent() {}
// Cross Module References
	LOCKON_API UClass* Z_Construct_UClass_ULockOnWidgetComponent();
	LOCKON_API UClass* Z_Construct_UClass_ULockOnWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_LockOn();
// End Cross Module References
	DEFINE_FUNCTION(ULockOnWidgetComponent::execUpdateLockOnWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLockOnWidget();
		P_NATIVE_END;
	}
	void ULockOnWidgetComponent::StaticRegisterNativesULockOnWidgetComponent()
	{
		UClass* Class = ULockOnWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateLockOnWidget", &ULockOnWidgetComponent::execUpdateLockOnWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin|Widgets" },
		{ "ModuleRelativePath", "Public/Components/LockOnWidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnWidgetComponent, nullptr, "UpdateLockOnWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnWidgetComponent);
	UClass* Z_Construct_UClass_ULockOnWidgetComponent_NoRegister()
	{
		return ULockOnWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULockOnWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOn,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnWidgetComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockOnWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnWidgetComponent_UpdateLockOnWidget, "UpdateLockOnWidget" }, // 3495186665
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnWidgetComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Components/LockOnWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/LockOnWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnWidgetComponent_Statics::ClassParams = {
		&ULockOnWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnWidgetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULockOnWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_ULockOnWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnWidgetComponent.OuterSingleton, Z_Construct_UClass_ULockOnWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULockOnWidgetComponent.OuterSingleton;
	}
	template<> LOCKON_API UClass* StaticClass<ULockOnWidgetComponent>()
	{
		return ULockOnWidgetComponent::StaticClass();
	}
	ULockOnWidgetComponent::ULockOnWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnWidgetComponent);
	ULockOnWidgetComponent::~ULockOnWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnWidgetComponent, ULockOnWidgetComponent::StaticClass, TEXT("ULockOnWidgetComponent"), &Z_Registration_Info_UClass_ULockOnWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnWidgetComponent), 1785670598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnWidgetComponent_h_3687311150(TEXT("/Script/LockOn"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
