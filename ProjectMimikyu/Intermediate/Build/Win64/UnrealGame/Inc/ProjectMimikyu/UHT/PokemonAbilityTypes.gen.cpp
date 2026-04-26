// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PokemonAbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonAbilityTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDamageEffectParams ***********************************************
struct Z_Construct_UScriptStruct_FDamageEffectParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDamageEffectParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDamageEffectParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasedDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeMultiplier_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffChance_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulseMagnitude_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForceMagnitude_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackChance_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulse_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDamageEffectParams constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAbilitySystemComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasedDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathImpulseMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForceMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeathImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDamageEffectParams constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageEffectParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDamageEffectParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDamageEffectParams;
class UScriptStruct* FDamageEffectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageEffectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDamageEffectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageEffectParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("DamageEffectParams"));
	}
	return Z_Registration_Info_UScriptStruct_FDamageEffectParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FDamageEffectParams Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageGameplayEffectClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGameplayEffectClass_MetaData), NewProp_DamageGameplayEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent = { "SourceAbilitySystemComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, SourceAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAbilitySystemComponent_MetaData), NewProp_SourceAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent = { "TargetAbilitySystemComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, TargetAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAbilitySystemComponent_MetaData), NewProp_TargetAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BasedDamage = { "BasedDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, BasedDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasedDamage_MetaData), NewProp_BasedDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TypeMultiplier = { "TypeMultiplier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, TypeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeMultiplier_MetaData), NewProp_TypeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffChance = { "DebuffChance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffChance_MetaData), NewProp_DebuffChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDuration_MetaData), NewProp_DebuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffFrequency_MetaData), NewProp_DebuffFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDamage_MetaData), NewProp_DebuffDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulseMagnitude = { "DeathImpulseMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DeathImpulseMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulseMagnitude_MetaData), NewProp_DeathImpulseMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForceMagnitude = { "KnockbackForceMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, KnockbackForceMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForceMagnitude_MetaData), NewProp_KnockbackForceMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackChance = { "KnockbackChance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, KnockbackChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackChance_MetaData), NewProp_KnockbackChance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulse = { "DeathImpulse", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulse_MetaData), NewProp_DeathImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, KnockbackForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BasedDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TypeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulseMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForceMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDamageEffectParams Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"DamageEffectParams",
	Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers),
	sizeof(FDamageEffectParams),
	alignof(FDamageEffectParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageEffectParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDamageEffectParams.InnerSingleton, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDamageEffectParams.InnerSingleton);
}
// ********** End ScriptStruct FDamageEffectParams *************************************************

// ********** Begin ScriptStruct FPokemonGameplayEffectContext *************************************
struct Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPokemonGameplayEffectContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPokemonGameplayEffectContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlockedHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSuccessfulDebuff_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPokemonGameplayEffectContext constinit property declarations *****
	static void NewProp_bIsBlockedHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlockedHit;
	static void NewProp_bIsCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
	static void NewProp_bIsSuccessfulDebuff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfulDebuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeathImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPokemonGameplayEffectContext constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics
static_assert(std::is_polymorphic<FPokemonGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FPokemonGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext;
class UScriptStruct* FPokemonGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FPokemonGameplayEffectContext Property Definitions ****************
void Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit(void* Obj)
{
	((FPokemonGameplayEffectContext*)Obj)->bIsBlockedHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit = { "bIsBlockedHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPokemonGameplayEffectContext), &Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlockedHit_MetaData), NewProp_bIsBlockedHit_MetaData) };
void Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
{
	((FPokemonGameplayEffectContext*)Obj)->bIsCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPokemonGameplayEffectContext), &Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCriticalHit_MetaData), NewProp_bIsCriticalHit_MetaData) };
void Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_SetBit(void* Obj)
{
	((FPokemonGameplayEffectContext*)Obj)->bIsSuccessfulDebuff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff = { "bIsSuccessfulDebuff", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPokemonGameplayEffectContext), &Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSuccessfulDebuff_MetaData), NewProp_bIsSuccessfulDebuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDamage_MetaData), NewProp_DebuffDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDuration_MetaData), NewProp_DebuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffFrequency_MetaData), NewProp_DebuffFrequency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DeathImpulse = { "DeathImpulse", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulse_MetaData), NewProp_DeathImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, KnockbackForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_TypeMultiplier = { "TypeMultiplier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, TypeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeMultiplier_MetaData), NewProp_TypeMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DeathImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_KnockbackForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_TypeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPokemonGameplayEffectContext Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"PokemonGameplayEffectContext",
	Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::PropPointers),
	sizeof(FPokemonGameplayEffectContext),
	alignof(FPokemonGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext.InnerSingleton);
}
// ********** End ScriptStruct FPokemonGameplayEffectContext ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageEffectParams::StaticStruct, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewStructOps, TEXT("DamageEffectParams"),&Z_Registration_Info_UScriptStruct_FDamageEffectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageEffectParams), 1458391438U) },
		{ FPokemonGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewStructOps, TEXT("PokemonGameplayEffectContext"),&Z_Registration_Info_UScriptStruct_FPokemonGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonGameplayEffectContext), 166496929U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h__Script_ProjectMimikyu_3744763322{
	TEXT("/Script/ProjectMimikyu"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
