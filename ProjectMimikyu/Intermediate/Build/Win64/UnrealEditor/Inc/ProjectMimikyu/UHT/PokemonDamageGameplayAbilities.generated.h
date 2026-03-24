// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"

#ifdef PROJECTMIMIKYU_PokemonDamageGameplayAbilities_generated_h
#error "PokemonDamageGameplayAbilities.generated.h already included, missing '#pragma once' in PokemonDamageGameplayAbilities.h"
#endif
#define PROJECTMIMIKYU_PokemonDamageGameplayAbilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EDirectionPoint : uint8;
struct FDamageEffectParams;
struct FGameplayTag;

// ********** Begin Class UPokemonDamageGameplayAbilities ******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCommitPokemonMove); \
	DECLARE_FUNCTION(execGetKeySequenceFromTag); \
	DECLARE_FUNCTION(execCauseDamage); \
	DECLARE_FUNCTION(execMakeDamageEffectParamsFromClassDefaults);


struct Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonDamageGameplayAbilities(); \
	friend struct ::Z_Construct_UClass_UPokemonDamageGameplayAbilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonDamageGameplayAbilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonDamageGameplayAbilities, UPokemonGameplayAbilities, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonDamageGameplayAbilities_NoRegister) \
	DECLARE_SERIALIZER(UPokemonDamageGameplayAbilities)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonDamageGameplayAbilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonDamageGameplayAbilities(UPokemonDamageGameplayAbilities&&) = delete; \
	UPokemonDamageGameplayAbilities(const UPokemonDamageGameplayAbilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonDamageGameplayAbilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonDamageGameplayAbilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonDamageGameplayAbilities) \
	NO_API virtual ~UPokemonDamageGameplayAbilities();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_15_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonDamageGameplayAbilities;

// ********** End Class UPokemonDamageGameplayAbilities ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonDamageGameplayAbilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
