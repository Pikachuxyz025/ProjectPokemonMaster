// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AIControllers/PokemonAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void APokemonAIController::StaticRegisterNativesAPokemonAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APokemonAIController);
	UClass* Z_Construct_UClass_APokemonAIController_NoRegister()
	{
		return APokemonAIController::StaticClass();
	}
	struct Z_Construct_UClass_APokemonAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPokemon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPokemon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightSense_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SightSense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageSense_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DamageSense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingSense_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HearingSense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerToFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnLocationKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStateKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonStateKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatusKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonStatusKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonActionStateKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonActionStateKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonCurrentMoveKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonCurrentMoveKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonTrainerKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonTrainerKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTargetKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CombatTargetKeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APokemonAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllers/PokemonAIController.h" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIBehaviorTree_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIBehaviorTree = { "AIBehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIBehaviorTree_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIBehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_ControlledPokemon_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_ControlledPokemon = { "ControlledPokemon", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, ControlledPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_ControlledPokemon_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_ControlledPokemon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIPerception_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIPerception_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIPerception_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_SightSense_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_SightSense = { "SightSense", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, SightSense), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_SightSense_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_SightSense_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_DamageSense_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_DamageSense = { "DamageSense", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, DamageSense), Z_Construct_UClass_UAISenseConfig_Damage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_DamageSense_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_DamageSense_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_HearingSense_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_HearingSense = { "HearingSense", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, HearingSense), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_HearingSense_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_HearingSense_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTarget_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTarget_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_TrainerToFollow_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_TrainerToFollow = { "TrainerToFollow", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, TrainerToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_TrainerToFollow_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_TrainerToFollow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_SpawnLocationKeyName_MetaData[] = {
		{ "Category", "Key Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere)\n//FGameplayTag CurrentStateTag;\n" },
#endif
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere)\nFGameplayTag CurrentStateTag;" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_SpawnLocationKeyName = { "SpawnLocationKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, SpawnLocationKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_SpawnLocationKeyName_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_SpawnLocationKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStateKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStateKeyName = { "PokemonStateKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonStateKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStateKeyName_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStateKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStatusKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStatusKeyName = { "PokemonStatusKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonStatusKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStatusKeyName_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStatusKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonActionStateKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonActionStateKeyName = { "PokemonActionStateKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonActionStateKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonActionStateKeyName_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonActionStateKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonCurrentMoveKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonCurrentMoveKeyName = { "PokemonCurrentMoveKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonCurrentMoveKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonCurrentMoveKeyName_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonCurrentMoveKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonTrainerKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonTrainerKeyName = { "PokemonTrainerKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonTrainerKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonTrainerKeyName_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonTrainerKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTargetKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTargetKeyName = { "CombatTargetKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, CombatTargetKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTargetKeyName_MetaData), Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTargetKeyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokemonAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIBehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_ControlledPokemon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIPerception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_SightSense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_DamageSense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_HearingSense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_TrainerToFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_SpawnLocationKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStateKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStatusKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonActionStateKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonCurrentMoveKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonTrainerKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTargetKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APokemonAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokemonAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APokemonAIController_Statics::ClassParams = {
		&APokemonAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APokemonAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APokemonAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APokemonAIController()
	{
		if (!Z_Registration_Info_UClass_APokemonAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokemonAIController.OuterSingleton, Z_Construct_UClass_APokemonAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APokemonAIController.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<APokemonAIController>()
	{
		return APokemonAIController::StaticClass();
	}
	APokemonAIController::APokemonAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APokemonAIController);
	APokemonAIController::~APokemonAIController() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APokemonAIController, APokemonAIController::StaticClass, TEXT("APokemonAIController"), &Z_Registration_Info_UClass_APokemonAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokemonAIController), 546388896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h_1758507455(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS