// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/PokemonAICombatBrainConfig.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonAICombatBrainConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAICombatBrainConfig();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ETargetRule();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETargetRule ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetRule;
static UEnum* ETargetRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETargetRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETargetRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_ETargetRule, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ETargetRule"));
	}
	return Z_Registration_Info_UEnum_ETargetRule.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<ETargetRule>()
{
	return ETargetRule_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ERT_FocusTrainerTarget.DisplayName", "Focus Trainer Target" },
		{ "ERT_FocusTrainerTarget.Name", "ETargetRule::ERT_FocusTrainerTarget" },
		{ "ERT_HighestThreatToMe.DisplayName", "Highest Threat To Me" },
		{ "ERT_HighestThreatToMe.Name", "ETargetRule::ERT_HighestThreatToMe" },
		{ "ERT_LowestHP.DisplayName", "Lowest HP" },
		{ "ERT_LowestHP.Name", "ETargetRule::ERT_LowestHP" },
		{ "ERT_Nearest.DisplayName", "Nearest" },
		{ "ERT_Nearest.Name", "ETargetRule::ERT_Nearest" },
		{ "ERT_None.DisplayName", "None" },
		{ "ERT_None.Name", "ETargetRule::ERT_None" },
		{ "ERT_RandomWeighted.DisplayName", "Random Weighted" },
		{ "ERT_RandomWeighted.Name", "ETargetRule::ERT_RandomWeighted" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETargetRule::ERT_None", (int64)ETargetRule::ERT_None },
		{ "ETargetRule::ERT_Nearest", (int64)ETargetRule::ERT_Nearest },
		{ "ETargetRule::ERT_LowestHP", (int64)ETargetRule::ERT_LowestHP },
		{ "ETargetRule::ERT_HighestThreatToMe", (int64)ETargetRule::ERT_HighestThreatToMe },
		{ "ETargetRule::ERT_FocusTrainerTarget", (int64)ETargetRule::ERT_FocusTrainerTarget },
		{ "ETargetRule::ERT_RandomWeighted", (int64)ETargetRule::ERT_RandomWeighted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"ETargetRule",
	"ETargetRule",
	Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_ETargetRule()
{
	if (!Z_Registration_Info_UEnum_ETargetRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetRule.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_ETargetRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETargetRule.InnerSingleton;
}
// ********** End Enum ETargetRule *****************************************************************

// ********** Begin Class UPokemonAICombatBrainConfig **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonAICombatBrainConfig;
UClass* UPokemonAICombatBrainConfig::GetPrivateStaticClass()
{
	using TClass = UPokemonAICombatBrainConfig;
	if (!Z_Registration_Info_UClass_UPokemonAICombatBrainConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonAICombatBrainConfig"),
			Z_Registration_Info_UClass_UPokemonAICombatBrainConfig.InnerSingleton,
			StaticRegisterNativesUPokemonAICombatBrainConfig,
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
	return Z_Registration_Info_UClass_UPokemonAICombatBrainConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister()
{
	return UPokemonAICombatBrainConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/PokemonAICombatBrainConfig.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThinkIntervalMin_MetaData[] = {
		{ "Category", "Cadence/Difficulty" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThinkIntervalMax_MetaData[] = {
		{ "Category", "Cadence/Difficulty" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactionDelayMin_MetaData[] = {
		{ "Category", "Cadence/Difficulty" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactionDelayMax_MetaData[] = {
		{ "Category", "Cadence/Difficulty" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommitTimeMin_MetaData[] = {
		{ "Category", "Cadence/Difficulty" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommitTimeMax_MetaData[] = {
		{ "Category", "Cadence/Difficulty" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimErrorDegrees_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPredictionError_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeSlack_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aggression_MetaData[] = {
		{ "Category", "Risk/Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0..1 , where 0 is very passive and 1 is very aggressive\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0..1 , where 0 is very passive and 1 is very aggressive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiskToTolerance_MetaData[] = {
		{ "Category", "Risk/Style" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeFrequency_MetaData[] = {
		{ "Category", "Risk/Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0..1, where 0 means the AI will always choose the safest option, and 1 means the AI will always choose the most risky option\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0..1, where 0 means the AI will always choose the safest option, and 1 means the AI will always choose the most risky option" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeMinCooldown_MetaData[] = {
		{ "Category", "Risk/Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0..1, where 0 means the AI will never dodge, and 1 means the AI will always attempt to dodge when possible\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0..1, where 0 means the AI will never dodge, and 1 means the AI will always attempt to dodge when possible" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRule_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredDistanceToTargetMin_MetaData[] = {
		{ "Category", "Preferred Spacing" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredDistanceToTargetMax_MetaData[] = {
		{ "Category", "Preferred Spacing" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTagWeights_MetaData[] = {
		{ "Categories", "Abilities" },
		{ "Category", "MoveScoring" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move scoring weights (tag based)\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move scoring weights (tag based)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveCategroyWeights_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveType" },
		{ "Category", "MoveScoring" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusPreference_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveType" },
		{ "Category", "MoveScoring" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonAICombatBrainConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonAICombatBrainConfig constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThinkIntervalMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThinkIntervalMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactionDelayMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactionDelayMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CommitTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CommitTimeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimErrorDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPredictionError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeSlack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Aggression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RiskToTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeMinCooldown;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredDistanceToTargetMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredDistanceToTargetMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTagWeights_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveTagWeights_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MoveTagWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveCategroyWeights_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveCategroyWeights_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MoveCategroyWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatusPreference_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatusPreference_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatusPreference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonAICombatBrainConfig constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAICombatBrainConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics

// ********** Begin Class UPokemonAICombatBrainConfig Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ThinkIntervalMin = { "ThinkIntervalMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, ThinkIntervalMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThinkIntervalMin_MetaData), NewProp_ThinkIntervalMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ThinkIntervalMax = { "ThinkIntervalMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, ThinkIntervalMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThinkIntervalMax_MetaData), NewProp_ThinkIntervalMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ReactionDelayMin = { "ReactionDelayMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, ReactionDelayMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactionDelayMin_MetaData), NewProp_ReactionDelayMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ReactionDelayMax = { "ReactionDelayMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, ReactionDelayMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactionDelayMax_MetaData), NewProp_ReactionDelayMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_CommitTimeMin = { "CommitTimeMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, CommitTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommitTimeMin_MetaData), NewProp_CommitTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_CommitTimeMax = { "CommitTimeMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, CommitTimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommitTimeMax_MetaData), NewProp_CommitTimeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_AimErrorDegrees = { "AimErrorDegrees", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, AimErrorDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimErrorDegrees_MetaData), NewProp_AimErrorDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_TargetPredictionError = { "TargetPredictionError", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, TargetPredictionError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPredictionError_MetaData), NewProp_TargetPredictionError_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_RangeSlack = { "RangeSlack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, RangeSlack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeSlack_MetaData), NewProp_RangeSlack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_Aggression = { "Aggression", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, Aggression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aggression_MetaData), NewProp_Aggression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_RiskToTolerance = { "RiskToTolerance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, RiskToTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiskToTolerance_MetaData), NewProp_RiskToTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_DodgeFrequency = { "DodgeFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, DodgeFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeFrequency_MetaData), NewProp_DodgeFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_DodgeMinCooldown = { "DodgeMinCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, DodgeMinCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeMinCooldown_MetaData), NewProp_DodgeMinCooldown_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_TargetRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_TargetRule = { "TargetRule", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, TargetRule), Z_Construct_UEnum_ProjectMimikyu_ETargetRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRule_MetaData), NewProp_TargetRule_MetaData) }; // 447281905
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_PreferredDistanceToTargetMin = { "PreferredDistanceToTargetMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, PreferredDistanceToTargetMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredDistanceToTargetMin_MetaData), NewProp_PreferredDistanceToTargetMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_PreferredDistanceToTargetMax = { "PreferredDistanceToTargetMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, PreferredDistanceToTargetMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredDistanceToTargetMax_MetaData), NewProp_PreferredDistanceToTargetMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveTagWeights_ValueProp = { "MoveTagWeights", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveTagWeights_Key_KeyProp = { "MoveTagWeights_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveTagWeights = { "MoveTagWeights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, MoveTagWeights), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTagWeights_MetaData), NewProp_MoveTagWeights_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveCategroyWeights_ValueProp = { "MoveCategroyWeights", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveCategroyWeights_Key_KeyProp = { "MoveCategroyWeights_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveCategroyWeights = { "MoveCategroyWeights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, MoveCategroyWeights), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveCategroyWeights_MetaData), NewProp_MoveCategroyWeights_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_StatusPreference_ValueProp = { "StatusPreference", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_StatusPreference_Key_KeyProp = { "StatusPreference_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_StatusPreference = { "StatusPreference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAICombatBrainConfig, StatusPreference), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusPreference_MetaData), NewProp_StatusPreference_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ThinkIntervalMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ThinkIntervalMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ReactionDelayMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_ReactionDelayMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_CommitTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_CommitTimeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_AimErrorDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_TargetPredictionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_RangeSlack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_Aggression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_RiskToTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_DodgeFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_DodgeMinCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_TargetRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_TargetRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_PreferredDistanceToTargetMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_PreferredDistanceToTargetMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveTagWeights_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveTagWeights_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveTagWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveCategroyWeights_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveCategroyWeights_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_MoveCategroyWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_StatusPreference_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_StatusPreference_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::NewProp_StatusPreference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::PropPointers) < 2048);
// ********** End Class UPokemonAICombatBrainConfig Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::ClassParams = {
	&UPokemonAICombatBrainConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::Class_MetaDataParams)
};
void UPokemonAICombatBrainConfig::StaticRegisterNativesUPokemonAICombatBrainConfig()
{
}
UClass* Z_Construct_UClass_UPokemonAICombatBrainConfig()
{
	if (!Z_Registration_Info_UClass_UPokemonAICombatBrainConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAICombatBrainConfig.OuterSingleton, Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonAICombatBrainConfig.OuterSingleton;
}
UPokemonAICombatBrainConfig::UPokemonAICombatBrainConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonAICombatBrainConfig);
UPokemonAICombatBrainConfig::~UPokemonAICombatBrainConfig() {}
// ********** End Class UPokemonAICombatBrainConfig ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETargetRule_StaticEnum, TEXT("ETargetRule"), &Z_Registration_Info_UEnum_ETargetRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 447281905U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAICombatBrainConfig, UPokemonAICombatBrainConfig::StaticClass, TEXT("UPokemonAICombatBrainConfig"), &Z_Registration_Info_UClass_UPokemonAICombatBrainConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAICombatBrainConfig), 2951936505U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h__Script_ProjectMimikyu_3361861767{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
