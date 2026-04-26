// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonIncapacitationComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonIncapacitationComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonIncapacitationComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonIncapacitationComponent_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FActiveKnockbackState();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FKnockbackTuning();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPokemonIncapacitationState ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokemonIncapacitationState;
static UEnum* EPokemonIncapacitationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokemonIncapacitationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokemonIncapacitationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokemonIncapacitationState"));
	}
	return Z_Registration_Info_UEnum_EPokemonIncapacitationState.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonIncapacitationState>()
{
	return EPokemonIncapacitationState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIS_BeingReturned.DisplayName", "Being Returned" },
		{ "EIS_BeingReturned.Name", "EPokemonIncapacitationState::EIS_BeingReturned" },
		{ "EIS_ControlledRagdoll.DisplayName", "Controlled Ragdoll" },
		{ "EIS_ControlledRagdoll.Name", "EPokemonIncapacitationState::EIS_ControlledRagdoll" },
		{ "EIS_FaintedProne.DisplayName", "Fainted Prone" },
		{ "EIS_FaintedProne.Name", "EPokemonIncapacitationState::EIS_FaintedProne" },
		{ "EIS_Launched.DisplayName", "Launched" },
		{ "EIS_Launched.Name", "EPokemonIncapacitationState::EIS_Launched" },
		{ "EIS_None.DisplayName", "None" },
		{ "EIS_None.Name", "EPokemonIncapacitationState::EIS_None" },
		{ "EIS_Prone.DisplayName", "Prone" },
		{ "EIS_Prone.Name", "EPokemonIncapacitationState::EIS_Prone" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokemonIncapacitationState::EIS_None", (int64)EPokemonIncapacitationState::EIS_None },
		{ "EPokemonIncapacitationState::EIS_Launched", (int64)EPokemonIncapacitationState::EIS_Launched },
		{ "EPokemonIncapacitationState::EIS_ControlledRagdoll", (int64)EPokemonIncapacitationState::EIS_ControlledRagdoll },
		{ "EPokemonIncapacitationState::EIS_Prone", (int64)EPokemonIncapacitationState::EIS_Prone },
		{ "EPokemonIncapacitationState::EIS_FaintedProne", (int64)EPokemonIncapacitationState::EIS_FaintedProne },
		{ "EPokemonIncapacitationState::EIS_BeingReturned", (int64)EPokemonIncapacitationState::EIS_BeingReturned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokemonIncapacitationState",
	"EPokemonIncapacitationState",
	Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState()
{
	if (!Z_Registration_Info_UEnum_EPokemonIncapacitationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokemonIncapacitationState.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokemonIncapacitationState.InnerSingleton;
}
// ********** End Enum EPokemonIncapacitationState *************************************************

// ********** Begin ScriptStruct FKnockbackTuning **************************************************
struct Z_Construct_UScriptStruct_FKnockbackTuning_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FKnockbackTuning); }
	static inline consteval int16 GetStructAlignment() { return alignof(FKnockbackTuning); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchThreshold_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollThreshold_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceThreshold_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceVelocityMultiplier_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBounceCount_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRagdollDuration_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettleLinearSpeedThreshold_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettleAngularSpeedThreshold_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FKnockbackTuning constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceVelocityMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBounceCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRagdollDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SettleLinearSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SettleAngularSpeedThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FKnockbackTuning constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKnockbackTuning>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FKnockbackTuning_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKnockbackTuning;
class UScriptStruct* FKnockbackTuning::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKnockbackTuning.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKnockbackTuning.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKnockbackTuning, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("KnockbackTuning"));
	}
	return Z_Registration_Info_UScriptStruct_FKnockbackTuning.OuterSingleton;
	}

// ********** Begin ScriptStruct FKnockbackTuning Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_LaunchThreshold = { "LaunchThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, LaunchThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchThreshold_MetaData), NewProp_LaunchThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_RagdollThreshold = { "RagdollThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, RagdollThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollThreshold_MetaData), NewProp_RagdollThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_BounceThreshold = { "BounceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, BounceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceThreshold_MetaData), NewProp_BounceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_BounceVelocityMultiplier = { "BounceVelocityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, BounceVelocityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceVelocityMultiplier_MetaData), NewProp_BounceVelocityMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_MaxBounceCount = { "MaxBounceCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, MaxBounceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBounceCount_MetaData), NewProp_MaxBounceCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_MaxRagdollDuration = { "MaxRagdollDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, MaxRagdollDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRagdollDuration_MetaData), NewProp_MaxRagdollDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_SettleLinearSpeedThreshold = { "SettleLinearSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, SettleLinearSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettleLinearSpeedThreshold_MetaData), NewProp_SettleLinearSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_SettleAngularSpeedThreshold = { "SettleAngularSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKnockbackTuning, SettleAngularSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettleAngularSpeedThreshold_MetaData), NewProp_SettleAngularSpeedThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKnockbackTuning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_LaunchThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_RagdollThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_BounceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_BounceVelocityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_MaxBounceCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_MaxRagdollDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_SettleLinearSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewProp_SettleAngularSpeedThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKnockbackTuning_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FKnockbackTuning Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKnockbackTuning_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"KnockbackTuning",
	Z_Construct_UScriptStruct_FKnockbackTuning_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKnockbackTuning_Statics::PropPointers),
	sizeof(FKnockbackTuning),
	alignof(FKnockbackTuning),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKnockbackTuning_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKnockbackTuning_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKnockbackTuning()
{
	if (!Z_Registration_Info_UScriptStruct_FKnockbackTuning.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKnockbackTuning.InnerSingleton, Z_Construct_UScriptStruct_FKnockbackTuning_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FKnockbackTuning.InnerSingleton);
}
// ********** End ScriptStruct FKnockbackTuning ****************************************************

// ********** Begin ScriptStruct FActiveKnockbackState *********************************************
struct Z_Construct_UScriptStruct_FActiveKnockbackState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActiveKnockbackState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActiveKnockbackState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCauseFaint_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceRagdoll_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingFaintOnSettle_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingBounces_MetaData[] = {
		{ "Category", "Knockback" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActiveKnockbackState constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static void NewProp_bCanCauseFaint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCauseFaint;
	static void NewProp_bForceRagdoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRagdoll;
	static void NewProp_bPendingFaintOnSettle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingFaintOnSettle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingBounces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FActiveKnockbackState constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveKnockbackState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActiveKnockbackState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActiveKnockbackState;
class UScriptStruct* FActiveKnockbackState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveKnockbackState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActiveKnockbackState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveKnockbackState, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ActiveKnockbackState"));
	}
	return Z_Registration_Info_UScriptStruct_FActiveKnockbackState.OuterSingleton;
	}

// ********** Begin ScriptStruct FActiveKnockbackState Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveKnockbackState, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
void Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bCanCauseFaint_SetBit(void* Obj)
{
	((FActiveKnockbackState*)Obj)->bCanCauseFaint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bCanCauseFaint = { "bCanCauseFaint", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActiveKnockbackState), &Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bCanCauseFaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCauseFaint_MetaData), NewProp_bCanCauseFaint_MetaData) };
void Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bForceRagdoll_SetBit(void* Obj)
{
	((FActiveKnockbackState*)Obj)->bForceRagdoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bForceRagdoll = { "bForceRagdoll", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActiveKnockbackState), &Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bForceRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceRagdoll_MetaData), NewProp_bForceRagdoll_MetaData) };
void Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bPendingFaintOnSettle_SetBit(void* Obj)
{
	((FActiveKnockbackState*)Obj)->bPendingFaintOnSettle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bPendingFaintOnSettle = { "bPendingFaintOnSettle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActiveKnockbackState), &Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bPendingFaintOnSettle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingFaintOnSettle_MetaData), NewProp_bPendingFaintOnSettle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_RemainingBounces = { "RemainingBounces", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveKnockbackState, RemainingBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingBounces_MetaData), NewProp_RemainingBounces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_InitialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bCanCauseFaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bForceRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_bPendingFaintOnSettle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewProp_RemainingBounces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FActiveKnockbackState Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ActiveKnockbackState",
	Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::PropPointers),
	sizeof(FActiveKnockbackState),
	alignof(FActiveKnockbackState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveKnockbackState()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveKnockbackState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActiveKnockbackState.InnerSingleton, Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActiveKnockbackState.InnerSingleton);
}
// ********** End ScriptStruct FActiveKnockbackState ***********************************************

// ********** Begin Delegate FOnIncapacitationEvent ************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events for entering different incapacitation states\n// If used, only create one delegate and use each of these states as variables\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnProneEntered);\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFaintedProneEntered);\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControlledRagdollStarted);\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnManualReturnStarted);\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events for entering different incapacitation states\nIf used, only create one delegate and use each of these states as variables\nDECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnProneEntered);\nDECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFaintedProneEntered);\nDECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControlledRagdollStarted);\nDECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnManualReturnStarted);" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnIncapacitationEvent constinit property declarations ****************
// ********** End Delegate FOnIncapacitationEvent constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnIncapacitationEvent__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIncapacitationEvent_DelegateWrapper(const FMulticastScriptDelegate& OnIncapacitationEvent)
{
	OnIncapacitationEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnIncapacitationEvent **************************************************

// ********** Begin Class UPokemonIncapacitationComponent Function ApplyKnockback ******************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics
{
	struct PokemonIncapacitationComponent_eventApplyKnockback_Parms
	{
		FVector KnockbackVelocity;
		bool bCanCauseFaint;
		bool bForceRagdoll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "CPP_Default_bForceRagdoll", "false" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyKnockback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackVelocity;
	static void NewProp_bCanCauseFaint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCauseFaint;
	static void NewProp_bForceRagdoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRagdoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyKnockback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyKnockback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_KnockbackVelocity = { "KnockbackVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonIncapacitationComponent_eventApplyKnockback_Parms, KnockbackVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackVelocity_MetaData), NewProp_KnockbackVelocity_MetaData) };
void Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bCanCauseFaint_SetBit(void* Obj)
{
	((PokemonIncapacitationComponent_eventApplyKnockback_Parms*)Obj)->bCanCauseFaint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bCanCauseFaint = { "bCanCauseFaint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonIncapacitationComponent_eventApplyKnockback_Parms), &Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bCanCauseFaint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bForceRagdoll_SetBit(void* Obj)
{
	((PokemonIncapacitationComponent_eventApplyKnockback_Parms*)Obj)->bForceRagdoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bForceRagdoll = { "bForceRagdoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonIncapacitationComponent_eventApplyKnockback_Parms), &Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bForceRagdoll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_KnockbackVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bCanCauseFaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::NewProp_bForceRagdoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::PropPointers) < 2048);
// ********** End Function ApplyKnockback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "ApplyKnockback", 	Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::PokemonIncapacitationComponent_eventApplyKnockback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::PokemonIncapacitationComponent_eventApplyKnockback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execApplyKnockback)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_KnockbackVelocity);
	P_GET_UBOOL(Z_Param_bCanCauseFaint);
	P_GET_UBOOL(Z_Param_bForceRagdoll);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyKnockback(Z_Param_Out_KnockbackVelocity,Z_Param_bCanCauseFaint,Z_Param_bForceRagdoll);
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function ApplyKnockback ********************

// ********** Begin Class UPokemonIncapacitationComponent Function BeginManualReturn ***************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_BeginManualReturn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginManualReturn constinit property declarations *********************
// ********** End Function BeginManualReturn constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_BeginManualReturn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "BeginManualReturn", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_BeginManualReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_BeginManualReturn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_BeginManualReturn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_BeginManualReturn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execBeginManualReturn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginManualReturn();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function BeginManualReturn *****************

// ********** Begin Class UPokemonIncapacitationComponent Function CanBeReturned *******************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics
{
	struct PokemonIncapacitationComponent_eventCanBeReturned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanBeReturned constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanBeReturned constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanBeReturned Property Definitions ************************************
void Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonIncapacitationComponent_eventCanBeReturned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonIncapacitationComponent_eventCanBeReturned_Parms), &Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::PropPointers) < 2048);
// ********** End Function CanBeReturned Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "CanBeReturned", 	Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::PokemonIncapacitationComponent_eventCanBeReturned_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::PokemonIncapacitationComponent_eventCanBeReturned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execCanBeReturned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeReturned();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function CanBeReturned *********************

// ********** Begin Class UPokemonIncapacitationComponent Function EnterCollapsedFaint *************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterCollapsedFaint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnterCollapsedFaint constinit property declarations *******************
// ********** End Function EnterCollapsedFaint constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterCollapsedFaint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "EnterCollapsedFaint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterCollapsedFaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterCollapsedFaint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterCollapsedFaint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterCollapsedFaint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execEnterCollapsedFaint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterCollapsedFaint();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function EnterCollapsedFaint ***************

// ********** Begin Class UPokemonIncapacitationComponent Function EnterFaintedProneState **********
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterFaintedProneState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnterFaintedProneState constinit property declarations ****************
// ********** End Function EnterFaintedProneState constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterFaintedProneState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "EnterFaintedProneState", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterFaintedProneState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterFaintedProneState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterFaintedProneState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterFaintedProneState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execEnterFaintedProneState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterFaintedProneState();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function EnterFaintedProneState ************

// ********** Begin Class UPokemonIncapacitationComponent Function EnterProneState *****************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterProneState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnterProneState constinit property declarations ***********************
// ********** End Function EnterProneState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterProneState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "EnterProneState", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterProneState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterProneState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterProneState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterProneState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execEnterProneState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterProneState();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function EnterProneState *******************

// ********** Begin Class UPokemonIncapacitationComponent Function IsFaintedProne ******************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics
{
	struct PokemonIncapacitationComponent_eventIsFaintedProne_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFaintedProne constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFaintedProne constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFaintedProne Property Definitions ***********************************
void Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonIncapacitationComponent_eventIsFaintedProne_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonIncapacitationComponent_eventIsFaintedProne_Parms), &Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::PropPointers) < 2048);
// ********** End Function IsFaintedProne Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "IsFaintedProne", 	Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::PokemonIncapacitationComponent_eventIsFaintedProne_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::PokemonIncapacitationComponent_eventIsFaintedProne_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execIsFaintedProne)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFaintedProne();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function IsFaintedProne ********************

// ********** Begin Class UPokemonIncapacitationComponent Function IsInControlledRagdoll ***********
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics
{
	struct PokemonIncapacitationComponent_eventIsInControlledRagdoll_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInControlledRagdoll constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInControlledRagdoll constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInControlledRagdoll Property Definitions ****************************
void Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonIncapacitationComponent_eventIsInControlledRagdoll_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonIncapacitationComponent_eventIsInControlledRagdoll_Parms), &Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::PropPointers) < 2048);
// ********** End Function IsInControlledRagdoll Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "IsInControlledRagdoll", 	Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::PokemonIncapacitationComponent_eventIsInControlledRagdoll_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::PokemonIncapacitationComponent_eventIsInControlledRagdoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execIsInControlledRagdoll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInControlledRagdoll();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function IsInControlledRagdoll *************

// ********** Begin Class UPokemonIncapacitationComponent Function IsProne *************************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics
{
	struct PokemonIncapacitationComponent_eventIsProne_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsProne constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsProne constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsProne Property Definitions ******************************************
void Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonIncapacitationComponent_eventIsProne_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonIncapacitationComponent_eventIsProne_Parms), &Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::PropPointers) < 2048);
// ********** End Function IsProne Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "IsProne", 	Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::PokemonIncapacitationComponent_eventIsProne_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::PokemonIncapacitationComponent_eventIsProne_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execIsProne)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsProne();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function IsProne ***************************

// ********** Begin Class UPokemonIncapacitationComponent Function OnMeshPhysicsHit ****************
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics
{
	struct PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnMeshPhysicsHit constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnMeshPhysicsHit constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnMeshPhysicsHit Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::PropPointers) < 2048);
// ********** End Function OnMeshPhysicsHit Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "OnMeshPhysicsHit", 	Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::PokemonIncapacitationComponent_eventOnMeshPhysicsHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execOnMeshPhysicsHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeshPhysicsHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function OnMeshPhysicsHit ******************

// ********** Begin Class UPokemonIncapacitationComponent Function OnRagdollSafetyTimeout **********
struct Z_Construct_UFunction_UPokemonIncapacitationComponent_OnRagdollSafetyTimeout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRagdollSafetyTimeout constinit property declarations ****************
// ********** End Function OnRagdollSafetyTimeout constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonIncapacitationComponent_OnRagdollSafetyTimeout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonIncapacitationComponent, nullptr, "OnRagdollSafetyTimeout", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonIncapacitationComponent_OnRagdollSafetyTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonIncapacitationComponent_OnRagdollSafetyTimeout_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonIncapacitationComponent_OnRagdollSafetyTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonIncapacitationComponent_OnRagdollSafetyTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonIncapacitationComponent::execOnRagdollSafetyTimeout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRagdollSafetyTimeout();
	P_NATIVE_END;
}
// ********** End Class UPokemonIncapacitationComponent Function OnRagdollSafetyTimeout ************

