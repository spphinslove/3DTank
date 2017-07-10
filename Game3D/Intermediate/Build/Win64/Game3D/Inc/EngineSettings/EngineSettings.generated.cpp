// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EngineSettings.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1EngineSettings() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FStringClassReference();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();

	ENGINESETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UConsoleSettings_NoRegister();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UConsoleSettings();
	ENGINESETTINGS_API class UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType();
	ENGINESETTINGS_API class UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType();
	ENGINESETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FGameModeName();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGameMapsSettings();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGameNetworkManagerSettings();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGameSessionSettings();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGeneralEngineSettings();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UGeneralProjectSettings();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UHudSettings_NoRegister();
	ENGINESETTINGS_API class UClass* Z_Construct_UClass_UHudSettings();
	ENGINESETTINGS_API class UPackage* Z_Construct_UPackage__Script_EngineSettings();
class UScriptStruct* FAutoCompleteCommand::StaticStruct()
{
	extern ENGINESETTINGS_API class UPackage* Z_Construct_UPackage__Script_EngineSettings();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand();
		extern ENGINESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteCommand, Z_Construct_UPackage__Script_EngineSettings(), TEXT("AutoCompleteCommand"), sizeof(FAutoCompleteCommand), Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoCompleteCommand(FAutoCompleteCommand::StaticStruct, TEXT("/Script/EngineSettings"), TEXT("AutoCompleteCommand"), false, nullptr, nullptr);
static struct FScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand
{
	FScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoCompleteCommand")),new UScriptStruct::TCppStructOps<FAutoCompleteCommand>);
	}
} ScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand;
	UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoCompleteCommand"), sizeof(FAutoCompleteCommand), Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutoCompleteCommand"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutoCompleteCommand>, EStructFlags(0x00000001));
			UProperty* NewProp_Desc = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Desc"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Desc, FAutoCompleteCommand), 0x0010000000004001);
			UProperty* NewProp_Command = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Command"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Command, FAutoCompleteCommand), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for auto-complete commands and their descriptions."));
			MetaData->SetValue(NewProp_Desc, TEXT("Category"), TEXT("Command"));
			MetaData->SetValue(NewProp_Desc, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
			MetaData->SetValue(NewProp_Command, TEXT("Category"), TEXT("Command"));
			MetaData->SetValue(NewProp_Command, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC() { return 3864425130U; }
	void UConsoleSettings::StaticRegisterNativesUConsoleSettings()
	{
	}
	UClass* Z_Construct_UClass_UConsoleSettings_NoRegister()
	{
		return UConsoleSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UConsoleSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EngineSettings();
			OuterClass = UConsoleSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AutoCompleteFadedColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutoCompleteFadedColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AutoCompleteFadedColor, UConsoleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_AutoCompleteCVarColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutoCompleteCVarColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AutoCompleteCVarColor, UConsoleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_AutoCompleteCommandColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutoCompleteCommandColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AutoCompleteCommandColor, UConsoleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_HistoryColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HistoryColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HistoryColor, UConsoleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_InputColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InputColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InputColor, UConsoleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FColor());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOrderTopToBottom, UConsoleSettings, bool);
				UProperty* NewProp_bOrderTopToBottom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOrderTopToBottom"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOrderTopToBottom, UConsoleSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bOrderTopToBottom, UConsoleSettings), sizeof(bool), true);
				UProperty* NewProp_BackgroundOpacityPercentage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BackgroundOpacityPercentage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BackgroundOpacityPercentage, UConsoleSettings), 0x0010000000004001);
				UProperty* NewProp_AutoCompleteMapPaths = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutoCompleteMapPaths"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AutoCompleteMapPaths, UConsoleSettings), 0x0010000000004001);
				UProperty* NewProp_AutoCompleteMapPaths_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AutoCompleteMapPaths, TEXT("AutoCompleteMapPaths"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
				UProperty* NewProp_ManualAutoCompleteList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ManualAutoCompleteList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ManualAutoCompleteList, UConsoleSettings), 0x0010000000004001);
				UProperty* NewProp_ManualAutoCompleteList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ManualAutoCompleteList, TEXT("ManualAutoCompleteList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FAutoCompleteCommand());
				UProperty* NewProp_MaxScrollbackSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxScrollbackSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxScrollbackSize, UConsoleSettings), 0x0010000000044001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Input"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UConsoleSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ConsoleSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the settings for the UConsole class."));
				MetaData->SetValue(NewProp_AutoCompleteFadedColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_AutoCompleteFadedColor, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_AutoCompleteFadedColor, TEXT("ToolTip"), TEXT("The autocomplete color used for command descriptions and read-only CVars."));
				MetaData->SetValue(NewProp_AutoCompleteCVarColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_AutoCompleteCVarColor, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_AutoCompleteCVarColor, TEXT("ToolTip"), TEXT("The autocomplete color used for mutable CVars."));
				MetaData->SetValue(NewProp_AutoCompleteCommandColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_AutoCompleteCommandColor, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_AutoCompleteCommandColor, TEXT("ToolTip"), TEXT("The autocomplete color used for executable commands."));
				MetaData->SetValue(NewProp_HistoryColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_HistoryColor, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_HistoryColor, TEXT("ToolTip"), TEXT("The color used for the previously typed commands history."));
				MetaData->SetValue(NewProp_InputColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_InputColor, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_InputColor, TEXT("ToolTip"), TEXT("The color used for text input."));
				MetaData->SetValue(NewProp_bOrderTopToBottom, TEXT("Category"), TEXT("AutoComplete"));
				MetaData->SetValue(NewProp_bOrderTopToBottom, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_bOrderTopToBottom, TEXT("ToolTip"), TEXT("Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering"));
				MetaData->SetValue(NewProp_BackgroundOpacityPercentage, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_BackgroundOpacityPercentage, TEXT("ClampMax"), TEXT("100"));
				MetaData->SetValue(NewProp_BackgroundOpacityPercentage, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_BackgroundOpacityPercentage, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_BackgroundOpacityPercentage, TEXT("ToolTip"), TEXT("Amount of transparency of the console background."));
				MetaData->SetValue(NewProp_BackgroundOpacityPercentage, TEXT("UIMax"), TEXT("100"));
				MetaData->SetValue(NewProp_BackgroundOpacityPercentage, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_AutoCompleteMapPaths, TEXT("Category"), TEXT("AutoComplete"));
				MetaData->SetValue(NewProp_AutoCompleteMapPaths, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_AutoCompleteMapPaths, TEXT("ToolTip"), TEXT("List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini."));
				MetaData->SetValue(NewProp_ManualAutoCompleteList, TEXT("Category"), TEXT("AutoComplete"));
				MetaData->SetValue(NewProp_ManualAutoCompleteList, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_ManualAutoCompleteList, TEXT("ToolTip"), TEXT("Manual list of auto-complete commands and info specified in BaseInput.ini"));
				MetaData->SetValue(NewProp_MaxScrollbackSize, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_MaxScrollbackSize, TEXT("ModuleRelativePath"), TEXT("Classes/ConsoleSettings.h"));
				MetaData->SetValue(NewProp_MaxScrollbackSize, TEXT("ToolTip"), TEXT("Visible Console stuff"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleSettings, 610593824);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleSettings(Z_Construct_UClass_UConsoleSettings, &UConsoleSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UConsoleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleSettings);
static UEnum* EThreePlayerSplitScreenType_StaticEnum()
{
	extern ENGINESETTINGS_API class UPackage* Z_Construct_UPackage__Script_EngineSettings();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API class UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType, Z_Construct_UPackage__Script_EngineSettings(), TEXT("EThreePlayerSplitScreenType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThreePlayerSplitScreenType(EThreePlayerSplitScreenType_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("EThreePlayerSplitScreenType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_EngineSettings();
		extern uint32 Get_Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThreePlayerSplitScreenType"), 0, Get_Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EThreePlayerSplitScreenType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EThreePlayerSplitScreenType::FavorTop"), 0);
			EnumNames.Emplace(TEXT("EThreePlayerSplitScreenType::FavorBottom"), 1);
			EnumNames.Emplace(TEXT("EThreePlayerSplitScreenType::EThreePlayerSplitScreenType_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EThreePlayerSplitScreenType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Ways the screen can be split with three players."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_CRC() { return 412197483U; }
static UEnum* ETwoPlayerSplitScreenType_StaticEnum()
{
	extern ENGINESETTINGS_API class UPackage* Z_Construct_UPackage__Script_EngineSettings();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API class UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType, Z_Construct_UPackage__Script_EngineSettings(), TEXT("ETwoPlayerSplitScreenType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwoPlayerSplitScreenType(ETwoPlayerSplitScreenType_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("ETwoPlayerSplitScreenType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_EngineSettings();
		extern uint32 Get_Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwoPlayerSplitScreenType"), 0, Get_Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETwoPlayerSplitScreenType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETwoPlayerSplitScreenType::Horizontal"), 0);
			EnumNames.Emplace(TEXT("ETwoPlayerSplitScreenType::Vertical"), 1);
			EnumNames.Emplace(TEXT("ETwoPlayerSplitScreenType::ETwoPlayerSplitScreenType_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ETwoPlayerSplitScreenType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Ways the screen can be split with two players."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_CRC() { return 308196247U; }
class UScriptStruct* FGameModeName::StaticStruct()
{
	extern ENGINESETTINGS_API class UPackage* Z_Construct_UPackage__Script_EngineSettings();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FGameModeName();
		extern ENGINESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FGameModeName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameModeName, Z_Construct_UPackage__Script_EngineSettings(), TEXT("GameModeName"), sizeof(FGameModeName), Get_Z_Construct_UScriptStruct_FGameModeName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameModeName(FGameModeName::StaticStruct, TEXT("/Script/EngineSettings"), TEXT("GameModeName"), false, nullptr, nullptr);
static struct FScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName
{
	FScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameModeName")),new UScriptStruct::TCppStructOps<FGameModeName>);
	}
} ScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName;
	UScriptStruct* Z_Construct_UScriptStruct_FGameModeName()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameModeName_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameModeName"), sizeof(FGameModeName), Get_Z_Construct_UScriptStruct_FGameModeName_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameModeName"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGameModeName>, EStructFlags(0x00000001));
			UProperty* NewProp_GameMode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GameMode"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GameMode, FGameModeName), 0x0010000000000001, Z_Construct_UScriptStruct_FStringClassReference());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FGameModeName), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Helper structure, used to associate GameModes with shortcut names."));
			MetaData->SetValue(NewProp_GameMode, TEXT("Category"), TEXT("DefaultModes"));
			MetaData->SetValue(NewProp_GameMode, TEXT("MetaClass"), TEXT("GameModeBase"));
			MetaData->SetValue(NewProp_GameMode, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
			MetaData->SetValue(NewProp_GameMode, TEXT("ToolTip"), TEXT("GameMode class to load"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("DefaultModes"));
			MetaData->SetValue(NewProp_Name, TEXT("MetaClass"), TEXT("GameModeBase"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("Abbreviation/prefix that can be used as an alias for the class name"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameModeName_CRC() { return 617559170U; }
	void UGameMapsSettings::StaticRegisterNativesUGameMapsSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister()
	{
		return UGameMapsSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameMapsSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EngineSettings();
			OuterClass = UGameMapsSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_GameModeClassAliases = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameModeClassAliases"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(GameModeClassAliases, UGameMapsSettings), 0x0040040000004001);
				UProperty* NewProp_GameModeClassAliases_Inner = new(EC_InternalUseOnlyConstructor, NewProp_GameModeClassAliases, TEXT("GameModeClassAliases"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGameModeName());
				UProperty* NewProp_GameModeMapPrefixes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameModeMapPrefixes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(GameModeMapPrefixes, UGameMapsSettings), 0x0040040000004001);
				UProperty* NewProp_GameModeMapPrefixes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_GameModeMapPrefixes, TEXT("GameModeMapPrefixes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGameModeName());
				UProperty* NewProp_GlobalDefaultServerGameMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GlobalDefaultServerGameMode"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GlobalDefaultServerGameMode, UGameMapsSettings), 0x0040040000004001, Z_Construct_UScriptStruct_FStringClassReference());
				UProperty* NewProp_GlobalDefaultGameMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GlobalDefaultGameMode"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GlobalDefaultGameMode, UGameMapsSettings), 0x0040000002004001, Z_Construct_UScriptStruct_FStringClassReference());
				UProperty* NewProp_ServerDefaultMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ServerDefaultMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ServerDefaultMap, UGameMapsSettings), 0x0040040000004001, Z_Construct_UScriptStruct_FStringAssetReference());
				UProperty* NewProp_GameDefaultMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameDefaultMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GameDefaultMap, UGameMapsSettings), 0x0040000000004001, Z_Construct_UScriptStruct_FStringAssetReference());
				UProperty* NewProp_GameInstanceClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameInstanceClass"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GameInstanceClass, UGameMapsSettings), 0x0010000002004001, Z_Construct_UScriptStruct_FStringClassReference());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOffsetPlayerGamepadIds, UGameMapsSettings, bool);
				UProperty* NewProp_bOffsetPlayerGamepadIds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOffsetPlayerGamepadIds"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOffsetPlayerGamepadIds, UGameMapsSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bOffsetPlayerGamepadIds, UGameMapsSettings), sizeof(bool), true);
				UProperty* NewProp_ThreePlayerSplitscreenLayout = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThreePlayerSplitscreenLayout"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ThreePlayerSplitscreenLayout, UGameMapsSettings), 0x0010000000004001, Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType());
				UProperty* NewProp_TwoPlayerSplitscreenLayout = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TwoPlayerSplitscreenLayout"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(TwoPlayerSplitscreenLayout, UGameMapsSettings), 0x0010000000004001, Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseSplitscreen, UGameMapsSettings, bool);
				UProperty* NewProp_bUseSplitscreen = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseSplitscreen"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseSplitscreen, UGameMapsSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bUseSplitscreen, UGameMapsSettings), sizeof(bool), true);
				UProperty* NewProp_TransitionMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TransitionMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TransitionMap, UGameMapsSettings), 0x0010040000004001, Z_Construct_UScriptStruct_FStringAssetReference());
				UProperty* NewProp_LocalMapOptions = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LocalMapOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LocalMapOptions, UGameMapsSettings), 0x0010040000004001);
				UProperty* NewProp_EditorStartupMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditorStartupMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EditorStartupMap, UGameMapsSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FStringAssetReference());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGameMapsSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameMapsSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_GameModeClassAliases, TEXT("Category"), TEXT("DefaultModes"));
				MetaData->SetValue(NewProp_GameModeClassAliases, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_GameModeClassAliases, TEXT("ToolTip"), TEXT("List of GameModes to load when game= is specified in the URL (e.g. \"DM\" could be an alias for \"MyProject.MyGameModeMP_DM\")"));
				MetaData->SetValue(NewProp_GameModeMapPrefixes, TEXT("Category"), TEXT("DefaultModes"));
				MetaData->SetValue(NewProp_GameModeMapPrefixes, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_GameModeMapPrefixes, TEXT("ToolTip"), TEXT("Overrides the GameMode to use when loading a map that starts with a specific prefix"));
				MetaData->SetValue(NewProp_GlobalDefaultServerGameMode, TEXT("Category"), TEXT("DefaultModes"));
				MetaData->SetValue(NewProp_GlobalDefaultServerGameMode, TEXT("MetaClass"), TEXT("GameModeBase"));
				MetaData->SetValue(NewProp_GlobalDefaultServerGameMode, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_GlobalDefaultServerGameMode, TEXT("ToolTip"), TEXT("GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL) (DEDICATED SERVERS)\nIf not set, the GlobalDefaultGameMode value will be used."));
				MetaData->SetValue(NewProp_GlobalDefaultGameMode, TEXT("Category"), TEXT("DefaultModes"));
				MetaData->SetValue(NewProp_GlobalDefaultGameMode, TEXT("DisplayName"), TEXT("Default GameMode"));
				MetaData->SetValue(NewProp_GlobalDefaultGameMode, TEXT("MetaClass"), TEXT("GameModeBase"));
				MetaData->SetValue(NewProp_GlobalDefaultGameMode, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_GlobalDefaultGameMode, TEXT("ToolTip"), TEXT("GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL)."));
				MetaData->SetValue(NewProp_ServerDefaultMap, TEXT("AllowedClasses"), TEXT("World"));
				MetaData->SetValue(NewProp_ServerDefaultMap, TEXT("Category"), TEXT("DefaultMaps"));
				MetaData->SetValue(NewProp_ServerDefaultMap, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_ServerDefaultMap, TEXT("ToolTip"), TEXT("The map that will be loaded by default when no other map is loaded (DEDICATED SERVER)."));
				MetaData->SetValue(NewProp_GameDefaultMap, TEXT("AllowedClasses"), TEXT("World"));
				MetaData->SetValue(NewProp_GameDefaultMap, TEXT("Category"), TEXT("DefaultMaps"));
				MetaData->SetValue(NewProp_GameDefaultMap, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_GameDefaultMap, TEXT("ToolTip"), TEXT("The map that will be loaded by default when no other map is loaded."));
				MetaData->SetValue(NewProp_GameInstanceClass, TEXT("Category"), TEXT("GameInstance"));
				MetaData->SetValue(NewProp_GameInstanceClass, TEXT("MetaClass"), TEXT("GameInstance"));
				MetaData->SetValue(NewProp_GameInstanceClass, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_GameInstanceClass, TEXT("ToolTip"), TEXT("The class to use when instantiating the transient GameInstance class"));
				MetaData->SetValue(NewProp_bOffsetPlayerGamepadIds, TEXT("Category"), TEXT("LocalMultiplayer"));
				MetaData->SetValue(NewProp_bOffsetPlayerGamepadIds, TEXT("DisplayName"), TEXT("Skip Assigning Gamepad to Player 1"));
				MetaData->SetValue(NewProp_bOffsetPlayerGamepadIds, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_bOffsetPlayerGamepadIds, TEXT("ToolTip"), TEXT("If enabled, this will make so that gamepads start being assigned to the second controller ID in local multiplayer games.\nIn PIE sessions with multiple windows, this has the same effect as enabling \"Route 1st Gamepad to 2nd Client\""));
				MetaData->SetValue(NewProp_ThreePlayerSplitscreenLayout, TEXT("Category"), TEXT("LocalMultiplayer"));
				MetaData->SetValue(NewProp_ThreePlayerSplitscreenLayout, TEXT("editcondition"), TEXT("bUseSplitScreen"));
				MetaData->SetValue(NewProp_ThreePlayerSplitscreenLayout, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_ThreePlayerSplitscreenLayout, TEXT("ToolTip"), TEXT("The viewport layout to use if the screen should be split and there are three local players"));
				MetaData->SetValue(NewProp_TwoPlayerSplitscreenLayout, TEXT("Category"), TEXT("LocalMultiplayer"));
				MetaData->SetValue(NewProp_TwoPlayerSplitscreenLayout, TEXT("editcondition"), TEXT("bUseSplitScreen"));
				MetaData->SetValue(NewProp_TwoPlayerSplitscreenLayout, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_TwoPlayerSplitscreenLayout, TEXT("ToolTip"), TEXT("The viewport layout to use if the screen should be split and there are two local players"));
				MetaData->SetValue(NewProp_bUseSplitscreen, TEXT("Category"), TEXT("LocalMultiplayer"));
				MetaData->SetValue(NewProp_bUseSplitscreen, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_bUseSplitscreen, TEXT("ToolTip"), TEXT("Whether the screen should be split or not when multiple local players are present"));
				MetaData->SetValue(NewProp_TransitionMap, TEXT("AllowedClasses"), TEXT("World"));
				MetaData->SetValue(NewProp_TransitionMap, TEXT("Category"), TEXT("DefaultMaps"));
				MetaData->SetValue(NewProp_TransitionMap, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_TransitionMap, TEXT("ToolTip"), TEXT("The map loaded when transition from one map to another."));
				MetaData->SetValue(NewProp_LocalMapOptions, TEXT("Category"), TEXT("DefaultMaps"));
				MetaData->SetValue(NewProp_LocalMapOptions, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_LocalMapOptions, TEXT("ToolTip"), TEXT("The default options that will be appended to a map being loaded."));
				MetaData->SetValue(NewProp_EditorStartupMap, TEXT("AllowedClasses"), TEXT("World"));
				MetaData->SetValue(NewProp_EditorStartupMap, TEXT("Category"), TEXT("DefaultMaps"));
				MetaData->SetValue(NewProp_EditorStartupMap, TEXT("ModuleRelativePath"), TEXT("Classes/GameMapsSettings.h"));
				MetaData->SetValue(NewProp_EditorStartupMap, TEXT("ToolTip"), TEXT("If set, this map will be loaded when the Editor starts up."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameMapsSettings, 364042012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameMapsSettings(Z_Construct_UClass_UGameMapsSettings, &UGameMapsSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameMapsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMapsSettings);
	void UGameNetworkManagerSettings::StaticRegisterNativesUGameNetworkManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister()
	{
		return UGameNetworkManagerSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EngineSettings();
			OuterClass = UGameNetworkManagerSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_JoinInProgressStandbyWaitTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JoinInProgressStandbyWaitTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JoinInProgressStandbyWaitTime, UGameNetworkManagerSettings), 0x0010000000004001);
				UProperty* NewProp_PercentForBadPing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PercentForBadPing"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PercentForBadPing, UGameNetworkManagerSettings), 0x0010000000004001);
				UProperty* NewProp_PercentMissingForTxStandby = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PercentMissingForTxStandby"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PercentMissingForTxStandby, UGameNetworkManagerSettings), 0x0010000000004001);
				UProperty* NewProp_PercentMissingForRxStandby = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PercentMissingForRxStandby"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PercentMissingForRxStandby, UGameNetworkManagerSettings), 0x0010000000004001);
				UProperty* NewProp_StandbyTxCheatTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StandbyTxCheatTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StandbyTxCheatTime, UGameNetworkManagerSettings), 0x0010000000004001);
				UProperty* NewProp_StandbyRxCheatTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StandbyRxCheatTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StandbyRxCheatTime, UGameNetworkManagerSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsStandbyCheckingEnabled, UGameNetworkManagerSettings, uint8);
				UProperty* NewProp_bIsStandbyCheckingEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsStandbyCheckingEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsStandbyCheckingEnabled, UGameNetworkManagerSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bIsStandbyCheckingEnabled, UGameNetworkManagerSettings), sizeof(uint8), false);
				UProperty* NewProp_BadPingThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BadPingThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BadPingThreshold, UGameNetworkManagerSettings), 0x0010000000004001);
				UProperty* NewProp_TotalNetBandwidth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TotalNetBandwidth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TotalNetBandwidth, UGameNetworkManagerSettings), 0x0010000000044001);
				UProperty* NewProp_MaxDynamicBandwidth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDynamicBandwidth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxDynamicBandwidth, UGameNetworkManagerSettings), 0x0010000000044001);
				UProperty* NewProp_MinDynamicBandwidth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinDynamicBandwidth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MinDynamicBandwidth, UGameNetworkManagerSettings), 0x0010000000044001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGameNetworkManagerSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameNetworkManagerSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Holds the settings for the AGameNetworkManager class."));
				MetaData->SetValue(NewProp_JoinInProgressStandbyWaitTime, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_JoinInProgressStandbyWaitTime, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_JoinInProgressStandbyWaitTime, TEXT("ToolTip"), TEXT("The amount of time to wait before checking a connection for standby issues."));
				MetaData->SetValue(NewProp_PercentForBadPing, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_PercentForBadPing, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_PercentForBadPing, TEXT("ToolTip"), TEXT("The percentage of clients with bad ping before triggering the standby code."));
				MetaData->SetValue(NewProp_PercentMissingForTxStandby, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_PercentMissingForTxStandby, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_PercentMissingForTxStandby, TEXT("ToolTip"), TEXT("The percentage of clients missing TX data before triggering the standby code."));
				MetaData->SetValue(NewProp_PercentMissingForRxStandby, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_PercentMissingForRxStandby, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_PercentMissingForRxStandby, TEXT("ToolTip"), TEXT("The percentage of clients missing RX data before triggering the standby code."));
				MetaData->SetValue(NewProp_StandbyTxCheatTime, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_StandbyTxCheatTime, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_StandbyTxCheatTime, TEXT("ToolTip"), TEXT("The amount of time without packets before triggering the cheat code."));
				MetaData->SetValue(NewProp_StandbyRxCheatTime, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_StandbyRxCheatTime, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_StandbyRxCheatTime, TEXT("ToolTip"), TEXT("The amount of time without packets before triggering the cheat code."));
				MetaData->SetValue(NewProp_bIsStandbyCheckingEnabled, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_bIsStandbyCheckingEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_bIsStandbyCheckingEnabled, TEXT("ToolTip"), TEXT("Used to determine if checking for standby cheats should occur."));
				MetaData->SetValue(NewProp_BadPingThreshold, TEXT("Category"), TEXT("StandbyCheats"));
				MetaData->SetValue(NewProp_BadPingThreshold, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_BadPingThreshold, TEXT("ToolTip"), TEXT("The point we determine the server is either delaying packets or has bad upstream."));
				MetaData->SetValue(NewProp_TotalNetBandwidth, TEXT("Category"), TEXT("Bandwidth"));
				MetaData->SetValue(NewProp_TotalNetBandwidth, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_TotalNetBandwidth, TEXT("ToolTip"), TEXT("Total available bandwidth for listen server, split dynamically across net connections."));
				MetaData->SetValue(NewProp_MaxDynamicBandwidth, TEXT("Category"), TEXT("Bandwidth"));
				MetaData->SetValue(NewProp_MaxDynamicBandwidth, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_MaxDynamicBandwidth, TEXT("ToolTip"), TEXT("Maximum bandwidth dynamically set per connection."));
				MetaData->SetValue(NewProp_MinDynamicBandwidth, TEXT("Category"), TEXT("Bandwidth"));
				MetaData->SetValue(NewProp_MinDynamicBandwidth, TEXT("ModuleRelativePath"), TEXT("Classes/GameNetworkManagerSettings.h"));
				MetaData->SetValue(NewProp_MinDynamicBandwidth, TEXT("ToolTip"), TEXT("Minimum bandwidth dynamically set per connection."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameNetworkManagerSettings, 2623380886);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameNetworkManagerSettings(Z_Construct_UClass_UGameNetworkManagerSettings, &UGameNetworkManagerSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameNetworkManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameNetworkManagerSettings);
	void UGameSessionSettings::StaticRegisterNativesUGameSessionSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister()
	{
		return UGameSessionSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameSessionSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EngineSettings();
			OuterClass = UGameSessionSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRequiresPushToTalk, UGameSessionSettings, uint8);
				UProperty* NewProp_bRequiresPushToTalk = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRequiresPushToTalk"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRequiresPushToTalk, UGameSessionSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bRequiresPushToTalk, UGameSessionSettings), sizeof(uint8), false);
				UProperty* NewProp_MaxPlayers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxPlayers"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxPlayers, UGameSessionSettings), 0x0010000000044001);
				UProperty* NewProp_MaxSpectators = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxSpectators"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxSpectators, UGameSessionSettings), 0x0010000000044001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGameSessionSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameSessionSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GameSessionSettings.h"));
				MetaData->SetValue(NewProp_bRequiresPushToTalk, TEXT("Category"), TEXT("GameSessionSettings"));
				MetaData->SetValue(NewProp_bRequiresPushToTalk, TEXT("ModuleRelativePath"), TEXT("Classes/GameSessionSettings.h"));
				MetaData->SetValue(NewProp_bRequiresPushToTalk, TEXT("ToolTip"), TEXT("Is voice enabled always or via a push to talk key binding."));
				MetaData->SetValue(NewProp_MaxPlayers, TEXT("Category"), TEXT("GameSessionSettings"));
				MetaData->SetValue(NewProp_MaxPlayers, TEXT("ModuleRelativePath"), TEXT("Classes/GameSessionSettings.h"));
				MetaData->SetValue(NewProp_MaxPlayers, TEXT("ToolTip"), TEXT("Maximum number of players allowed by this server."));
				MetaData->SetValue(NewProp_MaxSpectators, TEXT("Category"), TEXT("GameSessionSettings"));
				MetaData->SetValue(NewProp_MaxSpectators, TEXT("ModuleRelativePath"), TEXT("Classes/GameSessionSettings.h"));
				MetaData->SetValue(NewProp_MaxSpectators, TEXT("ToolTip"), TEXT("Maximum number of spectators allowed by this server."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSessionSettings, 2169453808);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSessionSettings(Z_Construct_UClass_UGameSessionSettings, &UGameSessionSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameSessionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSessionSettings);
	void UGeneralEngineSettings::StaticRegisterNativesUGeneralEngineSettings()
	{
	}
	UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister()
	{
		return UGeneralEngineSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeneralEngineSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EngineSettings();
			OuterClass = UGeneralEngineSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeneralEngineSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeneralEngineSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralEngineSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneralEngineSettings, 559213351);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneralEngineSettings(Z_Construct_UClass_UGeneralEngineSettings, &UGeneralEngineSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGeneralEngineSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralEngineSettings);
	void UGeneralProjectSettings::StaticRegisterNativesUGeneralProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_UGeneralProjectSettings_NoRegister()
	{
		return UGeneralProjectSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeneralProjectSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EngineSettings();
			OuterClass = UGeneralProjectSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowMinimize, UGeneralProjectSettings, bool);
				UProperty* NewProp_bAllowMinimize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowMinimize"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowMinimize, UGeneralProjectSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bAllowMinimize, UGeneralProjectSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowMaximize, UGeneralProjectSettings, bool);
				UProperty* NewProp_bAllowMaximize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowMaximize"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowMaximize, UGeneralProjectSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bAllowMaximize, UGeneralProjectSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowClose, UGeneralProjectSettings, bool);
				UProperty* NewProp_bAllowClose = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowClose"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowClose, UGeneralProjectSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bAllowClose, UGeneralProjectSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowWindowResize, UGeneralProjectSettings, bool);
				UProperty* NewProp_bAllowWindowResize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowWindowResize"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowWindowResize, UGeneralProjectSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bAllowWindowResize, UGeneralProjectSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStartInVR, UGeneralProjectSettings, bool);
				UProperty* NewProp_bStartInVR = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bStartInVR"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStartInVR, UGeneralProjectSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bStartInVR, UGeneralProjectSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseBorderlessWindow, UGeneralProjectSettings, bool);
				UProperty* NewProp_bUseBorderlessWindow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseBorderlessWindow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseBorderlessWindow, UGeneralProjectSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bUseBorderlessWindow, UGeneralProjectSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShouldWindowPreserveAspectRatio, UGeneralProjectSettings, bool);
				UProperty* NewProp_bShouldWindowPreserveAspectRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShouldWindowPreserveAspectRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShouldWindowPreserveAspectRatio, UGeneralProjectSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bShouldWindowPreserveAspectRatio, UGeneralProjectSettings), sizeof(bool), true);
				UProperty* NewProp_ProjectDebugTitleInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectDebugTitleInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ProjectDebugTitleInfo, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_ProjectDisplayedTitle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectDisplayedTitle"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ProjectDisplayedTitle, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_SupportContact = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SupportContact"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SupportContact, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_ProjectVersion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectVersion"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ProjectVersion, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_ProjectName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ProjectName, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_ProjectID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ProjectID, UGeneralProjectSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FGuid());
				UProperty* NewProp_PrivacyPolicy = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrivacyPolicy"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PrivacyPolicy, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_LicensingTerms = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LicensingTerms"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LicensingTerms, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_Homepage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Homepage"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Homepage, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_Description = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Description"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Description, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_CopyrightNotice = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CopyrightNotice"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CopyrightNotice, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_CompanyDistinguishedName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CompanyDistinguishedName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CompanyDistinguishedName, UGeneralProjectSettings), 0x0010000000004001);
				UProperty* NewProp_CompanyName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CompanyName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CompanyName, UGeneralProjectSettings), 0x0010000000004001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeneralProjectSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeneralProjectSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bAllowMinimize, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bAllowMinimize, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bAllowMaximize, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bAllowMaximize, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bAllowClose, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bAllowClose, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bAllowWindowResize, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bAllowWindowResize, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bStartInVR, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bStartInVR, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bStartInVR, TEXT("ToolTip"), TEXT("Should the game attempt to start in VR, regardless of whether -vr was set on the commandline"));
				MetaData->SetValue(NewProp_bUseBorderlessWindow, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bUseBorderlessWindow, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bUseBorderlessWindow, TEXT("ToolTip"), TEXT("Should the game use a borderless Slate window instead of a window with system title bar and border"));
				MetaData->SetValue(NewProp_bShouldWindowPreserveAspectRatio, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bShouldWindowPreserveAspectRatio, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_bShouldWindowPreserveAspectRatio, TEXT("ToolTip"), TEXT("Should the game's window preserve its aspect ratio when resized by user."));
				MetaData->SetValue(NewProp_ProjectDebugTitleInfo, TEXT("Category"), TEXT("Displayed"));
				MetaData->SetValue(NewProp_ProjectDebugTitleInfo, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_ProjectDebugTitleInfo, TEXT("ToolTip"), TEXT("Additional data to be displayed on the window title bar in non-shipping configurations (can include the tokens {GameName}, {PlatformArchitecture}, or {RHIName}, which will be replaced with the specified text)"));
				MetaData->SetValue(NewProp_ProjectDisplayedTitle, TEXT("Category"), TEXT("Displayed"));
				MetaData->SetValue(NewProp_ProjectDisplayedTitle, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_ProjectDisplayedTitle, TEXT("ToolTip"), TEXT("The project's title as displayed on the window title bar (can include the tokens {GameName}, {PlatformArchitecture}, or {RHIName}, which will be replaced with the specified text)"));
				MetaData->SetValue(NewProp_SupportContact, TEXT("Category"), TEXT("Publisher"));
				MetaData->SetValue(NewProp_SupportContact, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_SupportContact, TEXT("ToolTip"), TEXT("The project's support contact information."));
				MetaData->SetValue(NewProp_ProjectVersion, TEXT("Category"), TEXT("About"));
				MetaData->SetValue(NewProp_ProjectVersion, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_ProjectVersion, TEXT("ToolTip"), TEXT("The project's version number."));
				MetaData->SetValue(NewProp_ProjectName, TEXT("Category"), TEXT("About"));
				MetaData->SetValue(NewProp_ProjectName, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_ProjectName, TEXT("ToolTip"), TEXT("The project's name."));
				MetaData->SetValue(NewProp_ProjectID, TEXT("Category"), TEXT("About"));
				MetaData->SetValue(NewProp_ProjectID, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_ProjectID, TEXT("ToolTip"), TEXT("The project's unique identifier."));
				MetaData->SetValue(NewProp_PrivacyPolicy, TEXT("Category"), TEXT("Legal"));
				MetaData->SetValue(NewProp_PrivacyPolicy, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_PrivacyPolicy, TEXT("ToolTip"), TEXT("The project's privacy policy."));
				MetaData->SetValue(NewProp_LicensingTerms, TEXT("Category"), TEXT("Legal"));
				MetaData->SetValue(NewProp_LicensingTerms, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_LicensingTerms, TEXT("ToolTip"), TEXT("The project's licensing terms."));
				MetaData->SetValue(NewProp_Homepage, TEXT("Category"), TEXT("Publisher"));
				MetaData->SetValue(NewProp_Homepage, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_Homepage, TEXT("ToolTip"), TEXT("The project's homepage URL."));
				MetaData->SetValue(NewProp_Description, TEXT("Category"), TEXT("About"));
				MetaData->SetValue(NewProp_Description, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_Description, TEXT("ToolTip"), TEXT("The project's description text."));
				MetaData->SetValue(NewProp_CopyrightNotice, TEXT("Category"), TEXT("Legal"));
				MetaData->SetValue(NewProp_CopyrightNotice, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_CopyrightNotice, TEXT("ToolTip"), TEXT("The project's copyright and/or trademark notices."));
				MetaData->SetValue(NewProp_CompanyDistinguishedName, TEXT("Category"), TEXT("Publisher"));
				MetaData->SetValue(NewProp_CompanyDistinguishedName, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_CompanyDistinguishedName, TEXT("ToolTip"), TEXT("The distinguished name of the company (author, provider) that created the project."));
				MetaData->SetValue(NewProp_CompanyName, TEXT("Category"), TEXT("Publisher"));
				MetaData->SetValue(NewProp_CompanyName, TEXT("ModuleRelativePath"), TEXT("Classes/GeneralProjectSettings.h"));
				MetaData->SetValue(NewProp_CompanyName, TEXT("ToolTip"), TEXT("The name of the company (author, provider) that created the project."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneralProjectSettings, 1813686928);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneralProjectSettings(Z_Construct_UClass_UGeneralProjectSettings, &UGeneralProjectSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGeneralProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralProjectSettings);
	void UHudSettings::StaticRegisterNativesUHudSettings()
	{
	}
	UClass* Z_Construct_UClass_UHudSettings_NoRegister()
	{
		return UHudSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UHudSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EngineSettings();
			OuterClass = UHudSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DebugDisplay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugDisplay"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DebugDisplay, UHudSettings), 0x0010000000044001);
				UProperty* NewProp_DebugDisplay_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DebugDisplay, TEXT("DebugDisplay"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowHUD, UHudSettings, uint8);
				UProperty* NewProp_bShowHUD = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowHUD"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowHUD, UHudSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bShowHUD, UHudSettings), sizeof(uint8), false);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UHudSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HudSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/HudSettings.h"));
				MetaData->SetValue(NewProp_DebugDisplay, TEXT("Category"), TEXT("HudSettings"));
				MetaData->SetValue(NewProp_DebugDisplay, TEXT("ModuleRelativePath"), TEXT("Classes/HudSettings.h"));
				MetaData->SetValue(NewProp_DebugDisplay, TEXT("ToolTip"), TEXT("Collection of names specifying what debug info to display for ViewTarget actor."));
				MetaData->SetValue(NewProp_bShowHUD, TEXT("Category"), TEXT("HudSettings"));
				MetaData->SetValue(NewProp_bShowHUD, TEXT("ModuleRelativePath"), TEXT("Classes/HudSettings.h"));
				MetaData->SetValue(NewProp_bShowHUD, TEXT("ToolTip"), TEXT("Whether the HUD is visible at all."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudSettings, 285664349);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudSettings(Z_Construct_UClass_UHudSettings, &UHudSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UHudSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudSettings);
	UPackage* Z_Construct_UPackage__Script_EngineSettings()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/EngineSettings")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xF907EBE4;
			Guid.B = 0xD703FE22;
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