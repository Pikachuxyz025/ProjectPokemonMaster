// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "GameplayTagContainer.h"
#include "ProjectMimikyu/Public/PokemonAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonGameplayAbilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputInfo();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PokemonInputInfo;
class UScriptStruct* FPokemonInputInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PokemonInputInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PokemonInputInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInputInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInputInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PokemonInputInfo.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<FPokemonInputInfo>()
{
	return FPokemonInputInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPokemonInputInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonUpgradeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonUpgradeTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyDirectionSequence_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyDirectionSequence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirectionSequence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyDirectionSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInputInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_PokemonUpgradeTag_MetaData[] = {
		{ "Categories", "Abilities" },
		{ "Category", "PokemonInputInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_PokemonUpgradeTag = { "PokemonUpgradeTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputInfo, PokemonUpgradeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_PokemonUpgradeTag_MetaData), Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_PokemonUpgradeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner = { "KeyDirectionSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(0, nullptr) }; // 493927155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_MetaData[] = {
		{ "Category", "PokemonInputInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence = { "KeyDirectionSequence", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputInfo, KeyDirectionSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_MetaData), Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_MetaData) }; // 493927155
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_PokemonUpgradeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
		nullptr,
		&NewStructOps,
		"PokemonInputInfo",
		Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers),
		sizeof(FPokemonInputInfo),
		alignof(FPokemonInputInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PokemonInputInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PokemonInputInfo.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PokemonInputInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UPokemonGameplayAbilities::execGetKeySequenceFromTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag);
		P_GET_UBOOL(Z_Param_bLogNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EDirectionPoint>*)Z_Param__Result=P_THIS->GetKeySequenceFromTag(Z_Param_Out_AbilityTag,Z_Param_bLogNotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonGameplayAbilities::execCauseDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CauseDamage(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonGameplayAbilities::execMakeDamageEffectParamsFromClassDefaults)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDamageEffectParams*)Z_Param__Result=P_THIS->MakeDamageEffectParamsFromClassDefaults(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	void UPokemonGameplayAbilities::StaticRegisterNativesUPokemonGameplayAbilities()
	{
		UClass* Class = UPokemonGameplayAbilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CauseDamage", &UPokemonGameplayAbilities::execCauseDamage },
			{ "GetKeySequenceFromTag", &UPokemonGameplayAbilities::execGetKeySequenceFromTag },
			{ "MakeDamageEffectParamsFromClassDefaults", &UPokemonGameplayAbilities::execMakeDamageEffectParamsFromClassDefaults },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics
	{
		struct PokemonGameplayAbilities_eventCauseDamage_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonGameplayAbilities_eventCauseDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonGameplayAbilities, nullptr, "CauseDamage", nullptr, nullptr, Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PokemonGameplayAbilities_eventCauseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::PokemonGameplayAbilities_eventCauseDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics
	{
		struct PokemonGameplayAbilities_eventGetKeySequenceFromTag_Parms
		{
			FGameplayTag AbilityTag;
			bool bLogNotFound;
			TArray<EDirectionPoint> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static void NewProp_bLogNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonGameplayAbilities_eventGetKeySequenceFromTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
	{
		((PokemonGameplayAbilities_eventGetKeySequenceFromTag_Parms*)Obj)->bLogNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonGameplayAbilities_eventGetKeySequenceFromTag_Parms), &Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(0, nullptr) }; // 493927155
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonGameplayAbilities_eventGetKeySequenceFromTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 493927155
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_bLogNotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bLogNotFound", "false" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonGameplayAbilities, nullptr, "GetKeySequenceFromTag", nullptr, nullptr, Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::PokemonGameplayAbilities_eventGetKeySequenceFromTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::PokemonGameplayAbilities_eventGetKeySequenceFromTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics
	{
		struct PokemonGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms
		{
			AActor* TargetActor;
			FDamageEffectParams ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms, ReturnValue), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(0, nullptr) }; // 85173987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_TargetActor", "None" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonGameplayAbilities, nullptr, "MakeDamageEffectParamsFromClassDefaults", nullptr, nullptr, Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PokemonGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::PokemonGameplayAbilities_eventMakeDamageEffectParamsFromClassDefaults_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonGameplayAbilities);
	UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister()
	{
		return UPokemonGameplayAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonGameplayAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTypeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveTypeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageResponseTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResponseTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerPointCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerPointCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdealRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveElementalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveElementalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveElementalType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpgradeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpgradeList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonGameplayAbilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonGameplayAbilities_CauseDamage, "CauseDamage" }, // 1654360282
		{ &Z_Construct_UFunction_UPokemonGameplayAbilities_GetKeySequenceFromTag, "GetKeySequenceFromTag" }, // 2041201166
		{ &Z_Construct_UFunction_UPokemonGameplayAbilities_MakeDamageEffectParamsFromClassDefaults, "MakeDamageEffectParamsFromClassDefaults" }, // 6819991
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveTypeTag_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveType" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveTypeTag = { "MoveTypeTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveTypeTag_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveTypeTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveActionTag_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveAction" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveActionTag = { "MoveActionTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveActionTag_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveActionTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_InputTag_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_InputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTag_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTag_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponseTag_MetaData[] = {
		{ "Categories", "Damage.Response" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponseTag = { "DamageResponseTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DamageResponseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponseTag_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponseTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_PowerPointCost_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_PowerPointCost = { "PowerPointCost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, PowerPointCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_PowerPointCost_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_PowerPointCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTime_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTime_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange = { "IdealRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, IdealRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_SpeedMultiplier_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_SpeedMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffChance_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Debuffs */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debuffs" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffChance = { "DebuffChance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DebuffChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffChance_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDamage_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffFrequency_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffFrequency_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDuration_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDuration_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DeathImpulseMagnitude_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DeathImpulseMagnitude = { "DeathImpulseMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DeathImpulseMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DeathImpulseMagnitude_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DeathImpulseMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackForceMagnitude_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackForceMagnitude = { "KnockbackForceMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, KnockbackForceMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackForceMagnitude_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackForceMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackChance_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackChance = { "KnockbackChance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, KnockbackChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackChance_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackChance_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType = { "MoveElementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveElementalType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_MetaData) }; // 3798297509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_UpgradeList_Inner = { "UpgradeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInputInfo, METADATA_PARAMS(0, nullptr) }; // 122542832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_UpgradeList_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_UpgradeList = { "UpgradeList", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, UpgradeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_UpgradeList_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_UpgradeList_MetaData) }; // 122542832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveTypeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_PowerPointCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_CooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_SpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DebuffDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DeathImpulseMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackForceMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_KnockbackChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_UpgradeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_UpgradeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonGameplayAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonGameplayAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams = {
		&UPokemonGameplayAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonGameplayAbilities()
	{
		if (!Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton, Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonGameplayAbilities>()
	{
		return UPokemonGameplayAbilities::StaticClass();
	}
	UPokemonGameplayAbilities::UPokemonGameplayAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonGameplayAbilities);
	UPokemonGameplayAbilities::~UPokemonGameplayAbilities() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ScriptStructInfo[] = {
		{ FPokemonInputInfo::StaticStruct, Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewStructOps, TEXT("PokemonInputInfo"), &Z_Registration_Info_UScriptStruct_PokemonInputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInputInfo), 122542832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonGameplayAbilities, UPokemonGameplayAbilities::StaticClass, TEXT("UPokemonGameplayAbilities"), &Z_Registration_Info_UClass_UPokemonGameplayAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonGameplayAbilities), 829720648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_2068077719(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
