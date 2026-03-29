// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PokemonDebugTypes.h"

#ifdef PROJECTMIMIKYU_PokemonDebugTypes_generated_h
#error "PokemonDebugTypes.generated.h already included, missing '#pragma once' in PokemonDebugTypes.h"
#endif
#define PROJECTMIMIKYU_PokemonDebugTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPokemonDebugMessage **********************************************
struct Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonDebugMessage;
// ********** End ScriptStruct FPokemonDebugMessage ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h

// ********** Begin Enum EPokemonDebugOutputMode ***************************************************
#define FOREACH_ENUM_EPOKEMONDEBUGOUTPUTMODE(op) \
	op(EPokemonDebugOutputMode::None) \
	op(EPokemonDebugOutputMode::Log) \
	op(EPokemonDebugOutputMode::OnScreen) \
	op(EPokemonDebugOutputMode::LogAndScreen) 

enum class EPokemonDebugOutputMode : uint8;
template<> struct TIsUEnumClass<EPokemonDebugOutputMode> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonDebugOutputMode>();
// ********** End Enum EPokemonDebugOutputMode *****************************************************

// ********** Begin Enum EPokemonDebugVerbosity ****************************************************
#define FOREACH_ENUM_EPOKEMONDEBUGVERBOSITY(op) \
	op(EPokemonDebugVerbosity::Basic) \
	op(EPokemonDebugVerbosity::Detailed) \
	op(EPokemonDebugVerbosity::Verbose) 

enum class EPokemonDebugVerbosity : uint8;
template<> struct TIsUEnumClass<EPokemonDebugVerbosity> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonDebugVerbosity>();
// ********** End Enum EPokemonDebugVerbosity ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
