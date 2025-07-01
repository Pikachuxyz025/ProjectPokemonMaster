// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef PROJECTMIMIKYU_PokemonBaseAttributeSet_generated_h
#error "PokemonBaseAttributeSet.generated.h already included, missing '#pragma once' in PokemonBaseAttributeSet.h"
#endif
#define PROJECTMIMIKYU_PokemonBaseAttributeSet_generated_h

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<struct FEffectProperties>();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_SPARSE_DATA
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DodgeForce); \
	DECLARE_FUNCTION(execOnRep_Defense); \
	DECLARE_FUNCTION(execOnRep_Attack); \
	DECLARE_FUNCTION(execOnRep_SpecialAttack); \
	DECLARE_FUNCTION(execOnRep_SpecialDefense); \
	DECLARE_FUNCTION(execOnRep_CurrentLevel); \
	DECLARE_FUNCTION(execOnRep_XP); \
	DECLARE_FUNCTION(execOnRep_Speed); \
	DECLARE_FUNCTION(execOnRep_MaxPowerPoints); \
	DECLARE_FUNCTION(execOnRep_PowerPoints); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonBaseAttributeSet(); \
	friend struct Z_Construct_UClass_UPokemonBaseAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPokemonBaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), NO_API) \
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
		CurrentLevel, \
		NETFIELD_REP_END=CurrentLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UPokemonBaseAttributeSet) \
public:


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPokemonBaseAttributeSet(UPokemonBaseAttributeSet&&); \
	NO_API UPokemonBaseAttributeSet(const UPokemonBaseAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonBaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonBaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPokemonBaseAttributeSet) \
	NO_API virtual ~UPokemonBaseAttributeSet();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_55_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_SPARSE_DATA \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class UPokemonBaseAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonBaseAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
