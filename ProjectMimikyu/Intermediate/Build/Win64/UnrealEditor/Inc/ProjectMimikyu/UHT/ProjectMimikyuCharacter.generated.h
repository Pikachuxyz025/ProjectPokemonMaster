// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/ProjectMimikyuCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APokemon_Parent;
#ifdef PROJECTMIMIKYU_ProjectMimikyuCharacter_generated_h
#error "ProjectMimikyuCharacter.generated.h already included, missing '#pragma once' in ProjectMimikyuCharacter.h"
#endif
#define PROJECTMIMIKYU_ProjectMimikyuCharacter_generated_h

#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_19_DELEGATE \
PROJECTMIMIKYU_API void FOnPartyUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPartyUpdated);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_20_DELEGATE \
PROJECTMIMIKYU_API void FOnPokemonHealthUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonHealthUpdated);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_21_DELEGATE \
PROJECTMIMIKYU_API void FOnTargetRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnTargetRegistered, AActor* CombatTarget);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_22_DELEGATE \
PROJECTMIMIKYU_API void FOnPokemonSentOut_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonSentOut, AActor* NewPokemon);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_SPARSE_DATA
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetPokemon_Implementation(APokemon_Parent* LeadPokemon); \
	virtual void ServerBroadcastTarget_Implementation(AActor* Target); \
	virtual void ServerCallCommand_Implementation(int32 const& i); \
	virtual void ServerAddToCurrentParty_Implementation(AActor* AddedActor); \
 \
	DECLARE_FUNCTION(execServerSetPokemon); \
	DECLARE_FUNCTION(execServerBroadcastTarget); \
	DECLARE_FUNCTION(execServerCallCommand); \
	DECLARE_FUNCTION(execServerAddToCurrentParty);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_CALLBACK_WRAPPERS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectMimikyuCharacter(); \
	friend struct Z_Construct_UClass_AProjectMimikyuCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectMimikyuCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), NO_API) \
	DECLARE_SERIALIZER(AProjectMimikyuCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPokemon=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentPokemon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectMimikyuCharacter(AProjectMimikyuCharacter&&); \
	NO_API AProjectMimikyuCharacter(const AProjectMimikyuCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectMimikyuCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectMimikyuCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectMimikyuCharacter) \
	NO_API virtual ~AProjectMimikyuCharacter();


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_24_PROLOG
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_SPARSE_DATA \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_CALLBACK_WRAPPERS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class AProjectMimikyuCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
