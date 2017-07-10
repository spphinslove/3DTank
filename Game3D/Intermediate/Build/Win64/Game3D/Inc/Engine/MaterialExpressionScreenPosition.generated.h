// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionScreenPosition_generated_h
#error "MaterialExpressionScreenPosition.generated.h already included, missing '#pragma once' in MaterialExpressionScreenPosition.h"
#endif
#define ENGINE_MaterialExpressionScreenPosition_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionScreenPosition(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition(); \
public: \
	DECLARE_CLASS(UMaterialExpressionScreenPosition, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionScreenPosition) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionScreenPosition(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition(); \
public: \
	DECLARE_CLASS(UMaterialExpressionScreenPosition, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionScreenPosition) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionScreenPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionScreenPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionScreenPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionScreenPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionScreenPosition(UMaterialExpressionScreenPosition&&); \
	NO_API UMaterialExpressionScreenPosition(const UMaterialExpressionScreenPosition&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionScreenPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionScreenPosition(UMaterialExpressionScreenPosition&&); \
	NO_API UMaterialExpressionScreenPosition(const UMaterialExpressionScreenPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionScreenPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionScreenPosition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionScreenPosition)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_22_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionScreenPosition."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h


#define FOREACH_ENUM_EMATERIALEXPRESSIONSCREENPOSITIONMAPPING(op) \
	op(MESP_SceneTextureUV) \
	op(MESP_ViewportUV) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS