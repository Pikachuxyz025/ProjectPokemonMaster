// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/WidgetController/InventoryWidgetController.h"
#include "ActorComponents/InventorySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInventoryWidgetController() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryWidgetController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryWidgetController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDisplayInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnInventoryDisplayUpdated ********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnInventoryDisplayUpdated_Parms
	{
		TArray<FInventoryDisplayInfo> InventoryItems;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/InventoryWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnInventoryDisplayUpdated constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnInventoryDisplayUpdated constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnInventoryDisplayUpdated Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDisplayInfo, METADATA_PARAMS(0, nullptr) }; // 1866984579
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnInventoryDisplayUpdated_Parms, InventoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryItems_MetaData), NewProp_InventoryItems_MetaData) }; // 1866984579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::NewProp_InventoryItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::NewProp_InventoryItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnInventoryDisplayUpdated Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnInventoryDisplayUpdated__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnInventoryDisplayUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnInventoryDisplayUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryDisplayUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryDisplayUpdated, TArray<FInventoryDisplayInfo> const& InventoryItems)
{
	struct _Script_ProjectMimikyu_eventOnInventoryDisplayUpdated_Parms
	{
		TArray<FInventoryDisplayInfo> InventoryItems;
	};
	_Script_ProjectMimikyu_eventOnInventoryDisplayUpdated_Parms Parms;
	Parms.InventoryItems=InventoryItems;
	OnInventoryDisplayUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnInventoryDisplayUpdated **********************************************

// ********** Begin Class UInventoryWidgetController Function HandleInventoryUpdated ***************
struct Z_Construct_UFunction_UInventoryWidgetController_HandleInventoryUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/InventoryWidgetController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInventoryUpdated constinit property declarations ****************
// ********** End Function HandleInventoryUpdated constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidgetController_HandleInventoryUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryWidgetController, nullptr, "HandleInventoryUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidgetController_HandleInventoryUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryWidgetController_HandleInventoryUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryWidgetController_HandleInventoryUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidgetController_HandleInventoryUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryWidgetController::execHandleInventoryUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInventoryUpdated();
	P_NATIVE_END;
}
// ********** End Class UInventoryWidgetController Function HandleInventoryUpdated *****************

// ********** Begin Class UInventoryWidgetController ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryWidgetController;
UClass* UInventoryWidgetController::GetPrivateStaticClass()
{
	using TClass = UInventoryWidgetController;
	if (!Z_Registration_Info_UClass_UInventoryWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InventoryWidgetController"),
			Z_Registration_Info_UClass_UInventoryWidgetController.InnerSingleton,
			StaticRegisterNativesUInventoryWidgetController,
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
	return Z_Registration_Info_UClass_UInventoryWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryWidgetController_NoRegister()
{
	return UInventoryWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/WidgetController/InventoryWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/InventoryWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryDisplayUpdated_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/InventoryWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/InventoryWidgetController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInventoryWidgetController constinit property declarations ***************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryDisplayUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInventoryWidgetController constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInventoryUpdated"), .Pointer = &UInventoryWidgetController::execHandleInventoryUpdated },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryWidgetController_HandleInventoryUpdated, "HandleInventoryUpdated" }, // 3286527466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInventoryWidgetController_Statics

// ********** Begin Class UInventoryWidgetController Property Definitions **************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryWidgetController_Statics::NewProp_OnInventoryDisplayUpdated = { "OnInventoryDisplayUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryWidgetController, OnInventoryDisplayUpdated), Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryDisplayUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryDisplayUpdated_MetaData), NewProp_OnInventoryDisplayUpdated_MetaData) }; // 1678763186
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidgetController_Statics::NewProp_InventorySystem = { "InventorySystem", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryWidgetController, InventorySystem), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySystem_MetaData), NewProp_InventorySystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidgetController_Statics::NewProp_OnInventoryDisplayUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidgetController_Statics::NewProp_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidgetController_Statics::PropPointers) < 2048);
// ********** End Class UInventoryWidgetController Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UInventoryWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWidgetController_Statics::ClassParams = {
	&UInventoryWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryWidgetController_Statics::Class_MetaDataParams)
};
void UInventoryWidgetController::StaticRegisterNativesUInventoryWidgetController()
{
	UClass* Class = UInventoryWidgetController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInventoryWidgetController_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInventoryWidgetController()
{
	if (!Z_Registration_Info_UClass_UInventoryWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryWidgetController.OuterSingleton, Z_Construct_UClass_UInventoryWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryWidgetController.OuterSingleton;
}
UInventoryWidgetController::UInventoryWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInventoryWidgetController);
UInventoryWidgetController::~UInventoryWidgetController() {}
// ********** End Class UInventoryWidgetController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryWidgetController, UInventoryWidgetController::StaticClass, TEXT("UInventoryWidgetController"), &Z_Registration_Info_UClass_UInventoryWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryWidgetController), 2741918855U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h__Script_ProjectMimikyu_314232931{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
