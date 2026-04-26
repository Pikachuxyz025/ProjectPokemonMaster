// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/CrosshairWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCrosshairWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UCrosshairWidget();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCrosshairWidget Function SetCrosshairColor ******************************
struct Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics
{
	struct CrosshairWidget_eventSetCrosshairColor_Parms
	{
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCrosshairColor constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCrosshairColor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCrosshairColor Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairWidget_eventSetCrosshairColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::PropPointers) < 2048);
// ********** End Function SetCrosshairColor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairWidget, nullptr, "SetCrosshairColor", 	Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::CrosshairWidget_eventSetCrosshairColor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::CrosshairWidget_eventSetCrosshairColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairWidget::execSetCrosshairColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCrosshairColor(Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UCrosshairWidget Function SetCrosshairColor ********************************

// ********** Begin Class UCrosshairWidget Function SetCrosshairSpread *****************************
struct Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics
{
	struct CrosshairWidget_eventSetCrosshairSpread_Parms
	{
		float Spread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCrosshairSpread constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCrosshairSpread constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCrosshairSpread Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairWidget_eventSetCrosshairSpread_Parms, Spread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::PropPointers) < 2048);
// ********** End Function SetCrosshairSpread Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairWidget, nullptr, "SetCrosshairSpread", 	Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::CrosshairWidget_eventSetCrosshairSpread_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::CrosshairWidget_eventSetCrosshairSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairWidget::execSetCrosshairSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCrosshairSpread(Z_Param_Spread);
	P_NATIVE_END;
}
// ********** End Class UCrosshairWidget Function SetCrosshairSpread *******************************

// ********** Begin Class UCrosshairWidget *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCrosshairWidget;
UClass* UCrosshairWidget::GetPrivateStaticClass()
{
	using TClass = UCrosshairWidget;
	if (!Z_Registration_Info_UClass_UCrosshairWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CrosshairWidget"),
			Z_Registration_Info_UClass_UCrosshairWidget.InnerSingleton,
			StaticRegisterNativesUCrosshairWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCrosshairWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister()
{
	return UCrosshairWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCrosshairWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CrosshairWidget.h" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMG_Center_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMG_Left_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMG_Right_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMG_Top_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMG_Bottom_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CrosshairWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCrosshairWidget constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMG_Center;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMG_Left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMG_Right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMG_Top;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMG_Bottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCrosshairWidget constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetCrosshairColor"), .Pointer = &UCrosshairWidget::execSetCrosshairColor },
		{ .NameUTF8 = UTF8TEXT("SetCrosshairSpread"), .Pointer = &UCrosshairWidget::execSetCrosshairSpread },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrosshairWidget_SetCrosshairColor, "SetCrosshairColor" }, // 3858955792
		{ &Z_Construct_UFunction_UCrosshairWidget_SetCrosshairSpread, "SetCrosshairSpread" }, // 1378093382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCrosshairWidget_Statics

// ********** Begin Class UCrosshairWidget Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Center = { "IMG_Center", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, IMG_Center), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMG_Center_MetaData), NewProp_IMG_Center_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Left = { "IMG_Left", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, IMG_Left), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMG_Left_MetaData), NewProp_IMG_Left_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Right = { "IMG_Right", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, IMG_Right), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMG_Right_MetaData), NewProp_IMG_Right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Top = { "IMG_Top", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, IMG_Top), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMG_Top_MetaData), NewProp_IMG_Top_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Bottom = { "IMG_Bottom", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, IMG_Bottom), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMG_Bottom_MetaData), NewProp_IMG_Bottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_IMG_Bottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers) < 2048);
// ********** End Class UCrosshairWidget Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UCrosshairWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams = {
	&UCrosshairWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams)
};
void UCrosshairWidget::StaticRegisterNativesUCrosshairWidget()
{
	UClass* Class = UCrosshairWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCrosshairWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCrosshairWidget()
{
	if (!Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton, Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton;
}
UCrosshairWidget::UCrosshairWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCrosshairWidget);
UCrosshairWidget::~UCrosshairWidget() {}
// ********** End Class UCrosshairWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrosshairWidget, UCrosshairWidget::StaticClass, TEXT("UCrosshairWidget"), &Z_Registration_Info_UClass_UCrosshairWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrosshairWidget), 3350014505U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h__Script_ProjectMimikyu_329356642{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
