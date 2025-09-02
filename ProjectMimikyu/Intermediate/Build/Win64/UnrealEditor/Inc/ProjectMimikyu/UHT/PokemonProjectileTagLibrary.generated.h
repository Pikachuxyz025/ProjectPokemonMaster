// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/PokemonProjectileTagLibrary.h"

#ifdef PROJECTMIMIKYU_PokemonProjectileTagLibrary_generated_h
#error "PokemonProjectileTagLibrary.generated.h already included, missing '#pragma once' in PokemonProjectileTagLibrary.h"
#endif
#define PROJECTMIMIKYU_PokemonProjectileTagLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FSequentialShotParams;

// ********** Begin Class UPokemonProjectileTagLibrary *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScatterSphereRotation); \
	DECLARE_FUNCTION(execComputeSequentialShotRotation); \
	DECLARE_FUNCTION(execGetFunctionNameForCategory); \
	DECLARE_FUNCTION(execGetBestTagForCategory); \
	DECLARE_FUNCTION(execResolveTagContainer);


PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonProjectileTagLibrary_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonProjectileTagLibrary(); \
	friend struct Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonProjectileTagLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonProjectileTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonProjectileTagLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPokemonProjectileTagLibrary)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonProjectileTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonProjectileTagLibrary(UPokemonProjectileTagLibrary&&) = delete; \
	UPokemonProjectileTagLibrary(const UPokemonProjectileTagLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonProjectileTagLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonProjectileTagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonProjectileTagLibrary) \
	NO_API virtual ~UPokemonProjectileTagLibrary();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_13_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonProjectileTagLibrary;

// ********** End Class UPokemonProjectileTagLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
