// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/LockOnInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCKON_LockOnInterface_generated_h
#error "LockOnInterface.generated.h already included, missing '#pragma once' in LockOnInterface.h"
#endif
#define LOCKON_LockOnInterface_generated_h

#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_SPARSE_DATA
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetLockOnWidgetVisibility_Implementation(bool bVisibility) {}; \
 \
	DECLARE_FUNCTION(execSetLockOnWidgetVisibility);


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_ACCESSORS
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOCKON_API ULockOnInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOCKON_API ULockOnInterface(ULockOnInterface&&); \
	LOCKON_API ULockOnInterface(const ULockOnInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOCKON_API, ULockOnInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockOnInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULockOnInterface) \
	LOCKON_API virtual ~ULockOnInterface();


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULockOnInterface(); \
	friend struct Z_Construct_UClass_ULockOnInterface_Statics; \
public: \
	DECLARE_CLASS(ULockOnInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LockOn"), LOCKON_API) \
	DECLARE_SERIALIZER(ULockOnInterface)


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILockOnInterface() {} \
public: \
	typedef ULockOnInterface UClassType; \
	typedef ILockOnInterface ThisClass; \
	static void Execute_SetLockOnWidgetVisibility(UObject* O, bool bVisibility); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_10_PROLOG
#define FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_SPARSE_DATA \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_ACCESSORS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKON_API UClass* StaticClass<class ULockOnInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LockOnPlugin_LockOn_HostProject_Plugins_LockOn_Source_LockOn_Public_Interfaces_LockOnInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
