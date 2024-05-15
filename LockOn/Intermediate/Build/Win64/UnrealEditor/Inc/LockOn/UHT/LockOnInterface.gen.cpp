// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOn/Public/Interfaces/LockOnInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LOCKON_API UClass* Z_Construct_UClass_ULockOnInterface();
	LOCKON_API UClass* Z_Construct_UClass_ULockOnInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LockOn();
// End Cross Module References
	DEFINE_FUNCTION(ILockOnInterface::execSetLockOnWidgetVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLockOnWidgetVisibility_Implementation(Z_Param_bVisibility);
		P_NATIVE_END;
	}
	struct LockOnInterface_eventSetLockOnWidgetVisibility_Parms
	{
		bool bVisibility;
	};
	void ILockOnInterface::SetLockOnWidgetVisibility(bool bVisibility)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLockOnWidgetVisibility instead.");
	}
	void ULockOnInterface::StaticRegisterNativesULockOnInterface()
	{
		UClass* Class = ULockOnInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLockOnWidgetVisibility", &ILockOnInterface::execSetLockOnWidgetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics
	{
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((LockOnInterface_eventSetLockOnWidgetVisibility_Parms*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LockOnInterface_eventSetLockOnWidgetVisibility_Parms), &Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::NewProp_bVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnPlugin|Interfaces" },
		{ "ModuleRelativePath", "Public/Interfaces/LockOnInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnInterface, nullptr, "SetLockOnWidgetVisibility", nullptr, nullptr, Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::PropPointers), sizeof(LockOnInterface_eventSetLockOnWidgetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(LockOnInterface_eventSetLockOnWidgetVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnInterface);
	UClass* Z_Construct_UClass_ULockOnInterface_NoRegister()
	{
		return ULockOnInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULockOnInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOn,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockOnInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnInterface_SetLockOnWidgetVisibility, "SetLockOnWidgetVisibility" }, // 1811966517
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/LockOnInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILockOnInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnInterface_Statics::ClassParams = {
		&ULockOnInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULockOnInterface()
	{
		if (!Z_Registration_Info_UClass_ULockOnInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnInterface.OuterSingleton, Z_Construct_UClass_ULockOnInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULockOnInterface.OuterSingleton;
	}
	template<> LOCKON_API UClass* StaticClass<ULockOnInterface>()
	{
		return ULockOnInterface::StaticClass();
	}
	ULockOnInterface::ULockOnInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnInterface);
	ULockOnInterface::~ULockOnInterface() {}
	static FName NAME_ULockOnInterface_SetLockOnWidgetVisibility = FName(TEXT("SetLockOnWidgetVisibility"));
	void ILockOnInterface::Execute_SetLockOnWidgetVisibility(UObject* O, bool bVisibility)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULockOnInterface::StaticClass()));
		LockOnInterface_eventSetLockOnWidgetVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULockOnInterface_SetLockOnWidgetVisibility);
		if (Func)
		{
			Parms.bVisibility=bVisibility;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILockOnInterface*)(O->GetNativeInterfaceAddress(ULockOnInterface::StaticClass())))
		{
			I->SetLockOnWidgetVisibility_Implementation(bVisibility);
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnInterface, ULockOnInterface::StaticClass, TEXT("ULockOnInterface"), &Z_Registration_Info_UClass_ULockOnInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnInterface), 2816472738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_1342221334(TEXT("/Script/LockOn"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
