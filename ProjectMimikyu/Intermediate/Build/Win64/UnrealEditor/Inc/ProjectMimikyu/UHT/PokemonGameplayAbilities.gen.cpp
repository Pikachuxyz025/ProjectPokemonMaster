// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonGameplayAbilities() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPokemonGameplayAbilities::StaticRegisterNativesUPokemonGameplayAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonGameplayAbilities);
	UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister()
	{
		return UPokemonGameplayAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonGameplayAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MoveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MoveDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageResponse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResponse;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveElementalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveElementalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveElementalType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdealRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RechargeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RechargeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDamageInvincible_MetaData[];
#endif
		static void NewProp_bShouldDamageInvincible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDamageInvincible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeBlocked_MetaData[];
#endif
		static void NewProp_bCanBeBlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeBlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeParried_MetaData[];
#endif
		static void NewProp_bCanBeParried_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeParried;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldForceInterrupt_MetaData[];
#endif
		static void NewProp_bShouldForceInterrupt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldForceInterrupt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveName_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveName = { "MoveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveName_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveDescription_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveDescription = { "MoveDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveDescription_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_BaseDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveType" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Categories", "PokemonMoves.MoveAction" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse_MetaData[] = {
		{ "Categories", "Damage.Response" },
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse = { "DamageResponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, DamageResponse), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse_MetaData) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType = { "MoveElementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveElementalType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_MetaData) }; // 3798297509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange = { "IdealRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, IdealRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_RechargeTime_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_RechargeTime = { "RechargeTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, RechargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_RechargeTime_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_RechargeTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldDamageInvincible_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldDamageInvincible_SetBit(void* Obj)
	{
		((UPokemonGameplayAbilities*)Obj)->bShouldDamageInvincible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldDamageInvincible = { "bShouldDamageInvincible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonGameplayAbilities), &Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldDamageInvincible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldDamageInvincible_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldDamageInvincible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeBlocked_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeBlocked_SetBit(void* Obj)
	{
		((UPokemonGameplayAbilities*)Obj)->bCanBeBlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeBlocked = { "bCanBeBlocked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonGameplayAbilities), &Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeBlocked_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeBlocked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeParried_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeParried_SetBit(void* Obj)
	{
		((UPokemonGameplayAbilities*)Obj)->bCanBeParried = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeParried = { "bCanBeParried", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonGameplayAbilities), &Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeParried_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeParried_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeParried_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldForceInterrupt_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldForceInterrupt_SetBit(void* Obj)
	{
		((UPokemonGameplayAbilities*)Obj)->bShouldForceInterrupt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldForceInterrupt = { "bShouldForceInterrupt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonGameplayAbilities), &Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldForceInterrupt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldForceInterrupt_MetaData), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldForceInterrupt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_DamageResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveElementalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_IdealRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_RechargeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldDamageInvincible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeBlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bCanBeParried,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_bShouldForceInterrupt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonGameplayAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonGameplayAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams = {
		&UPokemonGameplayAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonGameplayAbilities, UPokemonGameplayAbilities::StaticClass, TEXT("UPokemonGameplayAbilities"), &Z_Registration_Info_UClass_UPokemonGameplayAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonGameplayAbilities), 3897332488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_263088234(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
