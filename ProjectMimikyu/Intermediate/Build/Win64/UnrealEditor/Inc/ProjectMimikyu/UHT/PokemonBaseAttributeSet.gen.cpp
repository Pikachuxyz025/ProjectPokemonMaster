// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/PokemonBaseAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonBaseAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Defense)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDefense);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Defense(Z_Param_Out_OldDefense);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Attack)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Attack(Z_Param_Out_OldAttack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_SpecialAttack)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_Old_SpecialAttack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpecialAttack(Z_Param_Out_Old_SpecialAttack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_SpecialDefense)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpecialDefense);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpecialDefense(Z_Param_Out_OldSpecialDefense);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Speed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Speed(Z_Param_Out_OldSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonBaseAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UPokemonBaseAttributeSet::StaticRegisterNativesUPokemonBaseAttributeSet()
	{
		UClass* Class = UPokemonBaseAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Attack", &UPokemonBaseAttributeSet::execOnRep_Attack },
			{ "OnRep_Defense", &UPokemonBaseAttributeSet::execOnRep_Defense },
			{ "OnRep_Health", &UPokemonBaseAttributeSet::execOnRep_Health },
			{ "OnRep_MaxHealth", &UPokemonBaseAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_SpecialAttack", &UPokemonBaseAttributeSet::execOnRep_SpecialAttack },
			{ "OnRep_SpecialDefense", &UPokemonBaseAttributeSet::execOnRep_SpecialDefense },
			{ "OnRep_Speed", &UPokemonBaseAttributeSet::execOnRep_Speed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics
	{
		struct PokemonBaseAttributeSet_eventOnRep_Attack_Parms
		{
			FGameplayAttributeData OldAttack;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack = { "OldAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Attack_Parms, OldAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack_MetaData), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Attack", nullptr, nullptr, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PokemonBaseAttributeSet_eventOnRep_Attack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics
	{
		struct PokemonBaseAttributeSet_eventOnRep_Defense_Parms
		{
			FGameplayAttributeData OldDefense;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldDefense_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldDefense;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense = { "OldDefense", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Defense_Parms, OldDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense_MetaData), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Defense", nullptr, nullptr, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PokemonBaseAttributeSet_eventOnRep_Defense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics
	{
		struct PokemonBaseAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PokemonBaseAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics
	{
		struct PokemonBaseAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PokemonBaseAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics
	{
		struct PokemonBaseAttributeSet_eventOnRep_SpecialAttack_Parms
		{
			FGameplayAttributeData Old_SpecialAttack;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Old_SpecialAttack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Old_SpecialAttack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::NewProp_Old_SpecialAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::NewProp_Old_SpecialAttack = { "Old_SpecialAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_SpecialAttack_Parms, Old_SpecialAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::NewProp_Old_SpecialAttack_MetaData), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::NewProp_Old_SpecialAttack_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::NewProp_Old_SpecialAttack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_SpecialAttack", nullptr, nullptr, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PokemonBaseAttributeSet_eventOnRep_SpecialAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics
	{
		struct PokemonBaseAttributeSet_eventOnRep_SpecialDefense_Parms
		{
			FGameplayAttributeData OldSpecialDefense;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldSpecialDefense_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpecialDefense;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::NewProp_OldSpecialDefense_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::NewProp_OldSpecialDefense = { "OldSpecialDefense", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_SpecialDefense_Parms, OldSpecialDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::NewProp_OldSpecialDefense_MetaData), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::NewProp_OldSpecialDefense_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::NewProp_OldSpecialDefense,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_SpecialDefense", nullptr, nullptr, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PokemonBaseAttributeSet_eventOnRep_SpecialDefense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics
	{
		struct PokemonBaseAttributeSet_eventOnRep_Speed_Parms
		{
			FGameplayAttributeData OldSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed = { "OldSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBaseAttributeSet_eventOnRep_Speed_Parms, OldSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed_MetaData), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonBaseAttributeSet, nullptr, "OnRep_Speed", nullptr, nullptr, Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PokemonBaseAttributeSet_eventOnRep_Speed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonBaseAttributeSet);
	UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister()
	{
		return UPokemonBaseAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonBaseAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialDefense_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialDefense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAttack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Attack, "OnRep_Attack" }, // 2637875421
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Defense, "OnRep_Defense" }, // 279985021
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Health, "OnRep_Health" }, // 2131322654
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3067209289
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialAttack, "OnRep_SpecialAttack" }, // 3580028604
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_SpecialDefense, "OnRep_SpecialDefense" }, // 1919670369
		{ &Z_Construct_UFunction_UPokemonBaseAttributeSet_OnRep_Speed, "OnRep_Speed" }, // 958179713
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/PokemonBaseAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialDefense_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialDefense = { "SpecialDefense", "OnRep_SpecialDefense", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, SpecialDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialDefense_MetaData), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialDefense_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialAttack_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialAttack = { "SpecialAttack", "OnRep_SpecialAttack", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, SpecialAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialAttack_MetaData), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialAttack_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Attack = { "Attack", "OnRep_Attack", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Attack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Attack_MetaData), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Attack_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Defense = { "Defense", "OnRep_Defense", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Defense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Defense_MetaData), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Defense_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Vital Stat Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonBaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Speed = { "Speed", "OnRep_Speed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBaseAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Speed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialDefense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_SpecialAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Defense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonBaseAttributeSet>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonBaseAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UPokemonBaseAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UPokemonBaseAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonBaseAttributeSet.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonBaseAttributeSet>()
	{
		return UPokemonBaseAttributeSet::StaticClass();
	}

	void UPokemonBaseAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_SpecialDefense(TEXT("SpecialDefense"));
		static const FName Name_SpecialAttack(TEXT("SpecialAttack"));
		static const FName Name_Attack(TEXT("Attack"));
		static const FName Name_Defense(TEXT("Defense"));
		static const FName Name_Speed(TEXT("Speed"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_SpecialDefense == ClassReps[(int32)ENetFields_Private::SpecialDefense].Property->GetFName()
			&& Name_SpecialAttack == ClassReps[(int32)ENetFields_Private::SpecialAttack].Property->GetFName()
			&& Name_Attack == ClassReps[(int32)ENetFields_Private::Attack].Property->GetFName()
			&& Name_Defense == ClassReps[(int32)ENetFields_Private::Defense].Property->GetFName()
			&& Name_Speed == ClassReps[(int32)ENetFields_Private::Speed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPokemonBaseAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonBaseAttributeSet);
	UPokemonBaseAttributeSet::~UPokemonBaseAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonBaseAttributeSet, UPokemonBaseAttributeSet::StaticClass, TEXT("UPokemonBaseAttributeSet"), &Z_Registration_Info_UClass_UPokemonBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonBaseAttributeSet), 3811024623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_2957498432(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
