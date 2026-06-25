// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/TrainerCharacter.h"

#ifdef PROJECTMIMIKYU_TrainerCharacter_generated_h
#error "TrainerCharacter.generated.h already included, missing '#pragma once' in TrainerCharacter.h"
#endif
#define PROJECTMIMIKYU_TrainerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APokemon_Parent;
struct FAimData;
struct FHitResult;

// ********** Begin Delegate FOnPartyUpdated *******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_33_DELEGATE \
PROJECTMIMIKYU_API void FOnPartyUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPartyUpdated, const TArray<APokemon_Parent*>& PokemonParty);


// ********** End Delegate FOnPartyUpdated *********************************************************

// ********** Begin Delegate FOnTargetRegistered ***************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_35_DELEGATE \
PROJECTMIMIKYU_API void FOnTargetRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnTargetRegistered, FHitResult const& CombatHitResult);


// ********** End Delegate FOnTargetRegistered *****************************************************

// ********** Begin Delegate FOnPokemonSentOut *****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_36_DELEGATE \
PROJECTMIMIKYU_API void FOnPokemonSentOut_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonSentOut, AActor* NewPokemon);


// ********** End Delegate FOnPokemonSentOut *******************************************************

// ********** Begin Class ATrainerCharacter ********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerThrowSelectedPokemon_Implementation(int32 SelectedPartyIndex, FAimData const& AimData); \
	virtual void ServerThrowSelectedInventoryItem_Implementation(FName ItemID, FAimData const& AimData); \
	virtual void ServerBroadcastTarget_Implementation(FHitResult const& CombatHitResult); \
	virtual void ServerAddToCurrentParty_Implementation(AActor* AddedActor); \
	virtual void ServerCallCommand_Implementation(int32 MoveIndex, FAimData const& AimData); \
	virtual void ServerRequestReturnCurrentPokemon_Implementation(); \
	virtual void ServerRequestCatchPokemon_Implementation(FVector TraceStart, FVector TraceEnd); \
	virtual void ServerSetPokemon_Implementation(APokemon_Parent* LeadPokemon); \
	virtual void ServerRequestCatchPokemonWithPokeball_Implementation(APokemon_Parent* TargetPokemon); \
	DECLARE_FUNCTION(execOnRep_CurrentPokemon); \
	DECLARE_FUNCTION(execHandlePokeballSummonLanded); \
	DECLARE_FUNCTION(execServerThrowSelectedPokemon); \
	DECLARE_FUNCTION(execServerThrowSelectedInventoryItem); \
	DECLARE_FUNCTION(execServerBroadcastTarget); \
	DECLARE_FUNCTION(execServerAddToCurrentParty); \
	DECLARE_FUNCTION(execServerCallCommand); \
	DECLARE_FUNCTION(execServerRequestSendOutPokemon); \
	DECLARE_FUNCTION(execServerRequestReturnCurrentPokemon); \
	DECLARE_FUNCTION(execServerRequestCatchPokemon); \
	DECLARE_FUNCTION(execServerSetPokemon); \
	DECLARE_FUNCTION(execServerRequestCatchPokemonWithPokeball); \
	DECLARE_FUNCTION(execGetCurrentPokemon);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ATrainerCharacter_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerCharacter_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrainerCharacter(); \
	friend struct ::Z_Construct_UClass_ATrainerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_ATrainerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATrainerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_ATrainerCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATrainerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATrainerCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPokemon=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentPokemon	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATrainerCharacter(ATrainerCharacter&&) = delete; \
	ATrainerCharacter(const ATrainerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrainerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrainerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrainerCharacter) \
	NO_API virtual ~ATrainerCharacter();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_38_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATrainerCharacter;

// ********** End Class ATrainerCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
