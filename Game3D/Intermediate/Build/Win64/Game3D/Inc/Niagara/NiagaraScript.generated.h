// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraScript_generated_h
#error "NiagaraScript.generated.h already included, missing '#pragma once' in NiagaraScript.h"
#endif
#define NIAGARA_NiagaraScript_generated_h

#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_RPC_WRAPPERS
#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraScript(); \
public: \
	DECLARE_CLASS(UNiagaraScript, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraScript(); \
public: \
	DECLARE_CLASS(UNiagaraScript, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraScript(UNiagaraScript&&); \
	NIAGARA_API UNiagaraScript(const UNiagaraScript&); \
public:


#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraScript(UNiagaraScript&&); \
	NIAGARA_API UNiagaraScript(const UNiagaraScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScript)


#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_53_PROLOG
#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_INCLASS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraScript."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Classes_NiagaraScript_h


#define FOREACH_ENUM_ENIAGARASCRIPTUSAGE(op) \
	op(ENiagaraScriptUsage::Function) \
	op(ENiagaraScriptUsage::Module) \
	op(ENiagaraScriptUsage::SpawnScript) \
	op(ENiagaraScriptUsage::SpawnScriptInterpolated) \
	op(ENiagaraScriptUsage::UpdateScript) \
	op(ENiagaraScriptUsage::EffectScript) 
#define FOREACH_ENUM_EUNUSEDATTRIBUTEBEHAVIOUR(op) \
	op(EUnusedAttributeBehaviour::Copy) \
	op(EUnusedAttributeBehaviour::Zero) \
	op(EUnusedAttributeBehaviour::None) \
	op(EUnusedAttributeBehaviour::MarkInvalid) \
	op(EUnusedAttributeBehaviour::PassThrough) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS