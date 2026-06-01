// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/WorldPopulationSubsystem.h"

#ifdef PROJECTMIMIKYU_WorldPopulationSubsystem_generated_h
#error "WorldPopulationSubsystem.generated.h already included, missing '#pragma once' in WorldPopulationSubsystem.h"
#endif
#define PROJECTMIMIKYU_WorldPopulationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FActiveRegionInfo;
struct FGameplayTag;
struct FRuntimeRegionPopulationState;

// ********** Begin ScriptStruct FActiveRegionInfo *************************************************
struct Z_Construct_UScriptStruct_FActiveRegionInfo_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveRegionInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FActiveRegionInfo;
// ********** End ScriptStruct FActiveRegionInfo ***************************************************

// ********** Begin ScriptStruct FRegisteredPopulationActorInfo ************************************
struct Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FRegisteredPopulationActorInfo;
// ********** End ScriptStruct FRegisteredPopulationActorInfo **************************************

// ********** Begin ScriptStruct FRuntimeRegionPopulationState *************************************
struct Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FRuntimeRegionPopulationState;
// ********** End ScriptStruct FRuntimeRegionPopulationState ***************************************

// ********** Begin Class UWorldPopulationSubsystem ************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopPopulationUpdateTimer); \
	DECLARE_FUNCTION(execStartPopulationUpdateTimer); \
	DECLARE_FUNCTION(execDespawnPopulationActorsTooFarFromActor); \
	DECLARE_FUNCTION(execDespawnAllPopulationActorsInRegion); \
	DECLARE_FUNCTION(execDespawnPopulationActor); \
	DECLARE_FUNCTION(execTrySpawnPlaceholderPokemonForActor); \
	DECLARE_FUNCTION(execCanSpawnCivilianInRegion); \
	DECLARE_FUNCTION(execCanSpawnTrainerInRegion); \
	DECLARE_FUNCTION(execCanSpawnWildPokemonInRegion); \
	DECLARE_FUNCTION(execGetRuntimePopulationStateForRegion); \
	DECLARE_FUNCTION(execHasActiveRegion); \
	DECLARE_FUNCTION(execGetActiveRegionForActor);


struct Z_Construct_UClass_UWorldPopulationSubsystem_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UWorldPopulationSubsystem_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPopulationSubsystem(); \
	friend struct ::Z_Construct_UClass_UWorldPopulationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UWorldPopulationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPopulationSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UWorldPopulationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWorldPopulationSubsystem)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPopulationSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPopulationSubsystem(UWorldPopulationSubsystem&&) = delete; \
	UWorldPopulationSubsystem(const UWorldPopulationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPopulationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPopulationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPopulationSubsystem) \
	NO_API virtual ~UWorldPopulationSubsystem();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_116_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_119_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPopulationSubsystem;

// ********** End Class UWorldPopulationSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h

// ********** Begin Enum EPopulationActorType ******************************************************
#define FOREACH_ENUM_EPOPULATIONACTORTYPE(op) \
	op(EPopulationActorType::None) \
	op(EPopulationActorType::WildPokemon) \
	op(EPopulationActorType::Trainer) \
	op(EPopulationActorType::Civilian) 

enum class EPopulationActorType : uint8;
template<> struct TIsUEnumClass<EPopulationActorType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPopulationActorType>();
// ********** End Enum EPopulationActorType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
