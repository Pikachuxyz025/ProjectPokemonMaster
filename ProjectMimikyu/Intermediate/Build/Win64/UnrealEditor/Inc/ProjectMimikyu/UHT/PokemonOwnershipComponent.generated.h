// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/PokemonOwnershipComponent.h"

#ifdef PROJECTMIMIKYU_PokemonOwnershipComponent_generated_h
#error "PokemonOwnershipComponent.generated.h already included, missing '#pragma once' in PokemonOwnershipComponent.h"
#endif
#define PROJECTMIMIKYU_PokemonOwnershipComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EPokemonStatus : uint8;

// ********** Begin Class UPokemonOwnershipComponent ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsOwnedByTrainer); \
	DECLARE_FUNCTION(execHasTrainer); \
	DECLARE_FUNCTION(execIsCaught); \
	DECLARE_FUNCTION(execGetPokemonStatus); \
	DECLARE_FUNCTION(execGetCurrentTrainer); \
	DECLARE_FUNCTION(execSetIsCaught); \
	DECLARE_FUNCTION(execClearTrainerBindings); \
	DECLARE_FUNCTION(execSetPokemonTrainer);


struct Z_Construct_UClass_UPokemonOwnershipComponent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonOwnershipComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonOwnershipComponent(); \
	friend struct ::Z_Construct_UClass_UPokemonOwnershipComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonOwnershipComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonOwnershipComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonOwnershipComponent_NoRegister) \
	DECLARE_SERIALIZER(UPokemonOwnershipComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentTrainer=NETFIELD_REP_START, \
		PokemonStatus, \
		bIsCaught, \
		NETFIELD_REP_END=bIsCaught	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonOwnershipComponent(UPokemonOwnershipComponent&&) = delete; \
	UPokemonOwnershipComponent(const UPokemonOwnershipComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonOwnershipComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonOwnershipComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPokemonOwnershipComponent) \
	NO_API virtual ~UPokemonOwnershipComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_12_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonOwnershipComponent;

// ********** End Class UPokemonOwnershipComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
