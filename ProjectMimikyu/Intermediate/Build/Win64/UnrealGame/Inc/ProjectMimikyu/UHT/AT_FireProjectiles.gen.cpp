// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AbilityTasks/AT_FireProjectiles.h"
#include "AbilitySystem/Abilities/ProjectileAbility.h"
#include "Characters/CharacterTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "PokemonAbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAT_FireProjectiles() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectileAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_FireProjectiles();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_FireProjectiles_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UThreatFieldSubsystem_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FEnvironmentDropParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileBaseParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileModifierSettings();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProjectileSpreadMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileSpreadMode;
static UEnum* EProjectileSpreadMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileSpreadMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileSpreadMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EProjectileSpreadMode"));
	}
	return Z_Registration_Info_UEnum_EProjectileSpreadMode.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileSpreadMode>()
{
	return EProjectileSpreadMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Beam.DisplayName", "Beam" },
		{ "Beam.Name", "EProjectileSpreadMode::Beam" },
		{ "BlueprintType", "true" },
		{ "Burst.DisplayName", "Burst" },
		{ "Burst.Name", "EProjectileSpreadMode::Burst" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class UThreatFieldSubsystem;\n" },
#endif
		{ "Drop.DisplayName", "Drop" },
		{ "Drop.Name", "EProjectileSpreadMode::Drop" },
		{ "Erupt.DisplayName", "Erupt" },
		{ "Erupt.Name", "EProjectileSpreadMode::Erupt" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
		{ "Sequential.DisplayName", "Sequential" },
		{ "Sequential.Name", "EProjectileSpreadMode::Sequential" },
		{ "SingleShot.DisplayName", "SingleShot" },
		{ "SingleShot.Name", "EProjectileSpreadMode::SingleShot" },
		{ "Spread.DisplayName", "Spread" },
		{ "Spread.Name", "EProjectileSpreadMode::Spread" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UThreatFieldSubsystem;" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileSpreadMode::SingleShot", (int64)EProjectileSpreadMode::SingleShot },
		{ "EProjectileSpreadMode::Burst", (int64)EProjectileSpreadMode::Burst },
		{ "EProjectileSpreadMode::Spread", (int64)EProjectileSpreadMode::Spread },
		{ "EProjectileSpreadMode::Sequential", (int64)EProjectileSpreadMode::Sequential },
		{ "EProjectileSpreadMode::Drop", (int64)EProjectileSpreadMode::Drop },
		{ "EProjectileSpreadMode::Erupt", (int64)EProjectileSpreadMode::Erupt },
		{ "EProjectileSpreadMode::Beam", (int64)EProjectileSpreadMode::Beam },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EProjectileSpreadMode",
	"EProjectileSpreadMode",
	Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode()
{
	if (!Z_Registration_Info_UEnum_EProjectileSpreadMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileSpreadMode.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileSpreadMode.InnerSingleton;
}
// ********** End Enum EProjectileSpreadMode *******************************************************

// ********** Begin ScriptStruct FProjectileBaseParams *********************************************
struct Z_Construct_UScriptStruct_FProjectileBaseParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileBaseParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileBaseParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectContextHandle_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectParams_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryTags_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotation_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationId_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileGravityScale_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileBaseParams constinit property declarations *************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileGravityScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileBaseParams constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileBaseParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileBaseParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileBaseParams;
class UScriptStruct* FProjectileBaseParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileBaseParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileBaseParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileBaseParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileBaseParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileBaseParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileBaseParams Property Definitions ************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectileAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, DamageEffectClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectContextHandle = { "DamageEffectContextHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, DamageEffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectContextHandle_MetaData), NewProp_DamageEffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectParams_MetaData), NewProp_DamageEffectParams_MetaData) }; // 1458391438
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, Modifiers), Z_Construct_UScriptStruct_FProjectileModifierSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) }; // 2465604123
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_CategoryTags = { "CategoryTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, CategoryTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryTags_MetaData), NewProp_CategoryTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRotation_MetaData), NewProp_BaseRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, ActivationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationId_MetaData), NewProp_ActivationId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSpeed_MetaData), NewProp_InitialSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ProjectileGravityScale = { "ProjectileGravityScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, ProjectileGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileGravityScale_MetaData), NewProp_ProjectileGravityScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_CategoryTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_BaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ActivationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_InitialSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ProjectileGravityScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileBaseParams Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileBaseParams",
	Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::PropPointers),
	sizeof(FProjectileBaseParams),
	alignof(FProjectileBaseParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileBaseParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileBaseParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileBaseParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileBaseParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileBaseParams ***********************************************

// ********** Begin Delegate FOnFireProjectileFinished *********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFireProjectileFinished constinit property declarations *************
// ********** End Delegate FOnFireProjectileFinished constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnFireProjectileFinished__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFireProjectileFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFireProjectileFinished)
{
	OnFireProjectileFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnFireProjectileFinished ***********************************************

// ********** Begin Class UAT_FireProjectiles Function FireBeam ************************************
struct Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics
{
	struct AT_FireProjectiles_eventFireBeam_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FProjectileBaseParams Common;
		float BeamDuration;
		UAT_FireProjectiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_BeamDuration", "0.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Common_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FireBeam constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeamDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FireBeam constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FireBeam Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 2940725593
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_BeamDuration = { "BeamDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, BeamDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_BeamDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::PropPointers) < 2048);
// ********** End Function FireBeam Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireBeam", 	Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::AT_FireProjectiles_eventFireBeam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::AT_FireProjectiles_eventFireBeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_FireBeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execFireBeam)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT_REF(FProjectileBaseParams,Z_Param_Out_Common);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BeamDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireBeam(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Out_Common,Z_Param_BeamDuration);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireBeam **************************************

// ********** Begin Class UAT_FireProjectiles Function FireBurst ***********************************
struct Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics
{
	struct AT_FireProjectiles_eventFireBurst_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FProjectileBaseParams Common;
		int32 NumProjectiles;
		float SpreadAngle;
		float DistanceToSphere;
		float SphereRadius;
		UAT_FireProjectiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_DistanceToSphere", "0.000000" },
		{ "CPP_Default_NumProjectiles", "1" },
		{ "CPP_Default_SphereRadius", "0.000000" },
		{ "CPP_Default_SpreadAngle", "0.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Common_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FireBurst constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FireBurst constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FireBurst Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 2940725593
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_NumProjectiles = { "NumProjectiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, NumProjectiles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, SpreadAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, DistanceToSphere), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, SphereRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_NumProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_SpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_DistanceToSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::PropPointers) < 2048);
// ********** End Function FireBurst Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireBurst", 	Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::AT_FireProjectiles_eventFireBurst_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::AT_FireProjectiles_eventFireBurst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_FireBurst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execFireBurst)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT_REF(FProjectileBaseParams,Z_Param_Out_Common);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumProjectiles);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToSphere);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SphereRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireBurst(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Out_Common,Z_Param_NumProjectiles,Z_Param_SpreadAngle,Z_Param_DistanceToSphere,Z_Param_SphereRadius);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireBurst *************************************

// ********** Begin Class UAT_FireProjectiles Function FireEnvironmentDrop *************************
struct Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics
{
	struct AT_FireProjectiles_eventFireEnvironmentDrop_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FProjectileBaseParams Common;
		FEnvironmentDropParams EnvDropParams;
		UAT_FireProjectiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Common_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvDropParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FireEnvironmentDrop constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvDropParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FireEnvironmentDrop constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FireEnvironmentDrop Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 2940725593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_EnvDropParams = { "EnvDropParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, EnvDropParams), Z_Construct_UScriptStruct_FEnvironmentDropParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvDropParams_MetaData), NewProp_EnvDropParams_MetaData) }; // 2639614269
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_EnvDropParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers) < 2048);
// ********** End Function FireEnvironmentDrop Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireEnvironmentDrop", 	Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::AT_FireProjectiles_eventFireEnvironmentDrop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::AT_FireProjectiles_eventFireEnvironmentDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execFireEnvironmentDrop)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT_REF(FProjectileBaseParams,Z_Param_Out_Common);
	P_GET_STRUCT_REF(FEnvironmentDropParams,Z_Param_Out_EnvDropParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireEnvironmentDrop(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Out_Common,Z_Param_Out_EnvDropParams);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireEnvironmentDrop ***************************

// ********** Begin Class UAT_FireProjectiles Function FireEnvironmentErupt ************************
struct Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics
{
	struct AT_FireProjectiles_eventFireEnvironmentErupt_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FProjectileBaseParams Common;
		FEnvironmentDropParams EnvDropParams;
		UAT_FireProjectiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Common_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvDropParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FireEnvironmentErupt constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvDropParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FireEnvironmentErupt constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FireEnvironmentErupt Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 2940725593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_EnvDropParams = { "EnvDropParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, EnvDropParams), Z_Construct_UScriptStruct_FEnvironmentDropParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvDropParams_MetaData), NewProp_EnvDropParams_MetaData) }; // 2639614269
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_EnvDropParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers) < 2048);
// ********** End Function FireEnvironmentErupt Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireEnvironmentErupt", 	Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::AT_FireProjectiles_eventFireEnvironmentErupt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::AT_FireProjectiles_eventFireEnvironmentErupt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execFireEnvironmentErupt)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT_REF(FProjectileBaseParams,Z_Param_Out_Common);
	P_GET_STRUCT_REF(FEnvironmentDropParams,Z_Param_Out_EnvDropParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireEnvironmentErupt(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Out_Common,Z_Param_Out_EnvDropParams);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireEnvironmentErupt **************************

// ********** Begin Class UAT_FireProjectiles Function FireSequential ******************************
struct Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics
{
	struct AT_FireProjectiles_eventFireSequential_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FProjectileBaseParams Common;
		int32 NumProjectiles;
		float TimeBetweenShots;
		float SpreadAngle;
		float DistanceToSphere;
		float SphereRadius;
		UAT_FireProjectiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_DistanceToSphere", "0.000000" },
		{ "CPP_Default_NumProjectiles", "1" },
		{ "CPP_Default_SphereRadius", "0.000000" },
		{ "CPP_Default_SpreadAngle", "0.000000" },
		{ "CPP_Default_TimeBetweenShots", "0.100000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Common_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FireSequential constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FireSequential constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FireSequential Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 2940725593
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_NumProjectiles = { "NumProjectiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, NumProjectiles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, TimeBetweenShots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, SpreadAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, DistanceToSphere), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, SphereRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_NumProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_TimeBetweenShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_SpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_DistanceToSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::PropPointers) < 2048);
// ********** End Function FireSequential Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireSequential", 	Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::AT_FireProjectiles_eventFireSequential_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::AT_FireProjectiles_eventFireSequential_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_FireSequential()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execFireSequential)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT_REF(FProjectileBaseParams,Z_Param_Out_Common);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumProjectiles);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeBetweenShots);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToSphere);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SphereRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireSequential(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Out_Common,Z_Param_NumProjectiles,Z_Param_TimeBetweenShots,Z_Param_SpreadAngle,Z_Param_DistanceToSphere,Z_Param_SphereRadius);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireSequential ********************************

// ********** Begin Class UAT_FireProjectiles Function FireSingle **********************************
struct Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics
{
	struct AT_FireProjectiles_eventFireSingle_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FProjectileBaseParams Common;
		UAT_FireProjectiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Ability|Tasks\", meta = (DisplayName = \"Fire Projectiles\", HidePin = \"OwningAbility\", DefaultToSelf = \"OwningAbility\"))\n//static UAT_FireProjectiles* FireProjectiles\n//(\n//\x09UGameplayAbility* OwningAbility,\n//\x09""FName TaskInstanceName,\n//\x09""EProjectileSpreadMode SpreadMode = EProjectileSpreadMode::SingleShot,\n//\x09TSubclassOf<AProjectileAttack> ProjectileClass = nullptr,\n//\x09TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr,\n//\x09""FGameplayEffectContextHandle DamageEffectContextHandle = FGameplayEffectContextHandle(),\n//\x09""FDamageEffectParams DamageEffectParams = FDamageEffectParams(),\n//\x09""FGameplayTagContainer CategoryTags=FGameplayTagContainer(),\n//\x09""FVector SpawnLocation = FVector::ZeroVector,\n//\x09""FRotator BaseRotation = FRotator::ZeroRotator,\n//\x09""AActor* SourceActor = nullptr,\n//\x09int32 NumberOfProjectiles = 1,\n//\x09""float TimeBetweenShots = 0.1f,\n//\x09""float SpreadAngle = 0.f,\n//\x09""float BeamDuration = 0.f\n//);\n" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Ability|Tasks\", meta = (DisplayName = \"Fire Projectiles\", HidePin = \"OwningAbility\", DefaultToSelf = \"OwningAbility\"))\nstatic UAT_FireProjectiles* FireProjectiles\n(\n       UGameplayAbility* OwningAbility,\n       FName TaskInstanceName,\n       EProjectileSpreadMode SpreadMode = EProjectileSpreadMode::SingleShot,\n       TSubclassOf<AProjectileAttack> ProjectileClass = nullptr,\n       TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr,\n       FGameplayEffectContextHandle DamageEffectContextHandle = FGameplayEffectContextHandle(),\n       FDamageEffectParams DamageEffectParams = FDamageEffectParams(),\n       FGameplayTagContainer CategoryTags=FGameplayTagContainer(),\n       FVector SpawnLocation = FVector::ZeroVector,\n       FRotator BaseRotation = FRotator::ZeroRotator,\n       AActor* SourceActor = nullptr,\n       int32 NumberOfProjectiles = 1,\n       float TimeBetweenShots = 0.1f,\n       float SpreadAngle = 0.f,\n       float BeamDuration = 0.f\n);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Common_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FireSingle constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FireSingle constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FireSingle Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 2940725593
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers) < 2048);
// ********** End Function FireSingle Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireSingle", 	Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::AT_FireProjectiles_eventFireSingle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::AT_FireProjectiles_eventFireSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_FireSingle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execFireSingle)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT_REF(FProjectileBaseParams,Z_Param_Out_Common);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireSingle(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Out_Common);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireSingle ************************************

// ********** Begin Class UAT_FireProjectiles Function GetActivationId *****************************
struct Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics
{
	struct AT_FireProjectiles_eventGetActivationId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActivationId constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActivationId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActivationId Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventGetActivationId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers) < 2048);
// ********** End Function GetActivationId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "GetActivationId", 	Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::AT_FireProjectiles_eventGetActivationId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::AT_FireProjectiles_eventGetActivationId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execGetActivationId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActivationId();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function GetActivationId *******************************

// ********** Begin Class UAT_FireProjectiles Function HandleBeamBP ********************************
static FName NAME_UAT_FireProjectiles_HandleBeamBP = FName(TEXT("HandleBeamBP"));
void UAT_FireProjectiles::HandleBeamBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UAT_FireProjectiles_HandleBeamBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleBeamBP_Implementation();
	}
}
struct Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Task" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBeamBP constinit property declarations **************************
// ********** End Function HandleBeamBP constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleBeamBP", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execHandleBeamBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBeamBP_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function HandleBeamBP **********************************

// ********** Begin Class UAT_FireProjectiles Function HandleBurstBP *******************************
static FName NAME_UAT_FireProjectiles_HandleBurstBP = FName(TEXT("HandleBurstBP"));
void UAT_FireProjectiles::HandleBurstBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UAT_FireProjectiles_HandleBurstBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleBurstBP_Implementation();
	}
}
struct Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Task" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBurstBP constinit property declarations *************************
// ********** End Function HandleBurstBP constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleBurstBP", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execHandleBurstBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBurstBP_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function HandleBurstBP *********************************

// ********** Begin Class UAT_FireProjectiles Function HandleEnvironmentalDropBP *******************
static FName NAME_UAT_FireProjectiles_HandleEnvironmentalDropBP = FName(TEXT("HandleEnvironmentalDropBP"));
void UAT_FireProjectiles::HandleEnvironmentalDropBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UAT_FireProjectiles_HandleEnvironmentalDropBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleEnvironmentalDropBP_Implementation();
	}
}
struct Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Task" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleEnvironmentalDropBP constinit property declarations *************
// ********** End Function HandleEnvironmentalDropBP constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleEnvironmentalDropBP", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execHandleEnvironmentalDropBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEnvironmentalDropBP_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function HandleEnvironmentalDropBP *********************

// ********** Begin Class UAT_FireProjectiles Function HandleEnvironmentalEruptBP ******************
static FName NAME_UAT_FireProjectiles_HandleEnvironmentalEruptBP = FName(TEXT("HandleEnvironmentalEruptBP"));
void UAT_FireProjectiles::HandleEnvironmentalEruptBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UAT_FireProjectiles_HandleEnvironmentalEruptBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleEnvironmentalEruptBP_Implementation();
	}
}
struct Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Task" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleEnvironmentalEruptBP constinit property declarations ************
// ********** End Function HandleEnvironmentalEruptBP constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleEnvironmentalEruptBP", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execHandleEnvironmentalEruptBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEnvironmentalEruptBP_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function HandleEnvironmentalEruptBP ********************

// ********** Begin Class UAT_FireProjectiles Function HandleSequentialBP **************************
static FName NAME_UAT_FireProjectiles_HandleSequentialBP = FName(TEXT("HandleSequentialBP"));
void UAT_FireProjectiles::HandleSequentialBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UAT_FireProjectiles_HandleSequentialBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleSequentialBP_Implementation();
	}
}
struct Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Task" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSequentialBP constinit property declarations ********************
// ********** End Function HandleSequentialBP constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleSequentialBP", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execHandleSequentialBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSequentialBP_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function HandleSequentialBP ****************************

// ********** Begin Class UAT_FireProjectiles Function HandleSingleShotBP **************************
static FName NAME_UAT_FireProjectiles_HandleSingleShotBP = FName(TEXT("HandleSingleShotBP"));
void UAT_FireProjectiles::HandleSingleShotBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UAT_FireProjectiles_HandleSingleShotBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleSingleShotBP_Implementation();
	}
}
struct Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Task" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSingleShotBP constinit property declarations ********************
// ********** End Function HandleSingleShotBP constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleSingleShotBP", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execHandleSingleShotBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSingleShotBP_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function HandleSingleShotBP ****************************

