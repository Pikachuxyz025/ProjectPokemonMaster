// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonBaseAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEffectProperties *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FEffectProperties.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEffectProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAvatarActor_MetaData), NewProp_SourceAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceController_MetaData), NewProp_SourceController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCharacter_MetaData), NewProp_SourceCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAvatarActor_MetaData), NewProp_TargetAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetController_MetaData), NewProp_TargetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetASC_MetaData), NewProp_TargetASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"EffectProperties",
	Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
	sizeof(FEffectProperties),
	alignof(FEffectProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FEffectProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEffectProperties.InnerSingleton;
}
// ********** End ScriptStruct FEffectProperties ***************************************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_Attack ***************************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_Attack_Parms
	{
		FGameplayAttributeData OldAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack = { "OldAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Attack_Parms, OldAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttack_MetaData), NewProp_OldAttack_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Attack", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PokemonBaseAttributeSet_eventOnRep_Attack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PokemonBaseAttributeSet_eventOnRep_Attack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Attack)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Attack(Z_Param_Out_OldAttack);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_Attack *****************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_CurrentLevel *********************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_CurrentLevel_Parms
	{
		FGameplayAttributeData OldCurrentLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::NewProp_OldCurrentLevel = { "OldCurrentLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_CurrentLevel_Parms, OldCurrentLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentLevel_MetaData), NewProp_OldCurrentLevel_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::NewProp_OldCurrentLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_CurrentLevel", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::PokemonBaseAttributeSet_eventOnRep_CurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::PokemonBaseAttributeSet_eventOnRep_CurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_CurrentLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentLevel(Z_Param_Out_OldCurrentLevel);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_CurrentLevel ***********************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_Defense **************************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_Defense_Parms
	{
		FGameplayAttributeData OldDefense;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDefense_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDefense;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense = { "OldDefense", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Defense_Parms, OldDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDefense_MetaData), NewProp_OldDefense_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Defense", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PokemonBaseAttributeSet_eventOnRep_Defense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PokemonBaseAttributeSet_eventOnRep_Defense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Defense)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDefense);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Defense(Z_Param_Out_OldDefense);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_Defense ****************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_DodgeForce ***********************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_DodgeForce_Parms
	{
		FGameplayAttributeData OldDodgeForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDodgeForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDodgeForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::NewProp_OldDodgeForce = { "OldDodgeForce", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_DodgeForce_Parms, OldDodgeForce), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDodgeForce_MetaData), NewProp_OldDodgeForce_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::NewProp_OldDodgeForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_DodgeForce", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::PokemonBaseAttributeSet_eventOnRep_DodgeForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::PokemonBaseAttributeSet_eventOnRep_DodgeForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_DodgeForce)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDodgeForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DodgeForce(Z_Param_Out_OldDodgeForce);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_DodgeForce *************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_ExertionChance *******************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_ExertionChance_Parms
	{
		FGameplayAttributeData OldExertionChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldExertionChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldExertionChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::NewProp_OldExertionChance = { "OldExertionChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_ExertionChance_Parms, OldExertionChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldExertionChance_MetaData), NewProp_OldExertionChance_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::NewProp_OldExertionChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_ExertionChance", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::PokemonBaseAttributeSet_eventOnRep_ExertionChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::PokemonBaseAttributeSet_eventOnRep_ExertionChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_ExertionChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldExertionChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ExertionChance(Z_Param_Out_OldExertionChance);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_ExertionChance *********************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_FriendshipLevel ******************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_FriendshipLevel_Parms
	{
		FGameplayAttributeData OldFriendshipLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFriendshipLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFriendshipLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::NewProp_OldFriendshipLevel = { "OldFriendshipLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_FriendshipLevel_Parms, OldFriendshipLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFriendshipLevel_MetaData), NewProp_OldFriendshipLevel_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::NewProp_OldFriendshipLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_FriendshipLevel", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::PokemonBaseAttributeSet_eventOnRep_FriendshipLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::PokemonBaseAttributeSet_eventOnRep_FriendshipLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_FriendshipLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFriendshipLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FriendshipLevel(Z_Param_Out_OldFriendshipLevel);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_FriendshipLevel ********************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_Health ***************************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Health", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PokemonBaseAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PokemonBaseAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_Health *****************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_MaxHealth ************************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_MaxHealth", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PokemonBaseAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PokemonBaseAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_MaxHealth **************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_MaxPowerPoints *******************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_MaxPowerPoints_Parms
	{
		FGameplayAttributeData OldMaxPowerPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxPowerPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxPowerPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::NewProp_OldMaxPowerPoints = { "OldMaxPowerPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_MaxPowerPoints_Parms, OldMaxPowerPoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxPowerPoints_MetaData), NewProp_OldMaxPowerPoints_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::NewProp_OldMaxPowerPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_MaxPowerPoints", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::PokemonBaseAttributeSet_eventOnRep_MaxPowerPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::PokemonBaseAttributeSet_eventOnRep_MaxPowerPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_MaxPowerPoints)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxPowerPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxPowerPoints(Z_Param_Out_OldMaxPowerPoints);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_MaxPowerPoints *********************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_PowerPoints **********************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_PowerPoints_Parms
	{
		FGameplayAttributeData OldPowerPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPowerPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPowerPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::NewProp_OldPowerPoints = { "OldPowerPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_PowerPoints_Parms, OldPowerPoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPowerPoints_MetaData), NewProp_OldPowerPoints_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::NewProp_OldPowerPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_PowerPoints", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::PokemonBaseAttributeSet_eventOnRep_PowerPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::PokemonBaseAttributeSet_eventOnRep_PowerPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_PowerPoints)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPowerPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PowerPoints(Z_Param_Out_OldPowerPoints);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_PowerPoints ************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_SpecialAttack ********************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_SpecialAttack_Parms
	{
		FGameplayAttributeData Old_SpecialAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Old_SpecialAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Old_SpecialAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::NewProp_Old_SpecialAttack = { "Old_SpecialAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_SpecialAttack_Parms, Old_SpecialAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Old_SpecialAttack_MetaData), NewProp_Old_SpecialAttack_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::NewProp_Old_SpecialAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_SpecialAttack", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PokemonBaseAttributeSet_eventOnRep_SpecialAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PokemonBaseAttributeSet_eventOnRep_SpecialAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_SpecialAttack)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_Old_SpecialAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SpecialAttack(Z_Param_Out_Old_SpecialAttack);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_SpecialAttack **********************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_SpecialDefense *******************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_SpecialDefense_Parms
	{
		FGameplayAttributeData OldSpecialDefense;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpecialDefense_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpecialDefense;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::NewProp_OldSpecialDefense = { "OldSpecialDefense", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_SpecialDefense_Parms, OldSpecialDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpecialDefense_MetaData), NewProp_OldSpecialDefense_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::NewProp_OldSpecialDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_SpecialDefense", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PokemonBaseAttributeSet_eventOnRep_SpecialDefense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PokemonBaseAttributeSet_eventOnRep_SpecialDefense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_SpecialDefense)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpecialDefense);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SpecialDefense(Z_Param_Out_OldSpecialDefense);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_SpecialDefense *********************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_Speed ****************************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_Speed_Parms
	{
		FGameplayAttributeData OldSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed = { "OldSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Speed_Parms, OldSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpeed_MetaData), NewProp_OldSpeed_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Speed", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PokemonBaseAttributeSet_eventOnRep_Speed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PokemonBaseAttributeSet_eventOnRep_Speed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Speed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Speed(Z_Param_Out_OldSpeed);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_Speed ******************************

// ********** Begin Class UPokemonBaseAttributeSet Function OnRep_XP *******************************
struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics
{
	struct PokemonBaseAttributeSet_eventOnRep_XP_Parms
	{
		FGameplayAttributeData OldXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldXP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::NewProp_OldXP = { "OldXP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_XP_Parms, OldXP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldXP_MetaData), NewProp_OldXP_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::NewProp_OldXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_XP", Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::PokemonBaseAttributeSet_eventOnRep_XP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::PokemonBaseAttributeSet_eventOnRep_XP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_XP)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_XP(Z_Param_Out_OldXP);
	P_NATIVE_END;
}
// ********** End Class UPokemonBaseAttributeSet Function OnRep_XP *********************************

// ********** Begin Class UPokemonBaseAttributeSet *************************************************
void UPokemonBaseAttributeSet::StaticRegisterNativesUPokemonBaseAttributeSet()
{
	UClass* Class = UPokemonBaseAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Attack", &UPokemonBaseAttributeSet::execOnRep_Attack },
		{ "OnRep_CurrentLevel", &UPokemonBaseAttributeSet::execOnRep_CurrentLevel },
		{ "OnRep_Defense", &UPokemonBaseAttributeSet::execOnRep_Defense },
		{ "OnRep_DodgeForce", &UPokemonBaseAttributeSet::execOnRep_DodgeForce },
		{ "OnRep_ExertionChance", &UPokemonBaseAttributeSet::execOnRep_ExertionChance },
		{ "OnRep_FriendshipLevel", &UPokemonBaseAttributeSet::execOnRep_FriendshipLevel },
		{ "OnRep_Health", &UPokemonBaseAttributeSet::execOnRep_Health },
		{ "OnRep_MaxHealth", &UPokemonBaseAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxPowerPoints", &UPokemonBaseAttributeSet::execOnRep_MaxPowerPoints },
		{ "OnRep_PowerPoints", &UPokemonBaseAttributeSet::execOnRep_PowerPoints },
		{ "OnRep_SpecialAttack", &UPokemonBaseAttributeSet::execOnRep_SpecialAttack },
		{ "OnRep_SpecialDefense", &UPokemonBaseAttributeSet::execOnRep_SpecialDefense },
		{ "OnRep_Speed", &UPokemonBaseAttributeSet::execOnRep_Speed },
		{ "OnRep_XP", &UPokemonBaseAttributeSet::execOnRep_XP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonBaseAttributeSet;
UClass* UPokemonBaseAttributeSet::GetPrivateStaticClass()
{
	using TClass = UPokemonBaseAttributeSet;
	if (!Z_Registration_Info_UClass_UPokemonBaseAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonBaseAttributeSet"),
			Z_Registration_Info_UClass_UPokemonBaseAttributeSet.InnerSingleton,
			StaticRegisterNativesUPokemonBaseAttributeSet,
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
	return Z_Registration_Info_UClass_UPokemonBaseAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister()
{
	return UPokemonBaseAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonBaseAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/PokemonBaseAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerPoints_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPowerPoints_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialDefense_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAttack_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeForce_MetaData[] = {
		{ "Category", "Secondary Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendshipLevel_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExertionChance_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamage_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingXP_MetaData[] = {
		{ "Category", "Meta Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadOnly, Category = \"Meta Attributes\")\n//FGameplayAttributeData KnockbackForce;\n//ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, KnockbackForce);\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, Category = \"Meta Attributes\")\nFGameplayAttributeData KnockbackForce;\nATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, KnockbackForce);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PowerPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPowerPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialDefense;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialAttack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Defense;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DodgeForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendshipLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExertionChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack, "OnRep_Attack" }, // 397232739
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_CurrentLevel, "OnRep_CurrentLevel" }, // 2780968196
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense, "OnRep_Defense" }, // 297914084
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_DodgeForce, "OnRep_DodgeForce" }, // 3285263315
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_ExertionChance, "OnRep_ExertionChance" }, // 22585928
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_FriendshipLevel, "OnRep_FriendshipLevel" }, // 237183781
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health, "OnRep_Health" }, // 2074889925
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 937555091
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxPowerPoints, "OnRep_MaxPowerPoints" }, // 497563745
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_PowerPoints, "OnRep_PowerPoints" }, // 2996497116
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack, "OnRep_SpecialAttack" }, // 2081109250
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense, "OnRep_SpecialDefense" }, // 2085145042
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed, "OnRep_Speed" }, // 1158154403
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_XP, "OnRep_XP" }, // 532655883
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonBaseAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_PowerPoints = { "PowerPoints", "OnRep_PowerPoints", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, PowerPoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerPoints_MetaData), NewProp_PowerPoints_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxPowerPoints = { "MaxPowerPoints", "OnRep_MaxPowerPoints", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, MaxPowerPoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPowerPoints_MetaData), NewProp_MaxPowerPoints_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialDefense = { "SpecialDefense", "OnRep_SpecialDefense", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, SpecialDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialDefense_MetaData), NewProp_SpecialDefense_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialAttack = { "SpecialAttack", "OnRep_SpecialAttack", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, SpecialAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialAttack_MetaData), NewProp_SpecialAttack_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Attack = { "Attack", "OnRep_Attack", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Attack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attack_MetaData), NewProp_Attack_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Defense = { "Defense", "OnRep_Defense", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Defense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defense_MetaData), NewProp_Defense_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Speed = { "Speed", "OnRep_Speed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_DodgeForce = { "DodgeForce", "OnRep_DodgeForce", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, DodgeForce), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeForce_MetaData), NewProp_DodgeForce_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_XP = { "XP", "OnRep_XP", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, XP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_FriendshipLevel = { "FriendshipLevel", "OnRep_FriendshipLevel", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, FriendshipLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendshipLevel_MetaData), NewProp_FriendshipLevel_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_ExertionChance = { "ExertionChance", "OnRep_ExertionChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, ExertionChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExertionChance_MetaData), NewProp_ExertionChance_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_CurrentLevel = { "CurrentLevel", "OnRep_CurrentLevel", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, CurrentLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_IncomingDamage = { "IncomingDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, IncomingDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDamage_MetaData), NewProp_IncomingDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_IncomingXP = { "IncomingXP", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, IncomingXP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingXP_MetaData), NewProp_IncomingXP_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_PowerPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxPowerPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Defense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_DodgeForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_FriendshipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_ExertionChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_IncomingDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_IncomingXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::ClassParams = {
	&UPokemonBaseAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonBaseAttributeSet()
{
	if (!Z_Registration_Info_UClass_UPokemonBaseAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonBaseAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UPokemonBaseAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_PowerPoints(TEXT("PowerPoints"));
	static FName Name_MaxPowerPoints(TEXT("MaxPowerPoints"));
	static FName Name_SpecialDefense(TEXT("SpecialDefense"));
	static FName Name_SpecialAttack(TEXT("SpecialAttack"));
	static FName Name_Attack(TEXT("Attack"));
	static FName Name_Defense(TEXT("Defense"));
	static FName Name_Speed(TEXT("Speed"));
	static FName Name_DodgeForce(TEXT("DodgeForce"));
	static FName Name_XP(TEXT("XP"));
	static FName Name_FriendshipLevel(TEXT("FriendshipLevel"));
	static FName Name_ExertionChance(TEXT("ExertionChance"));
	static FName Name_CurrentLevel(TEXT("CurrentLevel"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_PowerPoints == ClassReps[(int32)ENetFields_Private::PowerPoints].Property->GetFName()
		&& Name_MaxPowerPoints == ClassReps[(int32)ENetFields_Private::MaxPowerPoints].Property->GetFName()
		&& Name_SpecialDefense == ClassReps[(int32)ENetFields_Private::SpecialDefense].Property->GetFName()
		&& Name_SpecialAttack == ClassReps[(int32)ENetFields_Private::SpecialAttack].Property->GetFName()
		&& Name_Attack == ClassReps[(int32)ENetFields_Private::Attack].Property->GetFName()
		&& Name_Defense == ClassReps[(int32)ENetFields_Private::Defense].Property->GetFName()
		&& Name_Speed == ClassReps[(int32)ENetFields_Private::Speed].Property->GetFName()
		&& Name_DodgeForce == ClassReps[(int32)ENetFields_Private::DodgeForce].Property->GetFName()
		&& Name_XP == ClassReps[(int32)ENetFields_Private::XP].Property->GetFName()
		&& Name_FriendshipLevel == ClassReps[(int32)ENetFields_Private::FriendshipLevel].Property->GetFName()
		&& Name_ExertionChance == ClassReps[(int32)ENetFields_Private::ExertionChance].Property->GetFName()
		&& Name_CurrentLevel == ClassReps[(int32)ENetFields_Private::CurrentLevel].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPokemonBaseAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonBaseAttributeSet);
UPokemonBaseAttributeSet::~UPokemonBaseAttributeSet() {}
// ********** End Class UPokemonBaseAttributeSet ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"), &Z_Registration_Info_UScriptStruct_FEffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 2165371132U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonBaseAttributeSet, UPokemonBaseAttributeSet::StaticClass, TEXT("UPokemonBaseAttributeSet"), &Z_Registration_Info_UClass_UPokemonBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonBaseAttributeSet), 1468684409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h__Script_ProjectMimikyu_2207503696(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
