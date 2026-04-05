// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/TargetingComponent.h"

#ifdef PROJECTMIMIKYU_TargetingComponent_generated_h
#error "TargetingComponent.generated.h already included, missing '#pragma once' in TargetingComponent.h"
#endif
#define PROJECTMIMIKYU_TargetingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAimContext : uint8;
enum class EAimTypeMode : uint8;

// ********** Begin Class UTargetingComponent ******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryGetAimAssistTarget); \
	DECLARE_FUNCTION(execIsLockTargetStillValid); \
	DECLARE_FUNCTION(execGetCurrentAimDirection); \
	DECLARE_FUNCTION(execGetCurrentAimWorldLocation); \
	DECLARE_FUNCTION(execEndFreeAim); \
	DECLARE_FUNCTION(execBeginFreeAim); \
	DECLARE_FUNCTION(execGetCurrentLockedTarget); \
	DECLARE_FUNCTION(execSwitchTargetRight); \
	DECLARE_FUNCTION(execSwitchTargetLeft); \
	DECLARE_FUNCTION(execClearLockOn); \
	DECLARE_FUNCTION(execTryLockOnToBestTarget); \
	DECLARE_FUNCTION(execToggleLockOn); \
	DECLARE_FUNCTION(execIsLockedOn); \
	DECLARE_FUNCTION(execIsInFreeAim); \
	DECLARE_FUNCTION(execGetAimMode); \
	DECLARE_FUNCTION(execGetAimContext); \
	DECLARE_FUNCTION(execSetAimContext);


struct Z_Construct_UClass_UTargetingComponent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTargetingComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingComponent(); \
	friend struct ::Z_Construct_UClass_UTargetingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UTargetingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTargetingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UTargetingComponent_NoRegister) \
	DECLARE_SERIALIZER(UTargetingComponent)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTargetingComponent(UTargetingComponent&&) = delete; \
	UTargetingComponent(const UTargetingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetingComponent) \
	NO_API virtual ~UTargetingComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_10_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTargetingComponent;

// ********** End Class UTargetingComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
