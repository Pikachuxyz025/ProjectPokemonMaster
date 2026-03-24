// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/TrainerOverlay.h"

#ifdef PROJECTMIMIKYU_TrainerOverlay_generated_h
#error "TrainerOverlay.generated.h already included, missing '#pragma once' in TrainerOverlay.h"
#endif
#define PROJECTMIMIKYU_TrainerOverlay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APokemon_Parent;

// ********** Begin Class UTrainerOverlay **********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupInventoryInfo); \
	DECLARE_FUNCTION(execSetupPartyInfo); \
	DECLARE_FUNCTION(execSetCurrentPokemonUI);


struct Z_Construct_UClass_UTrainerOverlay_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlay_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrainerOverlay(); \
	friend struct ::Z_Construct_UClass_UTrainerOverlay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UTrainerOverlay_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrainerOverlay, UPokemonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UTrainerOverlay_NoRegister) \
	DECLARE_SERIALIZER(UTrainerOverlay)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrainerOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrainerOverlay(UTrainerOverlay&&) = delete; \
	UTrainerOverlay(const UTrainerOverlay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrainerOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrainerOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrainerOverlay) \
	NO_API virtual ~UTrainerOverlay();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_21_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrainerOverlay;

// ********** End Class UTrainerOverlay ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
