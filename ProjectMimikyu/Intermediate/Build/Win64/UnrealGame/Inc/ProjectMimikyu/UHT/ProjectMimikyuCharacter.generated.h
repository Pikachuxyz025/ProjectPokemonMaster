// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/ProjectMimikyuCharacter.h"

#ifdef PROJECTMIMIKYU_ProjectMimikyuCharacter_generated_h
#error "ProjectMimikyuCharacter.generated.h already included, missing '#pragma once' in ProjectMimikyuCharacter.h"
#endif
#define PROJECTMIMIKYU_ProjectMimikyuCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APokemon_Parent;
struct FAimData;

// ********** Begin Delegate FOnPartyUpdated *******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_29_DELEGATE \
PROJECTMIMIKYU_API void FOnPartyUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPartyUpdated, const TArray<APokemon_Parent*>& PokemonParty);


// ********** End Delegate FOnPartyUpdated *********************************************************

// ********** Begin Delegate FOnTargetRegistered ***************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_31_DELEGATE \
PROJECTMIMIKYU_API void FOnTargetRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnTargetRegistered, AActor* CombatTarget);


// ********** End Delegate FOnTargetRegistered *****************************************************

// ********** Begin Delegate FOnPokemonSentOut *****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_32_DELEGATE \
PROJECTMIMIKYU_API void FOnPokemonSentOut_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonSentOut, AActor* NewPokemon);


// ********** End Delegate FOnPokemonSentOut *******************************************************

// ********** Begin Class AProjectMimikyuCharacter *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetPokemon_Implementation(APokemon_Parent* LeadPokemon); \
	virtual void ServerBroadcastTarget_Implementation(AActor* Target); \
	virtual void ServerAddToCurrentParty_Implementation(AActor* AddedActor); \
	virtual void ServerCallCommand_Implementation(int32 MoveIndex, FAimData const& AimData); \
	virtual void ServerRequestSendOutPokemon_Implementation(FVector TraceStart, FVector TraceEnd); \
	virtual void ServerRequestReturnCurrentPokemon_Implementation(); \
	virtual void ServerRequestCatchPokemon_Implementation(FVector TraceStart, FVector TraceEnd); \
	DECLARE_FUNCTION(execGetCurrentPokemon); \
	DECLARE_FUNCTION(execServerSetPokemon); \
	DECLARE_FUNCTION(execServerBroadcastTarget); \
	DECLARE_FUNCTION(execOnRep_CurrentPokemon); \
	DECLARE_FUNCTION(execServerAddToCurrentParty); \
	DECLARE_FUNCTION(execServerCallCommand); \
	DECLARE_FUNCTION(execServerRequestSendOutPokemon); \
	DECLARE_FUNCTION(execServerRequestReturnCurrentPokemon); \
	DECLARE_FUNCTION(execServerRequestCatchPokemon);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AProjectMimikyuCharacter_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectMimikyuCharacter(); \
	friend struct ::Z_Construct_UClass_AProjectMimikyuCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectMimikyuCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister) \
	DECLARE_SERIALIZER(AProjectMimikyuCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AProjectMimikyuCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPokemon=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentPokemon	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectMimikyuCharacter(AProjectMimikyuCharacter&&) = delete; \
	AProjectMimikyuCharacter(const AProjectMimikyuCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectMimikyuCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectMimikyuCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectMimikyuCharacter) \
	NO_API virtual ~AProjectMimikyuCharacter();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_34_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectMimikyuCharacter;

// ********** End Class AProjectMimikyuCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
