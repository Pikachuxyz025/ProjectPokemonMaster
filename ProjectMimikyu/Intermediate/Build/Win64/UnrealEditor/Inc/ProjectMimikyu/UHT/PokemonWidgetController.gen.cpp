// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/WidgetController/PokemonWidgetController.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController_NoRegister();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonUIInfo();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetControllerParams;
class UScriptStruct* FWidgetControllerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetControllerParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("WidgetControllerParams"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<FWidgetControllerParams>()
{
	return FWidgetControllerParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokeUIInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PokeUIInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetControllerParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PokeUIInfo_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PokeUIInfo = { "PokeUIInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, PokeUIInfo), Z_Construct_UScriptStruct_FPokemonUIInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PokeUIInfo_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PokeUIInfo_MetaData) }; // 3109786017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PokeUIInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
		nullptr,
		&NewStructOps,
		"WidgetControllerParams",
		Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers),
		sizeof(FWidgetControllerParams),
		alignof(FWidgetControllerParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UPokemonWidgetController::execSetWidgetControllerParams)
	{
		P_GET_STRUCT_REF(FWidgetControllerParams,Z_Param_Out_WCParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetControllerParams(Z_Param_Out_WCParams);
		P_NATIVE_END;
	}
	void UPokemonWidgetController::StaticRegisterNativesUPokemonWidgetController()
	{
		UClass* Class = UPokemonWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetControllerParams", &UPokemonWidgetController::execSetWidgetControllerParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics
	{
		struct PokemonWidgetController_eventSetWidgetControllerParams_Parms
		{
			FWidgetControllerParams WCParams;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WCParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WCParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams = { "WCParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonWidgetController_eventSetWidgetControllerParams_Parms, WCParams), Z_Construct_UScriptStruct_FWidgetControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData), Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData) }; // 1062736952
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonWidgetController, nullptr, "SetWidgetControllerParams", nullptr, nullptr, Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::PokemonWidgetController_eventSetWidgetControllerParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::PokemonWidgetController_eventSetWidgetControllerParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonWidgetController);
	UClass* Z_Construct_UClass_UPokemonWidgetController_NoRegister()
	{
		return UPokemonWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokeUIInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PokeUIInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonWidgetController_SetWidgetControllerParams, "SetWidgetControllerParams" }, // 594418430
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonWidgetController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/WidgetController/PokemonWidgetController.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonWidgetController, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonWidgetController, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_PokeUIInfo_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_PokeUIInfo = { "PokeUIInfo", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonWidgetController, PokeUIInfo), Z_Construct_UScriptStruct_FPokemonUIInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_PokeUIInfo_MetaData), Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_PokeUIInfo_MetaData) }; // 3109786017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonWidgetController_Statics::NewProp_PokeUIInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonWidgetController_Statics::ClassParams = {
		&UPokemonWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonWidgetController()
	{
		if (!Z_Registration_Info_UClass_UPokemonWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonWidgetController.OuterSingleton, Z_Construct_UClass_UPokemonWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonWidgetController.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonWidgetController>()
	{
		return UPokemonWidgetController::StaticClass();
	}
	UPokemonWidgetController::UPokemonWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonWidgetController);
	UPokemonWidgetController::~UPokemonWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_Statics::ScriptStructInfo[] = {
		{ FWidgetControllerParams::StaticStruct, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps, TEXT("WidgetControllerParams"), &Z_Registration_Info_UScriptStruct_WidgetControllerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetControllerParams), 1062736952U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonWidgetController, UPokemonWidgetController::StaticClass, TEXT("UPokemonWidgetController"), &Z_Registration_Info_UClass_UPokemonWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonWidgetController), 3099364559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_632762812(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
