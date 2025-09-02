// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTasks/AT_TickTask.h"

#ifdef PROJECTMIMIKYU_AT_TickTask_generated_h
#error "AT_TickTask.generated.h already included, missing '#pragma once' in AT_TickTask.h"
#endif
#define PROJECTMIMIKYU_AT_TickTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAT_TickTask;
class UGameplayAbility;

// ********** Begin Delegate FOnTickTaskDelegate ***************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_9_DELEGATE \
PROJECTMIMIKYU_API void FOnTickTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTickTaskDelegate, float DeltaTime);


// ********** End Delegate FOnTickTaskDelegate *****************************************************

// ********** Begin Class UAT_TickTask *************************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateTickTaskNode);


PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TickTask_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAT_TickTask(); \
	friend struct Z_Construct_UClass_UAT_TickTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TickTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UAT_TickTask, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UAT_TickTask_NoRegister) \
	DECLARE_SERIALIZER(UAT_TickTask)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAT_TickTask(UAT_TickTask&&) = delete; \
	UAT_TickTask(const UAT_TickTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAT_TickTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAT_TickTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAT_TickTask) \
	NO_API virtual ~UAT_TickTask();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_11_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAT_TickTask;

// ********** End Class UAT_TickTask ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
