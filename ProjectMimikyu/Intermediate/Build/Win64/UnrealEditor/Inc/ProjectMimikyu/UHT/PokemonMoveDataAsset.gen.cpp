// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/DataAssets/PokemonMoveDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonMoveDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDamageResponse();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMoveAction();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMoveType();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EStatusType();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPokemonMoveDataAsset::StaticRegisterNativesUPokemonMoveDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonMoveDataAsset);
	UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister()
	{
		return UPokemonMoveDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonMoveDataAsset_Statics
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdealRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsToBeInLineOfSight_MetaData[];
#endif
		static void NewProp_bNeedsToBeInLineOfSight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsToBeInLineOfSight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageResponse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageResponse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceOfFlinching_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceOfFlinching;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveElementalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveElementalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveElementalType;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTutorMove_MetaData[];
#endif
		static void NewProp_bIsTutorMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTutorMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTM_MetaData[];
#endif
		static void NewProp_bIsTM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TMNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TMNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasStatus_MetaData[];
#endif
		static void NewProp_bHasStatus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStatus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InflictableStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InflictableStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InflictableStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceOfStatus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceOfStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonMoveDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "DataAssets/PokemonMoveDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName = { "MoveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, MoveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription = { "MoveDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, MoveDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_BaseDamage_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, Category), Z_Construct_UEnum_ProjectMimikyu_EMoveType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Category_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Category_MetaData) }; // 2988115052
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, MoveAction), Z_Construct_UEnum_ProjectMimikyu_EMoveAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveAction_MetaData) }; // 4148364135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_IdealRange_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "EditCondition", "MoveAction == EMoveAction::EMA_Melee" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_IdealRange = { "IdealRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, IdealRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_IdealRange_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_IdealRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "EditCondition", "MoveAction == EMoveAction::EMA_Melee || MoveAction == EMoveAction::EMA_Charging" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_SpeedMultiplier_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_SpeedMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bNeedsToBeInLineOfSight_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "EditCondition", "MoveAction == EMoveAction::EMA_Projectile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bNeedsToBeInLineOfSight_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bNeedsToBeInLineOfSight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bNeedsToBeInLineOfSight = { "bNeedsToBeInLineOfSight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bNeedsToBeInLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bNeedsToBeInLineOfSight_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bNeedsToBeInLineOfSight_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_DamageResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_DamageResponse_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_DamageResponse = { "DamageResponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, DamageResponse), Z_Construct_UEnum_ProjectMimikyu_EDamageResponse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_DamageResponse_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_DamageResponse_MetaData) }; // 1834187444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfFlinching_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "EditCondition", "DamageResponse == EDamageResponse::EDR_Stun" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfFlinching = { "ChanceOfFlinching", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, ChanceOfFlinching), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfFlinching_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfFlinching_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveElementalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveElementalType_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveElementalType = { "MoveElementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, MoveElementalType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveElementalType_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveElementalType_MetaData) }; // 3798297509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_RechargeTime_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_RechargeTime = { "RechargeTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, RechargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_RechargeTime_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_RechargeTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldDamageInvincible_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldDamageInvincible_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bShouldDamageInvincible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldDamageInvincible = { "bShouldDamageInvincible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldDamageInvincible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldDamageInvincible_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldDamageInvincible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeBlocked_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeBlocked_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bCanBeBlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeBlocked = { "bCanBeBlocked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeBlocked_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeBlocked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeParried_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeParried_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bCanBeParried = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeParried = { "bCanBeParried", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeParried_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeParried_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeParried_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldForceInterrupt_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldForceInterrupt_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bShouldForceInterrupt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldForceInterrupt = { "bShouldForceInterrupt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldForceInterrupt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldForceInterrupt_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldForceInterrupt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTutorMove_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTutorMove_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bIsTutorMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTutorMove = { "bIsTutorMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTutorMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTutorMove_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTutorMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTM_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTM_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bIsTM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTM = { "bIsTM", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTM_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTM_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_TMNumber_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "EditCondition", "bIsTM" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_TMNumber = { "TMNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, TMNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_TMNumber_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_TMNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bHasStatus_MetaData[] = {
		{ "Category", "Status Effect" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bHasStatus_SetBit(void* Obj)
	{
		((UPokemonMoveDataAsset*)Obj)->bHasStatus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bHasStatus = { "bHasStatus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonMoveDataAsset), &Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bHasStatus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bHasStatus_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bHasStatus_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InflictableStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InflictableStatus_MetaData[] = {
		{ "Category", "Status Effect" },
		{ "EditCondition", "bHasStatus" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InflictableStatus = { "InflictableStatus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, InflictableStatus), Z_Construct_UEnum_ProjectMimikyu_EStatusType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InflictableStatus_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InflictableStatus_MetaData) }; // 965125503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfStatus_MetaData[] = {
		{ "Category", "Status Effect" },
		{ "EditCondition", "bHasStatus" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfStatus = { "ChanceOfStatus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, ChanceOfStatus), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfStatus_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfStatus_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Category_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_IdealRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_SpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bNeedsToBeInLineOfSight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_DamageResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_DamageResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfFlinching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveElementalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveElementalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_RechargeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldDamageInvincible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeBlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bCanBeParried,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bShouldForceInterrupt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTutorMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bIsTM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_TMNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_bHasStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InflictableStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InflictableStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_ChanceOfStatus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonMoveDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonMoveDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::ClassParams = {
		&UPokemonMoveDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonMoveDataAsset()
	{
		if (!Z_Registration_Info_UClass_UPokemonMoveDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonMoveDataAsset.OuterSingleton, Z_Construct_UClass_UPokemonMoveDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonMoveDataAsset.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonMoveDataAsset>()
	{
		return UPokemonMoveDataAsset::StaticClass();
	}
	UPokemonMoveDataAsset::UPokemonMoveDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonMoveDataAsset);
	UPokemonMoveDataAsset::~UPokemonMoveDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonMoveDataAsset, UPokemonMoveDataAsset::StaticClass, TEXT("UPokemonMoveDataAsset"), &Z_Registration_Info_UClass_UPokemonMoveDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonMoveDataAsset), 388012178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_3022280616(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
