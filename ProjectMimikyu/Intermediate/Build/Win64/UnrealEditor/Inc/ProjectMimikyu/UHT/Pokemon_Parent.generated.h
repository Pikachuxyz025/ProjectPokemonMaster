// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Pokemon_Parent.h"

#ifdef PROJECTMIMIKYU_Pokemon_Parent_generated_h
#error "Pokemon_Parent.generated.h already included, missing '#pragma once' in Pokemon_Parent.h"
#endif
#define PROJECTMIMIKYU_Pokemon_Parent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APokemonAIController;
class UAbilitySystemComponent;
class UAttributeSet;
class UMaterialInstanceDynamic;
class UPokemonAbilitySystemComponent;
class UPokemonBaseAttributeSet;
enum class EMovementSpeed : uint8;
struct FPokemonUIInfo;

// ********** Begin Delegate FOnAttackEnd **********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_DELEGATE \
PROJECTMIMIKYU_API void FOnAttackEnd_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnd);


// ********** End Delegate FOnAttackEnd ************************************************************

// ********** Begin Delegate FOnDodgeEnd ***********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_19_DELEGATE \
PROJECTMIMIKYU_API void FOnDodgeEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDodgeEnd);


// ********** End Delegate FOnDodgeEnd *************************************************************

// ********** Begin Delegate FOnCharging ***********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_20_DELEGATE \
PROJECTMIMIKYU_API void FOnCharging_DelegateWrapper(const FMulticastScriptDelegate& OnCharging);


// ********** End Delegate FOnCharging *************************************************************

// ********** Begin Class APokemon_Parent **********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayReturnEffects_Implementation(); \
	DECLARE_FUNCTION(execGetDodgeDirection); \
	DECLARE_FUNCTION(execGetPokemonAS); \
	DECLARE_FUNCTION(execGetPokemonASC); \
	DECLARE_FUNCTION(execGetAttributeSet); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent); \
	DECLARE_FUNCTION(execHasTrainer); \
	DECLARE_FUNCTION(execGetPokemonController); \
	DECLARE_FUNCTION(execGetPokemonUIInfo); \
	DECLARE_FUNCTION(execSetIsDodging); \
	DECLARE_FUNCTION(execSelectRandomMove); \
	DECLARE_FUNCTION(execGetReadyForCombat); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execEndDodge); \
	DECLARE_FUNCTION(execCanInteractWhileFainted); \
	DECLARE_FUNCTION(execInteractWithFaintedPokemon); \
	DECLARE_FUNCTION(execDebug_ResetDeadFlag); \
	DECLARE_FUNCTION(execDebug_TestManualReturn); \
	DECLARE_FUNCTION(execDebug_TestHeavyFaint); \
	DECLARE_FUNCTION(execDebug_TestCollapseFaint); \
	DECLARE_FUNCTION(execIsPokemonFaintedProne); \
	DECLARE_FUNCTION(execIsPokemonProne); \
	DECLARE_FUNCTION(execBeginManualReturnAfterFaint); \
	DECLARE_FUNCTION(execEnterCollapsedFaint); \
	DECLARE_FUNCTION(execApplyPokemonKnockback); \
	DECLARE_FUNCTION(execEnterFaintedState); \
	DECLARE_FUNCTION(execMulticastPlayReturnEffects); \
	DECLARE_FUNCTION(execPrepareForFieldRemoval); \
	DECLARE_FUNCTION(execOnRep_StartupPokemonInfo); \
	DECLARE_FUNCTION(execAttackEnded);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_CALLBACK_WRAPPERS
struct Z_Construct_UClass_APokemon_Parent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPokemon_Parent(); \
	friend struct ::Z_Construct_UClass_APokemon_Parent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_APokemon_Parent_NoRegister(); \
public: \
	DECLARE_CLASS2(APokemon_Parent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_APokemon_Parent_NoRegister) \
	DECLARE_SERIALIZER(APokemon_Parent) \
	virtual UObject* _getUObject() const override { return const_cast<APokemon_Parent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSpawnedFromPartyStartup=NETFIELD_REP_START, \
		StartupPokemonInfo, \
		CurrentTrainer, \
		PokemonStatus, \
		bIsCaught, \
		NETFIELD_REP_END=bIsCaught	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APokemon_Parent(APokemon_Parent&&) = delete; \
	APokemon_Parent(const APokemon_Parent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APokemon_Parent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APokemon_Parent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APokemon_Parent) \
	NO_API virtual ~APokemon_Parent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_36_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APokemon_Parent;

// ********** End Class APokemon_Parent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
