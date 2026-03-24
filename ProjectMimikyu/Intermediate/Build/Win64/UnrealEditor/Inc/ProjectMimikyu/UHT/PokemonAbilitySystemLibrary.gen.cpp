// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "Characters/CharacterTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "PokemonAbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonAbilitySystemLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonTypeInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonAbilitySystemLibrary Function ActivateAbilityByTag ***************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics
{
	struct PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms
	{
		const UObject* WorldContextObject;
		UPokemonAbilitySystemComponent* ASC;
		FGameplayTag AbilityTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|AbilitySystemCalls" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateAbilityByTag constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateAbilityByTag constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateAbilityByTag Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, ASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_AbilityTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers) < 2048);
// ********** End Function ActivateAbilityByTag Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "ActivateAbilityByTag", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execActivateAbilityByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPokemonAbilitySystemComponent,Z_Param_ASC);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::ActivateAbilityByTag(Z_Param_WorldContextObject,Z_Param_ASC,Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function ActivateAbilityByTag *****************

// ********** Begin Class UPokemonAbilitySystemLibrary Function ApplyDamageEffect ******************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics
{
	struct PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms
	{
		FDamageEffectParams DamageEffectParams;
		FGameplayEffectContextHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyDamageEffect constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyDamageEffect constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyDamageEffect Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectParams_MetaData), NewProp_DamageEffectParams_MetaData) }; // 1458391438
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers) < 2048);
// ********** End Function ApplyDamageEffect Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "ApplyDamageEffect", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execApplyDamageEffect)
{
	P_GET_STRUCT_REF(FDamageEffectParams,Z_Param_Out_DamageEffectParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectContextHandle*)Z_Param__Result=UPokemonAbilitySystemLibrary::ApplyDamageEffect(Z_Param_Out_DamageEffectParams);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function ApplyDamageEffect ********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetCurrentXPPercentage *************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetCurrentXPPercentage_Parms
	{
		const UObject* WorldContextObject;
		FPokemonInfo PokemonData;
		int32 XPRemaining;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|WidgetController" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentXPPercentage constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XPRemaining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentXPPercentage constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentXPPercentage Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetCurrentXPPercentage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_PokemonData = { "PokemonData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetCurrentXPPercentage_Parms, PokemonData), Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonData_MetaData), NewProp_PokemonData_MetaData) }; // 1637346323
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_XPRemaining = { "XPRemaining", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetCurrentXPPercentage_Parms, XPRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetCurrentXPPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_PokemonData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_XPRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentXPPercentage Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetCurrentXPPercentage", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::PokemonAbilitySystemLibrary_eventGetCurrentXPPercentage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::PokemonAbilitySystemLibrary_eventGetCurrentXPPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetCurrentXPPercentage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPokemonInfo,Z_Param_PokemonData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_XPRemaining);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetCurrentXPPercentage(Z_Param_WorldContextObject,Z_Param_PokemonData,Z_Param_Out_XPRemaining);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetCurrentXPPercentage ***************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetDamageType **********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetDamageType_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDamageType constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDamageType constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDamageType Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDamageType_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDamageType_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers) < 2048);
// ********** End Function GetDamageType Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDamageType", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PokemonAbilitySystemLibrary_eventGetDamageType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PokemonAbilitySystemLibrary_eventGetDamageType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDamageType)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDamageType(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetDamageType ************************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetDeathImpulse ********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDeathImpulse constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDeathImpulse constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDeathImpulse Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers) < 2048);
// ********** End Function GetDeathImpulse Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDeathImpulse", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDeathImpulse)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDeathImpulse(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetDeathImpulse **********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetDebuffDamage ********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDebuffDamage constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDebuffDamage constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDebuffDamage Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers) < 2048);
// ********** End Function GetDebuffDamage Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDebuffDamage", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDebuffDamage)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDebuffDamage(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetDebuffDamage **********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetDebuffDuration ******************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDebuffDuration constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDebuffDuration constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDebuffDuration Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers) < 2048);
// ********** End Function GetDebuffDuration Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDebuffDuration", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDebuffDuration)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDebuffDuration(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetDebuffDuration ********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetDebuffFrequency *****************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDebuffFrequency constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDebuffFrequency constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDebuffFrequency Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers) < 2048);
// ********** End Function GetDebuffFrequency Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDebuffFrequency", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDebuffFrequency)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDebuffFrequency(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetDebuffFrequency *******************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetKnockbackForce ******************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetKnockbackForce constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKnockbackForce constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKnockbackForce Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers) < 2048);
// ********** End Function GetKnockbackForce Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetKnockbackForce", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetKnockbackForce)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetKnockbackForce(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetKnockbackForce ********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetLivePlayersWithinRadius *********
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms
	{
		const UObject* WorldContextObject;
		TArray<AActor*> OutOverlappingActors;
		TArray<AActor*> ActorsToIgnore;
		float Radius;
		FVector SphereOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayMechanics" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLivePlayersWithinRadius constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutOverlappingActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOverlappingActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLivePlayersWithinRadius constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLivePlayersWithinRadius Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors_Inner = { "OutOverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors = { "OutOverlappingActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, OutOverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_SphereOrigin = { "SphereOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereOrigin_MetaData), NewProp_SphereOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_SphereOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PropPointers) < 2048);
// ********** End Function GetLivePlayersWithinRadius Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetLivePlayersWithinRadius", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PokemonAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetLivePlayersWithinRadius)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutOverlappingActors);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SphereOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::GetLivePlayersWithinRadius(Z_Param_WorldContextObject,Z_Param_Out_OutOverlappingActors,Z_Param_Out_ActorsToIgnore,Z_Param_Radius,Z_Param_Out_SphereOrigin);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetLivePlayersWithinRadius ***********

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetPokemonMenuWidgetController *****
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms
	{
		AActor* ObjectActor;
		UPokemonMenuWidgetController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokemonMenuWidgetController constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokemonMenuWidgetController constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokemonMenuWidgetController Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ObjectActor = { "ObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms, ObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms, ReturnValue), Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ObjectActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers) < 2048);
// ********** End Function GetPokemonMenuWidgetController Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetPokemonMenuWidgetController", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetPokemonMenuWidgetController)
{
	P_GET_OBJECT(AActor,Z_Param_ObjectActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPokemonMenuWidgetController**)Z_Param__Result=UPokemonAbilitySystemLibrary::GetPokemonMenuWidgetController(Z_Param_ObjectActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetPokemonMenuWidgetController *******

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetSavedTypeMatchup ****************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|PokemonTypes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSavedTypeMatchup constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSavedTypeMatchup constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSavedTypeMatchup Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers) < 2048);
// ********** End Function GetSavedTypeMatchup Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetSavedTypeMatchup", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetSavedTypeMatchup)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetSavedTypeMatchup(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetSavedTypeMatchup ******************

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetTrainerOverlayWidgetController **
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms
	{
		AActor* ObjectActor;
		UTrainerOverlayWidgetController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTrainerOverlayWidgetController constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTrainerOverlayWidgetController constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTrainerOverlayWidgetController Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ObjectActor = { "ObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms, ObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ObjectActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers) < 2048);
// ********** End Function GetTrainerOverlayWidgetController Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetTrainerOverlayWidgetController", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetTrainerOverlayWidgetController)
{
	P_GET_OBJECT(AActor,Z_Param_ObjectActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTrainerOverlayWidgetController**)Z_Param__Result=UPokemonAbilitySystemLibrary::GetTrainerOverlayWidgetController(Z_Param_ObjectActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetTrainerOverlayWidgetController ****

// ********** Begin Class UPokemonAbilitySystemLibrary Function GetTypeMatchup *********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics
{
	struct PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms
	{
		const UObject* WorldContextObject;
		EElementalType AttackingType;
		FPokemonTypeInfo TargetPokemonTypes;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|PokemonTypes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPokemonTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTypeMatchup constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackingType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPokemonTypes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTypeMatchup constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTypeMatchup Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType = { "AttackingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, AttackingType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(0, nullptr) }; // 1457640518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_TargetPokemonTypes = { "TargetPokemonTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, TargetPokemonTypes), Z_Construct_UScriptStruct_FPokemonTypeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPokemonTypes_MetaData), NewProp_TargetPokemonTypes_MetaData) }; // 758989139
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_TargetPokemonTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers) < 2048);
// ********** End Function GetTypeMatchup Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetTypeMatchup", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetTypeMatchup)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EElementalType,Z_Param_AttackingType);
	P_GET_STRUCT_REF(FPokemonTypeInfo,Z_Param_Out_TargetPokemonTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetTypeMatchup(Z_Param_WorldContextObject,EElementalType(Z_Param_AttackingType),Z_Param_Out_TargetPokemonTypes);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function GetTypeMatchup ***********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function IsBlockedHit ***********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics
{
	struct PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBlockedHit constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBlockedHit constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBlockedHit Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers) < 2048);
// ********** End Function IsBlockedHit Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "IsBlockedHit", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execIsBlockedHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPokemonAbilitySystemLibrary::IsBlockedHit(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function IsBlockedHit *************************

// ********** Begin Class UPokemonAbilitySystemLibrary Function IsCriticalHit **********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics
{
	struct PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCriticalHit constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCriticalHit constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCriticalHit Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers) < 2048);
// ********** End Function IsCriticalHit Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "IsCriticalHit", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execIsCriticalHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPokemonAbilitySystemLibrary::IsCriticalHit(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function IsCriticalHit ************************

// ********** Begin Class UPokemonAbilitySystemLibrary Function IsSuccessfulDebuff *****************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics
{
	struct PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSuccessfulDebuff constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSuccessfulDebuff constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSuccessfulDebuff Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1132930901
void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers) < 2048);
// ********** End Function IsSuccessfulDebuff Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "IsSuccessfulDebuff", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execIsSuccessfulDebuff)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPokemonAbilitySystemLibrary::IsSuccessfulDebuff(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function IsSuccessfulDebuff *******************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetDamageType **********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetDamageType_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		FGameplayTag InDamageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDamageType constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDamageType constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDamageType Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDamageType_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_InDamageType = { "InDamageType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDamageType_Parms, InDamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDamageType_MetaData), NewProp_InDamageType_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_InDamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers) < 2048);
// ********** End Function SetDamageType Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDamageType", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PokemonAbilitySystemLibrary_eventSetDamageType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PokemonAbilitySystemLibrary_eventSetDamageType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDamageType)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InDamageType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetDamageType(Z_Param_Out_EffectContextHandle,Z_Param_Out_InDamageType);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetDamageType ************************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetDeathImpulse ********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		FVector InDeathImpulse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDeathImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDeathImpulse constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDeathImpulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDeathImpulse constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDeathImpulse Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_InDeathImpulse = { "InDeathImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms, InDeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDeathImpulse_MetaData), NewProp_InDeathImpulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_InDeathImpulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers) < 2048);
// ********** End Function SetDeathImpulse Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDeathImpulse", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDeathImpulse)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InDeathImpulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetDeathImpulse(Z_Param_Out_EffectContextHandle,Z_Param_Out_InDeathImpulse);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetDeathImpulse **********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetDebuffDamage ********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float InDebuffDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDebuffDamage constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDebuffDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDebuffDamage constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDebuffDamage Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_InDebuffDamage = { "InDebuffDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms, InDebuffDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_InDebuffDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers) < 2048);
// ********** End Function SetDebuffDamage Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDebuffDamage", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDebuffDamage)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDebuffDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetDebuffDamage(Z_Param_Out_EffectContextHandle,Z_Param_InDebuffDamage);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetDebuffDamage **********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetDebuffDuration ******************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float InDebuffDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDebuffDuration constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDebuffDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDebuffDuration constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDebuffDuration Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_InDebuffDuration = { "InDebuffDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms, InDebuffDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_InDebuffDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers) < 2048);
// ********** End Function SetDebuffDuration Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDebuffDuration", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDebuffDuration)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDebuffDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetDebuffDuration(Z_Param_Out_EffectContextHandle,Z_Param_InDebuffDuration);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetDebuffDuration ********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetDebuffFrequency *****************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float InDebuffFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDebuffFrequency constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDebuffFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDebuffFrequency constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDebuffFrequency Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_InDebuffFrequency = { "InDebuffFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms, InDebuffFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_InDebuffFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers) < 2048);
// ********** End Function SetDebuffFrequency Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDebuffFrequency", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDebuffFrequency)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDebuffFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetDebuffFrequency(Z_Param_Out_EffectContextHandle,Z_Param_InDebuffFrequency);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetDebuffFrequency *******************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetIsBlockedHit ********************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool bInIsBlockedHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsBlockedHit constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_bInIsBlockedHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsBlockedHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsBlockedHit constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsBlockedHit Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit(void* Obj)
{
	((PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms*)Obj)->bInIsBlockedHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit = { "bInIsBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers) < 2048);
// ********** End Function SetIsBlockedHit Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetIsBlockedHit", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetIsBlockedHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_UBOOL(Z_Param_bInIsBlockedHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetIsBlockedHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsBlockedHit);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetIsBlockedHit **********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetIsCriticalHit *******************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool bInIsCriticalHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsCriticalHit constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_bInIsCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsCriticalHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsCriticalHit constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsCriticalHit Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit(void* Obj)
{
	((PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms*)Obj)->bInIsCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit = { "bInIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers) < 2048);
// ********** End Function SetIsCriticalHit Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetIsCriticalHit", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetIsCriticalHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_UBOOL(Z_Param_bInIsCriticalHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetIsCriticalHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsCriticalHit);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetIsCriticalHit *********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetIsSuccessfulDebuff **************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		bool bInIsSuccessfulDebuff;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsSuccessfulDebuff constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static void NewProp_bInIsSuccessfulDebuff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsSuccessfulDebuff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsSuccessfulDebuff constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsSuccessfulDebuff Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff_SetBit(void* Obj)
{
	((PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms*)Obj)->bInIsSuccessfulDebuff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff = { "bInIsSuccessfulDebuff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers) < 2048);
// ********** End Function SetIsSuccessfulDebuff Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetIsSuccessfulDebuff", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetIsSuccessfulDebuff)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_UBOOL(Z_Param_bInIsSuccessfulDebuff);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetIsSuccessfulDebuff(Z_Param_Out_EffectContextHandle,Z_Param_bInIsSuccessfulDebuff);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetIsSuccessfulDebuff ****************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetKnockbackForce ******************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		FVector InKnockback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKnockback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetKnockbackForce constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKnockback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetKnockbackForce constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetKnockbackForce Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_InKnockback = { "InKnockback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms, InKnockback), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKnockback_MetaData), NewProp_InKnockback_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_InKnockback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers) < 2048);
// ********** End Function SetKnockbackForce Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetKnockbackForce", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetKnockbackForce)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InKnockback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetKnockbackForce(Z_Param_Out_EffectContextHandle,Z_Param_Out_InKnockback);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetKnockbackForce ********************

// ********** Begin Class UPokemonAbilitySystemLibrary Function SetTypeMultiplier ******************
struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics
{
	struct PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		float InTypeMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTypeMultiplier constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTypeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTypeMultiplier constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTypeMultiplier Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1132930901
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_InTypeMultiplier = { "InTypeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms, InTypeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_InTypeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers) < 2048);
// ********** End Function SetTypeMultiplier Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetTypeMultiplier", 	Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetTypeMultiplier)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTypeMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonAbilitySystemLibrary::SetTypeMultiplier(Z_Param_Out_EffectContextHandle,Z_Param_InTypeMultiplier);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemLibrary Function SetTypeMultiplier ********************

// ********** Begin Class UPokemonAbilitySystemLibrary *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary;
UClass* UPokemonAbilitySystemLibrary::GetPrivateStaticClass()
{
	using TClass = UPokemonAbilitySystemLibrary;
	if (!Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonAbilitySystemLibrary"),
			Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.InnerSingleton,
			StaticRegisterNativesUPokemonAbilitySystemLibrary,
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
	return Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary_NoRegister()
{
	return UPokemonAbilitySystemLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AbilitySystem/PokemonAbilitySystemLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonAbilitySystemLibrary constinit property declarations *************
// ********** End Class UPokemonAbilitySystemLibrary constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ActivateAbilityByTag"), .Pointer = &UPokemonAbilitySystemLibrary::execActivateAbilityByTag },
		{ .NameUTF8 = UTF8TEXT("ApplyDamageEffect"), .Pointer = &UPokemonAbilitySystemLibrary::execApplyDamageEffect },
		{ .NameUTF8 = UTF8TEXT("GetCurrentXPPercentage"), .Pointer = &UPokemonAbilitySystemLibrary::execGetCurrentXPPercentage },
		{ .NameUTF8 = UTF8TEXT("GetDamageType"), .Pointer = &UPokemonAbilitySystemLibrary::execGetDamageType },
		{ .NameUTF8 = UTF8TEXT("GetDeathImpulse"), .Pointer = &UPokemonAbilitySystemLibrary::execGetDeathImpulse },
		{ .NameUTF8 = UTF8TEXT("GetDebuffDamage"), .Pointer = &UPokemonAbilitySystemLibrary::execGetDebuffDamage },
		{ .NameUTF8 = UTF8TEXT("GetDebuffDuration"), .Pointer = &UPokemonAbilitySystemLibrary::execGetDebuffDuration },
		{ .NameUTF8 = UTF8TEXT("GetDebuffFrequency"), .Pointer = &UPokemonAbilitySystemLibrary::execGetDebuffFrequency },
		{ .NameUTF8 = UTF8TEXT("GetKnockbackForce"), .Pointer = &UPokemonAbilitySystemLibrary::execGetKnockbackForce },
		{ .NameUTF8 = UTF8TEXT("GetLivePlayersWithinRadius"), .Pointer = &UPokemonAbilitySystemLibrary::execGetLivePlayersWithinRadius },
		{ .NameUTF8 = UTF8TEXT("GetPokemonMenuWidgetController"), .Pointer = &UPokemonAbilitySystemLibrary::execGetPokemonMenuWidgetController },
		{ .NameUTF8 = UTF8TEXT("GetSavedTypeMatchup"), .Pointer = &UPokemonAbilitySystemLibrary::execGetSavedTypeMatchup },
		{ .NameUTF8 = UTF8TEXT("GetTrainerOverlayWidgetController"), .Pointer = &UPokemonAbilitySystemLibrary::execGetTrainerOverlayWidgetController },
		{ .NameUTF8 = UTF8TEXT("GetTypeMatchup"), .Pointer = &UPokemonAbilitySystemLibrary::execGetTypeMatchup },
		{ .NameUTF8 = UTF8TEXT("IsBlockedHit"), .Pointer = &UPokemonAbilitySystemLibrary::execIsBlockedHit },
		{ .NameUTF8 = UTF8TEXT("IsCriticalHit"), .Pointer = &UPokemonAbilitySystemLibrary::execIsCriticalHit },
		{ .NameUTF8 = UTF8TEXT("IsSuccessfulDebuff"), .Pointer = &UPokemonAbilitySystemLibrary::execIsSuccessfulDebuff },
		{ .NameUTF8 = UTF8TEXT("SetDamageType"), .Pointer = &UPokemonAbilitySystemLibrary::execSetDamageType },
		{ .NameUTF8 = UTF8TEXT("SetDeathImpulse"), .Pointer = &UPokemonAbilitySystemLibrary::execSetDeathImpulse },
		{ .NameUTF8 = UTF8TEXT("SetDebuffDamage"), .Pointer = &UPokemonAbilitySystemLibrary::execSetDebuffDamage },
		{ .NameUTF8 = UTF8TEXT("SetDebuffDuration"), .Pointer = &UPokemonAbilitySystemLibrary::execSetDebuffDuration },
		{ .NameUTF8 = UTF8TEXT("SetDebuffFrequency"), .Pointer = &UPokemonAbilitySystemLibrary::execSetDebuffFrequency },
		{ .NameUTF8 = UTF8TEXT("SetIsBlockedHit"), .Pointer = &UPokemonAbilitySystemLibrary::execSetIsBlockedHit },
		{ .NameUTF8 = UTF8TEXT("SetIsCriticalHit"), .Pointer = &UPokemonAbilitySystemLibrary::execSetIsCriticalHit },
		{ .NameUTF8 = UTF8TEXT("SetIsSuccessfulDebuff"), .Pointer = &UPokemonAbilitySystemLibrary::execSetIsSuccessfulDebuff },
		{ .NameUTF8 = UTF8TEXT("SetKnockbackForce"), .Pointer = &UPokemonAbilitySystemLibrary::execSetKnockbackForce },
		{ .NameUTF8 = UTF8TEXT("SetTypeMultiplier"), .Pointer = &UPokemonAbilitySystemLibrary::execSetTypeMultiplier },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag, "ActivateAbilityByTag" }, // 764655069
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect, "ApplyDamageEffect" }, // 2331745183
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetCurrentXPPercentage, "GetCurrentXPPercentage" }, // 2894156885
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType, "GetDamageType" }, // 1589065481
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse, "GetDeathImpulse" }, // 198539479
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage, "GetDebuffDamage" }, // 660425021
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration, "GetDebuffDuration" }, // 2735741395
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency, "GetDebuffFrequency" }, // 3131719664
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce, "GetKnockbackForce" }, // 3834938785
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetLivePlayersWithinRadius, "GetLivePlayersWithinRadius" }, // 2551671308
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController, "GetPokemonMenuWidgetController" }, // 3410792063
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup, "GetSavedTypeMatchup" }, // 473941462
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController, "GetTrainerOverlayWidgetController" }, // 2357551352
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup, "GetTypeMatchup" }, // 3739894216
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit, "IsBlockedHit" }, // 3316840075
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit, "IsCriticalHit" }, // 3733040640
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff, "IsSuccessfulDebuff" }, // 2454144642
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType, "SetDamageType" }, // 3579376841
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse, "SetDeathImpulse" }, // 1154743999
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage, "SetDebuffDamage" }, // 3658561400
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration, "SetDebuffDuration" }, // 1091974776
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency, "SetDebuffFrequency" }, // 3317160579
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit, "SetIsBlockedHit" }, // 2761075473
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit, "SetIsCriticalHit" }, // 1543103299
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff, "SetIsSuccessfulDebuff" }, // 915039244
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce, "SetKnockbackForce" }, // 1855688054
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier, "SetTypeMultiplier" }, // 3952708500
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAbilitySystemLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics
UObject* (*const Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::ClassParams = {
	&UPokemonAbilitySystemLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams)
};
void UPokemonAbilitySystemLibrary::StaticRegisterNativesUPokemonAbilitySystemLibrary()
{
	UClass* Class = UPokemonAbilitySystemLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary()
{
	if (!Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton, Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton;
}
UPokemonAbilitySystemLibrary::UPokemonAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonAbilitySystemLibrary);
UPokemonAbilitySystemLibrary::~UPokemonAbilitySystemLibrary() {}
// ********** End Class UPokemonAbilitySystemLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAbilitySystemLibrary, UPokemonAbilitySystemLibrary::StaticClass, TEXT("UPokemonAbilitySystemLibrary"), &Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAbilitySystemLibrary), 1541408961U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h__Script_ProjectMimikyu_937972747{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
