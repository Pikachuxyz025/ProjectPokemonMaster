// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTasks/AT_FireProjectiles.h"

#ifdef PROJECTMIMIKYU_AT_FireProjectiles_generated_h
#error "AT_FireProjectiles.generated.h already included, missing '#pragma once' in AT_FireProjectiles.h"
#endif
#define PROJECTMIMIKYU_AT_FireProjectiles_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AProjectileAttack;
class UAT_FireProjectiles;
class UGameplayAbility;
class UGameplayEffect;
enum class EProjectileSpreadMode : uint8;
struct FDamageEffectParams;
struct FEnvironmentDropParams;
struct FGameplayEffectContextHandle;
struct FGameplayTagContainer;
struct FProjectileBaseParams;

// ********** Begin ScriptStruct FProjectileBaseParams *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileBaseParams_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FProjectileBaseParams;
// ********** End ScriptStruct FProjectileBaseParams ***********************************************

// ********** Begin Delegate FOnFireProjectileFinished *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_66_DELEGATE \
PROJECTMIMIKYU_API void FOnFireProjectileFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFireProjectileFinished);


// ********** End Delegate FOnFireProjectileFinished ***********************************************

// ********** Begin Class UAT_FireProjectiles ******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActivationId); \
	DECLARE_FUNCTION(execHandleEnvironmentalEruptBP); \
	DECLARE_FUNCTION(execHandleEnvironmentalDropBP); \
	DECLARE_FUNCTION(execHandleBeamBP); \
	DECLARE_FUNCTION(execHandleSequentialBP); \
	DECLARE_FUNCTION(execHandleSpreadBP); \
	DECLARE_FUNCTION(execHandleBurstBP); \
	DECLARE_FUNCTION(execHandleSingleShotBP); \
	DECLARE_FUNCTION(execFireBeam); \
	DECLARE_FUNCTION(execFireEnvironmentErupt); \
	DECLARE_FUNCTION(execFireEnvironmentDrop); \
	DECLARE_FUNCTION(execFireBurst); \
	DECLARE_FUNCTION(execFireSequential); \
	DECLARE_FUNCTION(execFireSingle); \
	DECLARE_FUNCTION(execFireProjectiles);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_CALLBACK_WRAPPERS
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_FireProjectiles_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAT_FireProjectiles(); \
	friend struct Z_Construct_UClass_UAT_FireProjectiles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_FireProjectiles_NoRegister(); \
public: \
	DECLARE_CLASS2(UAT_FireProjectiles, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UAT_FireProjectiles_NoRegister) \
	DECLARE_SERIALIZER(UAT_FireProjectiles)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAT_FireProjectiles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAT_FireProjectiles(UAT_FireProjectiles&&) = delete; \
	UAT_FireProjectiles(const UAT_FireProjectiles&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAT_FireProjectiles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAT_FireProjectiles); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAT_FireProjectiles) \
	NO_API virtual ~UAT_FireProjectiles();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_68_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAT_FireProjectiles;

// ********** End Class UAT_FireProjectiles ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_FireProjectiles_h

// ********** Begin Enum EProjectileSpreadMode *****************************************************
#define FOREACH_ENUM_EPROJECTILESPREADMODE(op) \
	op(EProjectileSpreadMode::SingleShot) \
	op(EProjectileSpreadMode::Burst) \
	op(EProjectileSpreadMode::Spread) \
	op(EProjectileSpreadMode::Sequential) \
	op(EProjectileSpreadMode::Drop) \
	op(EProjectileSpreadMode::Erupt) \
	op(EProjectileSpreadMode::Beam) 

enum class EProjectileSpreadMode : uint8;
template<> struct TIsUEnumClass<EProjectileSpreadMode> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EProjectileSpreadMode>();
// ********** End Enum EProjectileSpreadMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
