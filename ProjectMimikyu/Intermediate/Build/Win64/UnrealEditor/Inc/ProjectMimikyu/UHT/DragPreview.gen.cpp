// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/DragPreview.h"
#include "ActorComponents/InventorySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDragPreview() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDragPreview();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDragPreview_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDisplayInfo();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDragPreview Function SetupPreview ***************************************
struct Z_Construct_UFunction_UDragPreview_SetupPreview_Statics
{
	struct DragPreview_eventSetupPreview_Parms
	{
		FInventoryDisplayInfo InDisplayInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDisplayInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupPreview constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDisplayInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupPreview constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupPreview Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::NewProp_InDisplayInfo = { "InDisplayInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DragPreview_eventSetupPreview_Parms, InDisplayInfo), Z_Construct_UScriptStruct_FInventoryDisplayInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDisplayInfo_MetaData), NewProp_InDisplayInfo_MetaData) }; // 1866984579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::NewProp_InDisplayInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::PropPointers) < 2048);
// ********** End Function SetupPreview Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDragPreview, nullptr, "SetupPreview", 	Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::DragPreview_eventSetupPreview_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::DragPreview_eventSetupPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDragPreview_SetupPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragPreview_SetupPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDragPreview::execSetupPreview)
{
	P_GET_STRUCT_REF(FInventoryDisplayInfo,Z_Param_Out_InDisplayInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPreview(Z_Param_Out_InDisplayInfo);
	P_NATIVE_END;
}
// ********** End Class UDragPreview Function SetupPreview *****************************************

// ********** Begin Class UDragPreview *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDragPreview;
UClass* UDragPreview::GetPrivateStaticClass()
{
	using TClass = UDragPreview;
	if (!Z_Registration_Info_UClass_UDragPreview.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DragPreview"),
			Z_Registration_Info_UClass_UDragPreview.InnerSingleton,
			StaticRegisterNativesUDragPreview,
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
	return Z_Registration_Info_UClass_UDragPreview.InnerSingleton;
}
UClass* Z_Construct_UClass_UDragPreview_NoRegister()
{
	return UDragPreview::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDragPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/DragPreview.h" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DraggedItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantityText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDragPreview constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DraggedItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuantityText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDragPreview constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetupPreview"), .Pointer = &UDragPreview::execSetupPreview },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragPreview_SetupPreview, "SetupPreview" }, // 3897252317
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragPreview>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDragPreview_Statics

// ********** Begin Class UDragPreview Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragPreview_Statics::NewProp_DraggedItem = { "DraggedItem", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragPreview, DraggedItem), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DraggedItem_MetaData), NewProp_DraggedItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragPreview_Statics::NewProp_QuantityText = { "QuantityText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragPreview, QuantityText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantityText_MetaData), NewProp_QuantityText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragPreview_Statics::NewProp_DisplayInfo = { "DisplayInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragPreview, DisplayInfo), Z_Construct_UScriptStruct_FInventoryDisplayInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayInfo_MetaData), NewProp_DisplayInfo_MetaData) }; // 1866984579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragPreview_Statics::NewProp_DraggedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragPreview_Statics::NewProp_QuantityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragPreview_Statics::NewProp_DisplayInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::PropPointers) < 2048);
// ********** End Class UDragPreview Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UDragPreview_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragPreview_Statics::ClassParams = {
	&UDragPreview::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDragPreview_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams), Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams)
};
void UDragPreview::StaticRegisterNativesUDragPreview()
{
	UClass* Class = UDragPreview::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDragPreview_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDragPreview()
{
	if (!Z_Registration_Info_UClass_UDragPreview.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragPreview.OuterSingleton, Z_Construct_UClass_UDragPreview_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDragPreview.OuterSingleton;
}
UDragPreview::UDragPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDragPreview);
UDragPreview::~UDragPreview() {}
// ********** End Class UDragPreview ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DragPreview_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDragPreview, UDragPreview::StaticClass, TEXT("UDragPreview"), &Z_Registration_Info_UClass_UDragPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragPreview), 1726695869U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DragPreview_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DragPreview_h__Script_ProjectMimikyu_3379634601{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DragPreview_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DragPreview_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
