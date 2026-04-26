// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTasks/AT_CombatApproach.h"

#ifdef PROJECTMIMIKYU_AT_CombatApproach_generated_h
#error "AT_CombatApproach.generated.h already included, missing '#pragma once' in AT_CombatApproach.h"
#endif
#define PROJECTMIMIKYU_AT_CombatApproach_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAT_CombatApproach;
class UGameplayAbility;

// ********** Begin Delegate FCombatApproachSimpleDelegate *****************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_9_DELEGATE \
PROJECTMIMIKYU_API void FCombatApproachSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& CombatApproachSimpleDelegate);


// ********** End Delegate FCombatApproachSimpleDelegate *******************************************

// ********** Begin Class UAT_CombatApproach *******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateCombatApproachTask);


struct Z_Construct_UClass_UAT_CombatApproach_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_CombatApproach_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAT_CombatApproach(); \
	friend struct ::Z_Construct_UClass_UAT_CombatApproach_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UAT_CombatApproach_NoRegister(); \
public: \
	DECLARE_CLASS2(UAT_CombatApproach, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UAT_CombatApproach_NoRegister) \
	DECLARE_SERIALIZER(UAT_CombatApproach)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAT_CombatApproach(UAT_CombatApproach&&) = delete; \
	UAT_CombatApproach(const UAT_CombatApproach&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAT_CombatApproach); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAT_CombatApproach); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAT_CombatApproach) \
	NO_API virtual ~UAT_CombatApproach();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_12_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAT_CombatApproach;

// ********** End Class UAT_CombatApproach *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
