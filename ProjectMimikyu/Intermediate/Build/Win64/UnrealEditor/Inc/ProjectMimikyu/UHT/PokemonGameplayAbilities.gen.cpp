// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonGameplayAbilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UPokemonGameplayAbilities::execCauseDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CauseDamage(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	void UPokemonGameplayAbilities::StaticRegisterNativesUPokemonGameplayAbilities()
	{
		UClass* Class = UPokemonGameplayAbilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CauseDamage", &UPokemonGameplayAbilities::execCauseDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics
	{
		struct PokemonGameplayAbilities_eventCauseDamage_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonGameplayAbilities_eventCauseDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonGameplayAbilities, nullptr, "CauseDamage", nullptr, nullptr, Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PokemonGameplayAbilities_eventCauseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PokemonGameplayAbilities_eventCauseDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonGameplayAbilities);
	UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister()
	{
		return UPokemonGameplayAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonGameplayAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageResponse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonGameplayAbilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage, "CauseDamage" }, // 1654360282
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveType" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveAction" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse_MetaData[] = {
		{ "Categories", "Damage.Response" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse = { "DamageResponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DamageResponse), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonGameplayAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonGameplayAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams = {
		&UPokemonGameplayAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonGameplayAbilities()
	{
		if (!Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton, Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonGameplayAbilities>()
	{
		return UPokemonGameplayAbilities::StaticClass();
	}
	UPokemonGameplayAbilities::UPokemonGameplayAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonGameplayAbilities);
	UPokemonGameplayAbilities::~UPokemonGameplayAbilities() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonGameplayAbilities, UPokemonGameplayAbilities::StaticClass, TEXT("UPokemonGameplayAbilities"), &Z_Registration_Info_UClass_UPokemonGameplayAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonGameplayAbilities), 4084697561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_2146316983(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
