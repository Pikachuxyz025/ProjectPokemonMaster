// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/ProjectileAbility.h"

#ifdef PROJECTMIMIKYU_ProjectileAbility_generated_h
#error "ProjectileAbility.generated.h already included, missing '#pragma once' in ProjectileAbility.h"
#endif
#define PROJECTMIMIKYU_ProjectileAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;

// ********** Begin ScriptStruct FProjectileSettings ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileSettings_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FProjectileSettings;
// ********** End ScriptStruct FProjectileSettings *************************************************

// ********** Begin Class UProjectileAbility *******************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnProjectile);


PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileAbility(); \
	friend struct Z_Construct_UClass_UProjectileAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UProjectileAbility, UPokemonDamageGameplayAbilities, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UProjectileAbility_NoRegister) \
	DECLARE_SERIALIZER(UProjectileAbility)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProjectileAbility(UProjectileAbility&&) = delete; \
	UProjectileAbility(const UProjectileAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileAbility) \
	NO_API virtual ~UProjectileAbility();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_43_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_46_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProjectileAbility;

// ********** End Class UProjectileAbility *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
