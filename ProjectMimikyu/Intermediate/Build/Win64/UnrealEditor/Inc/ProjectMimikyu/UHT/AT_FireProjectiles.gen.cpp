// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AbilityTasks/AT_FireProjectiles.h"
#include "GameplayEffectTypes.h"
#include "PokemonAbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAT_FireProjectiles() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectileAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_FireProjectiles();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_FireProjectiles_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
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
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EProjectileSpreadMode>()
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
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
		{ "Sequential.DisplayName", "Sequential" },
		{ "Sequential.Name", "EProjectileSpreadMode::Sequential" },
		{ "SingleShot.DisplayName", "SingleShot" },
		{ "SingleShot.Name", "EProjectileSpreadMode::SingleShot" },
		{ "Spread.DisplayName", "Spread" },
		{ "Spread.Name", "EProjectileSpreadMode::Spread" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileSpreadMode::SingleShot", (int64)EProjectileSpreadMode::SingleShot },
		{ "EProjectileSpreadMode::Burst", (int64)EProjectileSpreadMode::Burst },
		{ "EProjectileSpreadMode::Spread", (int64)EProjectileSpreadMode::Spread },
		{ "EProjectileSpreadMode::Sequential", (int64)EProjectileSpreadMode::Sequential },
		{ "EProjectileSpreadMode::Beam", (int64)EProjectileSpreadMode::Beam },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
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

// ********** Begin Delegate FOnFireProjectileFinished *********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnFireProjectileFinished__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature_Statics::Function_MetaDataParams)},  };
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

// ********** Begin Class UAT_FireProjectiles Function FireProjectiles *****************************
struct Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics
{
	struct AT_FireProjectiles_eventFireProjectiles_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		EProjectileSpreadMode SpreadMode;
		TSubclassOf<AProjectileAttack> ProjectileClass;
		TSubclassOf<UGameplayEffect> DamageEffectClass;
		FGameplayEffectContextHandle DamageEffectContextHandle;
		FDamageEffectParams DamageEffectParams;
		int32 AbilityLevel;
		FVector SpawnLocation;
		FRotator BaseRotation;
		AActor* SourceActor;
		int32 NumberOfProjectiles;
		float TimeBetweenShots;
		float SpreadAngle;
		float BeamDuration;
		UAT_FireProjectiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_AbilityLevel", "1" },
		{ "CPP_Default_BaseRotation", "" },
		{ "CPP_Default_BeamDuration", "0.000000" },
		{ "CPP_Default_DamageEffectClass", "None" },
		{ "CPP_Default_DamageEffectContextHandle", "()" },
		{ "CPP_Default_DamageEffectParams", "()" },
		{ "CPP_Default_NumberOfProjectiles", "1" },
		{ "CPP_Default_ProjectileClass", "None" },
		{ "CPP_Default_SourceActor", "None" },
		{ "CPP_Default_SpawnLocation", "" },
		{ "CPP_Default_SpreadAngle", "0.000000" },
		{ "CPP_Default_SpreadMode", "SingleShot" },
		{ "CPP_Default_TimeBetweenShots", "0.100000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpreadMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpreadMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeamDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpreadMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpreadMode = { "SpreadMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, SpreadMode), Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode, METADATA_PARAMS(0, nullptr) }; // 290395390
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileAttack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectContextHandle = { "DamageEffectContextHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, DamageEffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3810495857
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(0, nullptr) }; // 2727659433
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_NumberOfProjectiles = { "NumberOfProjectiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, NumberOfProjectiles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, TimeBetweenShots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, SpreadAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_BeamDuration = { "BeamDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, BeamDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpreadMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpreadMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_BaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_NumberOfProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_TimeBetweenShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_BeamDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireProjectiles", Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::AT_FireProjectiles_eventFireProjectiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::AT_FireProjectiles_eventFireProjectiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_FireProjectiles::execFireProjectiles)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_ENUM(EProjectileSpreadMode,Z_Param_SpreadMode);
	P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
	P_GET_OBJECT(UClass,Z_Param_DamageEffectClass);
	P_GET_STRUCT(FGameplayEffectContextHandle,Z_Param_DamageEffectContextHandle);
	P_GET_STRUCT(FDamageEffectParams,Z_Param_DamageEffectParams);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
	P_GET_STRUCT(FRotator,Z_Param_BaseRotation);
	P_GET_OBJECT(AActor,Z_Param_SourceActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfProjectiles);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeBetweenShots);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BeamDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireProjectiles(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EProjectileSpreadMode(Z_Param_SpreadMode),Z_Param_ProjectileClass,Z_Param_DamageEffectClass,Z_Param_DamageEffectContextHandle,Z_Param_DamageEffectParams,Z_Param_AbilityLevel,Z_Param_SpawnLocation,Z_Param_BaseRotation,Z_Param_SourceActor,Z_Param_NumberOfProjectiles,Z_Param_TimeBetweenShots,Z_Param_SpreadAngle,Z_Param_BeamDuration);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireProjectiles *******************************

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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleBeamBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleBurstBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleSequentialBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleSingleShotBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleSpreadBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP_Statics::Function_MetaDataParams)},  };
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

