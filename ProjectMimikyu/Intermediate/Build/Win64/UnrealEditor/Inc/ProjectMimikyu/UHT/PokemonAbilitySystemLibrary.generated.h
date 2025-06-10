// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UPokemonAbilitySystemComponent;
class UPokemonMenuWidgetController;
class UTrainerOverlayWidgetController;
enum class EElementalType : uint8;
struct FDamageEffectParams;
struct FGameplayEffectContextHandle;
struct FGameplayTag;
struct FPokemonTypeInfo;
#ifdef PROJECTMIMIKYU_PokemonAbilitySystemLibrary_generated_h
#error "PokemonAbilitySystemLibrary.generated.h already included, missing '#pragma once' in PokemonAbilitySystemLibrary.h"
#endif
#define PROJECTMIMIKYU_PokemonAbilitySystemLibrary_generated_h

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_SPARSE_DATA
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTypeMultiplier); \
	DECLARE_FUNCTION(execSetDamageType); \
	DECLARE_FUNCTION(execSetKnockbackForce); \
	DECLARE_FUNCTION(execSetDeathImpulse); \
	DECLARE_FUNCTION(execSetDebuffFrequency); \
	DECLARE_FUNCTION(execSetDebuffDuration); \
	DECLARE_FUNCTION(execSetDebuffDamage); \
	DECLARE_FUNCTION(execSetIsSuccessfulDebuff); \
	DECLARE_FUNCTION(execSetIsCriticalHit); \
	DECLARE_FUNCTION(execSetIsBlockedHit); \
	DECLARE_FUNCTION(execGetDamageType); \
	DECLARE_FUNCTION(execGetKnockbackForce); \
	DECLARE_FUNCTION(execGetDeathImpulse); \
	DECLARE_FUNCTION(execGetDebuffFrequency); \
	DECLARE_FUNCTION(execGetDebuffDuration); \
	DECLARE_FUNCTION(execGetDebuffDamage); \
	DECLARE_FUNCTION(execIsSuccessfulDebuff); \
	DECLARE_FUNCTION(execIsCriticalHit); \
	DECLARE_FUNCTION(execIsBlockedHit); \
	DECLARE_FUNCTION(execGetSavedTypeMatchup); \
	DECLARE_FUNCTION(execGetTypeMatchup); \
	DECLARE_FUNCTION(execApplyDamageEffect); \
	DECLARE_FUNCTION(execGetTrainerOverlayWidgetController); \
	DECLARE_FUNCTION(execGetPokemonMenuWidgetController); \
	DECLARE_FUNCTION(execActivateAbilityByTag);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonAbilitySystemLibrary(); \
	friend struct Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UPokemonAbilitySystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), NO_API) \
	DECLARE_SERIALIZER(UPokemonAbilitySystemLibrary)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPokemonAbilitySystemLibrary(UPokemonAbilitySystemLibrary&&); \
	NO_API UPokemonAbilitySystemLibrary(const UPokemonAbilitySystemLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonAbilitySystemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonAbilitySystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonAbilitySystemLibrary) \
	NO_API virtual ~UPokemonAbilitySystemLibrary();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_17_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_SPARSE_DATA \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class UPokemonAbilitySystemLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
