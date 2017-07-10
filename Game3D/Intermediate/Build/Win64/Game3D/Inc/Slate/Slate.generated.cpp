// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Slate.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Slate() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	SLATECORE_API class UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	INPUTCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector2D();

	SLATE_API class UClass* Z_Construct_UClass_UButtonWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UButtonWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UCheckBoxWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UComboBoxWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UComboButtonWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UEditableTextWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UProgressWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UScrollBarWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UScrollBoxWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_USlateSettings_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_USlateSettings();
	SLATE_API class UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_USpinBoxWidgetStyle();
	SLATE_API class UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister();
	SLATE_API class UClass* Z_Construct_UClass_UTextBlockWidgetStyle();
	SLATE_API class UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETableViewMode();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
	SLATE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_EStretch();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_EStretchDirection();
	SLATE_API class UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	void UButtonWidgetStyle::StaticRegisterNativesUButtonWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UButtonWidgetStyle_NoRegister()
	{
		return UButtonWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UButtonWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UButtonWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ButtonStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ButtonStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ButtonStyle, UButtonWidgetStyle), 0x0010000000000005, Z_Construct_UScriptStruct_FButtonStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UButtonWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/ButtonWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ButtonWidgetStyle.h"));
				MetaData->SetValue(NewProp_ButtonStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_ButtonStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ButtonWidgetStyle.h"));
				MetaData->SetValue(NewProp_ButtonStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_ButtonStyle, TEXT("ToolTip"), TEXT("The actual data describing the button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonWidgetStyle, 737011274);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonWidgetStyle(Z_Construct_UClass_UButtonWidgetStyle, &UButtonWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UButtonWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWidgetStyle);
	void UCheckBoxWidgetStyle::StaticRegisterNativesUCheckBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister()
	{
		return UCheckBoxWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UCheckBoxWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UCheckBoxWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CheckBoxStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CheckBoxStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CheckBoxStyle, UCheckBoxWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FCheckBoxStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UCheckBoxWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/CheckBoxWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/CheckBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_CheckBoxStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_CheckBoxStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/CheckBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_CheckBoxStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_CheckBoxStyle, TEXT("ToolTip"), TEXT("The actual data describing the button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckBoxWidgetStyle, 2513983126);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckBoxWidgetStyle(Z_Construct_UClass_UCheckBoxWidgetStyle, &UCheckBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UCheckBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxWidgetStyle);
	void UComboBoxWidgetStyle::StaticRegisterNativesUComboBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister()
	{
		return UComboBoxWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UComboBoxWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UComboBoxWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ComboBoxStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ComboBoxStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ComboBoxStyle, UComboBoxWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FComboBoxStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UComboBoxWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/ComboBoxWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ComboBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_ComboBoxStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_ComboBoxStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ComboBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_ComboBoxStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_ComboBoxStyle, TEXT("ToolTip"), TEXT("The actual data describing the combo box's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboBoxWidgetStyle, 1466531460);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboBoxWidgetStyle(Z_Construct_UClass_UComboBoxWidgetStyle, &UComboBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UComboBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxWidgetStyle);
	void UComboButtonWidgetStyle::StaticRegisterNativesUComboButtonWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister()
	{
		return UComboButtonWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UComboButtonWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ComboButtonStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ComboButtonStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ComboButtonStyle, UComboButtonWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FComboButtonStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UComboButtonWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/ComboButtonWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ComboButtonWidgetStyle.h"));
				MetaData->SetValue(NewProp_ComboButtonStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_ComboButtonStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ComboButtonWidgetStyle.h"));
				MetaData->SetValue(NewProp_ComboButtonStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_ComboButtonStyle, TEXT("ToolTip"), TEXT("The actual data describing the combo button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboButtonWidgetStyle, 2793310262);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboButtonWidgetStyle(Z_Construct_UClass_UComboButtonWidgetStyle, &UComboButtonWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UComboButtonWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboButtonWidgetStyle);
	void UEditableTextBoxWidgetStyle::StaticRegisterNativesUEditableTextBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister()
	{
		return UEditableTextBoxWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UEditableTextBoxWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_EditableTextBoxStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditableTextBoxStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EditableTextBoxStyle, UEditableTextBoxWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FEditableTextBoxStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UEditableTextBoxWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/EditableTextBoxWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/EditableTextBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_EditableTextBoxStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_EditableTextBoxStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/EditableTextBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_EditableTextBoxStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_EditableTextBoxStyle, TEXT("ToolTip"), TEXT("The actual data describing the button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableTextBoxWidgetStyle, 1773437509);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableTextBoxWidgetStyle(Z_Construct_UClass_UEditableTextBoxWidgetStyle, &UEditableTextBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UEditableTextBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextBoxWidgetStyle);
	void UEditableTextWidgetStyle::StaticRegisterNativesUEditableTextWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister()
	{
		return UEditableTextWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableTextWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UEditableTextWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_EditableTextStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditableTextStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EditableTextStyle, UEditableTextWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FEditableTextStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UEditableTextWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/EditableTextWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/EditableTextWidgetStyle.h"));
				MetaData->SetValue(NewProp_EditableTextStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_EditableTextStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/EditableTextWidgetStyle.h"));
				MetaData->SetValue(NewProp_EditableTextStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_EditableTextStyle, TEXT("ToolTip"), TEXT("The actual data describing the button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableTextWidgetStyle, 89647352);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableTextWidgetStyle(Z_Construct_UClass_UEditableTextWidgetStyle, &UEditableTextWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UEditableTextWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextWidgetStyle);
	void UProgressWidgetStyle::StaticRegisterNativesUProgressWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister()
	{
		return UProgressWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UProgressWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UProgressWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProgressBarStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProgressBarStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ProgressBarStyle, UProgressWidgetStyle), 0x0010000000000005, Z_Construct_UScriptStruct_FProgressBarStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UProgressWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/ProgressWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ProgressWidgetStyle.h"));
				MetaData->SetValue(NewProp_ProgressBarStyle, TEXT("Category"), TEXT("Style"));
				MetaData->SetValue(NewProp_ProgressBarStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ProgressWidgetStyle.h"));
				MetaData->SetValue(NewProp_ProgressBarStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_ProgressBarStyle, TEXT("ToolTip"), TEXT("The actual data describing the button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProgressWidgetStyle, 4044886305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressWidgetStyle(Z_Construct_UClass_UProgressWidgetStyle, &UProgressWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UProgressWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressWidgetStyle);
	void UScrollBarWidgetStyle::StaticRegisterNativesUScrollBarWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister()
	{
		return UScrollBarWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UScrollBarWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UScrollBarWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ScrollBarStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScrollBarStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScrollBarStyle, UScrollBarWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FScrollBarStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UScrollBarWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/ScrollBarWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ScrollBarWidgetStyle.h"));
				MetaData->SetValue(NewProp_ScrollBarStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_ScrollBarStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ScrollBarWidgetStyle.h"));
				MetaData->SetValue(NewProp_ScrollBarStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_ScrollBarStyle, TEXT("ToolTip"), TEXT("The actual data describing the scrollbox's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScrollBarWidgetStyle, 9283905);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBarWidgetStyle(Z_Construct_UClass_UScrollBarWidgetStyle, &UScrollBarWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UScrollBarWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBarWidgetStyle);
	void UScrollBoxWidgetStyle::StaticRegisterNativesUScrollBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister()
	{
		return UScrollBoxWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UScrollBoxWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UScrollBoxWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ScrollBoxStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScrollBoxStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScrollBoxStyle, UScrollBoxWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FScrollBoxStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UScrollBoxWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/ScrollBoxWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ScrollBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_ScrollBoxStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_ScrollBoxStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/ScrollBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_ScrollBoxStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_ScrollBoxStyle, TEXT("ToolTip"), TEXT("The actual data describing the scrollbox's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScrollBoxWidgetStyle, 3022573681);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBoxWidgetStyle(Z_Construct_UClass_UScrollBoxWidgetStyle, &UScrollBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UScrollBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBoxWidgetStyle);
	void USlateSettings::StaticRegisterNativesUSlateSettings()
	{
	}
	UClass* Z_Construct_UClass_USlateSettings_NoRegister()
	{
		return USlateSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = USlateSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bExplicitCanvasChildZOrder, USlateSettings, bool);
				UProperty* NewProp_bExplicitCanvasChildZOrder = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bExplicitCanvasChildZOrder"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bExplicitCanvasChildZOrder, USlateSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bExplicitCanvasChildZOrder, USlateSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bVirtualKeyboardDisplayOnFocus, USlateSettings, bool);
				UProperty* NewProp_bVirtualKeyboardDisplayOnFocus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bVirtualKeyboardDisplayOnFocus"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bVirtualKeyboardDisplayOnFocus, USlateSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bVirtualKeyboardDisplayOnFocus, USlateSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bVirtualKeyboardSendsTextChanged, USlateSettings, bool);
				UProperty* NewProp_bVirtualKeyboardSendsTextChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bVirtualKeyboardSendsTextChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bVirtualKeyboardSendsTextChanged, USlateSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bVirtualKeyboardSendsTextChanged, USlateSettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<USlateSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("DisplayName"), TEXT("Slate"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SlateSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SlateSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Settings that control Slate functionality"));
				MetaData->SetValue(NewProp_bExplicitCanvasChildZOrder, TEXT("Category"), TEXT("ConstraintCanvas"));
				MetaData->SetValue(NewProp_bExplicitCanvasChildZOrder, TEXT("ModuleRelativePath"), TEXT("Public/SlateSettings.h"));
				MetaData->SetValue(NewProp_bExplicitCanvasChildZOrder, TEXT("ToolTip"), TEXT("Allow children of SConstraintCanvas to share render layers. Children must set explicit ZOrder on their slots to control render order.\nRecommendation: Enable for mobile platforms."));
				MetaData->SetValue(NewProp_bVirtualKeyboardDisplayOnFocus, TEXT("Category"), TEXT("VirtualKeyboard"));
				MetaData->SetValue(NewProp_bVirtualKeyboardDisplayOnFocus, TEXT("ModuleRelativePath"), TEXT("Public/SlateSettings.h"));
				MetaData->SetValue(NewProp_bVirtualKeyboardDisplayOnFocus, TEXT("ToolTip"), TEXT("Display the virtual keyboard when it receives non-mouse focus."));
				MetaData->SetValue(NewProp_bVirtualKeyboardSendsTextChanged, TEXT("Category"), TEXT("VirtualKeyboard"));
				MetaData->SetValue(NewProp_bVirtualKeyboardSendsTextChanged, TEXT("ModuleRelativePath"), TEXT("Public/SlateSettings.h"));
				MetaData->SetValue(NewProp_bVirtualKeyboardSendsTextChanged, TEXT("ToolTip"), TEXT("Whether or not to send the TextChanged event instead of TextCommitted for the virtual keyboard"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateSettings, 1140428118);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateSettings(Z_Construct_UClass_USlateSettings, &USlateSettings::StaticClass, TEXT("/Script/Slate"), TEXT("USlateSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateSettings);
	void USpinBoxWidgetStyle::StaticRegisterNativesUSpinBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister()
	{
		return USpinBoxWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = USpinBoxWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SpinBoxStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpinBoxStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SpinBoxStyle, USpinBoxWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FSpinBoxStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<USpinBoxWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/SpinBoxWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/SpinBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_SpinBoxStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_SpinBoxStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/SpinBoxWidgetStyle.h"));
				MetaData->SetValue(NewProp_SpinBoxStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_SpinBoxStyle, TEXT("ToolTip"), TEXT("The actual data describing the button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpinBoxWidgetStyle, 3149151606);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpinBoxWidgetStyle(Z_Construct_UClass_USpinBoxWidgetStyle, &USpinBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("USpinBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinBoxWidgetStyle);
	void UTextBlockWidgetStyle::StaticRegisterNativesUTextBlockWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister()
	{
		return UTextBlockWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage__Script_Slate();
			OuterClass = UTextBlockWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TextBlockStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TextBlockStyle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TextBlockStyle, UTextBlockWidgetStyle), 0x0010000000000001, Z_Construct_UScriptStruct_FTextBlockStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UTextBlockWidgetStyle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Framework/Styling/TextBlockWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/TextBlockWidgetStyle.h"));
				MetaData->SetValue(NewProp_TextBlockStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_TextBlockStyle, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Styling/TextBlockWidgetStyle.h"));
				MetaData->SetValue(NewProp_TextBlockStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_TextBlockStyle, TEXT("ToolTip"), TEXT("The actual data describing the button's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextBlockWidgetStyle, 3735493424);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBlockWidgetStyle(Z_Construct_UClass_UTextBlockWidgetStyle, &UTextBlockWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UTextBlockWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlockWidgetStyle);
class UScriptStruct* FInputChord::StaticStruct()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API class UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FInputChord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputChord, Z_Construct_UPackage__Script_Slate(), TEXT("InputChord"), sizeof(FInputChord), Get_Z_Construct_UScriptStruct_FInputChord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputChord(FInputChord::StaticStruct, TEXT("/Script/Slate"), TEXT("InputChord"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFInputChord
{
	FScriptStruct_Slate_StaticRegisterNativesFInputChord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputChord")),new UScriptStruct::TCppStructOps<FInputChord>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFInputChord;
	UScriptStruct* Z_Construct_UScriptStruct_FInputChord()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UScriptStruct_FInputChord_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputChord"), sizeof(FInputChord), Get_Z_Construct_UScriptStruct_FInputChord_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InputChord"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FInputChord>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCmd, FInputChord, uint8);
			UProperty* NewProp_bCmd = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bCmd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCmd, FInputChord), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bCmd, FInputChord), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAlt, FInputChord, uint8);
			UProperty* NewProp_bAlt = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bAlt"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAlt, FInputChord), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bAlt, FInputChord), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCtrl, FInputChord, uint8);
			UProperty* NewProp_bCtrl = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bCtrl"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCtrl, FInputChord), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bCtrl, FInputChord), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShift, FInputChord, uint8);
			UProperty* NewProp_bShift = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bShift"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShift, FInputChord), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bShift, FInputChord), sizeof(uint8), false);
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, FInputChord), 0x0010000000000001, Z_Construct_UScriptStruct_FKey());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Commands/InputChord.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("An Input Chord is a key and the modifier keys that are to be held with it."));
			MetaData->SetValue(NewProp_bCmd, TEXT("Category"), TEXT("Modifier"));
			MetaData->SetValue(NewProp_bCmd, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Commands/InputChord.h"));
			MetaData->SetValue(NewProp_bCmd, TEXT("ToolTip"), TEXT("Whether the command key is part of the chord."));
			MetaData->SetValue(NewProp_bAlt, TEXT("Category"), TEXT("Modifier"));
			MetaData->SetValue(NewProp_bAlt, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Commands/InputChord.h"));
			MetaData->SetValue(NewProp_bAlt, TEXT("ToolTip"), TEXT("Whether the alt key is part of the chord."));
			MetaData->SetValue(NewProp_bCtrl, TEXT("Category"), TEXT("Modifier"));
			MetaData->SetValue(NewProp_bCtrl, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Commands/InputChord.h"));
			MetaData->SetValue(NewProp_bCtrl, TEXT("ToolTip"), TEXT("Whether the control key is part of the chord."));
			MetaData->SetValue(NewProp_bShift, TEXT("Category"), TEXT("Modifier"));
			MetaData->SetValue(NewProp_bShift, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Commands/InputChord.h"));
			MetaData->SetValue(NewProp_bShift, TEXT("ToolTip"), TEXT("Whether the shift key is part of the chord."));
			MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("Key"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Commands/InputChord.h"));
			MetaData->SetValue(NewProp_Key, TEXT("ToolTip"), TEXT("The Key is the core of the chord."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputChord_CRC() { return 2096553085U; }
static UEnum* ETextFlowDirection_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextFlowDirection, Z_Construct_UPackage__Script_Slate(), TEXT("ETextFlowDirection"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextFlowDirection(ETextFlowDirection_StaticEnum, TEXT("/Script/Slate"), TEXT("ETextFlowDirection"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_ETextFlowDirection_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextFlowDirection"), 0, Get_Z_Construct_UEnum_Slate_ETextFlowDirection_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETextFlowDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETextFlowDirection::Auto"), 0);
			EnumNames.Emplace(TEXT("ETextFlowDirection::LeftToRight"), 1);
			EnumNames.Emplace(TEXT("ETextFlowDirection::RightToLeft"), 2);
			EnumNames.Emplace(TEXT("ETextFlowDirection::ETextFlowDirection_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ETextFlowDirection");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Auto.ToolTip"), TEXT("Automatically detect the flow direction for each paragraph from its text"));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("LeftToRight.ToolTip"), TEXT("Force text to be flowed left-to-right"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Text/TextLayout.h"));
			MetaData->SetValue(ReturnEnum, TEXT("RightToLeft.ToolTip"), TEXT("Force text to be flowed right-to-left"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The different directions that text can flow within a paragraph of text.\n@note If you change this enum, make sure and update CVarDefaultTextFlowDirection and GetDefaultTextFlowDirection."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_ETextFlowDirection_CRC() { return 406769604U; }
static UEnum* ETextWrappingPolicy_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextWrappingPolicy, Z_Construct_UPackage__Script_Slate(), TEXT("ETextWrappingPolicy"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextWrappingPolicy(ETextWrappingPolicy_StaticEnum, TEXT("/Script/Slate"), TEXT("ETextWrappingPolicy"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_ETextWrappingPolicy_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextWrappingPolicy"), 0, Get_Z_Construct_UEnum_Slate_ETextWrappingPolicy_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETextWrappingPolicy"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETextWrappingPolicy::DefaultWrapping"), 0);
			EnumNames.Emplace(TEXT("ETextWrappingPolicy::AllowPerCharacterWrapping"), 1);
			EnumNames.Emplace(TEXT("ETextWrappingPolicy::ETextWrappingPolicy_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ETextWrappingPolicy");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("AllowPerCharacterWrapping.ToolTip"), TEXT("Fallback to per-character wrapping if a word is too long"));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("DefaultWrapping.ToolTip"), TEXT("No fallback, just use the given line-break iterator"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Text/TextLayout.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The different methods that can be used if a word is too long to be broken by the default line-break iterator."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_ETextWrappingPolicy_CRC() { return 1046191585U; }
static UEnum* ETextJustify_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETextJustify();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextJustify, Z_Construct_UPackage__Script_Slate(), TEXT("ETextJustify"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextJustify(ETextJustify_StaticEnum, TEXT("/Script/Slate"), TEXT("ETextJustify"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_ETextJustify()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_ETextJustify_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextJustify"), 0, Get_Z_Construct_UEnum_Slate_ETextJustify_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETextJustify"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETextJustify::Left"), 0);
			EnumNames.Emplace(TEXT("ETextJustify::Center"), 1);
			EnumNames.Emplace(TEXT("ETextJustify::Right"), 2);
			EnumNames.Emplace(TEXT("ETextJustify::ETextJustify_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ETextJustify::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Center.ToolTip"), TEXT("Justify the text in the center.\nText flow direction has no impact on this justification mode."));
			MetaData->SetValue(ReturnEnum, TEXT("Left.ToolTip"), TEXT("Justify the text logically to the left.\nWhen text is flowing left-to-right, this will align text visually to the left.\nWhen text is flowing right-to-left, this will align text visually to the right."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Text/TextLayout.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Right.ToolTip"), TEXT("Justify the text logically to the right.\nWhen text is flowing left-to-right, this will align text visually to the right.\nWhen text is flowing right-to-left, this will align text visually to the left."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_ETextJustify_CRC() { return 3141548700U; }
static UEnum* ETableViewMode_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_ETableViewMode();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETableViewMode, Z_Construct_UPackage__Script_Slate(), TEXT("ETableViewMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETableViewMode(ETableViewMode_StaticEnum, TEXT("/Script/Slate"), TEXT("ETableViewMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_ETableViewMode()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_ETableViewMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETableViewMode"), 0, Get_Z_Construct_UEnum_Slate_ETableViewMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETableViewMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETableViewMode::List"), 0);
			EnumNames.Emplace(TEXT("ETableViewMode::Tile"), 1);
			EnumNames.Emplace(TEXT("ETableViewMode::Tree"), 2);
			EnumNames.Emplace(TEXT("ETableViewMode::ETableViewMode_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ETableViewMode::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Views/ITypedTableView.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Lists can exist as regular lists or as backing widgets for a tree."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_ETableViewMode_CRC() { return 836415483U; }
static UEnum* ESelectionMode_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ESelectionMode, Z_Construct_UPackage__Script_Slate(), TEXT("ESelectionMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectionMode(ESelectionMode_StaticEnum, TEXT("/Script/Slate"), TEXT("ESelectionMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_ESelectionMode()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_ESelectionMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectionMode"), 0, Get_Z_Construct_UEnum_Slate_ESelectionMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESelectionMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESelectionMode::None"), 0);
			EnumNames.Emplace(TEXT("ESelectionMode::Single"), 1);
			EnumNames.Emplace(TEXT("ESelectionMode::SingleToggle"), 2);
			EnumNames.Emplace(TEXT("ESelectionMode::Multi"), 3);
			EnumNames.Emplace(TEXT("ESelectionMode::ESelectionMode_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESelectionMode::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Framework/Views/ITypedTableView.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Multi.ToolTip"), TEXT("Multiple items can be selected at the same time."));
			MetaData->SetValue(ReturnEnum, TEXT("None.ToolTip"), TEXT("Nothing can be selected and there is no hover cue for selection.  You can still handle mouse button events though."));
			MetaData->SetValue(ReturnEnum, TEXT("Single.ToolTip"), TEXT("A single item can be selected at once, or no item may be selected."));
			MetaData->SetValue(ReturnEnum, TEXT("SingleToggle.ToolTip"), TEXT("A single item can be selected at once, or no item may be selected.  You can click the item to toggle selection on and off."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_ESelectionMode_CRC() { return 2494724060U; }
class UScriptStruct* FAnchors::StaticStruct()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FAnchors_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchors, Z_Construct_UPackage__Script_Slate(), TEXT("Anchors"), sizeof(FAnchors), Get_Z_Construct_UScriptStruct_FAnchors_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnchors(FAnchors::StaticStruct, TEXT("/Script/Slate"), TEXT("Anchors"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFAnchors
{
	FScriptStruct_Slate_StaticRegisterNativesFAnchors()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Anchors")),new UScriptStruct::TCppStructOps<FAnchors>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFAnchors;
	UScriptStruct* Z_Construct_UScriptStruct_FAnchors()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UScriptStruct_FAnchors_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Anchors"), sizeof(FAnchors), Get_Z_Construct_UScriptStruct_FAnchors_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Anchors"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAnchors>, EStructFlags(0x00000001));
			UProperty* NewProp_Maximum = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Maximum"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Maximum, FAnchors), 0x0010000000000005, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Minimum = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Minimum"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Minimum, FAnchors), 0x0010000000000005, Z_Construct_UScriptStruct_FVector2D());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Widgets/Layout/Anchors.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Describes how a widget is anchored."));
			MetaData->SetValue(NewProp_Maximum, TEXT("Category"), TEXT("Appearance"));
			MetaData->SetValue(NewProp_Maximum, TEXT("ModuleRelativePath"), TEXT("Public/Widgets/Layout/Anchors.h"));
			MetaData->SetValue(NewProp_Maximum, TEXT("ToolTip"), TEXT("Holds the maximum anchors, right + bottom."));
			MetaData->SetValue(NewProp_Minimum, TEXT("Category"), TEXT("Appearance"));
			MetaData->SetValue(NewProp_Minimum, TEXT("ModuleRelativePath"), TEXT("Public/Widgets/Layout/Anchors.h"));
			MetaData->SetValue(NewProp_Minimum, TEXT("ToolTip"), TEXT("Holds the minimum anchors, left + top."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnchors_CRC() { return 1172953575U; }
static UEnum* EStretch_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_EStretch();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EStretch, Z_Construct_UPackage__Script_Slate(), TEXT("EStretch"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStretch(EStretch_StaticEnum, TEXT("/Script/Slate"), TEXT("EStretch"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_EStretch()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_EStretch_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStretch"), 0, Get_Z_Construct_UEnum_Slate_EStretch_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EStretch"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EStretch::None"), 0);
			EnumNames.Emplace(TEXT("EStretch::Fill"), 1);
			EnumNames.Emplace(TEXT("EStretch::ScaleToFit"), 2);
			EnumNames.Emplace(TEXT("EStretch::ScaleToFitX"), 3);
			EnumNames.Emplace(TEXT("EStretch::ScaleToFitY"), 4);
			EnumNames.Emplace(TEXT("EStretch::ScaleToFill"), 5);
			EnumNames.Emplace(TEXT("EStretch::ScaleBySafeZone"), 6);
			EnumNames.Emplace(TEXT("EStretch::UserSpecified"), 7);
			EnumNames.Emplace(TEXT("EStretch::EStretch_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EStretch::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Fill.ToolTip"), TEXT("Scales the content non-uniformly filling the entire space of the area."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Widgets/Layout/SScaleBox.h"));
			MetaData->SetValue(ReturnEnum, TEXT("None.ToolTip"), TEXT("Does not scale the content."));
			MetaData->SetValue(ReturnEnum, TEXT("ScaleBySafeZone.ToolTip"), TEXT("Scales the content according to the size of the safe zone currently applied to the viewport."));
			MetaData->SetValue(ReturnEnum, TEXT("ScaleToFill.ToolTip"), TEXT("Scales the content uniformly (preserving aspect ratio), until all sides meet\nor exceed the size of the area.  Will result in clipping the longer side."));
			MetaData->SetValue(ReturnEnum, TEXT("ScaleToFit.ToolTip"), TEXT("Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it."));
			MetaData->SetValue(ReturnEnum, TEXT("ScaleToFitX.ToolTip"), TEXT("Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it along the x-axis,\nthe y-axis can/will be clipped."));
			MetaData->SetValue(ReturnEnum, TEXT("ScaleToFitY.ToolTip"), TEXT("Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it along the y-axis,\nthe x-axis can/will be clipped."));
			MetaData->SetValue(ReturnEnum, TEXT("UserSpecified.ToolTip"), TEXT("Scales the content by the scale specified by the user."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_EStretch_CRC() { return 1079259172U; }
static UEnum* EStretchDirection_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_EStretchDirection();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EStretchDirection, Z_Construct_UPackage__Script_Slate(), TEXT("EStretchDirection"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStretchDirection(EStretchDirection_StaticEnum, TEXT("/Script/Slate"), TEXT("EStretchDirection"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_EStretchDirection()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_EStretchDirection_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStretchDirection"), 0, Get_Z_Construct_UEnum_Slate_EStretchDirection_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EStretchDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EStretchDirection::Both"), 0);
			EnumNames.Emplace(TEXT("EStretchDirection::DownOnly"), 1);
			EnumNames.Emplace(TEXT("EStretchDirection::UpOnly"), 2);
			EnumNames.Emplace(TEXT("EStretchDirection::EStretchDirection_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EStretchDirection::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Both.ToolTip"), TEXT("Will scale the content up or down."));
			MetaData->SetValue(ReturnEnum, TEXT("DownOnly.ToolTip"), TEXT("Will only make the content smaller, will never scale it larger than the content's desired size."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Widgets/Layout/SScaleBox.h"));
			MetaData->SetValue(ReturnEnum, TEXT("UpOnly.ToolTip"), TEXT("Will only make the content larger, will never scale it smaller than the content's desired size."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_EStretchDirection_CRC() { return 3885776345U; }
static UEnum* EProgressBarFillType_StaticEnum()
{
	extern SLATE_API class UPackage* Z_Construct_UPackage__Script_Slate();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SLATE_API class UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillType, Z_Construct_UPackage__Script_Slate(), TEXT("EProgressBarFillType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProgressBarFillType(EProgressBarFillType_StaticEnum, TEXT("/Script/Slate"), TEXT("EProgressBarFillType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Slate();
		extern uint32 Get_Z_Construct_UEnum_Slate_EProgressBarFillType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProgressBarFillType"), 0, Get_Z_Construct_UEnum_Slate_EProgressBarFillType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EProgressBarFillType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EProgressBarFillType::LeftToRight"), 0);
			EnumNames.Emplace(TEXT("EProgressBarFillType::RightToLeft"), 1);
			EnumNames.Emplace(TEXT("EProgressBarFillType::FillFromCenter"), 2);
			EnumNames.Emplace(TEXT("EProgressBarFillType::TopToBottom"), 3);
			EnumNames.Emplace(TEXT("EProgressBarFillType::BottomToTop"), 4);
			EnumNames.Emplace(TEXT("EProgressBarFillType::EProgressBarFillType_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EProgressBarFillType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("BottomToTop.ToolTip"), TEXT("will fill up from the bottom to the the top"));
			MetaData->SetValue(ReturnEnum, TEXT("FillFromCenter.ToolTip"), TEXT("will fill up from the center to the outer edges"));
			MetaData->SetValue(ReturnEnum, TEXT("LeftToRight.ToolTip"), TEXT("will fill up from the left side to the right"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Widgets/Notifications/SProgressBar.h"));
			MetaData->SetValue(ReturnEnum, TEXT("RightToLeft.ToolTip"), TEXT("will fill up from the right side to the left side"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("SProgressBar Fill Type"));
			MetaData->SetValue(ReturnEnum, TEXT("TopToBottom.ToolTip"), TEXT("will fill up from the top to the the bottom"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Slate_EProgressBarFillType_CRC() { return 2948500907U; }
	UPackage* Z_Construct_UPackage__Script_Slate()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Slate")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x429D884C;
			Guid.B = 0xE618CF61;
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