// ********** Begin Class UPokemonIncapacitationComponent ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonIncapacitationComponent;
UClass* UPokemonIncapacitationComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonIncapacitationComponent;
	if (!Z_Registration_Info_UClass_UPokemonIncapacitationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonIncapacitationComponent"),
			Z_Registration_Info_UClass_UPokemonIncapacitationComponent.InnerSingleton,
			StaticRegisterNativesUPokemonIncapacitationComponent,
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
	return Z_Registration_Info_UClass_UPokemonIncapacitationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonIncapacitationComponent_NoRegister()
{
	return UPokemonIncapacitationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonIncapacitationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/PokemonIncapacitationComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProneEntered_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFaintedProneEntered_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControlledRagdollStarted_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManualReturnStarted_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackTuning_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveKnockbackState_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncapacitationState_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsProne_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFaintedProne_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeReturned_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBindMeshHitEvent_MetaData[] = {
		{ "Category", "Pokemon|Incapacitation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonIncapacitationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonIncapacitationComponent constinit property declarations **********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProneEntered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFaintedProneEntered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControlledRagdollStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManualReturnStarted;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PokemonOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackTuning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveKnockbackState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IncapacitationState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IncapacitationState;
	static void NewProp_bIsProne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProne;
	static void NewProp_bIsFaintedProne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFaintedProne;
	static void NewProp_bCanBeReturned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeReturned;
	static void NewProp_bAutoBindMeshHitEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBindMeshHitEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonIncapacitationComponent constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyKnockback"), .Pointer = &UPokemonIncapacitationComponent::execApplyKnockback },
		{ .NameUTF8 = UTF8TEXT("BeginManualReturn"), .Pointer = &UPokemonIncapacitationComponent::execBeginManualReturn },
		{ .NameUTF8 = UTF8TEXT("CanBeReturned"), .Pointer = &UPokemonIncapacitationComponent::execCanBeReturned },
		{ .NameUTF8 = UTF8TEXT("EnterCollapsedFaint"), .Pointer = &UPokemonIncapacitationComponent::execEnterCollapsedFaint },
		{ .NameUTF8 = UTF8TEXT("EnterFaintedProneState"), .Pointer = &UPokemonIncapacitationComponent::execEnterFaintedProneState },
		{ .NameUTF8 = UTF8TEXT("EnterProneState"), .Pointer = &UPokemonIncapacitationComponent::execEnterProneState },
		{ .NameUTF8 = UTF8TEXT("IsFaintedProne"), .Pointer = &UPokemonIncapacitationComponent::execIsFaintedProne },
		{ .NameUTF8 = UTF8TEXT("IsInControlledRagdoll"), .Pointer = &UPokemonIncapacitationComponent::execIsInControlledRagdoll },
		{ .NameUTF8 = UTF8TEXT("IsProne"), .Pointer = &UPokemonIncapacitationComponent::execIsProne },
		{ .NameUTF8 = UTF8TEXT("OnMeshPhysicsHit"), .Pointer = &UPokemonIncapacitationComponent::execOnMeshPhysicsHit },
		{ .NameUTF8 = UTF8TEXT("OnRagdollSafetyTimeout"), .Pointer = &UPokemonIncapacitationComponent::execOnRagdollSafetyTimeout },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_ApplyKnockback, "ApplyKnockback" }, // 3032625738
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_BeginManualReturn, "BeginManualReturn" }, // 3041835458
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_CanBeReturned, "CanBeReturned" }, // 48312327
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterCollapsedFaint, "EnterCollapsedFaint" }, // 2698802183
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterFaintedProneState, "EnterFaintedProneState" }, // 3392357616
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_EnterProneState, "EnterProneState" }, // 1572542536
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_IsFaintedProne, "IsFaintedProne" }, // 645235249
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_IsInControlledRagdoll, "IsInControlledRagdoll" }, // 140211291
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_IsProne, "IsProne" }, // 3414453994
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_OnMeshPhysicsHit, "OnMeshPhysicsHit" }, // 3323290535
		{ &Z_Construct_UFunction_UPokemonIncapacitationComponent_OnRagdollSafetyTimeout, "OnRagdollSafetyTimeout" }, // 1367293145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonIncapacitationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonIncapacitationComponent_Statics

