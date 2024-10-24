// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/DataAssets/PokemonInputConfig.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonInputConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputAction();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputDodgeAction();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PokemonInputAction;
class UScriptStruct* FPokemonInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PokemonInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PokemonInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInputAction, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_PokemonInputAction.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<FPokemonInputAction>()
{
	return FPokemonInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPokemonInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "PokemonInputAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_InputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "PokemonInputAction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly)\n//FGameplayTag InputTag = FGameplayTag();\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly)\nFGameplayTag InputTag = FGameplayTag();" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputAction, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_Index_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
		nullptr,
		&NewStructOps,
		"PokemonInputAction",
		Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers),
		sizeof(FPokemonInputAction),
		alignof(FPokemonInputAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInputAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_PokemonInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PokemonInputAction.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PokemonInputAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction;
class UScriptStruct* FPokemonInputDodgeAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInputDodgeAction, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInputDodgeAction"));
	}
	return Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<FPokemonInputDodgeAction>()
{
	return FPokemonInputDodgeAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInputDodgeAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "PokemonInputDodgeAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputDodgeAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "PokemonInputDodgeAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputDodgeAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputTag_MetaData), Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
		nullptr,
		&NewStructOps,
		"PokemonInputDodgeAction",
		Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers),
		sizeof(FPokemonInputDodgeAction),
		alignof(FPokemonInputDodgeAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputDodgeAction()
	{
		if (!Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction.InnerSingleton;
	}
	void UPokemonInputConfig::StaticRegisterNativesUPokemonInputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonInputConfig);
	UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister()
	{
		return UPokemonInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DodgeInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DodgeInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonInputConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/PokemonInputConfig.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInputAction, METADATA_PARAMS(0, nullptr) }; // 1752081493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "PokemonInputConfig" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions_MetaData), Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions_MetaData) }; // 1752081493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions_Inner = { "DodgeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInputDodgeAction, METADATA_PARAMS(0, nullptr) }; // 3172002704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions_MetaData[] = {
		{ "Category", "PokemonInputConfig" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions = { "DodgeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonInputConfig, DodgeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions_MetaData), Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions_MetaData) }; // 3172002704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonInputConfig_Statics::ClassParams = {
		&UPokemonInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonInputConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonInputConfig()
	{
		if (!Z_Registration_Info_UClass_UPokemonInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonInputConfig.OuterSingleton, Z_Construct_UClass_UPokemonInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonInputConfig.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonInputConfig>()
	{
		return UPokemonInputConfig::StaticClass();
	}
	UPokemonInputConfig::UPokemonInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonInputConfig);
	UPokemonInputConfig::~UPokemonInputConfig() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_Statics::ScriptStructInfo[] = {
		{ FPokemonInputAction::StaticStruct, Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewStructOps, TEXT("PokemonInputAction"), &Z_Registration_Info_UScriptStruct_PokemonInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInputAction), 1752081493U) },
		{ FPokemonInputDodgeAction::StaticStruct, Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewStructOps, TEXT("PokemonInputDodgeAction"), &Z_Registration_Info_UScriptStruct_PokemonInputDodgeAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInputDodgeAction), 3172002704U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonInputConfig, UPokemonInputConfig::StaticClass, TEXT("UPokemonInputConfig"), &Z_Registration_Info_UClass_UPokemonInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonInputConfig), 2739560696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_3019030174(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
