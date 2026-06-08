// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Command/PokemonCommandTypes.h"

#ifdef PROJECTMIMIKYU_PokemonCommandTypes_generated_h
#error "PokemonCommandTypes.generated.h already included, missing '#pragma once' in PokemonCommandTypes.h"
#endif
#define PROJECTMIMIKYU_PokemonCommandTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPokemonCommandTarget *********************************************
struct Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonCommandTarget;
// ********** End ScriptStruct FPokemonCommandTarget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h

// ********** Begin Enum EPokemonCommandTargetType *************************************************
#define FOREACH_ENUM_EPOKEMONCOMMANDTARGETTYPE(op) \
	op(EPokemonCommandTargetType::None) \
	op(EPokemonCommandTargetType::EnemyPokemon) \
	op(EPokemonCommandTargetType::AllyPokemon) \
	op(EPokemonCommandTargetType::Interactable) \
	op(EPokemonCommandTargetType::Environment) \
	op(EPokemonCommandTargetType::Location) 

enum class EPokemonCommandTargetType : uint8;
template<> struct TIsUEnumClass<EPokemonCommandTargetType> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonCommandTargetType>();
// ********** End Enum EPokemonCommandTargetType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