// ********** Begin Class UAT_FireProjectiles Function HandleSpreadBP ******************************
static FName NAME_UAT_FireProjectiles_HandleSpreadBP = FName(TEXT("HandleSpreadBP"));
void UAT_FireProjectiles::HandleSpreadBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UAT_FireProjectiles_HandleSpreadBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleSpreadBP_Implementation();
	}
}
struct Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Task" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSpreadBP constinit property declarations ************************
// ********** End Function HandleSpreadBP constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleSpreadBP", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execHandleSpreadBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSpreadBP_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function HandleSpreadBP ********************************

// ********** Begin Class UAT_FireProjectiles Function OnEQSFinished *******************************
struct Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics
{
	struct AT_FireProjectiles_eventOnEQSFinished_Parms
	{
		UEnvQueryInstanceBlueprintWrapper* Wrapper;
		TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEQSFinished constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wrapper;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEQSFinished constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEQSFinished Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::NewProp_Wrapper = { "Wrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventOnEQSFinished_Parms, Wrapper), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventOnEQSFinished_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(0, nullptr) }; // 4117730379
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::NewProp_Wrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::NewProp_QueryStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::PropPointers) < 2048);
// ********** End Function OnEQSFinished Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "OnEQSFinished", 	Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::AT_FireProjectiles_eventOnEQSFinished_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::AT_FireProjectiles_eventOnEQSFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execOnEQSFinished)
{
	P_GET_OBJECT(UEnvQueryInstanceBlueprintWrapper,Z_Param_Wrapper);
	P_GET_PROPERTY(FByteProperty,Z_Param_QueryStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEQSFinished(Z_Param_Wrapper,EEnvQueryStatus::Type(Z_Param_QueryStatus));
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function OnEQSFinished *********************************

// ********** Begin Class UAT_FireProjectiles ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAT_FireProjectiles;
UClass* UAT_FireProjectiles::GetPrivateStaticClass()
{
	using TClass = UAT_FireProjectiles;
	if (!Z_Registration_Info_UClass_UAT_FireProjectiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AT_FireProjectiles"),
			Z_Registration_Info_UClass_UAT_FireProjectiles.InnerSingleton,
			StaticRegisterNativesUAT_FireProjectiles,
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
	return Z_Registration_Info_UClass_UAT_FireProjectiles.InnerSingleton;
}
UClass* Z_Construct_UClass_UAT_FireProjectiles_NoRegister()
{
	return UAT_FireProjectiles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAT_FireProjectiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreatSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAT_FireProjectiles constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThreatSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAT_FireProjectiles constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FireBeam"), .Pointer = &UAT_FireProjectiles::execFireBeam },
		{ .NameUTF8 = UTF8TEXT("FireBurst"), .Pointer = &UAT_FireProjectiles::execFireBurst },
		{ .NameUTF8 = UTF8TEXT("FireEnvironmentDrop"), .Pointer = &UAT_FireProjectiles::execFireEnvironmentDrop },
		{ .NameUTF8 = UTF8TEXT("FireEnvironmentErupt"), .Pointer = &UAT_FireProjectiles::execFireEnvironmentErupt },
		{ .NameUTF8 = UTF8TEXT("FireSequential"), .Pointer = &UAT_FireProjectiles::execFireSequential },
		{ .NameUTF8 = UTF8TEXT("FireSingle"), .Pointer = &UAT_FireProjectiles::execFireSingle },
		{ .NameUTF8 = UTF8TEXT("GetActivationId"), .Pointer = &UAT_FireProjectiles::execGetActivationId },
		{ .NameUTF8 = UTF8TEXT("HandleBeamBP"), .Pointer = &UAT_FireProjectiles::execHandleBeamBP },
		{ .NameUTF8 = UTF8TEXT("HandleBurstBP"), .Pointer = &UAT_FireProjectiles::execHandleBurstBP },
		{ .NameUTF8 = UTF8TEXT("HandleEnvironmentalDropBP"), .Pointer = &UAT_FireProjectiles::execHandleEnvironmentalDropBP },
		{ .NameUTF8 = UTF8TEXT("HandleEnvironmentalEruptBP"), .Pointer = &UAT_FireProjectiles::execHandleEnvironmentalEruptBP },
		{ .NameUTF8 = UTF8TEXT("HandleSequentialBP"), .Pointer = &UAT_FireProjectiles::execHandleSequentialBP },
		{ .NameUTF8 = UTF8TEXT("HandleSingleShotBP"), .Pointer = &UAT_FireProjectiles::execHandleSingleShotBP },
		{ .NameUTF8 = UTF8TEXT("HandleSpreadBP"), .Pointer = &UAT_FireProjectiles::execHandleSpreadBP },
		{ .NameUTF8 = UTF8TEXT("OnEQSFinished"), .Pointer = &UAT_FireProjectiles::execOnEQSFinished },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireBeam, "FireBeam" }, // 1143024420
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireBurst, "FireBurst" }, // 233342932
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop, "FireEnvironmentDrop" }, // 2767511664
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt, "FireEnvironmentErupt" }, // 1898080243
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireSequential, "FireSequential" }, // 3187199875
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireSingle, "FireSingle" }, // 1968200261
		{ &Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId, "GetActivationId" }, // 558662019
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP, "HandleBeamBP" }, // 3775978021
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP, "HandleBurstBP" }, // 4080754214
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP, "HandleEnvironmentalDropBP" }, // 134918934
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP, "HandleEnvironmentalEruptBP" }, // 1613424429
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP, "HandleSequentialBP" }, // 3157335011
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP, "HandleSingleShotBP" }, // 1898578586
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP, "HandleSpreadBP" }, // 3276205180
		{ &Z_Construct_UFunction_UAT_FireProjectiles_OnEQSFinished, "OnEQSFinished" }, // 1917409443
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAT_FireProjectiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAT_FireProjectiles_Statics

