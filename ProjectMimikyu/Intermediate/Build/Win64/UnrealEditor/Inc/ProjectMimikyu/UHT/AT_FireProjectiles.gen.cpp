// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AbilityTasks/AT_FireProjectiles.h"
#include "Characters/CharacterTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
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

// ********** Begin ScriptStruct FProjectileBaseParams *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileBaseParams;
class UScriptStruct* FProjectileBaseParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileBaseParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileBaseParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileBaseParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileBaseParams"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileBaseParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileBaseParams_Statics
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationId_MetaData[] = {
		{ "Category", "ProjectileBaseParams" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileBaseParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectContextHandle = { "DamageEffectContextHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, DamageEffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectContextHandle_MetaData), NewProp_DamageEffectContextHandle_MetaData) }; // 3810495857
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectParams_MetaData), NewProp_DamageEffectParams_MetaData) }; // 2727659433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_CategoryTags = { "CategoryTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, CategoryTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryTags_MetaData), NewProp_CategoryTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRotation_MetaData), NewProp_BaseRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileBaseParams, ActivationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationId_MetaData), NewProp_ActivationId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_CategoryTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_BaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewProp_ActivationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::PropPointers) < 2048);
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
	return Z_Registration_Info_UScriptStruct_FProjectileBaseParams.InnerSingleton;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeamDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBeam_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 3543477808
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireBeam", Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::AT_FireProjectiles_eventFireBeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireBeam_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireBurst_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 3543477808
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireBurst", Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::AT_FireProjectiles_eventFireBurst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireBurst_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvDropParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 3543477808
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_EnvDropParams = { "EnvDropParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, EnvDropParams), Z_Construct_UScriptStruct_FEnvironmentDropParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvDropParams_MetaData), NewProp_EnvDropParams_MetaData) }; // 55909144
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentDrop_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_EnvDropParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireEnvironmentDrop", Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::AT_FireProjectiles_eventFireEnvironmentDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvDropParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 3543477808
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_EnvDropParams = { "EnvDropParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, EnvDropParams), Z_Construct_UScriptStruct_FEnvironmentDropParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvDropParams_MetaData), NewProp_EnvDropParams_MetaData) }; // 55909144
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireEnvironmentErupt_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_EnvDropParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireEnvironmentErupt", Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::AT_FireProjectiles_eventFireEnvironmentErupt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt_Statics::Function_MetaDataParams)},  };
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
		FGameplayTagContainer CategoryTags;
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
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_BaseRotation", "" },
		{ "CPP_Default_BeamDuration", "0.000000" },
		{ "CPP_Default_CategoryTags", "()" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTags;
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
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_SpreadMode = { "SpreadMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, SpreadMode), Z_Construct_UEnum_ProjectMimikyu_EProjectileSpreadMode, METADATA_PARAMS(0, nullptr) }; // 924665453
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileAttack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectContextHandle = { "DamageEffectContextHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, DamageEffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3810495857
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(0, nullptr) }; // 2727659433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_CategoryTags = { "CategoryTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireProjectiles_Parms, CategoryTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 2104890724
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles_Statics::NewProp_CategoryTags,
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
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_CategoryTags);
	P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
	P_GET_STRUCT(FRotator,Z_Param_BaseRotation);
	P_GET_OBJECT(AActor,Z_Param_SourceActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfProjectiles);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeBetweenShots);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BeamDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_FireProjectiles**)Z_Param__Result=UAT_FireProjectiles::FireProjectiles(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EProjectileSpreadMode(Z_Param_SpreadMode),Z_Param_ProjectileClass,Z_Param_DamageEffectClass,Z_Param_DamageEffectContextHandle,Z_Param_DamageEffectParams,Z_Param_CategoryTags,Z_Param_SpawnLocation,Z_Param_BaseRotation,Z_Param_SourceActor,Z_Param_NumberOfProjectiles,Z_Param_TimeBetweenShots,Z_Param_SpreadAngle,Z_Param_BeamDuration);
	P_NATIVE_END;
}
// ********** End Class UAT_FireProjectiles Function FireProjectiles *******************************

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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSequential_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 3543477808
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireSequential", Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::AT_FireProjectiles_eventFireSequential_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireSequential_Statics::Function_MetaDataParams)},  };
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
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Fire Projectiles" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Common_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Common;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_Common = { "Common", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, Common), Z_Construct_UScriptStruct_FProjectileBaseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Common_MetaData), NewProp_Common_MetaData) }; // 3543477808
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventFireSingle_Parms, ReturnValue), Z_Construct_UClass_UAT_FireProjectiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_Common,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "FireSingle", Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::AT_FireProjectiles_eventFireSingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_FireSingle_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_FireProjectiles_eventGetActivationId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "GetActivationId", Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::AT_FireProjectiles_eventGetActivationId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleEnvironmentalDropBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP_Statics::Function_MetaDataParams)},  };
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_FireProjectiles, nullptr, "HandleEnvironmentalEruptBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP_Statics::Function_MetaDataParams)},  };
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
		{ "FireBeam", &UAT_FireProjectiles::execFireBeam },
		{ "FireBurst", &UAT_FireProjectiles::execFireBurst },
		{ "FireEnvironmentDrop", &UAT_FireProjectiles::execFireEnvironmentDrop },
		{ "FireEnvironmentErupt", &UAT_FireProjectiles::execFireEnvironmentErupt },
		{ "FireProjectiles", &UAT_FireProjectiles::execFireProjectiles },
		{ "FireSequential", &UAT_FireProjectiles::execFireSequential },
		{ "FireSingle", &UAT_FireProjectiles::execFireSingle },
		{ "GetActivationId", &UAT_FireProjectiles::execGetActivationId },
		{ "HandleBeamBP", &UAT_FireProjectiles::execHandleBeamBP },
		{ "HandleBurstBP", &UAT_FireProjectiles::execHandleBurstBP },
		{ "HandleEnvironmentalDropBP", &UAT_FireProjectiles::execHandleEnvironmentalDropBP },
		{ "HandleEnvironmentalEruptBP", &UAT_FireProjectiles::execHandleEnvironmentalEruptBP },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreatSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_FireProjectiles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThreatSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireBeam, "FireBeam" }, // 2049147538
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireBurst, "FireBurst" }, // 498608174
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentDrop, "FireEnvironmentDrop" }, // 742087319
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireEnvironmentErupt, "FireEnvironmentErupt" }, // 3709252491
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireProjectiles, "FireProjectiles" }, // 1820403907
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireSequential, "FireSequential" }, // 2366334326
		{ &Z_Construct_UFunction_UAT_FireProjectiles_FireSingle, "FireSingle" }, // 2027144418
		{ &Z_Construct_UFunction_UAT_FireProjectiles_GetActivationId, "GetActivationId" }, // 723447120
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleBeamBP, "HandleBeamBP" }, // 2620423820
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleBurstBP, "HandleBurstBP" }, // 2328951653
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalDropBP, "HandleEnvironmentalDropBP" }, // 2530604063
		{ &Z_Construct_UFunction_UAT_FireProjectiles_HandleEnvironmentalEruptBP, "HandleEnvironmentalEruptBP" }, // 2606943745
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_ThreatSubsystem = { "ThreatSubsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_FireProjectiles, ThreatSubsystem), Z_Construct_UClass_UThreatFieldSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreatSubsystem_MetaData), NewProp_ThreatSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_FireProjectiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_OnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_FireProjectiles_Statics::NewProp_ThreatSubsystem,
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
		{ EProjectileSpreadMode_StaticEnum, TEXT("EProjectileSpreadMode"), &Z_Registration_Info_UEnum_EProjectileSpreadMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 924665453U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileBaseParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileBaseParams_Statics::NewStructOps, TEXT("ProjectileBaseParams"), &Z_Registration_Info_UScriptStruct_FProjectileBaseParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileBaseParams), 3543477808U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAT_FireProjectiles, UAT_FireProjectiles::StaticClass, TEXT("UAT_FireProjectiles"), &Z_Registration_Info_UClass_UAT_FireProjectiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_FireProjectiles), 2524704754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_3938186815(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h__Script_ProjectMimikyu_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
