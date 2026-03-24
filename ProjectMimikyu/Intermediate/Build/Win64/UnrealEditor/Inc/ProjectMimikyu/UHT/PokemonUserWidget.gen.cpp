// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PokemonUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonUserWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonUserWidget Function SetWidgetController **************************
struct Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics
{
	struct PokemonUserWidget_eventSetWidgetController_Parms
	{
		UObject* InWidgetController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetController constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetController constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetController Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers) < 2048);
// ********** End Function SetWidgetController Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonUserWidget, nullptr, "SetWidgetController", 	Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PokemonUserWidget_eventSetWidgetController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PokemonUserWidget_eventSetWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonUserWidget::execSetWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_InWidgetController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetController(Z_Param_InWidgetController);
	P_NATIVE_END;
}
// ********** End Class UPokemonUserWidget Function SetWidgetController ****************************

// ********** Begin Class UPokemonUserWidget Function UpdateBoxSize ********************************
struct Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics
{
	struct PokemonUserWidget_eventUpdateBoxSize_Parms
	{
		USizeBox* SizeBox;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateBoxSize constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateBoxSize constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateBoxSize Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonUserWidget_eventUpdateBoxSize_Parms, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::NewProp_SizeBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers) < 2048);
// ********** End Function UpdateBoxSize Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonUserWidget, nullptr, "UpdateBoxSize", 	Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PokemonUserWidget_eventUpdateBoxSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PokemonUserWidget_eventUpdateBoxSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonUserWidget::execUpdateBoxSize)
{
	P_GET_OBJECT(USizeBox,Z_Param_SizeBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBoxSize(Z_Param_SizeBox);
	P_NATIVE_END;
}
// ********** End Class UPokemonUserWidget Function UpdateBoxSize **********************************

// ********** Begin Class UPokemonUserWidget Function WidgetControllerSet **************************
static FName NAME_UPokemonUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
void UPokemonUserWidget::WidgetControllerSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UPokemonUserWidget_WidgetControllerSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function WidgetControllerSet constinit property declarations *******************
// ********** End Function WidgetControllerSet constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonUserWidget, nullptr, "WidgetControllerSet", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPokemonUserWidget Function WidgetControllerSet ****************************

// ********** Begin Class UPokemonUserWidget *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonUserWidget;
UClass* UPokemonUserWidget::GetPrivateStaticClass()
{
	using TClass = UPokemonUserWidget;
	if (!Z_Registration_Info_UClass_UPokemonUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonUserWidget"),
			Z_Registration_Info_UClass_UPokemonUserWidget.InnerSingleton,
			StaticRegisterNativesUPokemonUserWidget,
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
	return Z_Registration_Info_UClass_UPokemonUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonUserWidget_NoRegister()
{
	return UPokemonUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[] = {
		{ "Category", "PokemonUserWidget" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "PokemonUserWidget" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxWidth_MetaData[] = {
		{ "Category", "Box Properties" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxHeight_MetaData[] = {
		{ "Category", "Box Properties" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonUserWidget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonUserWidget constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetWidgetController"), .Pointer = &UPokemonUserWidget::execSetWidgetController },
		{ .NameUTF8 = UTF8TEXT("UpdateBoxSize"), .Pointer = &UPokemonUserWidget::execUpdateBoxSize },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController, "SetWidgetController" }, // 1437731064
		{ &Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize, "UpdateBoxSize" }, // 313285670
		{ &Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 821370078
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonUserWidget_Statics

// ********** Begin Class UPokemonUserWidget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetController_MetaData), NewProp_WidgetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, OwnerCharacter), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxWidth = { "BoxWidth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, BoxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxWidth_MetaData), NewProp_BoxWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxHeight = { "BoxHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, BoxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxHeight_MetaData), NewProp_BoxHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_WidgetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers) < 2048);
// ********** End Class UPokemonUserWidget Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UPokemonUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonUserWidget_Statics::ClassParams = {
	&UPokemonUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonUserWidget_Statics::Class_MetaDataParams)
};
void UPokemonUserWidget::StaticRegisterNativesUPokemonUserWidget()
{
	UClass* Class = UPokemonUserWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonUserWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonUserWidget()
{
	if (!Z_Registration_Info_UClass_UPokemonUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonUserWidget.OuterSingleton, Z_Construct_UClass_UPokemonUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonUserWidget.OuterSingleton;
}
UPokemonUserWidget::UPokemonUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonUserWidget);
UPokemonUserWidget::~UPokemonUserWidget() {}
// ********** End Class UPokemonUserWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonUserWidget, UPokemonUserWidget::StaticClass, TEXT("UPokemonUserWidget"), &Z_Registration_Info_UClass_UPokemonUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonUserWidget), 219848533U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h__Script_ProjectMimikyu_3582650176{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
