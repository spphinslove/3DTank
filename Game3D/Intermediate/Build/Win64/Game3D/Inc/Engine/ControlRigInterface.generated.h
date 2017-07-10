// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ControlRigInterface_generated_h
#error "ControlRigInterface.generated.h already included, missing '#pragma once' in ControlRigInterface.h"
#endif
#define ENGINE_ControlRigInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigInterface(UControlRigInterface&&); \
	NO_API UControlRigInterface(const UControlRigInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigInterface(UControlRigInterface&&); \
	NO_API UControlRigInterface(const UControlRigInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
private: \
	static void StaticRegisterNativesUControlRigInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UControlRigInterface(); \
public: \
	DECLARE_CLASS(UControlRigInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UControlRigInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IControlRigInterface() {} \
public: \
	typedef UControlRigInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IControlRigInterface() {} \
public: \
	typedef UControlRigInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS