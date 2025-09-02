// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/WidgetController/PokemonUIInfoWidgetController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonUIInfoWidgetController() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUIInfoWidgetController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUIInfoWidgetController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAttributeChangedSignature ******************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnAttributeChangedSignature_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonUIInfoWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnAttributeChangedSignature_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnAttributeChangedSignature__DelegateSignature", Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnAttributeChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnAttributeChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignature, float NewValue)
{
	struct _Script_ProjectMimikyu_eventOnAttributeChangedSignature_Parms
	{
		float NewValue;
	};
	_Script_ProjectMimikyu_eventOnAttributeChangedSignature_Parms Parms;
	Parms.NewValue=NewValue;
	OnAttributeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttributeChangedSignature ********************************************

// ********** Begin Class UPokemonUIInfoWidgetController Function BroadcastInitialValues ***********
struct Z_Construct_UFunction_UPokemonUIInfoWidgetController_BroadcastInitialValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonUIInfoWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUIInfoWidgetController_BroadcastInitialValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonUIInfoWidgetController, nullptr, "BroadcastInitialValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUIInfoWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUIInfoWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonUIInfoWidgetController_BroadcastInitialValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUIInfoWidgetController_BroadcastInitialValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonUIInfoWidgetController::execBroadcastInitialValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastInitialValues();
	P_NATIVE_END;
}
// ********** End Class UPokemonUIInfoWidgetController Function BroadcastInitialValues *************

// ********** Begin Class UPokemonUIInfoWidgetController Function SetInitialHealthValues ***********
struct Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics
{
	struct PokemonUIInfoWidgetController_eventSetInitialHealthValues_Parms
	{
		float CurrentHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonUIInfoWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonUIInfoWidgetController_eventSetInitialHealthValues_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonUIInfoWidgetController_eventSetInitialHealthValues_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonUIInfoWidgetController, nullptr, "SetInitialHealthValues", Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::PokemonUIInfoWidgetController_eventSetInitialHealthValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::PokemonUIInfoWidgetController_eventSetInitialHealthValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonUIInfoWidgetController::execSetInitialHealthValues)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CurrentHealth);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialHealthValues(Z_Param_Out_CurrentHealth,Z_Param_Out_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class UPokemonUIInfoWidgetController Function SetInitialHealthValues *************

// ********** Begin Class UPokemonUIInfoWidgetController *******************************************
void UPokemonUIInfoWidgetController::StaticRegisterNativesUPokemonUIInfoWidgetController()
{
	UClass* Class = UPokemonUIInfoWidgetController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastInitialValues", &UPokemonUIInfoWidgetController::execBroadcastInitialValues },
		{ "SetInitialHealthValues", &UPokemonUIInfoWidgetController::execSetInitialHealthValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonUIInfoWidgetController;
UClass* UPokemonUIInfoWidgetController::GetPrivateStaticClass()
{
	using TClass = UPokemonUIInfoWidgetController;
	if (!Z_Registration_Info_UClass_UPokemonUIInfoWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonUIInfoWidgetController"),
			Z_Registration_Info_UClass_UPokemonUIInfoWidgetController.InnerSingleton,
			StaticRegisterNativesUPokemonUIInfoWidgetController,
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
	return Z_Registration_Info_UClass_UPokemonUIInfoWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonUIInfoWidgetController_NoRegister()
{
	return UPokemonUIInfoWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/WidgetController/PokemonUIInfoWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonUIInfoWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonUIInfoWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonUIInfoWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonUIInfoWidgetController_BroadcastInitialValues, "BroadcastInitialValues" }, // 525386188
		{ &Z_Construct_UFunction_UPokemonUIInfoWidgetController_SetInitialHealthValues, "SetInitialHealthValues" }, // 373834892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonUIInfoWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUIInfoWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 2441016057
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUIInfoWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 2441016057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::NewProp_OnMaxHealthChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::ClassParams = {
	&UPokemonUIInfoWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonUIInfoWidgetController()
{
	if (!Z_Registration_Info_UClass_UPokemonUIInfoWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonUIInfoWidgetController.OuterSingleton, Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonUIInfoWidgetController.OuterSingleton;
}
UPokemonUIInfoWidgetController::UPokemonUIInfoWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonUIInfoWidgetController);
UPokemonUIInfoWidgetController::~UPokemonUIInfoWidgetController() {}
// ********** End Class UPokemonUIInfoWidgetController *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonUIInfoWidgetController, UPokemonUIInfoWidgetController::StaticClass, TEXT("UPokemonUIInfoWidgetController"), &Z_Registration_Info_UClass_UPokemonUIInfoWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonUIInfoWidgetController), 2846584436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h__Script_ProjectMimikyu_893675221(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
