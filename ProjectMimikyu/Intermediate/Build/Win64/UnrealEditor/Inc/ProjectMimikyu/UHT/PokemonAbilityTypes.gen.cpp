// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/PokemonAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonAbilityTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageEffectParams;
class UScriptStruct* FDamageEffectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageEffectParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("DamageEffectParams"));
	}
	return Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<FDamageEffectParams>()
{
	return FDamageEffectParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDamageEffectParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasedDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasedDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulseMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathImpulseMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForceMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForceMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeathImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageEffectParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent = { "SourceAbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, SourceAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent = { "TargetAbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, TargetAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BasedDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BasedDamage = { "BasedDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, BasedDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BasedDamage_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BasedDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TypeMultiplier_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TypeMultiplier = { "TypeMultiplier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, TypeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TypeMultiplier_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TypeMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffChance_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffChance = { "DebuffChance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffChance_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDuration_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDuration_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffFrequency_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffFrequency_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDamage_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DebuffDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulseMagnitude_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulseMagnitude = { "DeathImpulseMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DeathImpulseMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulseMagnitude_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulseMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForceMagnitude_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForceMagnitude = { "KnockbackForceMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, KnockbackForceMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForceMagnitude_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForceMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackChance_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackChance = { "KnockbackChance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, KnockbackChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackChance_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulse_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulse = { "DeathImpulse", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulse_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DeathImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForce_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, KnockbackForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForce_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_KnockbackForce_MetaData) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPokemonGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FPokemonGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext;
class UScriptStruct* FPokemonGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<FPokemonGameplayEffectContext>()
{
	return FPokemonGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlockedHit_MetaData[];
#endif
		static void NewProp_bIsBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlockedHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[];
#endif
		static void NewProp_bIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSuccessfulDebuff_MetaData[];
#endif
		static void NewProp_bIsSuccessfulDebuff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfulDebuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeathImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonGameplayEffectContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit(void* Obj)
	{
		((FPokemonGameplayEffectContext*)Obj)->bIsBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit = { "bIsBlockedHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPokemonGameplayEffectContext), &Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
	{
		((FPokemonGameplayEffectContext*)Obj)->bIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPokemonGameplayEffectContext), &Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_SetBit(void* Obj)
	{
		((FPokemonGameplayEffectContext*)Obj)->bIsSuccessfulDebuff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff = { "bIsSuccessfulDebuff", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPokemonGameplayEffectContext), &Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDamage_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDuration_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffFrequency_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DebuffFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DeathImpulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DeathImpulse = { "DeathImpulse", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, DeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DeathImpulse_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_DeathImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_KnockbackForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, KnockbackForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_KnockbackForce_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_KnockbackForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_TypeMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokemonAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_TypeMultiplier = { "TypeMultiplier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonGameplayEffectContext, TypeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_TypeMultiplier_MetaData), Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewProp_TypeMultiplier_MetaData) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPokemonGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FDamageEffectParams::StaticStruct, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewStructOps, TEXT("DamageEffectParams"), &Z_Registration_Info_UScriptStruct_DamageEffectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageEffectParams), 85173987U) },
		{ FPokemonGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FPokemonGameplayEffectContext_Statics::NewStructOps, TEXT("PokemonGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_PokemonGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonGameplayEffectContext), 2413717378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h_4060271132(TEXT("/Script/ProjectMimikyu"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAbilityTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