// ********** Begin Class UPokemonIncapacitationComponent Property Definitions *********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnProneEntered = { "OnProneEntered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, OnProneEntered), Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProneEntered_MetaData), NewProp_OnProneEntered_MetaData) }; // 495310136
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnFaintedProneEntered = { "OnFaintedProneEntered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, OnFaintedProneEntered), Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFaintedProneEntered_MetaData), NewProp_OnFaintedProneEntered_MetaData) }; // 495310136
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnControlledRagdollStarted = { "OnControlledRagdollStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, OnControlledRagdollStarted), Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControlledRagdollStarted_MetaData), NewProp_OnControlledRagdollStarted_MetaData) }; // 495310136
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnManualReturnStarted = { "OnManualReturnStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, OnManualReturnStarted), Z_Construct_UDelegateFunction_ProjectMimikyu_OnIncapacitationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManualReturnStarted_MetaData), NewProp_OnManualReturnStarted_MetaData) }; // 495310136
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_PokemonOwner = { "PokemonOwner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, PokemonOwner), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonOwner_MetaData), NewProp_PokemonOwner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_KnockbackTuning = { "KnockbackTuning", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, KnockbackTuning), Z_Construct_UScriptStruct_FKnockbackTuning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackTuning_MetaData), NewProp_KnockbackTuning_MetaData) }; // 425523976
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_ActiveKnockbackState = { "ActiveKnockbackState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, ActiveKnockbackState), Z_Construct_UScriptStruct_FActiveKnockbackState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveKnockbackState_MetaData), NewProp_ActiveKnockbackState_MetaData) }; // 2848586431
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_IncapacitationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_IncapacitationState = { "IncapacitationState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonIncapacitationComponent, IncapacitationState), Z_Construct_UEnum_ProjectMimikyu_EPokemonIncapacitationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncapacitationState_MetaData), NewProp_IncapacitationState_MetaData) }; // 1737006129
void Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsProne_SetBit(void* Obj)
{
	((UPokemonIncapacitationComponent*)Obj)->bIsProne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsProne = { "bIsProne", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonIncapacitationComponent), &Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsProne_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsProne_MetaData), NewProp_bIsProne_MetaData) };
void Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsFaintedProne_SetBit(void* Obj)
{
	((UPokemonIncapacitationComponent*)Obj)->bIsFaintedProne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsFaintedProne = { "bIsFaintedProne", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonIncapacitationComponent), &Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsFaintedProne_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFaintedProne_MetaData), NewProp_bIsFaintedProne_MetaData) };
void Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bCanBeReturned_SetBit(void* Obj)
{
	((UPokemonIncapacitationComponent*)Obj)->bCanBeReturned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bCanBeReturned = { "bCanBeReturned", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonIncapacitationComponent), &Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bCanBeReturned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeReturned_MetaData), NewProp_bCanBeReturned_MetaData) };
void Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bAutoBindMeshHitEvent_SetBit(void* Obj)
{
	((UPokemonIncapacitationComponent*)Obj)->bAutoBindMeshHitEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bAutoBindMeshHitEvent = { "bAutoBindMeshHitEvent", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonIncapacitationComponent), &Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bAutoBindMeshHitEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBindMeshHitEvent_MetaData), NewProp_bAutoBindMeshHitEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnProneEntered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnFaintedProneEntered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnControlledRagdollStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_OnManualReturnStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_PokemonOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_KnockbackTuning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_ActiveKnockbackState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_IncapacitationState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_IncapacitationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsProne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bIsFaintedProne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bCanBeReturned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::NewProp_bAutoBindMeshHitEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokemonIncapacitationComponent Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::ClassParams = {
	&UPokemonIncapacitationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::Class_MetaDataParams)
};
void UPokemonIncapacitationComponent::StaticRegisterNativesUPokemonIncapacitationComponent()
{
	UClass* Class = UPokemonIncapacitationComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonIncapacitationComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonIncapacitationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonIncapacitationComponent.OuterSingleton, Z_Construct_UClass_UPokemonIncapacitationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonIncapacitationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonIncapacitationComponent);
UPokemonIncapacitationComponent::~UPokemonIncapacitationComponent() {}
// ********** End Class UPokemonIncapacitationComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPokemonIncapacitationState_StaticEnum, TEXT("EPokemonIncapacitationState"), &Z_Registration_Info_UEnum_EPokemonIncapacitationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1737006129U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKnockbackTuning::StaticStruct, Z_Construct_UScriptStruct_FKnockbackTuning_Statics::NewStructOps, TEXT("KnockbackTuning"),&Z_Registration_Info_UScriptStruct_FKnockbackTuning, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKnockbackTuning), 425523976U) },
		{ FActiveKnockbackState::StaticStruct, Z_Construct_UScriptStruct_FActiveKnockbackState_Statics::NewStructOps, TEXT("ActiveKnockbackState"),&Z_Registration_Info_UScriptStruct_FActiveKnockbackState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveKnockbackState), 2848586431U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonIncapacitationComponent, UPokemonIncapacitationComponent::StaticClass, TEXT("UPokemonIncapacitationComponent"), &Z_Registration_Info_UClass_UPokemonIncapacitationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonIncapacitationComponent), 2075998510U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_2938808140{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
