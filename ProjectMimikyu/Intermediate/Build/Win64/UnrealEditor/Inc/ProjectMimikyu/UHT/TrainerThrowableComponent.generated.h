// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/TrainerThrowableComponent.h"

#ifdef PROJECTMIMIKYU_TrainerThrowableComponent_generated_h
#error "TrainerThrowableComponent.generated.h already included, missing '#pragma once' in TrainerThrowableComponent.h"
#endif
#define PROJECTMIMIKYU_TrainerThrowableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAimData;

// ********** Begin Class UTrainerThrowableComponent ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerThrowSelectedInventoryItem_Implementation(FName ItemID, FAimData const& AimData); \
	DECLARE_FUNCTION(execServerThrowSelectedInventoryItem);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UTrainerThrowableComponent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerThrowableComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrainerThrowableComponent(); \
	friend struct ::Z_Construct_UClass_UTrainerThrowableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UTrainerThrowableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrainerThrowableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UTrainerThrowableComponent_NoRegister) \
	DECLARE_SERIALIZER(UTrainerThrowableComponent)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrainerThrowableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrainerThrowableComponent(UTrainerThrowableComponent&&) = delete; \
	UTrainerThrowableComponent(const UTrainerThrowableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrainerThrowableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrainerThrowableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrainerThrowableComponent) \
	NO_API virtual ~UTrainerThrowableComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_13_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrainerThrowableComponent;

// ********** End Class UTrainerThrowableComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
