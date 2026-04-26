// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TrainerPlayerState.h"

#ifdef PROJECTMIMIKYU_TrainerPlayerState_generated_h
#error "TrainerPlayerState.generated.h already included, missing '#pragma once' in TrainerPlayerState.h"
#endif
#define PROJECTMIMIKYU_TrainerPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATrainerPlayerState ******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPartyIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentPartyInfo);


struct Z_Construct_UClass_ATrainerPlayerState_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerPlayerState_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrainerPlayerState(); \
	friend struct ::Z_Construct_UClass_ATrainerPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_ATrainerPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ATrainerPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_ATrainerPlayerState_NoRegister) \
	DECLARE_SERIALIZER(ATrainerPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPartyInfo=NETFIELD_REP_START, \
		ActivePokemon, \
		ActivePokemonInfo, \
		EngagedPokemon, \
		bIsInCombat, \
		NETFIELD_REP_END=bIsInCombat	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrainerPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATrainerPlayerState(ATrainerPlayerState&&) = delete; \
	ATrainerPlayerState(const ATrainerPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrainerPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrainerPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrainerPlayerState) \
	NO_API virtual ~ATrainerPlayerState();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_18_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATrainerPlayerState;

// ********** End Class ATrainerPlayerState ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