// ********** Begin Class UAT_FireProjectiles ******************************************************
void UAT_FireProjectiles::StaticRegisterNativesUAT_FireProjectiles()
{
	UClass* Class = UAT_FireProjectiles::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FireProjectiles", &UAT_FireProjectiles::execFireProjectiles },
		{ "HandleBeamBP", &UAT_FireProjectiles::execHandleBeamBP },
		{ "HandleBurstBP", &UAT_FireProjectiles::execHandleBurstBP },
		{ "HandleSequentialBP", &UAT_FireProjectiles::execHandleSequentialBP },
		{ "HandleSingleShotBP", &UAT_FireProjectiles::execHandleSingleShotBP },
		{ "HandleSpreadBP", &UAT_FireProjectiles::execHandleSpreadBP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAT_FireProjectiles;
UClass* UAT_FireProjectiles::GetPrivateStaticClass()
{
	using TClass = UAT_FireProjectiles;
	if (!Z_Registration_Info_UClass_UAT_FireProjectiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles, "FireProjectiles" }, // 2511294436
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP, "HandleBeamBP" }, // 2620423820
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP, "HandleBurstBP" }, // 2328951653
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleSequentialBP, "HandleSequentialBP" }, // 1070405440
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleSingleShotBP, "HandleSingleShotBP" }, // 1970231405
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleSpreadBP, "HandleSpreadBP" }, // 2463077270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAT_FireProjectiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_FireProjectiles, OnFinished), Z_Construct_UDelegateFunction_ProjectMimikyu_OnFireProjectileFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 164146824
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_FireProjectiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_OnFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_FireProjectiles_Statics::PropPointers) < 2048);
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
UClass* Z_Construct_UClass_UAT_FireProjectiles()
{
	if (!Z_Registration_Info_UClass_UAT_FireProjectiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAT_FireProjectiles.OuterSingleton, Z_Construct_UClass_UAT_FireProjectiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAT_FireProjectiles.OuterSingleton;
}
UAT_FireProjectiles::UAT_FireProjectiles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAT_FireProjectiles);
UAT_FireProjectiles::~UAT_FireProjectiles() {}
// ********** End Class UAT_FireProjectiles ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileSpreadMode_StaticEnum, TEXT("EProjectileSpreadMode"), &Z_Registration_Info_UEnum_EProjectileSpreadMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 290395390U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAT_FireProjectiles, UAT_FireProjectiles::StaticClass, TEXT("UAT_FireProjectiles"), &Z_Registration_Info_UClass_UAT_FireProjectiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_FireProjectiles), 2315691478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_2214658447(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
