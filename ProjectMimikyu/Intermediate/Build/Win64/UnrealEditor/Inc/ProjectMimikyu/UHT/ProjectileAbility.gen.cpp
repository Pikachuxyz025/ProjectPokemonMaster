// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/ProjectileAbility.h"
#include "Characters/CharacterTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectileAbility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectileAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileSettings();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTagContainer();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FSequentialShotParams();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProjectileSettings ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileSettings;
class UScriptStruct* FProjectileSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileSettings, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSphere_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamTime_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoming_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomingStrength_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "bIsHoming" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasProjectile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasProjectile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeamTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static void NewProp_bIsHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HomingStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bHasProjectile_SetBit(void* Obj)
{
	((FProjectileSettings*)Obj)->bHasProjectile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bHasProjectile = { "bHasProjectile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSettings), &Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bHasProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasProjectile_MetaData), NewProp_bHasProjectile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, DistanceToSphere), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToSphere_MetaData), NewProp_DistanceToSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BeamTime = { "BeamTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, BeamTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamTime_MetaData), NewProp_BeamTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bIsHoming_SetBit(void* Obj)
{
	((FProjectileSettings*)Obj)->bIsHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bIsHoming = { "bIsHoming", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSettings), &Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bIsHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHoming_MetaData), NewProp_bIsHoming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_HomingStrength = { "HomingStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, HomingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomingStrength_MetaData), NewProp_HomingStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, SpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngle_MetaData), NewProp_SpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, LifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeTime_MetaData), NewProp_LifeTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bHasProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DistanceToSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BeamTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bIsHoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_HomingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileSettings",
	Z_Construct_UScriptStruct_FProjectileSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileSettings_Statics::PropPointers),
	sizeof(FProjectileSettings),
	alignof(FProjectileSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileSettings.InnerSingleton, Z_Construct_UScriptStruct_FProjectileSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileSettings.InnerSingleton;
}
// ********** End ScriptStruct FProjectileSettings *************************************************

// ********** Begin Class UProjectileAbility Function OverrideSequentialShotRotation ***************
struct ProjectileAbility_eventOverrideSequentialShotRotation_Parms
{
	FGameplayTagContainer ResolvedTags;
	FSequentialShotParams SequentialShotParams;
	FRotator OutRotation;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ProjectileAbility_eventOverrideSequentialShotRotation_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UProjectileAbility_OverrideSequentialShotRotation = FName(TEXT("OverrideSequentialShotRotation"));
bool UProjectileAbility::OverrideSequentialShotRotation(FGameplayTagContainer const& ResolvedTags, FSequentialShotParams const& SequentialShotParams, FRotator& OutRotation)
{
	ProjectileAbility_eventOverrideSequentialShotRotation_Parms Parms;
	Parms.ResolvedTags=ResolvedTags;
	Parms.SequentialShotParams=SequentialShotParams;
	Parms.OutRotation=OutRotation;
	UFunction* Func = FindFunctionChecked(NAME_UProjectileAbility_OverrideSequentialShotRotation);
	ProcessEvent(Func,&Parms);
	OutRotation=Parms.OutRotation;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task Override" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequentialShotParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequentialShotParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_ResolvedTags = { "ResolvedTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventOverrideSequentialShotRotation_Parms, ResolvedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedTags_MetaData), NewProp_ResolvedTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_SequentialShotParams = { "SequentialShotParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventOverrideSequentialShotRotation_Parms, SequentialShotParams), Z_Construct_UScriptStruct_FSequentialShotParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequentialShotParams_MetaData), NewProp_SequentialShotParams_MetaData) }; // 286614823
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventOverrideSequentialShotRotation_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectileAbility_eventOverrideSequentialShotRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectileAbility_eventOverrideSequentialShotRotation_Parms), &Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_ResolvedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_SequentialShotParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_OutRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProjectileAbility, nullptr, "OverrideSequentialShotRotation", Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::PropPointers), sizeof(ProjectileAbility_eventOverrideSequentialShotRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectileAbility_eventOverrideSequentialShotRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UProjectileAbility Function OverrideSequentialShotRotation *****************

// ********** Begin Class UProjectileAbility Function SpawnProjectile ******************************
struct Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics
{
	struct ProjectileAbility_eventSpawnProjectile_Parms
	{
		FVector ProjectileTargetLocation;
		FGameplayTag SocketTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileTargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation = { "ProjectileTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventSpawnProjectile_Parms, ProjectileTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileTargetLocation_MetaData), NewProp_ProjectileTargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventSpawnProjectile_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTag_MetaData), NewProp_SocketTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProjectileAbility, nullptr, "SpawnProjectile", Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::ProjectileAbility_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::ProjectileAbility_eventSpawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileAbility_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectileAbility::execSpawnProjectile)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectileTargetLocation);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SocketTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile(Z_Param_Out_ProjectileTargetLocation,Z_Param_Out_SocketTag);
	P_NATIVE_END;
}
// ********** End Class UProjectileAbility Function SpawnProjectile ********************************

// ********** Begin Class UProjectileAbility *******************************************************
void UProjectileAbility::StaticRegisterNativesUProjectileAbility()
{
	UClass* Class = UProjectileAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnProjectile", &UProjectileAbility::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileAbility;
UClass* UProjectileAbility::GetPrivateStaticClass()
{
	using TClass = UProjectileAbility;
	if (!Z_Registration_Info_UClass_UProjectileAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectileAbility"),
			Z_Registration_Info_UClass_UProjectileAbility.InnerSingleton,
			StaticRegisterNativesUProjectileAbility,
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
	return Z_Registration_Info_UClass_UProjectileAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileAbility_NoRegister()
{
	return UProjectileAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ProjectileAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCategoryTags_MetaData[] = {
		{ "Category", "ProjectileAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileConfig_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileCategoryTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation, "OverrideSequentialShotRotation" }, // 3686440239
		{ &Z_Construct_UFunction_UProjectileAbility_SpawnProjectile, "SpawnProjectile" }, // 3177733431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileCategoryTags = { "ProjectileCategoryTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, ProjectileCategoryTags), Z_Construct_UScriptStruct_FProjectileTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCategoryTags_MetaData), NewProp_ProjectileCategoryTags_MetaData) }; // 2774933828
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileConfig = { "ProjectileConfig", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, ProjectileConfig), Z_Construct_UScriptStruct_FProjectileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileConfig_MetaData), NewProp_ProjectileConfig_MetaData) }; // 2677540977
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileCategoryTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProjectileAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonDamageGameplayAbilities,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileAbility_Statics::ClassParams = {
	&UProjectileAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UProjectileAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectileAbility()
{
	if (!Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton, Z_Construct_UClass_UProjectileAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton;
}
UProjectileAbility::UProjectileAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileAbility);
UProjectileAbility::~UProjectileAbility() {}
// ********** End Class UProjectileAbility *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileSettings::StaticStruct, Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewStructOps, TEXT("ProjectileSettings"), &Z_Registration_Info_UScriptStruct_FProjectileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileSettings), 2677540977U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileAbility, UProjectileAbility::StaticClass, TEXT("UProjectileAbility"), &Z_Registration_Info_UClass_UProjectileAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileAbility), 3112982065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_1054383235(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
