// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/PokemonBaseAttributeSet.h"

#ifdef PROJECTMIMIKYU_PokemonBaseAttributeSet_generated_h
#error "PokemonBaseAttributeSet.generated.h already included, missing '#pragma once' in PokemonBaseAttributeSet.h"
#endif
#define PROJECTMIMIKYU_PokemonBaseAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin ScriptStruct FEffectProperties *************************************************
struct Z_Construct_UScriptStruct_FEffectProperties_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FEffectProperties;
// ********** End ScriptStruct FEffectProperties ***************************************************

// ********** Begin Class UPokemonBaseAttributeSet *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_DodgeForce); \
	DECLARE_FUNCTION(execOnRep_Defense); \
	DECLARE_FUNCTION(execOnRep_Attack); \
	DECLARE_FUNCTION(execOnRep_SpecialAttack); \
	DECLARE_FUNCTION(execOnRep_SpecialDefense); \
	DECLARE_FUNCTION(execOnRep_CurrentLevel); \
	DECLARE_FUNCTION(execOnRep_FriendshipLevel); \
	DECLARE_FUNCTION(execOnRep_ExertionChance); \
	DECLARE_FUNCTION(execOnRep_XP); \
	DECLARE_FUNCTION(execOnRep_Speed); \
	DECLARE_FUNCTION(execOnRep_MaxPowerPoints); \
	DECLARE_FUNCTION(execOnRep_PowerPoints); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


struct Z_Construct_UClass_UPokemonBaseAttributeSet_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonBaseAttributeSet(); \
	friend struct ::Z_Construct_UClass_UPokemonBaseAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonBaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UPokemonBaseAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		PowerPoints, \
		MaxPowerPoints, \
		SpecialDefense, \
		SpecialAttack, \
		Attack, \
		Defense, \
		Speed, \
		DodgeForce, \
		XP, \
		FriendshipLevel, \
		ExertionChance, \
		CurrentLevel, \
		NETFIELD_REP_END=CurrentLevel	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UPokemonBaseAttributeSet) \
public:


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonBaseAttributeSet(UPokemonBaseAttributeSet&&) = delete; \
	UPokemonBaseAttributeSet(const UPokemonBaseAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonBaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonBaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPokemonBaseAttributeSet) \
	NO_API virtual ~UPokemonBaseAttributeSet();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_55_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonBaseAttributeSet;

// ********** End Class UPokemonBaseAttributeSet ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
