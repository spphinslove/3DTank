// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshMerging_generated_h
#error "MeshMerging.generated.h already included, missing '#pragma once' in MeshMerging.h"
#endif
#define ENGINE_MeshMerging_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_299_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_175_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_29_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h


#define FOREACH_ENUM_EMESHMERGETYPE(op) \
	op(EMeshMergeType::MeshMergeType_Default) \
	op(EMeshMergeType::MeshMergeType_MergeActor) 
#define FOREACH_ENUM_EMESHLODSELECTIONTYPE(op) \
	op(EMeshLODSelectionType::AllLODs) \
	op(EMeshLODSelectionType::SpecificLOD) \
	op(EMeshLODSelectionType::CalculateLOD) 
#define FOREACH_ENUM_ELANDSCAPECULLINGPRECISION(op) \
	op(ELandscapeCullingPrecision::High) \
	op(ELandscapeCullingPrecision::Medium) \
	op(ELandscapeCullingPrecision::Low) 
#define FOREACH_ENUM_EMESHFEATUREIMPORTANCE(op) \
	op(EMeshFeatureImportance::Off) \
	op(EMeshFeatureImportance::Lowest) \
	op(EMeshFeatureImportance::Low) \
	op(EMeshFeatureImportance::Normal) \
	op(EMeshFeatureImportance::High) \
	op(EMeshFeatureImportance::Highest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS