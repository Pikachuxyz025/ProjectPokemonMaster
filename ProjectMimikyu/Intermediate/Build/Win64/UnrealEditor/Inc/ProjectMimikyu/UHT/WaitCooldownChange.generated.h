// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AsyncTasks/WaitCooldownChange.h"

#ifdef PROJECTMIMIKYU_WaitCooldownChange_generated_h
#error "WaitCooldownChange.generated.h already included, missing '#pragma once' in WaitCooldownChange.h"
#endif
#define PROJECTMIMIKYU_WaitCooldownChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UWaitCooldownChange;
struct FGameplayTag;

// ********** Begin Delegate FCooldownChangeSignature **********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_14_DELEGATE \
PROJECTMIMIKYU_API void FCooldownChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& CooldownChangeSignature, float TimeRemaining);


// ********** End Delegate FCooldownChangeSignature ************************************************

// ********** Begin Class UWaitCooldownChange ******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execWaitForCooldownChange);


struct Z_Construct_UClass_UWaitCooldownChange_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UWaitCooldownChange_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaitCooldownChange(); \
	friend struct ::Z_Construct_UClass_UWaitCooldownChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UWaitCooldownChange_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaitCooldownChange, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UWaitCooldownChange_NoRegister) \
	DECLARE_SERIALIZER(UWaitCooldownChange)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaitCooldownChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaitCooldownChange(UWaitCooldownChange&&) = delete; \
	UWaitCooldownChange(const UWaitCooldownChange&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaitCooldownChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaitCooldownChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaitCooldownChange) \
	NO_API virtual ~UWaitCooldownChange();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_16_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaitCooldownChange;

// ********** End Class UWaitCooldownChange ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
