// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "GameplayTagContainer.h"
#include "PokemonAbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonDamageGameplayAbilities() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonDamageGameplayAbilities Function CauseDamage *********************
struct Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics
{
	struct PokemonDamageGameplayAbilities_eventCauseDamage_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDamageGameplayAbilities_eventCauseDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDamageGameplayAbilities, nullptr, "CauseDamage", Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::PokemonDamageGameplayAbilities_eventCauseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::PokemonDamageGameplayAbilities_eventCauseDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDamageGameplayAbilities::execCauseDamage)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CauseDamage(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonDamageGameplayAbilities Function CauseDamage ***********************

// ********** Begin Class UPokemonDamageGameplayAbilities Function GetKeySequenceFromTag ***********
struct Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics
{
	struct PokemonDamageGameplayAbilities_eventGetKeySequenceFromTag_Parms
	{
		FGameplayTag AbilityTag;
		bool bLogNotFound;
		TArray<EDirectionPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bLogNotFound", "false" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDamageGameplayAbilities_eventGetKeySequenceFromTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 133831994
void Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((PokemonDamageGameplayAbilities_eventGetKeySequenceFromTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonDamageGameplayAbilities_eventGetKeySequenceFromTag_Parms), &Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(0, nullptr) }; // 639292680
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDamageGameplayAbilities_eventGetKeySequenceFromTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 639292680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDamageGameplayAbilities, nullptr, "GetKeySequenceFromTag", Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::PokemonDamageGameplayAbilities_eventGetKeySequenceFromTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::PokemonDamageGameplayAbilities_eventGetKeySequenceFromTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDamageGameplayAbilities::execGetKeySequenceFromTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EDirectionPoint>*)Z_Param__Result=P_THIS->GetKeySequenceFromTag(Z_Param_Out_AbilityTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// ********** End Class UPokemonDamageGameplayAbilities Function GetKeySequenceFromTag *************

// ********** Begin Class UPokemonDamageGameplayAbilities Function MakeDamageEffectParamsFromClassDefaults 
struct Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics
{
	struct PokemonDamageGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms
	{
		AActor* TargetActor;
		FDamageEffectParams ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_TargetActor", "None" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDamageGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDamageGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms, ReturnValue), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(0, nullptr) }; // 2727659433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDamageGameplayAbilities, nullptr, "MakeDamageEffectParamsFromClassDefaults", Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PokemonDamageGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PokemonDamageGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDamageGameplayAbilities::execMakeDamageEffectParamsFromClassDefaults)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDamageEffectParams*)Z_Param__Result=P_THIS->MakeDamageEffectParamsFromClassDefaults(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonDamageGameplayAbilities Function MakeDamageEffectParamsFromClassDefaults 

// ********** Begin Class UPokemonDamageGameplayAbilities ******************************************
void UPokemonDamageGameplayAbilities::StaticRegisterNativesUPokemonDamageGameplayAbilities()
{
	UClass* Class = UPokemonDamageGameplayAbilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CauseDamage", &UPokemonDamageGameplayAbilities::execCauseDamage },
		{ "GetKeySequenceFromTag", &UPokemonDamageGameplayAbilities::execGetKeySequenceFromTag },
		{ "MakeDamageEffectParamsFromClassDefaults", &UPokemonDamageGameplayAbilities::execMakeDamageEffectParamsFromClassDefaults },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities;
UClass* UPokemonDamageGameplayAbilities::GetPrivateStaticClass()
{
	using TClass = UPokemonDamageGameplayAbilities;
	if (!Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonDamageGameplayAbilities"),
			Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities.InnerSingleton,
			StaticRegisterNativesUPokemonDamageGameplayAbilities,
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
	return Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities_NoRegister()
{
	return UPokemonDamageGameplayAbilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTypeTag_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveType" },
		{ "Category", "PokemonDamageGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionTag_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveAction" },
		{ "Category", "PokemonDamageGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[] = {
		{ "Category", "PokemonDamageGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResponseTag_MetaData[] = {
		{ "Categories", "Damage.Response" },
		{ "Category", "PokemonDamageGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerPointCost_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdealRange_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffChance_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Debuffs */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debuffs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulseMagnitude_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForceMagnitude_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackChance_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveElementalType_MetaData[] = {
		{ "Category", "PokemonDamageGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeList_MetaData[] = {
		{ "Category", "PokemonDamageGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "PokemonDamageGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveTypeTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResponseTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerPointCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathImpulseMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForceMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackChance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveElementalType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveElementalType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpgradeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpgradeList;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonDamageGameplayAbilities_CauseDamage, "CauseDamage" }, // 4279831112
		{ &Z_Construct_UFunction_UPokemonDamageGameplayAbilities_GetKeySequenceFromTag, "GetKeySequenceFromTag" }, // 1709843078
		{ &Z_Construct_UFunction_UPokemonDamageGameplayAbilities_MakeDamageEffectParamsFromClassDefaults, "MakeDamageEffectParamsFromClassDefaults" }, // 1593770065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonDamageGameplayAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveTypeTag = { "MoveTypeTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, MoveTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTypeTag_MetaData), NewProp_MoveTypeTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveActionTag = { "MoveActionTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, MoveActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionTag_MetaData), NewProp_MoveActionTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTag_MetaData), NewProp_CooldownTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DamageResponseTag = { "DamageResponseTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, DamageResponseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResponseTag_MetaData), NewProp_DamageResponseTag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_PowerPointCost = { "PowerPointCost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, PowerPointCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerPointCost_MetaData), NewProp_PowerPointCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTime_MetaData), NewProp_CooldownTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_IdealRange = { "IdealRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, IdealRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdealRange_MetaData), NewProp_IdealRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffChance = { "DebuffChance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, DebuffChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffChance_MetaData), NewProp_DebuffChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDamage_MetaData), NewProp_DebuffDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffFrequency_MetaData), NewProp_DebuffFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDuration_MetaData), NewProp_DebuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DeathImpulseMagnitude = { "DeathImpulseMagnitude", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, DeathImpulseMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulseMagnitude_MetaData), NewProp_DeathImpulseMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_KnockbackForceMagnitude = { "KnockbackForceMagnitude", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, KnockbackForceMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForceMagnitude_MetaData), NewProp_KnockbackForceMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_KnockbackChance = { "KnockbackChance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, KnockbackChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackChance_MetaData), NewProp_KnockbackChance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveElementalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveElementalType = { "MoveElementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, MoveElementalType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveElementalType_MetaData), NewProp_MoveElementalType_MetaData) }; // 630780709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_UpgradeList_Inner = { "UpgradeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInputInfo, METADATA_PARAMS(0, nullptr) }; // 2294672350
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_UpgradeList = { "UpgradeList", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, UpgradeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeList_MetaData), NewProp_UpgradeList_MetaData) }; // 2294672350
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDamageGameplayAbilities, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveActionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DamageResponseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_PowerPointCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_CooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_IdealRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DebuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DeathImpulseMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_KnockbackForceMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_KnockbackChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveElementalType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_MoveElementalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_UpgradeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_UpgradeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::NewProp_DamageEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonGameplayAbilities,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::ClassParams = {
	&UPokemonDamageGameplayAbilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities()
{
	if (!Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities.OuterSingleton, Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities.OuterSingleton;
}
UPokemonDamageGameplayAbilities::UPokemonDamageGameplayAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonDamageGameplayAbilities);
UPokemonDamageGameplayAbilities::~UPokemonDamageGameplayAbilities() {}
// ********** End Class UPokemonDamageGameplayAbilities ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonDamageGameplayAbilities, UPokemonDamageGameplayAbilities::StaticClass, TEXT("UPokemonDamageGameplayAbilities"), &Z_Registration_Info_UClass_UPokemonDamageGameplayAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonDamageGameplayAbilities), 1589381934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h__Script_ProjectMimikyu_431962956(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
