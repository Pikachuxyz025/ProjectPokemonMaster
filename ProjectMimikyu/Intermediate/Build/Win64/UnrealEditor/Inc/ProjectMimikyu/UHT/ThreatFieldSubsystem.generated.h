// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EQS/Subsystems/ThreatFieldSubsystem.h"

#ifdef PROJECTMIMIKYU_ThreatFieldSubsystem_generated_h
#error "ThreatFieldSubsystem.generated.h already included, missing '#pragma once' in ThreatFieldSubsystem.h"
#endif
#define PROJECTMIMIKYU_ThreatFieldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UAbilitySystemComponent;
struct FThreatEntry;

// ********** Begin ScriptStruct FEnvAreaCenterEntry ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnvAreaCenterEntry_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FEnvAreaCenterEntry;
// ********** End ScriptStruct FEnvAreaCenterEntry *************************************************

// ********** Begin ScriptStruct FThreatEntry ******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FThreatEntry_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FThreatEntry;
// ********** End ScriptStruct FThreatEntry ********************************************************

// ********** Begin Class UThreatFieldSubsystem ****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearThreatsByActivationId); \
	DECLARE_FUNCTION(execQueryThreats); \
	DECLARE_FUNCTION(execRegisterThreat); \
	DECLARE_FUNCTION(execClearCenterByActivationId); \
	DECLARE_FUNCTION(execUpdateAreaCenter); \
	DECLARE_FUNCTION(execGetAreaCenter); \
	DECLARE_FUNCTION(execRegisterAreaCenter);


PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UThreatFieldSubsystem_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThreatFieldSubsystem(); \
	friend struct Z_Construct_UClass_UThreatFieldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UThreatFieldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UThreatFieldSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UThreatFieldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UThreatFieldSubsystem)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThreatFieldSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UThreatFieldSubsystem(UThreatFieldSubsystem&&) = delete; \
	UThreatFieldSubsystem(const UThreatFieldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThreatFieldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThreatFieldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UThreatFieldSubsystem) \
	NO_API virtual ~UThreatFieldSubsystem();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_47_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_50_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UThreatFieldSubsystem;

// ********** End Class UThreatFieldSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
