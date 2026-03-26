// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/PokemonIncapacitationComponent.h"

#ifdef PROJECTMIMIKYU_PokemonIncapacitationComponent_generated_h
#error "PokemonIncapacitationComponent.generated.h already included, missing '#pragma once' in PokemonIncapacitationComponent.h"
#endif
#define PROJECTMIMIKYU_PokemonIncapacitationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin ScriptStruct FKnockbackTuning **************************************************
struct Z_Construct_UScriptStruct_FKnockbackTuning_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKnockbackTuning_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FKnockbackTuning;
// ********** End ScriptStruct FKnockbackTuning ****************************************************

// ********** Begin ScriptStruct FActiveKnockbackState *********************************************
struct Z_Construct_UScriptStruct_FActiveKnockbackState_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveKnockbackState_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FActiveKnockbackState;
// ********** End ScriptStruct FActiveKnockbackState ***********************************************

// ********** Begin Delegate FOnIncapacitationEvent ************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_86_DELEGATE \
PROJECTMIMIKYU_API void FOnIncapacitationEvent_DelegateWrapper(const FMulticastScriptDelegate& OnIncapacitationEvent);


// ********** End Delegate FOnIncapacitationEvent **************************************************

// ********** Begin Class UPokemonIncapacitationComponent ******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRagdollSafetyTimeout); \
	DECLARE_FUNCTION(execOnMeshPhysicsHit); \
	DECLARE_FUNCTION(execCanBeReturned); \
	DECLARE_FUNCTION(execIsInControlledRagdoll); \
	DECLARE_FUNCTION(execIsFaintedProne); \
	DECLARE_FUNCTION(execIsProne); \
	DECLARE_FUNCTION(execBeginManualReturn); \
	DECLARE_FUNCTION(execEnterFaintedProneState); \
	DECLARE_FUNCTION(execEnterProneState); \
	DECLARE_FUNCTION(execEnterCollapsedFaint); \
	DECLARE_FUNCTION(execApplyKnockback);


struct Z_Construct_UClass_UPokemonIncapacitationComponent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonIncapacitationComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonIncapacitationComponent(); \
	friend struct ::Z_Construct_UClass_UPokemonIncapacitationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonIncapacitationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonIncapacitationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonIncapacitationComponent_NoRegister) \
	DECLARE_SERIALIZER(UPokemonIncapacitationComponent)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_91_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonIncapacitationComponent(UPokemonIncapacitationComponent&&) = delete; \
	UPokemonIncapacitationComponent(const UPokemonIncapacitationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonIncapacitationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonIncapacitationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPokemonIncapacitationComponent) \
	NO_API virtual ~UPokemonIncapacitationComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_88_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_91_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonIncapacitationComponent;

// ********** End Class UPokemonIncapacitationComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonIncapacitationComponent_h

// ********** Begin Enum EPokemonIncapacitationState ***********************************************
#define FOREACH_ENUM_EPOKEMONINCAPACITATIONSTATE(op) \
	op(EPokemonIncapacitationState::EIS_None) \
	op(EPokemonIncapacitationState::EIS_Launched) \
	op(EPokemonIncapacitationState::EIS_ControlledRagdoll) \
	op(EPokemonIncapacitationState::EIS_Prone) \
	op(EPokemonIncapacitationState::EIS_FaintedProne) \
	op(EPokemonIncapacitationState::EIS_BeingReturned) 

enum class EPokemonIncapacitationState : uint8;
template<> struct TIsUEnumClass<EPokemonIncapacitationState> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonIncapacitationState>();
// ********** End Enum EPokemonIncapacitationState *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
