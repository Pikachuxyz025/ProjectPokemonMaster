// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/TargetingType.h"

#ifdef PROJECTMIMIKYU_TargetingType_generated_h
#error "TargetingType.generated.h already included, missing '#pragma once' in TargetingType.h"
#endif
#define PROJECTMIMIKYU_TargetingType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAimData **********************************************************
struct Z_Construct_UScriptStruct_FAimData_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAimData_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FAimData;
// ********** End ScriptStruct FAimData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h

// ********** Begin Enum EPokemonAimMode ***********************************************************
#define FOREACH_ENUM_EPOKEMONAIMMODE(op) \
	op(EPokemonAimMode::LockOn) \
	op(EPokemonAimMode::FreeAim) 

enum class EPokemonAimMode : uint8;
template<> struct TIsUEnumClass<EPokemonAimMode> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonAimMode>();
// ********** End Enum EPokemonAimMode *************************************************************

// ********** Begin Enum EAimContext ***************************************************************
#define FOREACH_ENUM_EAIMCONTEXT(op) \
	op(EAimContext::Combat) \
	op(EAimContext::Capture) \
	op(EAimContext::Interaction) \
	op(EAimContext::CommandMove) 

enum class EAimContext : uint8;
template<> struct TIsUEnumClass<EAimContext> { enum { Value = true }; };
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EAimContext>();
// ********** End Enum EAimContext *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
