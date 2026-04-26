// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/PokemonAICombatBrainConfig.h"

#ifdef PROJECTMIMIKYU_PokemonAICombatBrainConfig_generated_h
#error "PokemonAICombatBrainConfig.generated.h already included, missing '#pragma once' in PokemonAICombatBrainConfig.h"
#endif
#define PROJECTMIMIKYU_PokemonAICombatBrainConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPokemonAICombatBrainConfig **********************************************
struct Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonAICombatBrainConfig(); \
	friend struct ::Z_Construct_UClass_UPokemonAICombatBrainConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonAICombatBrainConfig, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister) \
	DECLARE_SERIALIZER(UPokemonAICombatBrainConfig)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonAICombatBrainConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonAICombatBrainConfig(UPokemonAICombatBrainConfig&&) = delete; \
	UPokemonAICombatBrainConfig(const UPokemonAICombatBrainConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonAICombatBrainConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonAICombatBrainConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonAICombatBrainConfig) \
	NO_API virtual ~UPokemonAICombatBrainConfig();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h_22_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonAICombatBrainConfig;

// ********** End Class UPokemonAICombatBrainConfig ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonAICombatBrainConfig_h

// ********** Begin Enum ETargetRule ***************************************************************
#define FOREACH_ENUM_ETARGETRULE(op) \
	op(ETargetRule::ERT_None) \
	op(ETargetRule::ERT_Nearest) \
	op(ETargetRule::ERT_LowestHP) \
	op(ETargetRule::ERT_HighestThreatToMe) \
	op(ETargetRule::ERT_FocusTrainerTarget) \
	op(ETargetRule::ERT_RandomWeighted) 

enum class ETargetRule : uint8;
template<> struct TIsUEnumClass<ETargetRule> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<ETargetRule>();
// ********** End Enum ETargetRule *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
