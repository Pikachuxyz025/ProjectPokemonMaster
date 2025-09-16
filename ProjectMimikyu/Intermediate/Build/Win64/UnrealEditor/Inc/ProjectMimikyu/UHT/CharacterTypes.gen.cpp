// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/CharacterTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterTypes() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDamageResponse();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EGenderType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMoveAction();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMoveType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ENatureType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPartyStatus();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokeballType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonState();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ESlotType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EStatsType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EStatusType();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FEnvironmentDropParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonMoveChart();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonParty();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonTypeInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonUIInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTagContainer();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FSequentialShotParams();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FSlotInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FTagCategoryMap();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FTypeChartMatchup();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGenderType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenderType;
static UEnum* EGenderType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenderType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenderType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EGenderType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EGenderType"));
	}
	return Z_Registration_Info_UEnum_EGenderType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EGenderType>()
{
	return EGenderType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EGenderType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGT_Female.DisplayName", "Female" },
		{ "EGT_Female.Name", "EGenderType::EGT_Female" },
		{ "EGT_Male.DisplayName", "Male" },
		{ "EGT_Male.Name", "EGenderType::EGT_Male" },
		{ "EGT_None.DisplayName", "None" },
		{ "EGT_None.Name", "EGenderType::EGT_None" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenderType::EGT_None", (int64)EGenderType::EGT_None },
		{ "EGenderType::EGT_Male", (int64)EGenderType::EGT_Male },
		{ "EGenderType::EGT_Female", (int64)EGenderType::EGT_Female },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EGenderType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EGenderType",
	"EGenderType",
	Z_Construct_UEnum_ProjectMimikyu_EGenderType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EGenderType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EGenderType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EGenderType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EGenderType()
{
	if (!Z_Registration_Info_UEnum_EGenderType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenderType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EGenderType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenderType.InnerSingleton;
}
// ********** End Enum EGenderType *****************************************************************

// ********** Begin Enum EPartyStatus **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyStatus;
static UEnum* EPartyStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPartyStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPartyStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPartyStatus, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPartyStatus"));
	}
	return Z_Registration_Info_UEnum_EPartyStatus.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPartyStatus>()
{
	return EPartyStatus_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPartyStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPS_Empty.DisplayName", "Empty" },
		{ "EPS_Empty.Name", "EPartyStatus::EPS_Empty" },
		{ "EPS_Fainted.DisplayName", "Fainted" },
		{ "EPS_Fainted.Name", "EPartyStatus::EPS_Fainted" },
		{ "EPS_Out.DisplayName", "Out" },
		{ "EPS_Out.Name", "EPartyStatus::EPS_Out" },
		{ "EPS_Ready.DisplayName", "Ready" },
		{ "EPS_Ready.Name", "EPartyStatus::EPS_Ready" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPartyStatus::EPS_Empty", (int64)EPartyStatus::EPS_Empty },
		{ "EPartyStatus::EPS_Out", (int64)EPartyStatus::EPS_Out },
		{ "EPartyStatus::EPS_Ready", (int64)EPartyStatus::EPS_Ready },
		{ "EPartyStatus::EPS_Fainted", (int64)EPartyStatus::EPS_Fainted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPartyStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPartyStatus",
	"EPartyStatus",
	Z_Construct_UEnum_ProjectMimikyu_EPartyStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPartyStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPartyStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPartyStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPartyStatus()
{
	if (!Z_Registration_Info_UEnum_EPartyStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyStatus.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPartyStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPartyStatus.InnerSingleton;
}
// ********** End Enum EPartyStatus ****************************************************************

// ********** Begin Enum EMovementSpeed ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementSpeed;
static UEnum* EMovementSpeed_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementSpeed.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementSpeed.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EMovementSpeed"));
	}
	return Z_Registration_Info_UEnum_EMovementSpeed.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EMovementSpeed>()
{
	return EMovementSpeed_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMS_DefaultMax.DisplayName", "Default Max" },
		{ "EMS_DefaultMax.Name", "EMovementSpeed::EMS_DefaultMax" },
		{ "EMS_Engaging.DisplayName", "Engaging" },
		{ "EMS_Engaging.Name", "EMovementSpeed::EMS_Engaging" },
		{ "EMS_Idle.DisplayName", "Idle" },
		{ "EMS_Idle.Name", "EMovementSpeed::EMS_Idle" },
		{ "EMS_Jogging.DisplayName", "Jogging" },
		{ "EMS_Jogging.Name", "EMovementSpeed::EMS_Jogging" },
		{ "EMS_Running.DisplayName", "Running" },
		{ "EMS_Running.Name", "EMovementSpeed::EMS_Running" },
		{ "EMS_Walking.DisplayName", "Walking" },
		{ "EMS_Walking.Name", "EMovementSpeed::EMS_Walking" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementSpeed::EMS_Idle", (int64)EMovementSpeed::EMS_Idle },
		{ "EMovementSpeed::EMS_Walking", (int64)EMovementSpeed::EMS_Walking },
		{ "EMovementSpeed::EMS_Jogging", (int64)EMovementSpeed::EMS_Jogging },
		{ "EMovementSpeed::EMS_Running", (int64)EMovementSpeed::EMS_Running },
		{ "EMovementSpeed::EMS_Engaging", (int64)EMovementSpeed::EMS_Engaging },
		{ "EMovementSpeed::EMS_DefaultMax", (int64)EMovementSpeed::EMS_DefaultMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EMovementSpeed",
	"EMovementSpeed",
	Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed()
{
	if (!Z_Registration_Info_UEnum_EMovementSpeed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementSpeed.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementSpeed.InnerSingleton;
}
// ********** End Enum EMovementSpeed **************************************************************

// ********** Begin Enum EElementalType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EElementalType;
static UEnum* EElementalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EElementalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EElementalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EElementalType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EElementalType"));
	}
	return Z_Registration_Info_UEnum_EElementalType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EElementalType>()
{
	return EElementalType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EElementalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EET_Bug.DisplayName", "Bug" },
		{ "EET_Bug.Name", "EElementalType::EET_Bug" },
		{ "EET_Dark.DisplayName", "Dark" },
		{ "EET_Dark.Name", "EElementalType::EET_Dark" },
		{ "EET_Dragon.DisplayName", "Dragon" },
		{ "EET_Dragon.Name", "EElementalType::EET_Dragon" },
		{ "EET_Electric.DisplayName", "Electric" },
		{ "EET_Electric.Name", "EElementalType::EET_Electric" },
		{ "EET_Fairy.DisplayName", "Fairy" },
		{ "EET_Fairy.Name", "EElementalType::EET_Fairy" },
		{ "EET_Fighting.DisplayName", "Fighting" },
		{ "EET_Fighting.Name", "EElementalType::EET_Fighting" },
		{ "EET_Fire.DisplayName", "Fire" },
		{ "EET_Fire.Name", "EElementalType::EET_Fire" },
		{ "EET_Flying.DisplayName", "Flying" },
		{ "EET_Flying.Name", "EElementalType::EET_Flying" },
		{ "EET_Ghost.DisplayName", "Ghost" },
		{ "EET_Ghost.Name", "EElementalType::EET_Ghost" },
		{ "EET_Grass.DisplayName", "Grass" },
		{ "EET_Grass.Name", "EElementalType::EET_Grass" },
		{ "EET_Ground.DisplayName", "Ground" },
		{ "EET_Ground.Name", "EElementalType::EET_Ground" },
		{ "EET_Ice.DisplayName", "Ice" },
		{ "EET_Ice.Name", "EElementalType::EET_Ice" },
		{ "EET_None.DisplayName", "None" },
		{ "EET_None.Name", "EElementalType::EET_None" },
		{ "EET_Normal.DisplayName", "Normal" },
		{ "EET_Normal.Name", "EElementalType::EET_Normal" },
		{ "EET_Poison.DisplayName", "Poison" },
		{ "EET_Poison.Name", "EElementalType::EET_Poison" },
		{ "EET_Psychic.DisplayName", "Psychic" },
		{ "EET_Psychic.Name", "EElementalType::EET_Psychic" },
		{ "EET_Rock.DisplayName", "Rock" },
		{ "EET_Rock.Name", "EElementalType::EET_Rock" },
		{ "EET_Steel.DisplayName", "Steel" },
		{ "EET_Steel.Name", "EElementalType::EET_Steel" },
		{ "EET_Water.DisplayName", "Water" },
		{ "EET_Water.Name", "EElementalType::EET_Water" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EElementalType::EET_None", (int64)EElementalType::EET_None },
		{ "EElementalType::EET_Fire", (int64)EElementalType::EET_Fire },
		{ "EElementalType::EET_Water", (int64)EElementalType::EET_Water },
		{ "EElementalType::EET_Steel", (int64)EElementalType::EET_Steel },
		{ "EElementalType::EET_Fairy", (int64)EElementalType::EET_Fairy },
		{ "EElementalType::EET_Fighting", (int64)EElementalType::EET_Fighting },
		{ "EElementalType::EET_Electric", (int64)EElementalType::EET_Electric },
		{ "EElementalType::EET_Rock", (int64)EElementalType::EET_Rock },
		{ "EElementalType::EET_Ice", (int64)EElementalType::EET_Ice },
		{ "EElementalType::EET_Dragon", (int64)EElementalType::EET_Dragon },
		{ "EElementalType::EET_Ghost", (int64)EElementalType::EET_Ghost },
		{ "EElementalType::EET_Dark", (int64)EElementalType::EET_Dark },
		{ "EElementalType::EET_Bug", (int64)EElementalType::EET_Bug },
		{ "EElementalType::EET_Psychic", (int64)EElementalType::EET_Psychic },
		{ "EElementalType::EET_Ground", (int64)EElementalType::EET_Ground },
		{ "EElementalType::EET_Normal", (int64)EElementalType::EET_Normal },
		{ "EElementalType::EET_Flying", (int64)EElementalType::EET_Flying },
		{ "EElementalType::EET_Grass", (int64)EElementalType::EET_Grass },
		{ "EElementalType::EET_Poison", (int64)EElementalType::EET_Poison },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EElementalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EElementalType",
	"EElementalType",
	Z_Construct_UEnum_ProjectMimikyu_EElementalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EElementalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EElementalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EElementalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType()
{
	if (!Z_Registration_Info_UEnum_EElementalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EElementalType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EElementalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EElementalType.InnerSingleton;
}
// ********** End Enum EElementalType **************************************************************

// ********** Begin Enum ENatureType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENatureType;
static UEnum* ENatureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENatureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENatureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_ENatureType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ENatureType"));
	}
	return Z_Registration_Info_UEnum_ENatureType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<ENatureType>()
{
	return ENatureType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_ENatureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENT_Adamant.DisplayName", "Adamant" },
		{ "ENT_Adamant.Name", "ENatureType::ENT_Adamant" },
		{ "ENT_Bashful.DisplayName", "Bashful" },
		{ "ENT_Bashful.Name", "ENatureType::ENT_Bashful" },
		{ "ENT_Bold.DisplayName", "Bold" },
		{ "ENT_Bold.Name", "ENatureType::ENT_Bold" },
		{ "ENT_Brave.DisplayName", "Brave" },
		{ "ENT_Brave.Name", "ENatureType::ENT_Brave" },
		{ "ENT_Calm.DisplayName", "Calm" },
		{ "ENT_Calm.Name", "ENatureType::ENT_Calm" },
		{ "ENT_Careful.DisplayName", "Careful" },
		{ "ENT_Careful.Name", "ENatureType::ENT_Careful" },
		{ "ENT_Docile.DisplayName", "Docile" },
		{ "ENT_Docile.Name", "ENatureType::ENT_Docile" },
		{ "ENT_Gentle.DisplayName", "Gentle" },
		{ "ENT_Gentle.Name", "ENatureType::ENT_Gentle" },
		{ "ENT_Hardy.DisplayName", "Hardy" },
		{ "ENT_Hardy.Name", "ENatureType::ENT_Hardy" },
		{ "ENT_Hasty.DisplayName", "Hasty" },
		{ "ENT_Hasty.Name", "ENatureType::ENT_Hasty" },
		{ "ENT_Impish.DisplayName", "Impish" },
		{ "ENT_Impish.Name", "ENatureType::ENT_Impish" },
		{ "ENT_Jolly.DisplayName", "Jolly" },
		{ "ENT_Jolly.Name", "ENatureType::ENT_Jolly" },
		{ "ENT_Lax.DisplayName", "Lax" },
		{ "ENT_Lax.Name", "ENatureType::ENT_Lax" },
		{ "ENT_Lonely.DisplayName", "Lonely" },
		{ "ENT_Lonely.Name", "ENatureType::ENT_Lonely" },
		{ "ENT_Mild.DisplayName", "Mild" },
		{ "ENT_Mild.Name", "ENatureType::ENT_Mild" },
		{ "ENT_Modest.DisplayName", "Modest" },
		{ "ENT_Modest.Name", "ENatureType::ENT_Modest" },
		{ "ENT_Naive.DisplayName", "Naive" },
		{ "ENT_Naive.Name", "ENatureType::ENT_Naive" },
		{ "ENT_Naughty.DisplayName", "Naughty" },
		{ "ENT_Naughty.Name", "ENatureType::ENT_Naughty" },
		{ "ENT_None.DisplayName", "None" },
		{ "ENT_None.Name", "ENatureType::ENT_None" },
		{ "ENT_Quiet.DisplayName", "Quiet" },
		{ "ENT_Quiet.Name", "ENatureType::ENT_Quiet" },
		{ "ENT_Quirky.DisplayName", "Quirky" },
		{ "ENT_Quirky.Name", "ENatureType::ENT_Quirky" },
		{ "ENT_Rash.DisplayName", "Rash" },
		{ "ENT_Rash.Name", "ENatureType::ENT_Rash" },
		{ "ENT_Relaxed.DisplayName", "Relaxed" },
		{ "ENT_Relaxed.Name", "ENatureType::ENT_Relaxed" },
		{ "ENT_Sassy.DisplayName", "Sassy" },
		{ "ENT_Sassy.Name", "ENatureType::ENT_Sassy" },
		{ "ENT_Serious.DisplayName", "Serious" },
		{ "ENT_Serious.Name", "ENatureType::ENT_Serious" },
		{ "ENT_Timid.DisplayName", "Timid" },
		{ "ENT_Timid.Name", "ENatureType::ENT_Timid" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENatureType::ENT_None", (int64)ENatureType::ENT_None },
		{ "ENatureType::ENT_Bashful", (int64)ENatureType::ENT_Bashful },
		{ "ENatureType::ENT_Docile", (int64)ENatureType::ENT_Docile },
		{ "ENatureType::ENT_Hardy", (int64)ENatureType::ENT_Hardy },
		{ "ENatureType::ENT_Quirky", (int64)ENatureType::ENT_Quirky },
		{ "ENatureType::ENT_Serious", (int64)ENatureType::ENT_Serious },
		{ "ENatureType::ENT_Adamant", (int64)ENatureType::ENT_Adamant },
		{ "ENatureType::ENT_Modest", (int64)ENatureType::ENT_Modest },
		{ "ENatureType::ENT_Bold", (int64)ENatureType::ENT_Bold },
		{ "ENatureType::ENT_Brave", (int64)ENatureType::ENT_Brave },
		{ "ENatureType::ENT_Calm", (int64)ENatureType::ENT_Calm },
		{ "ENatureType::ENT_Careful", (int64)ENatureType::ENT_Careful },
		{ "ENatureType::ENT_Gentle", (int64)ENatureType::ENT_Gentle },
		{ "ENatureType::ENT_Hasty", (int64)ENatureType::ENT_Hasty },
		{ "ENatureType::ENT_Jolly", (int64)ENatureType::ENT_Jolly },
		{ "ENatureType::ENT_Lax", (int64)ENatureType::ENT_Lax },
		{ "ENatureType::ENT_Lonely", (int64)ENatureType::ENT_Lonely },
		{ "ENatureType::ENT_Mild", (int64)ENatureType::ENT_Mild },
		{ "ENatureType::ENT_Naughty", (int64)ENatureType::ENT_Naughty },
		{ "ENatureType::ENT_Quiet", (int64)ENatureType::ENT_Quiet },
		{ "ENatureType::ENT_Timid", (int64)ENatureType::ENT_Timid },
		{ "ENatureType::ENT_Relaxed", (int64)ENatureType::ENT_Relaxed },
		{ "ENatureType::ENT_Sassy", (int64)ENatureType::ENT_Sassy },
		{ "ENatureType::ENT_Rash", (int64)ENatureType::ENT_Rash },
		{ "ENatureType::ENT_Naive", (int64)ENatureType::ENT_Naive },
		{ "ENatureType::ENT_Impish", (int64)ENatureType::ENT_Impish },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_ENatureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"ENatureType",
	"ENatureType",
	Z_Construct_UEnum_ProjectMimikyu_ENatureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_ENatureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_ENatureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_ENatureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_ENatureType()
{
	if (!Z_Registration_Info_UEnum_ENatureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENatureType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_ENatureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENatureType.InnerSingleton;
}
// ********** End Enum ENatureType *****************************************************************

// ********** Begin Enum EStatsType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatsType;
static UEnum* EStatsType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatsType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EStatsType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EStatsType"));
	}
	return Z_Registration_Info_UEnum_EStatsType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EStatsType>()
{
	return EStatsType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EStatsType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EST_Attack.DisplayName", "Attack" },
		{ "EST_Attack.Name", "EStatsType::EST_Attack" },
		{ "EST_Defense.DisplayName", "Defense" },
		{ "EST_Defense.Name", "EStatsType::EST_Defense" },
		{ "EST_HealthPoints.DisplayName", "HealthPoints" },
		{ "EST_HealthPoints.Name", "EStatsType::EST_HealthPoints" },
		{ "EST_None.DisplayName", "None" },
		{ "EST_None.Name", "EStatsType::EST_None" },
		{ "EST_SpecialAttack.DisplayName", "Special Attack" },
		{ "EST_SpecialAttack.Name", "EStatsType::EST_SpecialAttack" },
		{ "EST_SpecialDefense.DisplayName", "Special Defense" },
		{ "EST_SpecialDefense.Name", "EStatsType::EST_SpecialDefense" },
		{ "EST_Speed.DisplayName", "Speed" },
		{ "EST_Speed.Name", "EStatsType::EST_Speed" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatsType::EST_None", (int64)EStatsType::EST_None },
		{ "EStatsType::EST_Attack", (int64)EStatsType::EST_Attack },
		{ "EStatsType::EST_HealthPoints", (int64)EStatsType::EST_HealthPoints },
		{ "EStatsType::EST_Defense", (int64)EStatsType::EST_Defense },
		{ "EStatsType::EST_SpecialAttack", (int64)EStatsType::EST_SpecialAttack },
		{ "EStatsType::EST_SpecialDefense", (int64)EStatsType::EST_SpecialDefense },
		{ "EStatsType::EST_Speed", (int64)EStatsType::EST_Speed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EStatsType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EStatsType",
	"EStatsType",
	Z_Construct_UEnum_ProjectMimikyu_EStatsType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EStatsType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EStatsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EStatsType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EStatsType()
{
	if (!Z_Registration_Info_UEnum_EStatsType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatsType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EStatsType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatsType.InnerSingleton;
}
// ********** End Enum EStatsType ******************************************************************

// ********** Begin Enum EStatusType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatusType;
static UEnum* EStatusType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatusType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatusType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EStatusType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EStatusType"));
	}
	return Z_Registration_Info_UEnum_EStatusType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EStatusType>()
{
	return EStatusType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EStatusType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EST_Burned.DisplayName", "Burned" },
		{ "EST_Burned.Name", "EStatusType::EST_Burned" },
		{ "EST_Frostbit.DisplayName", "Frostbit" },
		{ "EST_Frostbit.Name", "EStatusType::EST_Frostbit" },
		{ "EST_None.DisplayName", "None" },
		{ "EST_None.Name", "EStatusType::EST_None" },
		{ "EST_Paralyzed.DisplayName", "Paralyzed" },
		{ "EST_Paralyzed.Name", "EStatusType::EST_Paralyzed" },
		{ "EST_Poisoned.DisplayName", "Poisoned" },
		{ "EST_Poisoned.Name", "EStatusType::EST_Poisoned" },
		{ "EST_Sleep.DisplayName", "Sleep" },
		{ "EST_Sleep.Name", "EStatusType::EST_Sleep" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatusType::EST_None", (int64)EStatusType::EST_None },
		{ "EStatusType::EST_Frostbit", (int64)EStatusType::EST_Frostbit },
		{ "EStatusType::EST_Burned", (int64)EStatusType::EST_Burned },
		{ "EStatusType::EST_Paralyzed", (int64)EStatusType::EST_Paralyzed },
		{ "EStatusType::EST_Sleep", (int64)EStatusType::EST_Sleep },
		{ "EStatusType::EST_Poisoned", (int64)EStatusType::EST_Poisoned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EStatusType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EStatusType",
	"EStatusType",
	Z_Construct_UEnum_ProjectMimikyu_EStatusType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EStatusType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EStatusType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EStatusType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EStatusType()
{
	if (!Z_Registration_Info_UEnum_EStatusType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatusType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EStatusType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatusType.InnerSingleton;
}
// ********** End Enum EStatusType *****************************************************************

// ********** Begin Enum EPokemonStatus ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokemonStatus;
static UEnum* EPokemonStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokemonStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokemonStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokemonStatus"));
	}
	return Z_Registration_Info_UEnum_EPokemonStatus.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPokemonStatus>()
{
	return EPokemonStatus_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPS_AITrainer.DisplayName", "AITrainer" },
		{ "EPS_AITrainer.Name", "EPokemonStatus::EPS_AITrainer" },
		{ "EPS_PlayerTrainer.DisplayName", "PlayerTrainer" },
		{ "EPS_PlayerTrainer.Name", "EPokemonStatus::EPS_PlayerTrainer" },
		{ "EPS_Wild.DisplayName", "Wild" },
		{ "EPS_Wild.Name", "EPokemonStatus::EPS_Wild" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokemonStatus::EPS_Wild", (int64)EPokemonStatus::EPS_Wild },
		{ "EPokemonStatus::EPS_AITrainer", (int64)EPokemonStatus::EPS_AITrainer },
		{ "EPokemonStatus::EPS_PlayerTrainer", (int64)EPokemonStatus::EPS_PlayerTrainer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokemonStatus",
	"EPokemonStatus",
	Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus()
{
	if (!Z_Registration_Info_UEnum_EPokemonStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokemonStatus.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokemonStatus.InnerSingleton;
}
// ********** End Enum EPokemonStatus **************************************************************

// ********** Begin Enum EProjectileEffect *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileEffect;
static UEnum* EProjectileEffect_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileEffect.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileEffect.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EProjectileEffect"));
	}
	return Z_Registration_Info_UEnum_EProjectileEffect.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EProjectileEffect>()
{
	return EProjectileEffect_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPE_Explosion.DisplayName", "Explosion" },
		{ "EPE_Explosion.Name", "EProjectileEffect::EPE_Explosion" },
		{ "EPE_Max.DisplayName", "Default Max" },
		{ "EPE_Max.Name", "EProjectileEffect::EPE_Max" },
		{ "EPE_None.DisplayName", "None" },
		{ "EPE_None.Name", "EProjectileEffect::EPE_None" },
		{ "EPE_Status.DisplayName", "Status" },
		{ "EPE_Status.Name", "EProjectileEffect::EPE_Status" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileEffect::EPE_None", (int64)EProjectileEffect::EPE_None },
		{ "EProjectileEffect::EPE_Explosion", (int64)EProjectileEffect::EPE_Explosion },
		{ "EProjectileEffect::EPE_Status", (int64)EProjectileEffect::EPE_Status },
		{ "EProjectileEffect::EPE_Max", (int64)EProjectileEffect::EPE_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EProjectileEffect",
	"EProjectileEffect",
	Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect()
{
	if (!Z_Registration_Info_UEnum_EProjectileEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileEffect.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EProjectileEffect_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileEffect.InnerSingleton;
}
// ********** End Enum EProjectileEffect ***********************************************************

// ********** Begin Enum EMoveAction ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveAction;
static UEnum* EMoveAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoveAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoveAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EMoveAction, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EMoveAction"));
	}
	return Z_Registration_Info_UEnum_EMoveAction.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EMoveAction>()
{
	return EMoveAction_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EMoveAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMA_Charging.DisplayName", "Charging" },
		{ "EMA_Charging.Name", "EMoveAction::EMA_Charging" },
		{ "EMA_Dodging.DisplayName", "Dodging" },
		{ "EMA_Dodging.Name", "EMoveAction::EMA_Dodging" },
		{ "EMA_Environment.DisplayName", "Environment" },
		{ "EMA_Environment.Name", "EMoveAction::EMA_Environment" },
		{ "EMA_Max.DisplayName", "Default Max" },
		{ "EMA_Max.Name", "EMoveAction::EMA_Max" },
		{ "EMA_Melee.DisplayName", "Melee" },
		{ "EMA_Melee.Name", "EMoveAction::EMA_Melee" },
		{ "EMA_None.DisplayName", "None" },
		{ "EMA_None.Name", "EMoveAction::EMA_None" },
		{ "EMA_Projectile.DisplayName", "Projectile" },
		{ "EMA_Projectile.Name", "EMoveAction::EMA_Projectile" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoveAction::EMA_None", (int64)EMoveAction::EMA_None },
		{ "EMoveAction::EMA_Melee", (int64)EMoveAction::EMA_Melee },
		{ "EMoveAction::EMA_Projectile", (int64)EMoveAction::EMA_Projectile },
		{ "EMoveAction::EMA_Dodging", (int64)EMoveAction::EMA_Dodging },
		{ "EMoveAction::EMA_Charging", (int64)EMoveAction::EMA_Charging },
		{ "EMoveAction::EMA_Environment", (int64)EMoveAction::EMA_Environment },
		{ "EMoveAction::EMA_Max", (int64)EMoveAction::EMA_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EMoveAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EMoveAction",
	"EMoveAction",
	Z_Construct_UEnum_ProjectMimikyu_EMoveAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EMoveAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EMoveAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EMoveAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EMoveAction()
{
	if (!Z_Registration_Info_UEnum_EMoveAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveAction.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EMoveAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoveAction.InnerSingleton;
}
// ********** End Enum EMoveAction *****************************************************************

// ********** Begin Enum EDamageResponse ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageResponse;
static UEnum* EDamageResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EDamageResponse, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EDamageResponse"));
	}
	return Z_Registration_Info_UEnum_EDamageResponse.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EDamageResponse>()
{
	return EDamageResponse_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EDamageResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDR_HitReaction.DisplayName", "Hit Reaction" },
		{ "EDR_HitReaction.Name", "EDamageResponse::EDR_HitReaction" },
		{ "EDR_Knockback.DisplayName", "Knockback" },
		{ "EDR_Knockback.Name", "EDamageResponse::EDR_Knockback" },
		{ "EDR_Max.DisplayName", "Default Max" },
		{ "EDR_Max.Name", "EDamageResponse::EDR_Max" },
		{ "EDR_None.DisplayName", "None" },
		{ "EDR_None.Name", "EDamageResponse::EDR_None" },
		{ "EDR_Stagger.DisplayName", "Stagger" },
		{ "EDR_Stagger.Name", "EDamageResponse::EDR_Stagger" },
		{ "EDR_Stun.DisplayName", "Stun" },
		{ "EDR_Stun.Name", "EDamageResponse::EDR_Stun" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDamageResponse::EDR_None", (int64)EDamageResponse::EDR_None },
		{ "EDamageResponse::EDR_HitReaction", (int64)EDamageResponse::EDR_HitReaction },
		{ "EDamageResponse::EDR_Stagger", (int64)EDamageResponse::EDR_Stagger },
		{ "EDamageResponse::EDR_Stun", (int64)EDamageResponse::EDR_Stun },
		{ "EDamageResponse::EDR_Knockback", (int64)EDamageResponse::EDR_Knockback },
		{ "EDamageResponse::EDR_Max", (int64)EDamageResponse::EDR_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EDamageResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EDamageResponse",
	"EDamageResponse",
	Z_Construct_UEnum_ProjectMimikyu_EDamageResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EDamageResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EDamageResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EDamageResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EDamageResponse()
{
	if (!Z_Registration_Info_UEnum_EDamageResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageResponse.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EDamageResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageResponse.InnerSingleton;
}
// ********** End Enum EDamageResponse *************************************************************

// ********** Begin Enum EDirectionPoint ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDirectionPoint;
static UEnum* EDirectionPoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDirectionPoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDirectionPoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EDirectionPoint"));
	}
	return Z_Registration_Info_UEnum_EDirectionPoint.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EDirectionPoint>()
{
	return EDirectionPoint_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDP_Down.DisplayName", "Down" },
		{ "EDP_Down.Name", "EDirectionPoint::EDP_Down" },
		{ "EDP_Left.DisplayName", "Left" },
		{ "EDP_Left.Name", "EDirectionPoint::EDP_Left" },
		{ "EDP_Right.DisplayName", "Right" },
		{ "EDP_Right.Name", "EDirectionPoint::EDP_Right" },
		{ "EDP_Up.DisplayName", "Up" },
		{ "EDP_Up.Name", "EDirectionPoint::EDP_Up" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDirectionPoint::EDP_Up", (int64)EDirectionPoint::EDP_Up },
		{ "EDirectionPoint::EDP_Down", (int64)EDirectionPoint::EDP_Down },
		{ "EDirectionPoint::EDP_Left", (int64)EDirectionPoint::EDP_Left },
		{ "EDirectionPoint::EDP_Right", (int64)EDirectionPoint::EDP_Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EDirectionPoint",
	"EDirectionPoint",
	Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint()
{
	if (!Z_Registration_Info_UEnum_EDirectionPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDirectionPoint.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDirectionPoint.InnerSingleton;
}
// ********** End Enum EDirectionPoint *************************************************************

// ********** Begin Enum EMoveType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveType;
static UEnum* EMoveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EMoveType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EMoveType"));
	}
	return Z_Registration_Info_UEnum_EMoveType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EMoveType>()
{
	return EMoveType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EMoveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMT_Max.DisplayName", "Default Max" },
		{ "EMT_Max.Name", "EMoveType::EMT_Max" },
		{ "EMT_None.DisplayName", "None" },
		{ "EMT_None.Name", "EMoveType::EMT_None" },
		{ "EMT_Physical.DisplayName", "Physical" },
		{ "EMT_Physical.Name", "EMoveType::EMT_Physical" },
		{ "EMT_Special.DisplayName", "Special" },
		{ "EMT_Special.Name", "EMoveType::EMT_Special" },
		{ "EMT_Status.DisplayName", "Status" },
		{ "EMT_Status.Name", "EMoveType::EMT_Status" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoveType::EMT_None", (int64)EMoveType::EMT_None },
		{ "EMoveType::EMT_Physical", (int64)EMoveType::EMT_Physical },
		{ "EMoveType::EMT_Special", (int64)EMoveType::EMT_Special },
		{ "EMoveType::EMT_Status", (int64)EMoveType::EMT_Status },
		{ "EMoveType::EMT_Max", (int64)EMoveType::EMT_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EMoveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EMoveType",
	"EMoveType",
	Z_Construct_UEnum_ProjectMimikyu_EMoveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EMoveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EMoveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EMoveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EMoveType()
{
	if (!Z_Registration_Info_UEnum_EMoveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EMoveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoveType.InnerSingleton;
}
// ********** End Enum EMoveType *******************************************************************

// ********** Begin Enum EPokeballType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokeballType;
static UEnum* EPokeballType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokeballType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokeballType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokeballType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokeballType"));
	}
	return Z_Registration_Info_UEnum_EPokeballType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPokeballType>()
{
	return EPokeballType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokeballType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPT_FeatherBall.DisplayName", "FeatherBall" },
		{ "EPT_FeatherBall.Name", "EPokeballType::EPT_FeatherBall" },
		{ "EPT_GigatonBall.DisplayName", "GigatonBall" },
		{ "EPT_GigatonBall.Name", "EPokeballType::EPT_GigatonBall" },
		{ "EPT_GreatBall.DisplayName", "GreatBall" },
		{ "EPT_GreatBall.Name", "EPokeballType::EPT_GreatBall" },
		{ "EPT_HeavyBall.DisplayName", "HeavyBall" },
		{ "EPT_HeavyBall.Name", "EPokeballType::EPT_HeavyBall" },
		{ "EPT_JetBall.DisplayName", "JetBall" },
		{ "EPT_JetBall.Name", "EPokeballType::EPT_JetBall" },
		{ "EPT_LeadenBall.DisplayName", "LeadenBall" },
		{ "EPT_LeadenBall.Name", "EPokeballType::EPT_LeadenBall" },
		{ "EPT_None.DisplayName", "None" },
		{ "EPT_None.Name", "EPokeballType::EPT_None" },
		{ "EPT_Pokeball.DisplayName", "PokeBall" },
		{ "EPT_Pokeball.Name", "EPokeballType::EPT_Pokeball" },
		{ "EPT_UltraBall.DisplayName", "UltraBall" },
		{ "EPT_UltraBall.Name", "EPokeballType::EPT_UltraBall" },
		{ "EPT_WingBall.DisplayName", "WingBall" },
		{ "EPT_WingBall.Name", "EPokeballType::EPT_WingBall" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokeballType::EPT_None", (int64)EPokeballType::EPT_None },
		{ "EPokeballType::EPT_Pokeball", (int64)EPokeballType::EPT_Pokeball },
		{ "EPokeballType::EPT_GreatBall", (int64)EPokeballType::EPT_GreatBall },
		{ "EPokeballType::EPT_UltraBall", (int64)EPokeballType::EPT_UltraBall },
		{ "EPokeballType::EPT_HeavyBall", (int64)EPokeballType::EPT_HeavyBall },
		{ "EPokeballType::EPT_LeadenBall", (int64)EPokeballType::EPT_LeadenBall },
		{ "EPokeballType::EPT_GigatonBall", (int64)EPokeballType::EPT_GigatonBall },
		{ "EPokeballType::EPT_FeatherBall", (int64)EPokeballType::EPT_FeatherBall },
		{ "EPokeballType::EPT_WingBall", (int64)EPokeballType::EPT_WingBall },
		{ "EPokeballType::EPT_JetBall", (int64)EPokeballType::EPT_JetBall },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokeballType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokeballType",
	"EPokeballType",
	Z_Construct_UEnum_ProjectMimikyu_EPokeballType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokeballType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokeballType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokeballType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokeballType()
{
	if (!Z_Registration_Info_UEnum_EPokeballType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokeballType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokeballType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokeballType.InnerSingleton;
}
// ********** End Enum EPokeballType ***************************************************************

// ********** Begin Enum ESlotType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlotType;
static UEnum* ESlotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_ESlotType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ESlotType"));
	}
	return Z_Registration_Info_UEnum_ESlotType.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<ESlotType>()
{
	return ESlotType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_ESlotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EST_Inventory.DisplayName", "Inventory" },
		{ "EST_Inventory.Name", "ESlotType::EST_Inventory" },
		{ "EST_None.DisplayName", "None" },
		{ "EST_None.Name", "ESlotType::EST_None" },
		{ "EST_PokemonParty.DisplayName", "Pokemon Party" },
		{ "EST_PokemonParty.Name", "ESlotType::EST_PokemonParty" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlotType::EST_None", (int64)ESlotType::EST_None },
		{ "ESlotType::EST_PokemonParty", (int64)ESlotType::EST_PokemonParty },
		{ "ESlotType::EST_Inventory", (int64)ESlotType::EST_Inventory },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_ESlotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"ESlotType",
	"ESlotType",
	Z_Construct_UEnum_ProjectMimikyu_ESlotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_ESlotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_ESlotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_ESlotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_ESlotType()
{
	if (!Z_Registration_Info_UEnum_ESlotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlotType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_ESlotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlotType.InnerSingleton;
}
// ********** End Enum ESlotType *******************************************************************

// ********** Begin Enum EPokemonState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokemonState;
static UEnum* EPokemonState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokemonState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokemonState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokemonState, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokemonState"));
	}
	return Z_Registration_Info_UEnum_EPokemonState.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPokemonState>()
{
	return EPokemonState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokemonState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPS_Combative.DisplayName", "Combative" },
		{ "EPS_Combative.Name", "EPokemonState::EPS_Combative" },
		{ "EPS_Docile.DisplayName", "Docile" },
		{ "EPS_Docile.Name", "EPokemonState::EPS_Docile" },
		{ "EPS_Fainted.DisplayName", "Fainted" },
		{ "EPS_Fainted.Name", "EPokemonState::EPS_Fainted" },
		{ "EPS_Investigative.DisplayName", "Investigative" },
		{ "EPS_Investigative.Name", "EPokemonState::EPS_Investigative" },
		{ "EPS_NoState.DisplayName", "NoState" },
		{ "EPS_NoState.Name", "EPokemonState::EPS_NoState" },
		{ "EPS_Passive.DisplayName", "Passive" },
		{ "EPS_Passive.Name", "EPokemonState::EPS_Passive" },
		{ "EPS_Resting.DisplayName", "Resting" },
		{ "EPS_Resting.Name", "EPokemonState::EPS_Resting" },
		{ "EPS_Training.DisplayName", "Training" },
		{ "EPS_Training.Name", "EPokemonState::EPS_Training" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokemonState::EPS_NoState", (int64)EPokemonState::EPS_NoState },
		{ "EPokemonState::EPS_Passive", (int64)EPokemonState::EPS_Passive },
		{ "EPokemonState::EPS_Training", (int64)EPokemonState::EPS_Training },
		{ "EPokemonState::EPS_Resting", (int64)EPokemonState::EPS_Resting },
		{ "EPokemonState::EPS_Docile", (int64)EPokemonState::EPS_Docile },
		{ "EPokemonState::EPS_Combative", (int64)EPokemonState::EPS_Combative },
		{ "EPokemonState::EPS_Investigative", (int64)EPokemonState::EPS_Investigative },
		{ "EPokemonState::EPS_Fainted", (int64)EPokemonState::EPS_Fainted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokemonState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokemonState",
	"EPokemonState",
	Z_Construct_UEnum_ProjectMimikyu_EPokemonState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokemonState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonState()
{
	if (!Z_Registration_Info_UEnum_EPokemonState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokemonState.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokemonState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokemonState.InnerSingleton;
}
// ********** End Enum EPokemonState ***************************************************************

// ********** Begin Enum EEnvironmentLandingPattern ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvironmentLandingPattern;
static UEnum* EEnvironmentLandingPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvironmentLandingPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvironmentLandingPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EEnvironmentLandingPattern"));
	}
	return Z_Registration_Info_UEnum_EEnvironmentLandingPattern.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EEnvironmentLandingPattern>()
{
	return EEnvironmentLandingPattern_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EELP_Circle.DisplayName", "Circle" },
		{ "EELP_Circle.Name", "EEnvironmentLandingPattern::EELP_Circle" },
		{ "EELP_Grid.DisplayName", "Grid" },
		{ "EELP_Grid.Name", "EEnvironmentLandingPattern::EELP_Grid" },
		{ "EELP_Line.DisplayName", "Line" },
		{ "EELP_Line.Name", "EEnvironmentLandingPattern::EELP_Line" },
		{ "EELP_None.DisplayName", "None" },
		{ "EELP_None.Name", "EEnvironmentLandingPattern::EELP_None" },
		{ "EELP_RandonInRadius.DisplayName", "RandomInRadius" },
		{ "EELP_RandonInRadius.Name", "EEnvironmentLandingPattern::EELP_RandonInRadius" },
		{ "EELP_TargetedDrop.DisplayName", "TargetedDrop" },
		{ "EELP_TargetedDrop.Name", "EEnvironmentLandingPattern::EELP_TargetedDrop" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvironmentLandingPattern::EELP_None", (int64)EEnvironmentLandingPattern::EELP_None },
		{ "EEnvironmentLandingPattern::EELP_RandonInRadius", (int64)EEnvironmentLandingPattern::EELP_RandonInRadius },
		{ "EEnvironmentLandingPattern::EELP_Grid", (int64)EEnvironmentLandingPattern::EELP_Grid },
		{ "EEnvironmentLandingPattern::EELP_Line", (int64)EEnvironmentLandingPattern::EELP_Line },
		{ "EEnvironmentLandingPattern::EELP_Circle", (int64)EEnvironmentLandingPattern::EELP_Circle },
		{ "EEnvironmentLandingPattern::EELP_TargetedDrop", (int64)EEnvironmentLandingPattern::EELP_TargetedDrop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EEnvironmentLandingPattern",
	"EEnvironmentLandingPattern",
	Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern()
{
	if (!Z_Registration_Info_UEnum_EEnvironmentLandingPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvironmentLandingPattern.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvironmentLandingPattern.InnerSingleton;
}
// ********** End Enum EEnvironmentLandingPattern **************************************************

// ********** Begin Enum EEnvironmentSpawnHeightMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode;
static UEnum* EEnvironmentSpawnHeightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EEnvironmentSpawnHeightMode"));
	}
	return Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EEnvironmentSpawnHeightMode>()
{
	return EEnvironmentSpawnHeightMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESHM_CeilingTracePlus.DisplayName", "CeilingTracePlus" },
		{ "ESHM_CeilingTracePlus.Name", "EEnvironmentSpawnHeightMode::ESHM_CeilingTracePlus" },
		{ "ESHM_FixedWorldZ.DisplayName", "FixedWorldZ" },
		{ "ESHM_FixedWorldZ.Name", "EEnvironmentSpawnHeightMode::ESHM_FixedWorldZ" },
		{ "ESHM_None.DisplayName", "None" },
		{ "ESHM_None.Name", "EEnvironmentSpawnHeightMode::ESHM_None" },
		{ "ESHM_SkyClamp.DisplayName", "SkyClamp" },
		{ "ESHM_SkyClamp.Name", "EEnvironmentSpawnHeightMode::ESHM_SkyClamp" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvironmentSpawnHeightMode::ESHM_None", (int64)EEnvironmentSpawnHeightMode::ESHM_None },
		{ "EEnvironmentSpawnHeightMode::ESHM_FixedWorldZ", (int64)EEnvironmentSpawnHeightMode::ESHM_FixedWorldZ },
		{ "EEnvironmentSpawnHeightMode::ESHM_CeilingTracePlus", (int64)EEnvironmentSpawnHeightMode::ESHM_CeilingTracePlus },
		{ "EEnvironmentSpawnHeightMode::ESHM_SkyClamp", (int64)EEnvironmentSpawnHeightMode::ESHM_SkyClamp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EEnvironmentSpawnHeightMode",
	"EEnvironmentSpawnHeightMode",
	Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode()
{
	if (!Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode.InnerSingleton;
}
// ********** End Enum EEnvironmentSpawnHeightMode *************************************************

// ********** Begin Enum EEnvironmentFallDirection *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvironmentFallDirection;
static UEnum* EEnvironmentFallDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvironmentFallDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvironmentFallDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EEnvironmentFallDirection"));
	}
	return Z_Registration_Info_UEnum_EEnvironmentFallDirection.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EEnvironmentFallDirection>()
{
	return EEnvironmentFallDirection_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EFD_None.DisplayName", "None" },
		{ "EFD_None.Name", "EEnvironmentFallDirection::EFD_None" },
		{ "EFD_TowardCenter.DisplayName", "TowardCenter" },
		{ "EFD_TowardCenter.Name", "EEnvironmentFallDirection::EFD_TowardCenter" },
		{ "EFD_TowardLandingPoint.DisplayName", "TowardLandingPoint" },
		{ "EFD_TowardLandingPoint.Name", "EEnvironmentFallDirection::EFD_TowardLandingPoint" },
		{ "EFD_WorldDown.DisplayName", "WorldDown" },
		{ "EFD_WorldDown.Name", "EEnvironmentFallDirection::EFD_WorldDown" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvironmentFallDirection::EFD_None", (int64)EEnvironmentFallDirection::EFD_None },
		{ "EEnvironmentFallDirection::EFD_WorldDown", (int64)EEnvironmentFallDirection::EFD_WorldDown },
		{ "EEnvironmentFallDirection::EFD_TowardLandingPoint", (int64)EEnvironmentFallDirection::EFD_TowardLandingPoint },
		{ "EEnvironmentFallDirection::EFD_TowardCenter", (int64)EEnvironmentFallDirection::EFD_TowardCenter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EEnvironmentFallDirection",
	"EEnvironmentFallDirection",
	Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection()
{
	if (!Z_Registration_Info_UEnum_EEnvironmentFallDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvironmentFallDirection.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EEnvironmentFallDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvironmentFallDirection.InnerSingleton;
}
// ********** End Enum EEnvironmentFallDirection ***************************************************

// ********** Begin ScriptStruct FPokemonTypeInfo **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonTypeInfo;
class UScriptStruct* FPokemonTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonTypeInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonTypeInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstType_MetaData[] = {
		{ "Category", "PokemonTypeInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondType_MetaData[] = {
		{ "Category", "PokemonTypeInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirstType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FirstType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonTypeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_FirstType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_FirstType = { "FirstType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonTypeInfo, FirstType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstType_MetaData), NewProp_FirstType_MetaData) }; // 630780709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_SecondType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_SecondType = { "SecondType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonTypeInfo, SecondType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondType_MetaData), NewProp_SecondType_MetaData) }; // 630780709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_FirstType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_FirstType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_SecondType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewProp_SecondType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonTypeInfo",
	Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::PropPointers),
	sizeof(FPokemonTypeInfo),
	alignof(FPokemonTypeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonTypeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonTypeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPokemonTypeInfo.InnerSingleton;
}
// ********** End ScriptStruct FPokemonTypeInfo ****************************************************

// ********** Begin ScriptStruct FPokemonMoveChart *************************************************
static_assert(std::is_polymorphic<FPokemonMoveChart>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPokemonMoveChart cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonMoveChart;
class UScriptStruct* FPokemonMoveChart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonMoveChart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonMoveChart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonMoveChart, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonMoveChart"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonMoveChart.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPokemonMoveChart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonMoveChart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonMoveChart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PokemonMoveChart",
	nullptr,
	0,
	sizeof(FPokemonMoveChart),
	alignof(FPokemonMoveChart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonMoveChart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonMoveChart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonMoveChart()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonMoveChart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonMoveChart.InnerSingleton, Z_Construct_UScriptStruct_FPokemonMoveChart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPokemonMoveChart.InnerSingleton;
}
// ********** End ScriptStruct FPokemonMoveChart ***************************************************

// ********** Begin ScriptStruct FProjectileTagContainer *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileTagContainer;
class UScriptStruct* FProjectileTagContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileTagContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileTagContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileTagContainer, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ProjectileTagContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileTagContainer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileTagContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryTag_MetaData[] = {
		{ "Categories", "PokemonMoves.Spread" },
		{ "Category", "ProjectileTagContainer" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierTags_MetaData[] = {
		{ "Categories", "PokemonMoves.Spread.Modifier" },
		{ "Category", "ProjectileTagContainer" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradableTag1_MetaData[] = {
		{ "Category", "ProjectileTagContainer" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradableTag2_MetaData[] = {
		{ "Category", "ProjectileTagContainer" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "ProjectileTagContainer" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifierTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpgradableTag1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpgradableTag2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileTagContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTagContainer, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryTag_MetaData), NewProp_CategoryTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_ModifierTags_Inner = { "ModifierTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_ModifierTags = { "ModifierTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTagContainer, ModifierTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierTags_MetaData), NewProp_ModifierTags_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_UpgradableTag1 = { "UpgradableTag1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTagContainer, UpgradableTag1), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradableTag1_MetaData), NewProp_UpgradableTag1_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_UpgradableTag2 = { "UpgradableTag2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTagContainer, UpgradableTag2), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradableTag2_MetaData), NewProp_UpgradableTag2_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTagContainer, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_ModifierTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_ModifierTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_UpgradableTag1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_UpgradableTag2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ProjectileTagContainer",
	Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::PropPointers),
	sizeof(FProjectileTagContainer),
	alignof(FProjectileTagContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileTagContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileTagContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileTagContainer.InnerSingleton, Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileTagContainer.InnerSingleton;
}
// ********** End ScriptStruct FProjectileTagContainer *********************************************

// ********** Begin ScriptStruct FEnvironmentDropParams ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEnvironmentDropParams;
class UScriptStruct* FEnvironmentDropParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnvironmentDropParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEnvironmentDropParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvironmentDropParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EnvironmentDropParams"));
	}
	return Z_Registration_Info_UScriptStruct_FEnvironmentDropParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropPatternQuery_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaCenter_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Area Selection\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area Selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaRadius_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandingPattern_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumProjectiles_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampToNavMesh_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumWaves_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Waves / Rain\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waves / Rain" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenWaves_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningTime_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Telegraph\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Telegraph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactAOERadius_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnHeightMode_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Height / Falling\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height / Falling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnHeight_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravity_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetPerWave_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitTargets_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Targeting\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targeting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPredictive_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveLeadTime_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedLandingPoints_MetaData[] = {
		{ "Category", "EnvironmentDropParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OutPuts\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OutPuts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropPatternQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AreaCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandingPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LandingPattern;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProjectiles;
	static void NewProp_bClampToNavMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToNavMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumWaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenWaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarningTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactAOERadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnHeightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnHeightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnHeight;
	static void NewProp_bUseGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
	static void NewProp_bRetargetPerWave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetPerWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplicitTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplicitTargets;
	static void NewProp_bPredictive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictiveLeadTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLandingPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedLandingPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvironmentDropParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_DropPatternQuery = { "DropPatternQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, DropPatternQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropPatternQuery_MetaData), NewProp_DropPatternQuery_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_AreaCenter = { "AreaCenter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, AreaCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaCenter_MetaData), NewProp_AreaCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_AreaRadius = { "AreaRadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, AreaRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaRadius_MetaData), NewProp_AreaRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_LandingPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_LandingPattern = { "LandingPattern", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, LandingPattern), Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandingPattern_MetaData), NewProp_LandingPattern_MetaData) }; // 1485142758
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_NumProjectiles = { "NumProjectiles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, NumProjectiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumProjectiles_MetaData), NewProp_NumProjectiles_MetaData) };
void Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bClampToNavMesh_SetBit(void* Obj)
{
	((FEnvironmentDropParams*)Obj)->bClampToNavMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bClampToNavMesh = { "bClampToNavMesh", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnvironmentDropParams), &Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bClampToNavMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampToNavMesh_MetaData), NewProp_bClampToNavMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_NumWaves = { "NumWaves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, NumWaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumWaves_MetaData), NewProp_NumWaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_TimeBetweenWaves = { "TimeBetweenWaves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, TimeBetweenWaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBetweenWaves_MetaData), NewProp_TimeBetweenWaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_WarningTime = { "WarningTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, WarningTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningTime_MetaData), NewProp_WarningTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_ImpactAOERadius = { "ImpactAOERadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, ImpactAOERadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactAOERadius_MetaData), NewProp_ImpactAOERadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_SpawnHeightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_SpawnHeightMode = { "SpawnHeightMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, SpawnHeightMode), Z_Construct_UEnum_ProjectMimikyu_EEnvironmentSpawnHeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnHeightMode_MetaData), NewProp_SpawnHeightMode_MetaData) }; // 1985865126
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_SpawnHeight = { "SpawnHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, SpawnHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnHeight_MetaData), NewProp_SpawnHeight_MetaData) };
void Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bUseGravity_SetBit(void* Obj)
{
	((FEnvironmentDropParams*)Obj)->bUseGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bUseGravity = { "bUseGravity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnvironmentDropParams), &Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bUseGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGravity_MetaData), NewProp_bUseGravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSpeed_MetaData), NewProp_InitialSpeed_MetaData) };
void Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bRetargetPerWave_SetBit(void* Obj)
{
	((FEnvironmentDropParams*)Obj)->bRetargetPerWave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bRetargetPerWave = { "bRetargetPerWave", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnvironmentDropParams), &Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bRetargetPerWave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetargetPerWave_MetaData), NewProp_bRetargetPerWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_ExplicitTargets_Inner = { "ExplicitTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_ExplicitTargets = { "ExplicitTargets", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, ExplicitTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitTargets_MetaData), NewProp_ExplicitTargets_MetaData) };
void Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bPredictive_SetBit(void* Obj)
{
	((FEnvironmentDropParams*)Obj)->bPredictive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bPredictive = { "bPredictive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnvironmentDropParams), &Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bPredictive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPredictive_MetaData), NewProp_bPredictive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_PredictiveLeadTime = { "PredictiveLeadTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, PredictiveLeadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictiveLeadTime_MetaData), NewProp_PredictiveLeadTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_CachedLandingPoints_Inner = { "CachedLandingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_CachedLandingPoints = { "CachedLandingPoints", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvironmentDropParams, CachedLandingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedLandingPoints_MetaData), NewProp_CachedLandingPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_DropPatternQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_AreaCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_AreaRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_LandingPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_LandingPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_NumProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bClampToNavMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_NumWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_TimeBetweenWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_WarningTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_ImpactAOERadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_SpawnHeightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_SpawnHeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_SpawnHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bUseGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_InitialSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bRetargetPerWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_ExplicitTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_ExplicitTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_bPredictive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_PredictiveLeadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_CachedLandingPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewProp_CachedLandingPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"EnvironmentDropParams",
	Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::PropPointers),
	sizeof(FEnvironmentDropParams),
	alignof(FEnvironmentDropParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvironmentDropParams()
{
	if (!Z_Registration_Info_UScriptStruct_FEnvironmentDropParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEnvironmentDropParams.InnerSingleton, Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEnvironmentDropParams.InnerSingleton;
}
// ********** End ScriptStruct FEnvironmentDropParams **********************************************

// ********** Begin ScriptStruct FTypeChartMatchup *************************************************
static_assert(std::is_polymorphic<FTypeChartMatchup>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTypeChartMatchup cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTypeChartMatchup;
class UScriptStruct* FTypeChartMatchup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTypeChartMatchup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTypeChartMatchup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeChartMatchup, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("TypeChartMatchup"));
	}
	return Z_Registration_Info_UScriptStruct_FTypeChartMatchup.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTypeChartMatchup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeResponse_MetaData[] = {
		{ "Category", "TypeChartMatchup" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeResponse_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeResponse_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeResponse_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TypeResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeChartMatchup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse_ValueProp = { "TypeResponse", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse_Key_KeyProp = { "TypeResponse_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(0, nullptr) }; // 630780709
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse = { "TypeResponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypeChartMatchup, TypeResponse), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeResponse_MetaData), NewProp_TypeResponse_MetaData) }; // 630780709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewProp_TypeResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TypeChartMatchup",
	Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::PropPointers),
	sizeof(FTypeChartMatchup),
	alignof(FTypeChartMatchup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypeChartMatchup()
{
	if (!Z_Registration_Info_UScriptStruct_FTypeChartMatchup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTypeChartMatchup.InnerSingleton, Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTypeChartMatchup.InnerSingleton;
}
// ********** End ScriptStruct FTypeChartMatchup ***************************************************

// ********** Begin ScriptStruct FPokemonUIInfo ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonUIInfo;
class UScriptStruct* FPokemonUIInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonUIInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonUIInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonUIInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonUIInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonUIInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPokemonUIInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonName_MetaData[] = {
		{ "Category", "PokemonUIInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonSpriteImage_MetaData[] = {
		{ "Category", "PokemonUIInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLevel_MetaData[] = {
		{ "Category", "PokemonUIInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonHPPercent_MetaData[] = {
		{ "Category", "PokemonUIInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonPPPercent_MetaData[] = {
		{ "Category", "PokemonUIInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_PokemonName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonSpriteImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PokemonLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PokemonHPPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PokemonPPPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonUIInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonName = { "PokemonName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonUIInfo, PokemonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonName_MetaData), NewProp_PokemonName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonSpriteImage = { "PokemonSpriteImage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonUIInfo, PokemonSpriteImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonSpriteImage_MetaData), NewProp_PokemonSpriteImage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonLevel = { "PokemonLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonUIInfo, PokemonLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonLevel_MetaData), NewProp_PokemonLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonHPPercent = { "PokemonHPPercent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonUIInfo, PokemonHPPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonHPPercent_MetaData), NewProp_PokemonHPPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonPPPercent = { "PokemonPPPercent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonUIInfo, PokemonPPPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonPPPercent_MetaData), NewProp_PokemonPPPercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonSpriteImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonHPPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewProp_PokemonPPPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonUIInfo",
	Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::PropPointers),
	sizeof(FPokemonUIInfo),
	alignof(FPokemonUIInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonUIInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonUIInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonUIInfo.InnerSingleton, Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPokemonUIInfo.InnerSingleton;
}
// ********** End ScriptStruct FPokemonUIInfo ******************************************************

// ********** Begin ScriptStruct FPokemonInfo ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonInfo;
class UScriptStruct* FPokemonInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPokemonInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredPokemonDataAsset_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokemonMoves_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUiInfo_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nature_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredEffortLevelBaseMap_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredAttributeValue_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyMode_MetaData[] = {
		{ "Category", "PokemonInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoredPokemonDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPokemonMoves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPokemonMoves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentUiInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Nature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Nature;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StoredEffortLevelBaseMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoredEffortLevelBaseMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StoredEffortLevelBaseMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StoredAttributeValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoredAttributeValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StoredAttributeValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PartyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredPokemonDataAsset = { "StoredPokemonDataAsset", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, StoredPokemonDataAsset), Z_Construct_UClass_UPokemonDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredPokemonDataAsset_MetaData), NewProp_StoredPokemonDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_CurrentPokemonMoves_Inner = { "CurrentPokemonMoves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_CurrentPokemonMoves = { "CurrentPokemonMoves", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, CurrentPokemonMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokemonMoves_MetaData), NewProp_CurrentPokemonMoves_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_CurrentUiInfo = { "CurrentUiInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, CurrentUiInfo), Z_Construct_UScriptStruct_FPokemonUIInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUiInfo_MetaData), NewProp_CurrentUiInfo_MetaData) }; // 595581161
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Nature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Nature = { "Nature", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, Nature), Z_Construct_UEnum_ProjectMimikyu_ENatureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nature_MetaData), NewProp_Nature_MetaData) }; // 1754426599
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, Gender), Z_Construct_UEnum_ProjectMimikyu_EGenderType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) }; // 4012303867
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredEffortLevelBaseMap_ValueProp = { "StoredEffortLevelBaseMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredEffortLevelBaseMap_Key_KeyProp = { "StoredEffortLevelBaseMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredEffortLevelBaseMap = { "StoredEffortLevelBaseMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, StoredEffortLevelBaseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredEffortLevelBaseMap_MetaData), NewProp_StoredEffortLevelBaseMap_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredAttributeValue_ValueProp = { "StoredAttributeValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredAttributeValue_Key_KeyProp = { "StoredAttributeValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredAttributeValue = { "StoredAttributeValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, StoredAttributeValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredAttributeValue_MetaData), NewProp_StoredAttributeValue_MetaData) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_PartyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_PartyMode = { "PartyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInfo, PartyMode), Z_Construct_UEnum_ProjectMimikyu_EPartyStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyMode_MetaData), NewProp_PartyMode_MetaData) }; // 628541918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredPokemonDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_CurrentPokemonMoves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_CurrentPokemonMoves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_CurrentUiInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Nature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Nature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Gender_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredEffortLevelBaseMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredEffortLevelBaseMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredEffortLevelBaseMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredAttributeValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredAttributeValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_StoredAttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_PartyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewProp_PartyMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonInfo",
	Z_Construct_UScriptStruct_FPokemonInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInfo_Statics::PropPointers),
	sizeof(FPokemonInfo),
	alignof(FPokemonInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonInfo.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPokemonInfo.InnerSingleton;
}
// ********** End ScriptStruct FPokemonInfo ********************************************************

// ********** Begin ScriptStruct FTagCategoryMap ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTagCategoryMap;
class UScriptStruct* FTagCategoryMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTagCategoryMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTagCategoryMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagCategoryMap, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("TagCategoryMap"));
	}
	return Z_Registration_Info_UScriptStruct_FTagCategoryMap.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTagCategoryMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "Category", "TagCategoryMap" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "TagCategoryMap" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagPriorities_MetaData[] = {
		{ "Category", "TagCategoryMap" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagToFunctionName_MetaData[] = {
		{ "Category", "TagCategoryMap" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagPriorities_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagPriorities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagPriorities;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagToFunctionName_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToFunctionName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagToFunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagCategoryMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagCategoryMap, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagCategoryMap, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagPriorities_ValueProp = { "TagPriorities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagPriorities_Key_KeyProp = { "TagPriorities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagPriorities = { "TagPriorities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagCategoryMap, TagPriorities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagPriorities_MetaData), NewProp_TagPriorities_MetaData) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagToFunctionName_ValueProp = { "TagToFunctionName", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagToFunctionName_Key_KeyProp = { "TagToFunctionName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagToFunctionName = { "TagToFunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagCategoryMap, TagToFunctionName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagToFunctionName_MetaData), NewProp_TagToFunctionName_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagCategoryMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagPriorities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagPriorities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagPriorities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagToFunctionName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagToFunctionName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewProp_TagToFunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagCategoryMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagCategoryMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"TagCategoryMap",
	Z_Construct_UScriptStruct_FTagCategoryMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagCategoryMap_Statics::PropPointers),
	sizeof(FTagCategoryMap),
	alignof(FTagCategoryMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagCategoryMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTagCategoryMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTagCategoryMap()
{
	if (!Z_Registration_Info_UScriptStruct_FTagCategoryMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTagCategoryMap.InnerSingleton, Z_Construct_UScriptStruct_FTagCategoryMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTagCategoryMap.InnerSingleton;
}
// ********** End ScriptStruct FTagCategoryMap *****************************************************

// ********** Begin ScriptStruct FSequentialShotParams *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSequentialShotParams;
class UScriptStruct* FSequentialShotParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSequentialShotParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSequentialShotParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequentialShotParams, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("SequentialShotParams"));
	}
	return Z_Registration_Info_UScriptStruct_FSequentialShotParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSequentialShotParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "SequentialShotParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "SequentialShotParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotation_MetaData[] = {
		{ "Category", "SequentialShotParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotIndex_MetaData[] = {
		{ "Category", "SequentialShotParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalShots_MetaData[] = {
		{ "Category", "SequentialShotParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSphere_MetaData[] = {
		{ "Category", "SequentialShotParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scatter sphere (used if Scatter tag present)\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scatter sphere (used if Scatter tag present)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "SequentialShotParams" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleDeg_MetaData[] = {
		{ "Category", "SequentialShotParams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cone spread (used if Cone/Spread tags present)\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cone spread (used if Cone/Spread tags present)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleDeg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequentialShotParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRotation_MetaData), NewProp_BaseRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_ShotIndex = { "ShotIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, ShotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotIndex_MetaData), NewProp_ShotIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_TotalShots = { "TotalShots", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, TotalShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalShots_MetaData), NewProp_TotalShots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, DistanceToSphere), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToSphere_MetaData), NewProp_DistanceToSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_SpreadAngleDeg = { "SpreadAngleDeg", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialShotParams, SpreadAngleDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngleDeg_MetaData), NewProp_SpreadAngleDeg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequentialShotParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_BaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_ShotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_TotalShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_DistanceToSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewProp_SpreadAngleDeg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialShotParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequentialShotParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"SequentialShotParams",
	Z_Construct_UScriptStruct_FSequentialShotParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialShotParams_Statics::PropPointers),
	sizeof(FSequentialShotParams),
	alignof(FSequentialShotParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialShotParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequentialShotParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSequentialShotParams()
{
	if (!Z_Registration_Info_UScriptStruct_FSequentialShotParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSequentialShotParams.InnerSingleton, Z_Construct_UScriptStruct_FSequentialShotParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSequentialShotParams.InnerSingleton;
}
// ********** End ScriptStruct FSequentialShotParams ***********************************************

// ********** Begin ScriptStruct FPokemonParty *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonParty;
class UScriptStruct* FPokemonParty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonParty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonParty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonParty, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonParty"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonParty.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPokemonParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot1_MetaData[] = {
		{ "Category", "PokemonParty" },
		{ "MakeStructureDefaultValue", "nullptr" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot2_MetaData[] = {
		{ "Category", "PokemonParty" },
		{ "MakeStructureDefaultValue", "nullptr" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot3_MetaData[] = {
		{ "Category", "PokemonParty" },
		{ "MakeStructureDefaultValue", "nullptr" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot4_MetaData[] = {
		{ "Category", "PokemonParty" },
		{ "MakeStructureDefaultValue", "nullptr" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot5_MetaData[] = {
		{ "Category", "PokemonParty" },
		{ "MakeStructureDefaultValue", "nullptr" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot6_MetaData[] = {
		{ "Category", "PokemonParty" },
		{ "MakeStructureDefaultValue", "nullptr" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot5;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot6;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonParty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot1 = { "Slot1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonParty, Slot1), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot1_MetaData), NewProp_Slot1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot2 = { "Slot2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonParty, Slot2), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot2_MetaData), NewProp_Slot2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot3 = { "Slot3", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonParty, Slot3), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot3_MetaData), NewProp_Slot3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot4 = { "Slot4", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonParty, Slot4), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot4_MetaData), NewProp_Slot4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot5 = { "Slot5", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonParty, Slot5), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot5_MetaData), NewProp_Slot5_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot6 = { "Slot6", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonParty, Slot6), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot6_MetaData), NewProp_Slot6_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonParty_Statics::NewProp_Slot6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonParty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonParty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonParty",
	Z_Construct_UScriptStruct_FPokemonParty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonParty_Statics::PropPointers),
	sizeof(FPokemonParty),
	alignof(FPokemonParty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonParty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonParty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonParty()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonParty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonParty.InnerSingleton, Z_Construct_UScriptStruct_FPokemonParty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPokemonParty.InnerSingleton;
}
// ********** End ScriptStruct FPokemonParty *******************************************************

// ********** Begin ScriptStruct FSlotInfo *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSlotInfo;
class UScriptStruct* FSlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("SlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSlotInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSlotInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsThrowable_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_bIsThrowable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThrowable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotInfo, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotInfo, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_bIsThrowable_SetBit(void* Obj)
{
	((FSlotInfo*)Obj)->bIsThrowable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_bIsThrowable = { "bIsThrowable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSlotInfo), &Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_bIsThrowable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsThrowable_MetaData), NewProp_bIsThrowable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotInfo_Statics::NewProp_bIsThrowable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"SlotInfo",
	Z_Construct_UScriptStruct_FSlotInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotInfo_Statics::PropPointers),
	sizeof(FSlotInfo),
	alignof(FSlotInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlotInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSlotInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FSlotInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSlotInfo.InnerSingleton;
}
// ********** End ScriptStruct FSlotInfo ***********************************************************

// ********** Begin ScriptStruct FDamageInfo *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDamageInfo;
class UScriptStruct* FDamageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDamageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("DamageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FDamageInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDamageInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMove_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInsigator_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageCauser_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageInsigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_PokemonMove = { "PokemonMove", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, PokemonMove), Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMove_MetaData), NewProp_PokemonMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageInsigator = { "DamageInsigator", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, DamageInsigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInsigator_MetaData), NewProp_DamageInsigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageInfo, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageCauser_MetaData), NewProp_DamageCauser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_PokemonMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageInsigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageInfo_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"DamageInfo",
	Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfo_Statics::PropPointers),
	sizeof(FDamageInfo),
	alignof(FDamageInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDamageInfo.InnerSingleton, Z_Construct_UScriptStruct_FDamageInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDamageInfo.InnerSingleton;
}
// ********** End ScriptStruct FDamageInfo *********************************************************

// ********** Begin ScriptStruct FInventoryItemInfo ************************************************
static_assert(std::is_polymorphic<FInventoryItemInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItemInfo cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInventoryItemInfo;
class UScriptStruct* FInventoryItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInventoryItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("InventoryItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItemInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "InventoryItemInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "InventoryItemInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "Category", "InventoryItemInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "InventoryItemInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsThrowable_MetaData[] = {
		{ "Category", "InventoryItemInfo" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "InventoryItemInfo" },
		{ "EditCondition", "bIsThrowable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static void NewProp_bIsThrowable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThrowable;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemInfo, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemInfo, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemInfo, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_bIsThrowable_SetBit(void* Obj)
{
	((FInventoryItemInfo*)Obj)->bIsThrowable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_bIsThrowable = { "bIsThrowable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemInfo), &Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_bIsThrowable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsThrowable_MetaData), NewProp_bIsThrowable_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemInfo, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_bIsThrowable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryItemInfo",
	Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers),
	sizeof(FInventoryItemInfo),
	alignof(FInventoryItemInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItemInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInventoryItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItemInfo.InnerSingleton;
}
// ********** End ScriptStruct FInventoryItemInfo **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGenderType_StaticEnum, TEXT("EGenderType"), &Z_Registration_Info_UEnum_EGenderType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4012303867U) },
		{ EPartyStatus_StaticEnum, TEXT("EPartyStatus"), &Z_Registration_Info_UEnum_EPartyStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 628541918U) },
		{ EMovementSpeed_StaticEnum, TEXT("EMovementSpeed"), &Z_Registration_Info_UEnum_EMovementSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3421225849U) },
		{ EElementalType_StaticEnum, TEXT("EElementalType"), &Z_Registration_Info_UEnum_EElementalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 630780709U) },
		{ ENatureType_StaticEnum, TEXT("ENatureType"), &Z_Registration_Info_UEnum_ENatureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1754426599U) },
		{ EStatsType_StaticEnum, TEXT("EStatsType"), &Z_Registration_Info_UEnum_EStatsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 747927755U) },
		{ EStatusType_StaticEnum, TEXT("EStatusType"), &Z_Registration_Info_UEnum_EStatusType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 528961113U) },
		{ EPokemonStatus_StaticEnum, TEXT("EPokemonStatus"), &Z_Registration_Info_UEnum_EPokemonStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2266509819U) },
		{ EProjectileEffect_StaticEnum, TEXT("EProjectileEffect"), &Z_Registration_Info_UEnum_EProjectileEffect, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2595959351U) },
		{ EMoveAction_StaticEnum, TEXT("EMoveAction"), &Z_Registration_Info_UEnum_EMoveAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2352589323U) },
		{ EDamageResponse_StaticEnum, TEXT("EDamageResponse"), &Z_Registration_Info_UEnum_EDamageResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 586755962U) },
		{ EDirectionPoint_StaticEnum, TEXT("EDirectionPoint"), &Z_Registration_Info_UEnum_EDirectionPoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 639292680U) },
		{ EMoveType_StaticEnum, TEXT("EMoveType"), &Z_Registration_Info_UEnum_EMoveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2672433474U) },
		{ EPokeballType_StaticEnum, TEXT("EPokeballType"), &Z_Registration_Info_UEnum_EPokeballType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 650909231U) },
		{ ESlotType_StaticEnum, TEXT("ESlotType"), &Z_Registration_Info_UEnum_ESlotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2085859743U) },
		{ EPokemonState_StaticEnum, TEXT("EPokemonState"), &Z_Registration_Info_UEnum_EPokemonState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3493861700U) },
		{ EEnvironmentLandingPattern_StaticEnum, TEXT("EEnvironmentLandingPattern"), &Z_Registration_Info_UEnum_EEnvironmentLandingPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1485142758U) },
		{ EEnvironmentSpawnHeightMode_StaticEnum, TEXT("EEnvironmentSpawnHeightMode"), &Z_Registration_Info_UEnum_EEnvironmentSpawnHeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1985865126U) },
		{ EEnvironmentFallDirection_StaticEnum, TEXT("EEnvironmentFallDirection"), &Z_Registration_Info_UEnum_EEnvironmentFallDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 942945988U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPokemonTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics::NewStructOps, TEXT("PokemonTypeInfo"), &Z_Registration_Info_UScriptStruct_FPokemonTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonTypeInfo), 2060910304U) },
		{ FPokemonMoveChart::StaticStruct, Z_Construct_UScriptStruct_FPokemonMoveChart_Statics::NewStructOps, TEXT("PokemonMoveChart"), &Z_Registration_Info_UScriptStruct_FPokemonMoveChart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonMoveChart), 629707317U) },
		{ FProjectileTagContainer::StaticStruct, Z_Construct_UScriptStruct_FProjectileTagContainer_Statics::NewStructOps, TEXT("ProjectileTagContainer"), &Z_Registration_Info_UScriptStruct_FProjectileTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileTagContainer), 2774933828U) },
		{ FEnvironmentDropParams::StaticStruct, Z_Construct_UScriptStruct_FEnvironmentDropParams_Statics::NewStructOps, TEXT("EnvironmentDropParams"), &Z_Registration_Info_UScriptStruct_FEnvironmentDropParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvironmentDropParams), 2241419204U) },
		{ FTypeChartMatchup::StaticStruct, Z_Construct_UScriptStruct_FTypeChartMatchup_Statics::NewStructOps, TEXT("TypeChartMatchup"), &Z_Registration_Info_UScriptStruct_FTypeChartMatchup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypeChartMatchup), 1633721586U) },
		{ FPokemonUIInfo::StaticStruct, Z_Construct_UScriptStruct_FPokemonUIInfo_Statics::NewStructOps, TEXT("PokemonUIInfo"), &Z_Registration_Info_UScriptStruct_FPokemonUIInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonUIInfo), 595581161U) },
		{ FPokemonInfo::StaticStruct, Z_Construct_UScriptStruct_FPokemonInfo_Statics::NewStructOps, TEXT("PokemonInfo"), &Z_Registration_Info_UScriptStruct_FPokemonInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInfo), 376880542U) },
		{ FTagCategoryMap::StaticStruct, Z_Construct_UScriptStruct_FTagCategoryMap_Statics::NewStructOps, TEXT("TagCategoryMap"), &Z_Registration_Info_UScriptStruct_FTagCategoryMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTagCategoryMap), 621124044U) },
		{ FSequentialShotParams::StaticStruct, Z_Construct_UScriptStruct_FSequentialShotParams_Statics::NewStructOps, TEXT("SequentialShotParams"), &Z_Registration_Info_UScriptStruct_FSequentialShotParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequentialShotParams), 286614823U) },
		{ FPokemonParty::StaticStruct, Z_Construct_UScriptStruct_FPokemonParty_Statics::NewStructOps, TEXT("PokemonParty"), &Z_Registration_Info_UScriptStruct_FPokemonParty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonParty), 2534834303U) },
		{ FSlotInfo::StaticStruct, Z_Construct_UScriptStruct_FSlotInfo_Statics::NewStructOps, TEXT("SlotInfo"), &Z_Registration_Info_UScriptStruct_FSlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotInfo), 3780344497U) },
		{ FDamageInfo::StaticStruct, Z_Construct_UScriptStruct_FDamageInfo_Statics::NewStructOps, TEXT("DamageInfo"), &Z_Registration_Info_UScriptStruct_FDamageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageInfo), 1675790321U) },
		{ FInventoryItemInfo::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewStructOps, TEXT("InventoryItemInfo"), &Z_Registration_Info_UScriptStruct_FInventoryItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemInfo), 999394668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h__Script_ProjectMimikyu_1952234861(TEXT("/Script/ProjectMimikyu"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h__Script_ProjectMimikyu_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
