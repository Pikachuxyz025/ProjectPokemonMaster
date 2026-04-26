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
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectileAbility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectileAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FEnvironmentDropParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileBounceParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileChargeParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileCombustableParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileContinuousParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileHomingParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileModifierSettings();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileMultiHitParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileReflectParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileSettings();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTagContainer();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTrackingParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FSequentialShotParams();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProjectileEditorMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileEditorMode;
static UEnum* EProjectileEditorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileEditorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileEditorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EProjectileEditorMode"));
	}
	return Z_Registration_Info_UEnum_EProjectileEditorMode.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileEditorMode>()
{
	return EProjectileEditorMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AOE.Name", "EProjectileEditorMode::AOE" },
		{ "Beam.Name", "EProjectileEditorMode::Beam" },
		{ "BlueprintType", "true" },
		{ "Burst.Name", "EProjectileEditorMode::Burst" },
		{ "Drop.Name", "EProjectileEditorMode::Drop" },
		{ "Erupt.Name", "EProjectileEditorMode::Erupt" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
		{ "None.Name", "EProjectileEditorMode::None" },
		{ "Sequential.Name", "EProjectileEditorMode::Sequential" },
		{ "Single.Name", "EProjectileEditorMode::Single" },
		{ "Spread.Name", "EProjectileEditorMode::Spread" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileEditorMode::None", (int64)EProjectileEditorMode::None },
		{ "EProjectileEditorMode::Single", (int64)EProjectileEditorMode::Single },
		{ "EProjectileEditorMode::Burst", (int64)EProjectileEditorMode::Burst },
		{ "EProjectileEditorMode::Spread", (int64)EProjectileEditorMode::Spread },
		{ "EProjectileEditorMode::Sequential", (int64)EProjectileEditorMode::Sequential },
		{ "EProjectileEditorMode::Drop", (int64)EProjectileEditorMode::Drop },
		{ "EProjectileEditorMode::Erupt", (int64)EProjectileEditorMode::Erupt },
		{ "EProjectileEditorMode::Beam", (int64)EProjectileEditorMode::Beam },
		{ "EProjectileEditorMode::AOE", (int64)EProjectileEditorMode::AOE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EProjectileEditorMode",
	"EProjectileEditorMode",
	Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode()
{
	if (!Z_Registration_Info_UEnum_EProjectileEditorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileEditorMode.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileEditorMode.InnerSingleton;
}
// ********** End Enum EProjectileEditorMode *******************************************************

// ********** Begin ScriptStruct FProjectileHomingParams *******************************************
struct Z_Construct_UScriptStruct_FProjectileHomingParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileHomingParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileHomingParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomingAccelerationMagnitude_MetaData[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomingLockRange_MetaData[] = {
		{ "Category", "Homing" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetInterval_MetaData[] = {
		{ "Category", "Homing" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileHomingParams constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HomingAccelerationMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HomingLockRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetargetInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileHomingParams constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileHomingParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileHomingParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileHomingParams;
class UScriptStruct* FProjectileHomingParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileHomingParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileHomingParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileHomingParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileHomingParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileHomingParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileHomingParams Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::NewProp_HomingAccelerationMagnitude = { "HomingAccelerationMagnitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHomingParams, HomingAccelerationMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomingAccelerationMagnitude_MetaData), NewProp_HomingAccelerationMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::NewProp_HomingLockRange = { "HomingLockRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHomingParams, HomingLockRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomingLockRange_MetaData), NewProp_HomingLockRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::NewProp_RetargetInterval = { "RetargetInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHomingParams, RetargetInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetInterval_MetaData), NewProp_RetargetInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::NewProp_HomingAccelerationMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::NewProp_HomingLockRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::NewProp_RetargetInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileHomingParams Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileHomingParams",
	Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::PropPointers),
	sizeof(FProjectileHomingParams),
	alignof(FProjectileHomingParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileHomingParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileHomingParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileHomingParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileHomingParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileHomingParams *********************************************

// ********** Begin ScriptStruct FProjectileBounceParams *******************************************
struct Z_Construct_UScriptStruct_FProjectileBounceParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileBounceParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileBounceParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounciness_MetaData[] = {
		{ "Category", "Bounce" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Bounce" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBounces_MetaData[] = {
		{ "Category", "Bounce" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileBounceParams constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bounciness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBounces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileBounceParams constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileBounceParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileBounceParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileBounceParams;
class UScriptStruct* FProjectileBounceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileBounceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileBounceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileBounceParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileBounceParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileBounceParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileBounceParams Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::NewProp_Bounciness = { "Bounciness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBounceParams, Bounciness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounciness_MetaData), NewProp_Bounciness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBounceParams, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::NewProp_MaxBounces = { "MaxBounces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBounceParams, MaxBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBounces_MetaData), NewProp_MaxBounces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::NewProp_Bounciness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::NewProp_MaxBounces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileBounceParams Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileBounceParams",
	Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::PropPointers),
	sizeof(FProjectileBounceParams),
	alignof(FProjectileBounceParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileBounceParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileBounceParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileBounceParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileBounceParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileBounceParams *********************************************

// ********** Begin ScriptStruct FProjectileReflectParams ******************************************
struct Z_Construct_UScriptStruct_FProjectileReflectParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileReflectParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileReflectParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReflections_MetaData[] = {
		{ "Category", "Reflect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionAngleTolerance_MetaData[] = {
		{ "Category", "Reflect" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplierOnReflect_MetaData[] = {
		{ "Category", "Reflect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optionally scale speed/damage per reflect\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optionally scale speed/damage per reflect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplierOnReflect_MetaData[] = {
		{ "Category", "Reflect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileReflectParams constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReflections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionAngleTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplierOnReflect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplierOnReflect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileReflectParams constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileReflectParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileReflectParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileReflectParams;
class UScriptStruct* FProjectileReflectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileReflectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileReflectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileReflectParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileReflectParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileReflectParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileReflectParams Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_MaxReflections = { "MaxReflections", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileReflectParams, MaxReflections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReflections_MetaData), NewProp_MaxReflections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_ReflectionAngleTolerance = { "ReflectionAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileReflectParams, ReflectionAngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionAngleTolerance_MetaData), NewProp_ReflectionAngleTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_SpeedMultiplierOnReflect = { "SpeedMultiplierOnReflect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileReflectParams, SpeedMultiplierOnReflect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplierOnReflect_MetaData), NewProp_SpeedMultiplierOnReflect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_DamageMultiplierOnReflect = { "DamageMultiplierOnReflect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileReflectParams, DamageMultiplierOnReflect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplierOnReflect_MetaData), NewProp_DamageMultiplierOnReflect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_MaxReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_ReflectionAngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_SpeedMultiplierOnReflect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewProp_DamageMultiplierOnReflect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileReflectParams Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileReflectParams",
	Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::PropPointers),
	sizeof(FProjectileReflectParams),
	alignof(FProjectileReflectParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileReflectParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileReflectParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileReflectParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileReflectParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileReflectParams ********************************************

// ********** Begin ScriptStruct FProjectileMultiHitParams *****************************************
struct Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileMultiHitParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileMultiHitParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeriodBetweenHits_MetaData[] = {
		{ "Category", "MultiHit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHits_MetaData[] = {
		{ "Category", "MultiHit" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileMultiHitParams constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeriodBetweenHits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileMultiHitParams constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileMultiHitParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams;
class UScriptStruct* FProjectileMultiHitParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileMultiHitParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileMultiHitParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileMultiHitParams Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::NewProp_PeriodBetweenHits = { "PeriodBetweenHits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileMultiHitParams, PeriodBetweenHits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeriodBetweenHits_MetaData), NewProp_PeriodBetweenHits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::NewProp_MaxHits = { "MaxHits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileMultiHitParams, MaxHits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHits_MetaData), NewProp_MaxHits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::NewProp_PeriodBetweenHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::NewProp_MaxHits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileMultiHitParams Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileMultiHitParams",
	Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::PropPointers),
	sizeof(FProjectileMultiHitParams),
	alignof(FProjectileMultiHitParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileMultiHitParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileMultiHitParams *******************************************

// ********** Begin ScriptStruct FProjectileChargeParams *******************************************
struct Z_Construct_UScriptStruct_FProjectileChargeParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileChargeParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileChargeParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeTime_MetaData[] = {
		{ "Category", "Charge" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageScaleAtFullCharge_MetaData[] = {
		{ "Category", "Charge" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScaleAtFullCharge_MetaData[] = {
		{ "Category", "Charge" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileChargeParams constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageScaleAtFullCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScaleAtFullCharge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileChargeParams constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileChargeParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileChargeParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileChargeParams;
class UScriptStruct* FProjectileChargeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileChargeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileChargeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileChargeParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileChargeParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileChargeParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileChargeParams Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::NewProp_ChargeTime = { "ChargeTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileChargeParams, ChargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeTime_MetaData), NewProp_ChargeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::NewProp_DamageScaleAtFullCharge = { "DamageScaleAtFullCharge", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileChargeParams, DamageScaleAtFullCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageScaleAtFullCharge_MetaData), NewProp_DamageScaleAtFullCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::NewProp_SpeedScaleAtFullCharge = { "SpeedScaleAtFullCharge", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileChargeParams, SpeedScaleAtFullCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedScaleAtFullCharge_MetaData), NewProp_SpeedScaleAtFullCharge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::NewProp_ChargeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::NewProp_DamageScaleAtFullCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::NewProp_SpeedScaleAtFullCharge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileChargeParams Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileChargeParams",
	Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::PropPointers),
	sizeof(FProjectileChargeParams),
	alignof(FProjectileChargeParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileChargeParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileChargeParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileChargeParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileChargeParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileChargeParams *********************************************

// ********** Begin ScriptStruct FProjectileTrackingParams *****************************************
struct Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileTrackingParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileTrackingParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrackingDuration_MetaData[] = {
		{ "Category", "Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variables for tracking a moving target\n// Used during Motion Warpping\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables for tracking a moving target\nUsed during Motion Warpping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrackingDistance_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableTrackingRadius_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileTrackingParams constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTrackingDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTrackingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableTrackingRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileTrackingParams constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileTrackingParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileTrackingParams;
class UScriptStruct* FProjectileTrackingParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileTrackingParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileTrackingParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileTrackingParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileTrackingParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileTrackingParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileTrackingParams Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::NewProp_MaxTrackingDuration = { "MaxTrackingDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTrackingParams, MaxTrackingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTrackingDuration_MetaData), NewProp_MaxTrackingDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::NewProp_MaxTrackingDistance = { "MaxTrackingDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTrackingParams, MaxTrackingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTrackingDistance_MetaData), NewProp_MaxTrackingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::NewProp_AcceptableTrackingRadius = { "AcceptableTrackingRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTrackingParams, AcceptableTrackingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableTrackingRadius_MetaData), NewProp_AcceptableTrackingRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::NewProp_MaxTrackingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::NewProp_MaxTrackingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::NewProp_AcceptableTrackingRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileTrackingParams Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileTrackingParams",
	Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::PropPointers),
	sizeof(FProjectileTrackingParams),
	alignof(FProjectileTrackingParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileTrackingParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileTrackingParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileTrackingParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileTrackingParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileTrackingParams *******************************************

// ********** Begin ScriptStruct FProjectileCombustableParams **************************************
struct Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileCombustableParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileCombustableParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitCount_MetaData[] = {
		{ "Category", "Combustable" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitAngle_MetaData[] = {
		{ "Category", "Combustable" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitDelay_MetaData[] = {
		{ "Category", "Combustable" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplierPerSplit_MetaData[] = {
		{ "Category", "Combustable" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileCombustableParams constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplitCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplierPerSplit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileCombustableParams constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileCombustableParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileCombustableParams;
class UScriptStruct* FProjectileCombustableParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileCombustableParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileCombustableParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileCombustableParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileCombustableParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileCombustableParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileCombustableParams Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SplitCount = { "SplitCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileCombustableParams, SplitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitCount_MetaData), NewProp_SplitCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SplitAngle = { "SplitAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileCombustableParams, SplitAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitAngle_MetaData), NewProp_SplitAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SplitDelay = { "SplitDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileCombustableParams, SplitDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitDelay_MetaData), NewProp_SplitDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SpeedMultiplierPerSplit = { "SpeedMultiplierPerSplit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileCombustableParams, SpeedMultiplierPerSplit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplierPerSplit_MetaData), NewProp_SpeedMultiplierPerSplit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SplitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SplitAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SplitDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewProp_SpeedMultiplierPerSplit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileCombustableParams Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileCombustableParams",
	Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::PropPointers),
	sizeof(FProjectileCombustableParams),
	alignof(FProjectileCombustableParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileCombustableParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileCombustableParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileCombustableParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileCombustableParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileCombustableParams ****************************************

// ********** Begin ScriptStruct FProjectileContinuousParams ***************************************
struct Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileContinuousParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileContinuousParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[] = {
		{ "Category", "Continuous" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[] = {
		{ "Category", "Continuous" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileContinuousParams constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileContinuousParams constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileContinuousParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileContinuousParams;
class UScriptStruct* FProjectileContinuousParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileContinuousParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileContinuousParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileContinuousParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileContinuousParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileContinuousParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileContinuousParams Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileContinuousParams, TickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickInterval_MetaData), NewProp_TickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileContinuousParams, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpan_MetaData), NewProp_LifeSpan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::NewProp_TickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::NewProp_LifeSpan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileContinuousParams Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileContinuousParams",
	Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::PropPointers),
	sizeof(FProjectileContinuousParams),
	alignof(FProjectileContinuousParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileContinuousParams()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileContinuousParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileContinuousParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileContinuousParams.InnerSingleton);
}
// ********** End ScriptStruct FProjectileContinuousParams *****************************************

// ********** Begin ScriptStruct FProjectileModifierSettings ***************************************
struct Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileModifierSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileModifierSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasHoming_MetaData[] = {
		{ "Category", "Derived" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Derived \xef\xbf\xbdshow\xef\xbf\xbd flags \xef\xbf\xbd recomputed from tags (VisibleAnywhere so designers see why things appear)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Derived \xef\xbf\xbdshow\xef\xbf\xbd flags \xef\xbf\xbd recomputed from tags (VisibleAnywhere so designers see why things appear)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBounce_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReflectable_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTracking_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasScatter_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMultiHit_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasContinuous_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCharge_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCombustable_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomingParams_MetaData[] = {
		{ "Category", "Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actual modifier structs, only editable if the corresponding tag is set\n" },
#endif
		{ "EditCondition", "bHasHoming" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual modifier structs, only editable if the corresponding tag is set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceParams_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "EditCondition", "bHasBounce" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectParams_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "EditCondition", "bHasReflectable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiHitParams_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "EditCondition", "bHasMultiHit" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeParams_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "EditCondition", "bHasCharge" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingParams_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "EditCondition", "bHasTracking" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombustableParams_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "EditCondition", "bHasCombustable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousParams_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "EditCondition", "bHasContinuous" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileModifierSettings constinit property declarations *******
	static void NewProp_bHasHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHoming;
	static void NewProp_bHasBounce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBounce;
	static void NewProp_bHasReflectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReflectable;
	static void NewProp_bHasTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTracking;
	static void NewProp_bHasScatter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasScatter;
	static void NewProp_bHasMultiHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMultiHit;
	static void NewProp_bHasContinuous_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasContinuous;
	static void NewProp_bHasCharge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCharge;
	static void NewProp_bHasCombustable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCombustable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HomingParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BounceParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReflectParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiHitParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChargeParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombustableParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuousParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileModifierSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileModifierSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileModifierSettings;
class UScriptStruct* FProjectileModifierSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileModifierSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileModifierSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileModifierSettings, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileModifierSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileModifierSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileModifierSettings Property Definitions ******************
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasHoming_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasHoming = { "bHasHoming", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasHoming_MetaData), NewProp_bHasHoming_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasBounce_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasBounce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasBounce = { "bHasBounce", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasBounce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBounce_MetaData), NewProp_bHasBounce_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasReflectable_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasReflectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasReflectable = { "bHasReflectable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasReflectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReflectable_MetaData), NewProp_bHasReflectable_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasTracking_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasTracking = { "bHasTracking", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTracking_MetaData), NewProp_bHasTracking_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasScatter_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasScatter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasScatter = { "bHasScatter", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasScatter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasScatter_MetaData), NewProp_bHasScatter_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasMultiHit_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasMultiHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasMultiHit = { "bHasMultiHit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasMultiHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMultiHit_MetaData), NewProp_bHasMultiHit_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasContinuous_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasContinuous = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasContinuous = { "bHasContinuous", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasContinuous_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasContinuous_MetaData), NewProp_bHasContinuous_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCharge_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasCharge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCharge = { "bHasCharge", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCharge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCharge_MetaData), NewProp_bHasCharge_MetaData) };
void Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCombustable_SetBit(void* Obj)
{
	((FProjectileModifierSettings*)Obj)->bHasCombustable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCombustable = { "bHasCombustable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileModifierSettings), &Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCombustable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCombustable_MetaData), NewProp_bHasCombustable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_HomingParams = { "HomingParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, HomingParams), Z_Construct_UScriptStruct_FProjectileHomingParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomingParams_MetaData), NewProp_HomingParams_MetaData) }; // 1179354142
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_BounceParams = { "BounceParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, BounceParams), Z_Construct_UScriptStruct_FProjectileBounceParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceParams_MetaData), NewProp_BounceParams_MetaData) }; // 3600473595
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_ReflectParams = { "ReflectParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, ReflectParams), Z_Construct_UScriptStruct_FProjectileReflectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectParams_MetaData), NewProp_ReflectParams_MetaData) }; // 2126087236
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_MultiHitParams = { "MultiHitParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, MultiHitParams), Z_Construct_UScriptStruct_FProjectileMultiHitParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiHitParams_MetaData), NewProp_MultiHitParams_MetaData) }; // 847561853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_ChargeParams = { "ChargeParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, ChargeParams), Z_Construct_UScriptStruct_FProjectileChargeParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeParams_MetaData), NewProp_ChargeParams_MetaData) }; // 391159578
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_TrackingParams = { "TrackingParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, TrackingParams), Z_Construct_UScriptStruct_FProjectileTrackingParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingParams_MetaData), NewProp_TrackingParams_MetaData) }; // 3805746939
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_CombustableParams = { "CombustableParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, CombustableParams), Z_Construct_UScriptStruct_FProjectileCombustableParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombustableParams_MetaData), NewProp_CombustableParams_MetaData) }; // 1650929171
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_ContinuousParams = { "ContinuousParams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileModifierSettings, ContinuousParams), Z_Construct_UScriptStruct_FProjectileContinuousParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuousParams_MetaData), NewProp_ContinuousParams_MetaData) }; // 3374649749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasHoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasBounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasReflectable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasScatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasMultiHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasContinuous,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_bHasCombustable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_HomingParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_BounceParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_ReflectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_MultiHitParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_ChargeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_TrackingParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_CombustableParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewProp_ContinuousParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileModifierSettings Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileModifierSettings",
	Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::PropPointers),
	sizeof(FProjectileModifierSettings),
	alignof(FProjectileModifierSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileModifierSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileModifierSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileModifierSettings.InnerSingleton, Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileModifierSettings.InnerSingleton);
}
// ********** End ScriptStruct FProjectileModifierSettings *****************************************

// ********** Begin ScriptStruct FProjectileSettings ***********************************************
struct Z_Construct_UScriptStruct_FProjectileSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DerivedMode_MetaData[] = {
		{ "Category", "Derived" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "DerivedMode != EProjectileEditorMode::Drop" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "ProjectileSettings" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Sequential" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSequentialOverride_MetaData[] = {
		{ "Category", "ProjectileSettings" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Sequential" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumProjectiles_MetaData[] = {
		{ "Category", "ProjectileSettings" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Sequential" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstSpreadAngle_MetaData[] = {
		{ "Category", "ProjectileSettings" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Burst" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstCount_MetaData[] = {
		{ "Category", "ProjectileSettings" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Burst" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamTime_MetaData[] = {
		{ "Category", "ProjectileSettings" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Beam" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[] = {
		{ "Category", "Projectile|Sequential" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Sequential" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadCount_MetaData[] = {
		{ "Category", "Projectile|Sequential" },
		{ "ClampMin", "1" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Sequential" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSphere_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Sequential || DerivedMode == EProjectileEditorMode::Burst || DerivedMode == EProjectileEditorMode::Spread" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "DerivedMode == EProjectileEditorMode::Sequential || DerivedMode == EProjectileEditorMode::Burst || DerivedMode == EProjectileEditorMode::Spread" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileSettings constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DerivedMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DerivedMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static void NewProp_bUseSequentialOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSequentialOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BurstSpreadAngle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BurstCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeamTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpreadCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileSettings constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileSettings;
class UScriptStruct* FProjectileSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileSettings, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileSettings Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DerivedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DerivedMode = { "DerivedMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, DerivedMode), Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DerivedMode_MetaData), NewProp_DerivedMode_MetaData) }; // 1053763528
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, LifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeTime_MetaData), NewProp_LifeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bUseSequentialOverride_SetBit(void* Obj)
{
	((FProjectileSettings*)Obj)->bUseSequentialOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bUseSequentialOverride = { "bUseSequentialOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSettings), &Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bUseSequentialOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSequentialOverride_MetaData), NewProp_bUseSequentialOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_NumProjectiles = { "NumProjectiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, NumProjectiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumProjectiles_MetaData), NewProp_NumProjectiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BurstSpreadAngle = { "BurstSpreadAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, BurstSpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstSpreadAngle_MetaData), NewProp_BurstSpreadAngle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BurstCount = { "BurstCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, BurstCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstCount_MetaData), NewProp_BurstCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BeamTime = { "BeamTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, BeamTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamTime_MetaData), NewProp_BeamTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, SpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngle_MetaData), NewProp_SpreadAngle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SpreadCount = { "SpreadCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, SpreadCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadCount_MetaData), NewProp_SpreadCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, DistanceToSphere), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToSphere_MetaData), NewProp_DistanceToSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSettings, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectileAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DerivedMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DerivedMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_bUseSequentialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_NumProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BurstSpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BurstCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_BeamTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SpreadCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_DistanceToSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileSettings Property Definitions ****************************
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
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileSettings.InnerSingleton);
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
	UFunction* Func = FindFunctionChecked(NAME_UProjectileAbility_OverrideSequentialShotRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ProjectileAbility_eventOverrideSequentialShotRotation_Parms Parms;
		Parms.ResolvedTags=ResolvedTags;
		Parms.SequentialShotParams=SequentialShotParams;
		Parms.OutRotation=OutRotation;
	ProcessEvent(Func,&Parms);
		OutRotation=Parms.OutRotation;
		return !!Parms.ReturnValue;
	}
	else
	{
		return OverrideSequentialShotRotation_Implementation(ResolvedTags, SequentialShotParams, OutRotation);
	}
}
struct Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function Overrides\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function Overrides" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequentialShotParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OverrideSequentialShotRotation constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequentialShotParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OverrideSequentialShotRotation constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OverrideSequentialShotRotation Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_ResolvedTags = { "ResolvedTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventOverrideSequentialShotRotation_Parms, ResolvedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedTags_MetaData), NewProp_ResolvedTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::NewProp_SequentialShotParams = { "SequentialShotParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventOverrideSequentialShotRotation_Parms, SequentialShotParams), Z_Construct_UScriptStruct_FSequentialShotParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequentialShotParams_MetaData), NewProp_SequentialShotParams_MetaData) }; // 3770178490
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
// ********** End Function OverrideSequentialShotRotation Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProjectileAbility, nullptr, "OverrideSequentialShotRotation", 	Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::PropPointers), 
sizeof(ProjectileAbility_eventOverrideSequentialShotRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation_Statics::Function_MetaDataParams)},  };
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
DEFINE_FUNCTION(UProjectileAbility::execOverrideSequentialShotRotation)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ResolvedTags);
	P_GET_STRUCT_REF(FSequentialShotParams,Z_Param_Out_SequentialShotParams);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverrideSequentialShotRotation_Implementation(Z_Param_Out_ResolvedTags,Z_Param_Out_SequentialShotParams,Z_Param_Out_OutRotation);
	P_NATIVE_END;
}
// ********** End Class UProjectileAbility Function OverrideSequentialShotRotation *****************

// ********** Begin Class UProjectileAbility Function SpawnProjectile ******************************
struct Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics
{
	struct ProjectileAbility_eventSpawnProjectile_Parms
	{
		FVector ProjectileTargetLocation;
		FGameplayTag SocketTag;
		AActor* TargetActor;
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

// ********** Begin Function SpawnProjectile constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileTargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnProjectile constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnProjectile Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation = { "ProjectileTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventSpawnProjectile_Parms, ProjectileTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileTargetLocation_MetaData), NewProp_ProjectileTargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventSpawnProjectile_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTag_MetaData), NewProp_SocketTag_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventSpawnProjectile_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers) < 2048);
// ********** End Function SpawnProjectile Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProjectileAbility, nullptr, "SpawnProjectile", 	Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::ProjectileAbility_eventSpawnProjectile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::Function_MetaDataParams)},  };
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
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile(Z_Param_Out_ProjectileTargetLocation,Z_Param_Out_SocketTag,Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UProjectileAbility Function SpawnProjectile ********************************

// ********** Begin Class UProjectileAbility *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileAbility;
UClass* UProjectileAbility::GetPrivateStaticClass()
{
	using TClass = UProjectileAbility;
	if (!Z_Registration_Info_UClass_UProjectileAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
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
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorMode_MetaData[] = {
		{ "Category", "Projectile|Editor" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCategoryTags_MetaData[] = {
		{ "Category", "ProjectileAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileConfig_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileModifierSettings_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentDropParams_MetaData[] = {
		{ "Category", "Projectile|Environment" },
		{ "EditCondition", "EditorMode == EProjectileEditorMode::Drop || EditorMode == EProjectileEditorMode::Erupt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileAbility constinit property declarations ***********************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EditorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorMode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileCategoryTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileModifierSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvironmentDropParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileAbility constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OverrideSequentialShotRotation"), .Pointer = &UProjectileAbility::execOverrideSequentialShotRotation },
		{ .NameUTF8 = UTF8TEXT("SpawnProjectile"), .Pointer = &UProjectileAbility::execSpawnProjectile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileAbility_OverrideSequentialShotRotation, "OverrideSequentialShotRotation" }, // 3042352347
		{ &Z_Construct_UFunction_UProjectileAbility_SpawnProjectile, "SpawnProjectile" }, // 4061857021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileAbility_Statics

// ********** Begin Class UProjectileAbility Property Definitions **********************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_EditorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_EditorMode = { "EditorMode", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, EditorMode), Z_Construct_UEnum_ProjectMimikyu_EProjectileEditorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorMode_MetaData), NewProp_EditorMode_MetaData) }; // 1053763528
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileCategoryTags = { "ProjectileCategoryTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, ProjectileCategoryTags), Z_Construct_UScriptStruct_FProjectileTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCategoryTags_MetaData), NewProp_ProjectileCategoryTags_MetaData) }; // 1026700561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileConfig = { "ProjectileConfig", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, ProjectileConfig), Z_Construct_UScriptStruct_FProjectileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileConfig_MetaData), NewProp_ProjectileConfig_MetaData) }; // 1679865952
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileModifierSettings = { "ProjectileModifierSettings", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, ProjectileModifierSettings), Z_Construct_UScriptStruct_FProjectileModifierSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileModifierSettings_MetaData), NewProp_ProjectileModifierSettings_MetaData) }; // 2465604123
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_EnvironmentDropParams = { "EnvironmentDropParams", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, EnvironmentDropParams), Z_Construct_UScriptStruct_FEnvironmentDropParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentDropParams_MetaData), NewProp_EnvironmentDropParams_MetaData) }; // 2639614269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileAbility_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_EditorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_EditorMode,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileCategoryTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileModifierSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_EnvironmentDropParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::PropPointers) < 2048);
// ********** End Class UProjectileAbility Property Definitions ************************************
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
void UProjectileAbility::StaticRegisterNativesUProjectileAbility()
{
	UClass* Class = UProjectileAbility::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UProjectileAbility_Statics::Funcs));
}
UClass* Z_Construct_UClass_UProjectileAbility()
{
	if (!Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton, Z_Construct_UClass_UProjectileAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton;
}
UProjectileAbility::UProjectileAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileAbility);
UProjectileAbility::~UProjectileAbility() {}
// ********** End Class UProjectileAbility *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileEditorMode_StaticEnum, TEXT("EProjectileEditorMode"), &Z_Registration_Info_UEnum_EProjectileEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1053763528U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileHomingParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileHomingParams_Statics::NewStructOps, TEXT("ProjectileHomingParams"),&Z_Registration_Info_UScriptStruct_FProjectileHomingParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileHomingParams), 1179354142U) },
		{ FProjectileBounceParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileBounceParams_Statics::NewStructOps, TEXT("ProjectileBounceParams"),&Z_Registration_Info_UScriptStruct_FProjectileBounceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileBounceParams), 3600473595U) },
		{ FProjectileReflectParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileReflectParams_Statics::NewStructOps, TEXT("ProjectileReflectParams"),&Z_Registration_Info_UScriptStruct_FProjectileReflectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileReflectParams), 2126087236U) },
		{ FProjectileMultiHitParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileMultiHitParams_Statics::NewStructOps, TEXT("ProjectileMultiHitParams"),&Z_Registration_Info_UScriptStruct_FProjectileMultiHitParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileMultiHitParams), 847561853U) },
		{ FProjectileChargeParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileChargeParams_Statics::NewStructOps, TEXT("ProjectileChargeParams"),&Z_Registration_Info_UScriptStruct_FProjectileChargeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileChargeParams), 391159578U) },
		{ FProjectileTrackingParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileTrackingParams_Statics::NewStructOps, TEXT("ProjectileTrackingParams"),&Z_Registration_Info_UScriptStruct_FProjectileTrackingParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileTrackingParams), 3805746939U) },
		{ FProjectileCombustableParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileCombustableParams_Statics::NewStructOps, TEXT("ProjectileCombustableParams"),&Z_Registration_Info_UScriptStruct_FProjectileCombustableParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileCombustableParams), 1650929171U) },
		{ FProjectileContinuousParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileContinuousParams_Statics::NewStructOps, TEXT("ProjectileContinuousParams"),&Z_Registration_Info_UScriptStruct_FProjectileContinuousParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileContinuousParams), 3374649749U) },
		{ FProjectileModifierSettings::StaticStruct, Z_Construct_UScriptStruct_FProjectileModifierSettings_Statics::NewStructOps, TEXT("ProjectileModifierSettings"),&Z_Registration_Info_UScriptStruct_FProjectileModifierSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileModifierSettings), 2465604123U) },
		{ FProjectileSettings::StaticStruct, Z_Construct_UScriptStruct_FProjectileSettings_Statics::NewStructOps, TEXT("ProjectileSettings"),&Z_Registration_Info_UScriptStruct_FProjectileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileSettings), 1679865952U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileAbility, UProjectileAbility::StaticClass, TEXT("UProjectileAbility"), &Z_Registration_Info_UClass_UProjectileAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileAbility), 2233153100U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_336546842{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
