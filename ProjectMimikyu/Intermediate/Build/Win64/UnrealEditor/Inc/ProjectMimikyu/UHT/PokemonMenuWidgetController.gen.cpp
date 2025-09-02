// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/WidgetController/PokemonMenuWidgetController.h"
#include "DataAssets/PokemonDataAsset.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonMenuWidgetController() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonStatInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FStatInfoSignature ****************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventStatInfoSignature_Parms
	{
		FPokemonStatInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventStatInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FPokemonStatInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 1381508548
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "StatInfoSignature__DelegateSignature", Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventStatInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventStatInfoSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStatInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& StatInfoSignature, FPokemonStatInfo const& Info)
{
	struct _Script_ProjectMimikyu_eventStatInfoSignature_Parms
	{
		FPokemonStatInfo Info;
	};
	_Script_ProjectMimikyu_eventStatInfoSignature_Parms Parms;
	Parms.Info=Info;
	StatInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FStatInfoSignature ******************************************************

// ********** Begin Delegate FAttributeInfoSignature ***********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventAttributeInfoSignature_Parms
	{
		FGameplayTag Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventAttributeInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "AttributeInfoSignature__DelegateSignature", Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventAttributeInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventAttributeInfoSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAttributeInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& AttributeInfoSignature, FGameplayTag const& Info)
{
	struct _Script_ProjectMimikyu_eventAttributeInfoSignature_Parms
	{
		FGameplayTag Info;
	};
	_Script_ProjectMimikyu_eventAttributeInfoSignature_Parms Parms;
	Parms.Info=Info;
	AttributeInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAttributeInfoSignature *************************************************

// ********** Begin Class UPokemonMenuWidgetController Function BroadcastInitialValues *************
struct Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonMenuWidgetController, nullptr, "BroadcastInitialValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonMenuWidgetController::execBroadcastInitialValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastInitialValues();
	P_NATIVE_END;
}
// ********** End Class UPokemonMenuWidgetController Function BroadcastInitialValues ***************

// ********** Begin Class UPokemonMenuWidgetController *********************************************
void UPokemonMenuWidgetController::StaticRegisterNativesUPokemonMenuWidgetController()
{
	UClass* Class = UPokemonMenuWidgetController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastInitialValues", &UPokemonMenuWidgetController::execBroadcastInitialValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonMenuWidgetController;
UClass* UPokemonMenuWidgetController::GetPrivateStaticClass()
{
	using TClass = UPokemonMenuWidgetController;
	if (!Z_Registration_Info_UClass_UPokemonMenuWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonMenuWidgetController"),
			Z_Registration_Info_UClass_UPokemonMenuWidgetController.InnerSingleton,
			StaticRegisterNativesUPokemonMenuWidgetController,
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
	return Z_Registration_Info_UClass_UPokemonMenuWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister()
{
	return UPokemonMenuWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonMenuWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/WidgetController/PokemonMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatInfoDelegate_MetaData[] = {
		{ "Category", "Pokemon|Stats" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfoDelegate_MetaData[] = {
		{ "Category", "Pokemon|Stats" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTags_MetaData[] = {
		{ "Categories", "Attributes" },
		{ "Category", "PokemonMenuWidgetController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadOnly)\n//TObjectPtr<UPokemonStatInfoDataAsset> StatInfo;\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly)\nTObjectPtr<UPokemonStatInfoDataAsset> StatInfo;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StatInfoDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttributeInfoDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues, "BroadcastInitialValues" }, // 247341892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonMenuWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfoDelegate = { "StatInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMenuWidgetController, StatInfoDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatInfoDelegate_MetaData), NewProp_StatInfoDelegate_MetaData) }; // 3555656005
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_AttributeInfoDelegate = { "AttributeInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMenuWidgetController, AttributeInfoDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_AttributeInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfoDelegate_MetaData), NewProp_AttributeInfoDelegate_MetaData) }; // 28929865
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_AttributeTags_Inner = { "AttributeTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_AttributeTags = { "AttributeTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMenuWidgetController, AttributeTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTags_MetaData), NewProp_AttributeTags_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfoDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_AttributeInfoDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_AttributeTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_AttributeTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonMenuWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::ClassParams = {
	&UPokemonMenuWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonMenuWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonMenuWidgetController()
{
	if (!Z_Registration_Info_UClass_UPokemonMenuWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonMenuWidgetController.OuterSingleton, Z_Construct_UClass_UPokemonMenuWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonMenuWidgetController.OuterSingleton;
}
UPokemonMenuWidgetController::UPokemonMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonMenuWidgetController);
UPokemonMenuWidgetController::~UPokemonMenuWidgetController() {}
// ********** End Class UPokemonMenuWidgetController ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonMenuWidgetController, UPokemonMenuWidgetController::StaticClass, TEXT("UPokemonMenuWidgetController"), &Z_Registration_Info_UClass_UPokemonMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonMenuWidgetController), 3214583377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h__Script_ProjectMimikyu_47893703(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