// ********** Begin Class UAT_FireProjectiles Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_FireProjectiles, OnFinished), Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 109163822
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_ThreatSubsystem = { "ThreatSubsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_FireProjectiles, ThreatSubsystem), Z_Construct_UClass_UThreatFieldSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreatSubsystem_MetaData), NewProp_ThreatSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_FireProjectiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_OnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_ThreatSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_FireProjectiles_Statics::PropPointers) < 2048);
// ********** End Class UAT_FireProjectiles Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UAT_FireProjectiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_FireProjectiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAT_FireProjectiles_Statics::ClassParams = {
	&UAT_FireProjectiles::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAT_FireProjectiles_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAT_FireProjectiles_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_FireProjectiles_Statics::Class_MetaDataParams), Z_Construct_UClass_UAT_FireProjectiles_Statics::Class_MetaDataParams)
};
void UAT_FireProjectiles::StaticRegisterNativesUAT_FireProjectiles()
{
	UClass* Class = UAT_FireProjectiles::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAT_FireProjectiles_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAT_FireProjectiles()
{
	if (!Z_Registration_Info_UClass_UAT_FireProjectiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAT_FireProjectiles.OuterSingleton, Z_Construct_UClass_UAT_FireProjectiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAT_FireProjectiles.OuterSingleton;
}
UAT_FireProjectiles::UAT_FireProjectiles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAT_FireProjectiles);
UAT_FireProjectiles::~UAT_FireProjectiles() {}
// ********** End Class UAT_FireProjectiles ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileSpreadMode_StaticEnum, TEXT("EProjectileSpreadMode"), &Z_Registration_Info_UEnum_EProjectileSpreadMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1785461781U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileBaseParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewStructOps, TEXT("ProjectileBaseParams"),&Z_Registration_Info_UScriptStruct_FProjectileBaseParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileBaseParams), 2940725593U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAT_FireProjectiles, UAT_FireProjectiles::StaticClass, TEXT("UAT_FireProjectiles"), &Z_Registration_Info_UClass_UAT_FireProjectiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_FireProjectiles), 12548251U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_447231509{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
