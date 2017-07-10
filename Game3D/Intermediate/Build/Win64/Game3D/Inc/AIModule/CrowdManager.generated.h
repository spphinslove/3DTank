// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_CrowdManager_generated_h
#error "CrowdManager.generated.h already included, missing '#pragma once' in CrowdManager.h"
#endif
#define AIMODULE_CrowdManager_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_114_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_68_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdManager(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UCrowdManager(); \
public: \
	DECLARE_CLASS(UCrowdManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUCrowdManager(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UCrowdManager(); \
public: \
	DECLARE_CLASS(UCrowdManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManager(UCrowdManager&&); \
	NO_API UCrowdManager(const UCrowdManager&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManager(UCrowdManager&&); \
	NO_API UCrowdManager(const UCrowdManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyNavData() { return STRUCT_OFFSET(UCrowdManager, MyNavData); } \
	FORCEINLINE static uint32 __PPO__AvoidanceConfig() { return STRUCT_OFFSET(UCrowdManager, AvoidanceConfig); } \
	FORCEINLINE static uint32 __PPO__SamplingPatterns() { return STRUCT_OFFSET(UCrowdManager, SamplingPatterns); } \
	FORCEINLINE static uint32 __PPO__MaxAgents() { return STRUCT_OFFSET(UCrowdManager, MaxAgents); } \
	FORCEINLINE static uint32 __PPO__MaxAgentRadius() { return STRUCT_OFFSET(UCrowdManager, MaxAgentRadius); } \
	FORCEINLINE static uint32 __PPO__MaxAvoidedAgents() { return STRUCT_OFFSET(UCrowdManager, MaxAvoidedAgents); } \
	FORCEINLINE static uint32 __PPO__MaxAvoidedWalls() { return STRUCT_OFFSET(UCrowdManager, MaxAvoidedWalls); } \
	FORCEINLINE static uint32 __PPO__NavmeshCheckInterval() { return STRUCT_OFFSET(UCrowdManager, NavmeshCheckInterval); } \
	FORCEINLINE static uint32 __PPO__PathOptimizationInterval() { return STRUCT_OFFSET(UCrowdManager, PathOptimizationInterval); } \
	FORCEINLINE static uint32 __PPO__SeparationDirClamp() { return STRUCT_OFFSET(UCrowdManager, SeparationDirClamp); }


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_166_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_169_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CrowdManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS