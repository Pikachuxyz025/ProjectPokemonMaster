// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CharacterTypes.h"

#ifdef PROJECTMIMIKYU_CharacterTypes_generated_h
#error "CharacterTypes.generated.h already included, missing '#pragma once' in CharacterTypes.h"
#endif
#define PROJECTMIMIKYU_CharacterTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPokemonTypeInfo **************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokemonTypeInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonTypeInfo;
// ********** End ScriptStruct FPokemonTypeInfo ****************************************************

// ********** Begin ScriptStruct FPokemonMoveChart *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokemonMoveChart_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FPokemonMoveChart;
// ********** End ScriptStruct FPokemonMoveChart ***************************************************

// ********** Begin ScriptStruct FTypeChartMatchup *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypeChartMatchup_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FTypeChartMatchup;
// ********** End ScriptStruct FTypeChartMatchup ***************************************************

// ********** Begin ScriptStruct FPokemonUIInfo ****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_277_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokemonUIInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonUIInfo;
// ********** End ScriptStruct FPokemonUIInfo ******************************************************

// ********** Begin ScriptStruct FPokemonInfo ******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokemonInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonInfo;
// ********** End ScriptStruct FPokemonInfo ********************************************************

// ********** Begin ScriptStruct FTagCategoryMap ***************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_352_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTagCategoryMap_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FTagCategoryMap;
// ********** End ScriptStruct FTagCategoryMap *****************************************************

// ********** Begin ScriptStruct FSequentialShotParams *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_370_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequentialShotParams_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FSequentialShotParams;
// ********** End ScriptStruct FSequentialShotParams ***********************************************

// ********** Begin ScriptStruct FPokemonParty *****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_406_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokemonParty_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonParty;
// ********** End ScriptStruct FPokemonParty *******************************************************

// ********** Begin ScriptStruct FSlotInfo *********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_431_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FSlotInfo;
// ********** End ScriptStruct FSlotInfo ***********************************************************

// ********** Begin ScriptStruct FDamageInfo *******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_446_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDamageInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FDamageInfo;
// ********** End ScriptStruct FDamageInfo *********************************************************

// ********** Begin ScriptStruct FInventoryItemInfo ************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h_464_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FInventoryItemInfo;
// ********** End ScriptStruct FInventoryItemInfo **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_CharacterTypes_h

// ********** Begin Enum EGenderType ***************************************************************
#define FOREACH_ENUM_EGENDERTYPE(op) \
	op(EGenderType::EGT_None) \
	op(EGenderType::EGT_Male) \
	op(EGenderType::EGT_Female) 

enum class EGenderType : uint8;
template<> struct TIsUEnumClass<EGenderType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EGenderType>();
// ********** End Enum EGenderType *****************************************************************

// ********** Begin Enum EPartyStatus **************************************************************
#define FOREACH_ENUM_EPARTYSTATUS(op) \
	op(EPartyStatus::EPS_Empty) \
	op(EPartyStatus::EPS_Out) \
	op(EPartyStatus::EPS_Ready) \
	op(EPartyStatus::EPS_Fainted) 

enum class EPartyStatus : uint8;
template<> struct TIsUEnumClass<EPartyStatus> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPartyStatus>();
// ********** End Enum EPartyStatus ****************************************************************

// ********** Begin Enum EMovementSpeed ************************************************************
#define FOREACH_ENUM_EMOVEMENTSPEED(op) \
	op(EMovementSpeed::EMS_Idle) \
	op(EMovementSpeed::EMS_Walking) \
	op(EMovementSpeed::EMS_Jogging) \
	op(EMovementSpeed::EMS_Running) \
	op(EMovementSpeed::EMS_Engaging) \
	op(EMovementSpeed::EMS_DefaultMax) 

enum class EMovementSpeed : uint8;
template<> struct TIsUEnumClass<EMovementSpeed> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EMovementSpeed>();
// ********** End Enum EMovementSpeed **************************************************************

// ********** Begin Enum EElementalType ************************************************************
#define FOREACH_ENUM_EELEMENTALTYPE(op) \
	op(EElementalType::EET_None) \
	op(EElementalType::EET_Fire) \
	op(EElementalType::EET_Water) \
	op(EElementalType::EET_Steel) \
	op(EElementalType::EET_Fairy) \
	op(EElementalType::EET_Fighting) \
	op(EElementalType::EET_Electric) \
	op(EElementalType::EET_Rock) \
	op(EElementalType::EET_Ice) \
	op(EElementalType::EET_Dragon) \
	op(EElementalType::EET_Ghost) \
	op(EElementalType::EET_Dark) \
	op(EElementalType::EET_Bug) \
	op(EElementalType::EET_Psychic) \
	op(EElementalType::EET_Ground) \
	op(EElementalType::EET_Normal) \
	op(EElementalType::EET_Flying) \
	op(EElementalType::EET_Grass) \
	op(EElementalType::EET_Poison) 

enum class EElementalType : uint8;
template<> struct TIsUEnumClass<EElementalType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EElementalType>();
// ********** End Enum EElementalType **************************************************************

// ********** Begin Enum ENatureType ***************************************************************
#define FOREACH_ENUM_ENATURETYPE(op) \
	op(ENatureType::ENT_None) \
	op(ENatureType::ENT_Bashful) \
	op(ENatureType::ENT_Docile) \
	op(ENatureType::ENT_Hardy) \
	op(ENatureType::ENT_Quirky) \
	op(ENatureType::ENT_Serious) \
	op(ENatureType::ENT_Adamant) \
	op(ENatureType::ENT_Modest) \
	op(ENatureType::ENT_Bold) \
	op(ENatureType::ENT_Brave) \
	op(ENatureType::ENT_Calm) \
	op(ENatureType::ENT_Careful) \
	op(ENatureType::ENT_Gentle) \
	op(ENatureType::ENT_Hasty) \
	op(ENatureType::ENT_Jolly) \
	op(ENatureType::ENT_Lax) \
	op(ENatureType::ENT_Lonely) \
	op(ENatureType::ENT_Mild) \
	op(ENatureType::ENT_Naughty) \
	op(ENatureType::ENT_Quiet) \
	op(ENatureType::ENT_Timid) \
	op(ENatureType::ENT_Relaxed) \
	op(ENatureType::ENT_Sassy) \
	op(ENatureType::ENT_Rash) \
	op(ENatureType::ENT_Naive) \
	op(ENatureType::ENT_Impish) 

enum class ENatureType : uint8;
template<> struct TIsUEnumClass<ENatureType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<ENatureType>();
// ********** End Enum ENatureType *****************************************************************

// ********** Begin Enum EStatsType ****************************************************************
#define FOREACH_ENUM_ESTATSTYPE(op) \
	op(EStatsType::EST_None) \
	op(EStatsType::EST_Attack) \
	op(EStatsType::EST_HealthPoints) \
	op(EStatsType::EST_Defense) \
	op(EStatsType::EST_SpecialAttack) \
	op(EStatsType::EST_SpecialDefense) \
	op(EStatsType::EST_Speed) 

enum class EStatsType : uint8;
template<> struct TIsUEnumClass<EStatsType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EStatsType>();
// ********** End Enum EStatsType ******************************************************************

// ********** Begin Enum EStatusType ***************************************************************
#define FOREACH_ENUM_ESTATUSTYPE(op) \
	op(EStatusType::EST_None) \
	op(EStatusType::EST_Frostbit) \
	op(EStatusType::EST_Burned) \
	op(EStatusType::EST_Paralyzed) \
	op(EStatusType::EST_Sleep) \
	op(EStatusType::EST_Poisoned) 

enum class EStatusType : uint8;
template<> struct TIsUEnumClass<EStatusType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EStatusType>();
// ********** End Enum EStatusType *****************************************************************

// ********** Begin Enum EPokemonStatus ************************************************************
#define FOREACH_ENUM_EPOKEMONSTATUS(op) \
	op(EPokemonStatus::EPS_Wild) \
	op(EPokemonStatus::EPS_AITrainer) \
	op(EPokemonStatus::EPS_PlayerTrainer) 

enum class EPokemonStatus : uint8;
template<> struct TIsUEnumClass<EPokemonStatus> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPokemonStatus>();
// ********** End Enum EPokemonStatus **************************************************************

// ********** Begin Enum EProjectileEffect *********************************************************
#define FOREACH_ENUM_EPROJECTILEEFFECT(op) \
	op(EProjectileEffect::EPE_None) \
	op(EProjectileEffect::EPE_Explosion) \
	op(EProjectileEffect::EPE_Status) \
	op(EProjectileEffect::EPE_Max) 

enum class EProjectileEffect : uint8;
template<> struct TIsUEnumClass<EProjectileEffect> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EProjectileEffect>();
// ********** End Enum EProjectileEffect ***********************************************************

// ********** Begin Enum EMoveAction ***************************************************************
#define FOREACH_ENUM_EMOVEACTION(op) \
	op(EMoveAction::EMA_None) \
	op(EMoveAction::EMA_Melee) \
	op(EMoveAction::EMA_Projectile) \
	op(EMoveAction::EMA_Dodging) \
	op(EMoveAction::EMA_Charging) \
	op(EMoveAction::EMA_Environment) \
	op(EMoveAction::EMA_Max) 

enum class EMoveAction : uint8;
template<> struct TIsUEnumClass<EMoveAction> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EMoveAction>();
// ********** End Enum EMoveAction *****************************************************************

// ********** Begin Enum EDamageResponse ***********************************************************
#define FOREACH_ENUM_EDAMAGERESPONSE(op) \
	op(EDamageResponse::EDR_None) \
	op(EDamageResponse::EDR_HitReaction) \
	op(EDamageResponse::EDR_Stagger) \
	op(EDamageResponse::EDR_Stun) \
	op(EDamageResponse::EDR_Knockback) \
	op(EDamageResponse::EDR_Max) 

enum class EDamageResponse : uint8;
template<> struct TIsUEnumClass<EDamageResponse> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EDamageResponse>();
// ********** End Enum EDamageResponse *************************************************************

// ********** Begin Enum EDirectionPoint ***********************************************************
#define FOREACH_ENUM_EDIRECTIONPOINT(op) \
	op(EDirectionPoint::EDP_Up) \
	op(EDirectionPoint::EDP_Down) \
	op(EDirectionPoint::EDP_Left) \
	op(EDirectionPoint::EDP_Right) 

enum class EDirectionPoint : uint8;
template<> struct TIsUEnumClass<EDirectionPoint> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EDirectionPoint>();
// ********** End Enum EDirectionPoint *************************************************************

// ********** Begin Enum EMoveType *****************************************************************
#define FOREACH_ENUM_EMOVETYPE(op) \
	op(EMoveType::EMT_None) \
	op(EMoveType::EMT_Physical) \
	op(EMoveType::EMT_Special) \
	op(EMoveType::EMT_Status) \
	op(EMoveType::EMT_Max) 

enum class EMoveType : uint8;
template<> struct TIsUEnumClass<EMoveType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EMoveType>();
// ********** End Enum EMoveType *******************************************************************

// ********** Begin Enum EPokeballType *************************************************************
#define FOREACH_ENUM_EPOKEBALLTYPE(op) \
	op(EPokeballType::EPT_None) \
	op(EPokeballType::EPT_Pokeball) \
	op(EPokeballType::EPT_GreatBall) \
	op(EPokeballType::EPT_UltraBall) \
	op(EPokeballType::EPT_HeavyBall) \
	op(EPokeballType::EPT_LeadenBall) \
	op(EPokeballType::EPT_GigatonBall) \
	op(EPokeballType::EPT_FeatherBall) \
	op(EPokeballType::EPT_WingBall) \
	op(EPokeballType::EPT_JetBall) 

enum class EPokeballType : uint8;
template<> struct TIsUEnumClass<EPokeballType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPokeballType>();
// ********** End Enum EPokeballType ***************************************************************

// ********** Begin Enum ESlotType *****************************************************************
#define FOREACH_ENUM_ESLOTTYPE(op) \
	op(ESlotType::EST_None) \
	op(ESlotType::EST_PokemonParty) \
	op(ESlotType::EST_Inventory) 

enum class ESlotType : uint8;
template<> struct TIsUEnumClass<ESlotType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<ESlotType>();
// ********** End Enum ESlotType *******************************************************************

// ********** Begin Enum EPokemonState *************************************************************
#define FOREACH_ENUM_EPOKEMONSTATE(op) \
	op(EPokemonState::EPS_NoState) \
	op(EPokemonState::EPS_Passive) \
	op(EPokemonState::EPS_Training) \
	op(EPokemonState::EPS_Resting) \
	op(EPokemonState::EPS_Docile) \
	op(EPokemonState::EPS_Combative) \
	op(EPokemonState::EPS_Investigative) \
	op(EPokemonState::EPS_Fainted) 

enum class EPokemonState : uint8;
template<> struct TIsUEnumClass<EPokemonState> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EPokemonState>();
// ********** End Enum EPokemonState ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
