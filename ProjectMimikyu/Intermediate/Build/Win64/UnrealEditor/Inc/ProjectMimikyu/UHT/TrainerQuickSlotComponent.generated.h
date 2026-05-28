// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/TrainerQuickSlotComponent.h"

#ifdef PROJECTMIMIKYU_TrainerQuickSlotComponent_generated_h
#error "TrainerQuickSlotComponent.generated.h already included, missing '#pragma once' in TrainerQuickSlotComponent.h"
#endif
#define PROJECTMIMIKYU_TrainerQuickSlotComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlotType : uint8;

// ********** Begin Delegate FOnQuickSlotModeChanged ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_18_DELEGATE \
PROJECTMIMIKYU_API void FOnQuickSlotModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuickSlotModeChanged, ESlotType NewMode);


// ********** End Delegate FOnQuickSlotModeChanged *************************************************

// ********** Begin Delegate FOnQuickSlotSelectionChanged ******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_19_DELEGATE \
PROJECTMIMIKYU_API void FOnQuickSlotSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuickSlotSelectionChanged);


// ********** End Delegate FOnQuickSlotSelectionChanged ********************************************

// ********** Begin Class UTrainerQuickSlotComponent ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshInventory);


struct Z_Construct_UClass_UTrainerQuickSlotComponent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerQuickSlotComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrainerQuickSlotComponent(); \
	friend struct ::Z_Construct_UClass_UTrainerQuickSlotComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UTrainerQuickSlotComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrainerQuickSlotComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UTrainerQuickSlotComponent_NoRegister) \
	DECLARE_SERIALIZER(UTrainerQuickSlotComponent)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrainerQuickSlotComponent(UTrainerQuickSlotComponent&&) = delete; \
	UTrainerQuickSlotComponent(const UTrainerQuickSlotComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrainerQuickSlotComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrainerQuickSlotComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrainerQuickSlotComponent) \
	NO_API virtual ~UTrainerQuickSlotComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_21_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrainerQuickSlotComponent;

// ********** End Class UTrainerQuickSlotComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
