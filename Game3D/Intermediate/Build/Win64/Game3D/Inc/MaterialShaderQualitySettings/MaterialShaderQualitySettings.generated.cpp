// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MaterialShaderQualitySettings.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MaterialShaderQualitySettings() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UMaterialShaderQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API class UEnum* Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality();
	MATERIALSHADERQUALITYSETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides();
	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UShaderPlatformQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API class UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
	void UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
			OuterClass = UMaterialShaderQualitySettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ForwardSettingMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ForwardSettingMap"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(ForwardSettingMap, UMaterialShaderQualitySettings), 0x0040000000000000);
				UProperty* NewProp_ForwardSettingMap_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_ForwardSettingMap, TEXT("ForwardSettingMap_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_ForwardSettingMap_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_ForwardSettingMap, TEXT("ForwardSettingMap"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UMaterialShaderQualitySettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MaterialShaderQualitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/MaterialShaderQualitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UCLASS(config = Engine, defaultconfig)"));
				MetaData->SetValue(NewProp_ForwardSettingMap, TEXT("ModuleRelativePath"), TEXT("Classes/MaterialShaderQualitySettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialShaderQualitySettings, 1647857251);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialShaderQualitySettings(Z_Construct_UClass_UMaterialShaderQualitySettings, &UMaterialShaderQualitySettings::StaticClass, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("UMaterialShaderQualitySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialShaderQualitySettings);
static UEnum* EMobileCSMQuality_StaticEnum()
{
	extern MATERIALSHADERQUALITYSETTINGS_API class UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern MATERIALSHADERQUALITYSETTINGS_API class UEnum* Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality();
		Singleton = GetStaticEnum(Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality, Z_Construct_UPackage__Script_MaterialShaderQualitySettings(), TEXT("EMobileCSMQuality"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMobileCSMQuality(EMobileCSMQuality_StaticEnum, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("EMobileCSMQuality"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
		extern uint32 Get_Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMobileCSMQuality"), 0, Get_Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMobileCSMQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMobileCSMQuality::NoFiltering"), 0);
			EnumNames.Emplace(TEXT("EMobileCSMQuality::PCF_1x1"), 1);
			EnumNames.Emplace(TEXT("EMobileCSMQuality::PCF_2x2"), 2);
			EnumNames.Emplace(TEXT("EMobileCSMQuality::EMobileCSMQuality_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EMobileCSMQuality");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NoFiltering.ToolTip"), TEXT("// Lowest quality, no filtering."));
			MetaData->SetValue(ReturnEnum, TEXT("PCF_1x1.DisplayName"), TEXT("1x1 PCF"));
			MetaData->SetValue(ReturnEnum, TEXT("PCF_1x1.ToolTip"), TEXT("Medium quality, 1x1 PCF filtering."));
			MetaData->SetValue(ReturnEnum, TEXT("PCF_2x2.DisplayName"), TEXT("2x2 PCF"));
			MetaData->SetValue(ReturnEnum, TEXT("PCF_2x2.ToolTip"), TEXT("Highest quality, 2x2 PCF filtering."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality_CRC() { return 2879522675U; }
class UScriptStruct* FMaterialQualityOverrides::StaticStruct()
{
	extern MATERIALSHADERQUALITYSETTINGS_API class UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALSHADERQUALITYSETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides();
		extern MATERIALSHADERQUALITYSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialQualityOverrides, Z_Construct_UPackage__Script_MaterialShaderQualitySettings(), TEXT("MaterialQualityOverrides"), sizeof(FMaterialQualityOverrides), Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialQualityOverrides(FMaterialQualityOverrides::StaticStruct, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("MaterialQualityOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides
{
	FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialQualityOverrides")),new UScriptStruct::TCppStructOps<FMaterialQualityOverrides>);
	}
} ScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialQualityOverrides"), sizeof(FMaterialQualityOverrides), Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MaterialQualityOverrides"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMaterialQualityOverrides>, EStructFlags(0x00000001));
			UProperty* NewProp_MobileCSMQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MobileCSMQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(MobileCSMQuality, FMaterialQualityOverrides), 0x0010000000004001, Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality());
			UProperty* NewProp_MobileCSMQuality_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_MobileCSMQuality, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceLQReflections, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bForceLQReflections = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bForceLQReflections"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceLQReflections, FMaterialQualityOverrides), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bForceLQReflections, FMaterialQualityOverrides), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceDisableLMDirectionality, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bForceDisableLMDirectionality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bForceDisableLMDirectionality"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceDisableLMDirectionality, FMaterialQualityOverrides), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bForceDisableLMDirectionality, FMaterialQualityOverrides), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceNonMetal, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bForceNonMetal = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bForceNonMetal"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceNonMetal, FMaterialQualityOverrides), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bForceNonMetal, FMaterialQualityOverrides), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceFullyRough, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bForceFullyRough = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bForceFullyRough"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceFullyRough, FMaterialQualityOverrides), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bForceFullyRough, FMaterialQualityOverrides), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableOverride, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bEnableOverride = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnableOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableOverride, FMaterialQualityOverrides), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bEnableOverride, FMaterialQualityOverrides), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("FMaterialQualityOverrides represents the full set of possible material overrides per quality level."));
			MetaData->SetValue(NewProp_MobileCSMQuality, TEXT("Category"), TEXT("Quality"));
			MetaData->SetValue(NewProp_MobileCSMQuality, TEXT("DisplayName"), TEXT("Cascade shadow mapping quality"));
			MetaData->SetValue(NewProp_MobileCSMQuality, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bForceLQReflections, TEXT("Category"), TEXT("Quality"));
			MetaData->SetValue(NewProp_bForceLQReflections, TEXT("DisplayName"), TEXT("Force low quality reflections"));
			MetaData->SetValue(NewProp_bForceLQReflections, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bForceDisableLMDirectionality, TEXT("Category"), TEXT("Quality"));
			MetaData->SetValue(NewProp_bForceDisableLMDirectionality, TEXT("DisplayName"), TEXT("Disable Lightmap directionality"));
			MetaData->SetValue(NewProp_bForceDisableLMDirectionality, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bForceNonMetal, TEXT("Category"), TEXT("Quality"));
			MetaData->SetValue(NewProp_bForceNonMetal, TEXT("DisplayName"), TEXT("Force Non-metal"));
			MetaData->SetValue(NewProp_bForceNonMetal, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bForceFullyRough, TEXT("Category"), TEXT("Quality"));
			MetaData->SetValue(NewProp_bForceFullyRough, TEXT("DisplayName"), TEXT("Force Fully Rough"));
			MetaData->SetValue(NewProp_bForceFullyRough, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bEnableOverride, TEXT("Category"), TEXT("Quality"));
			MetaData->SetValue(NewProp_bEnableOverride, TEXT("DisplayName"), TEXT("Enable Quality Override"));
			MetaData->SetValue(NewProp_bEnableOverride, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC() { return 1423849085U; }
	void UShaderPlatformQualitySettings::StaticRegisterNativesUShaderPlatformQualitySettings()
	{
	}
	UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister()
	{
		return UShaderPlatformQualitySettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UShaderPlatformQualitySettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
			OuterClass = UShaderPlatformQualitySettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100486;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_QualityOverrides = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("QualityOverrides"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(QualityOverrides, UShaderPlatformQualitySettings), 0x0010000000004001, Z_Construct_UScriptStruct_FMaterialQualityOverrides());
				NewProp_QualityOverrides->ArrayDim = CPP_ARRAY_DIM(QualityOverrides, UShaderPlatformQualitySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UShaderPlatformQualitySettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ShaderPlatformQualitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
				MetaData->SetValue(NewProp_QualityOverrides, TEXT("Category"), TEXT("Quality"));
				MetaData->SetValue(NewProp_QualityOverrides, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShaderPlatformQualitySettings, 3724433813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShaderPlatformQualitySettings(Z_Construct_UClass_UShaderPlatformQualitySettings, &UShaderPlatformQualitySettings::StaticClass, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("UShaderPlatformQualitySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShaderPlatformQualitySettings);
	UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/MaterialShaderQualitySettings")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x58AA242A;
			Guid.B = 0x348917F3;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION