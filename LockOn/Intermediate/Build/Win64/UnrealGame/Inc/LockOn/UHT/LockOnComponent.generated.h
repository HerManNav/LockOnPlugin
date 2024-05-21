// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LockOnComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
#ifdef LOCKON_LockOnComponent_generated_h
#error "LockOnComponent.generated.h already included, missing '#pragma once' in LockOnComponent.h"
#endif
#define LOCKON_LockOnComponent_generated_h

#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_SPARSE_DATA
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMovementDirection); \
	DECLARE_FUNCTION(execLerpRotationToFaceEnemy); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execFaceCurrentControllerDirection); \
	DECLARE_FUNCTION(execUpdateMovementVector); \
	DECLARE_FUNCTION(execSwitchTarget); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable); \
	DECLARE_FUNCTION(execInit);


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_ACCESSORS
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULockOnComponent(); \
	friend struct Z_Construct_UClass_ULockOnComponent_Statics; \
public: \
	DECLARE_CLASS(ULockOnComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LockOn"), NO_API) \
	DECLARE_SERIALIZER(ULockOnComponent)


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULockOnComponent(ULockOnComponent&&); \
	NO_API ULockOnComponent(const ULockOnComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockOnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockOnComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULockOnComponent) \
	NO_API virtual ~ULockOnComponent();


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_16_PROLOG
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_SPARSE_DATA \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_ACCESSORS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKON_API UClass* StaticClass<class ULockOnComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Components_LockOnComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
