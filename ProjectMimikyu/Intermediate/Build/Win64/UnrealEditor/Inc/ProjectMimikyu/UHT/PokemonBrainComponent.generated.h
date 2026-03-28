// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/PokemonBrainComponent.h"

#ifdef PROJECTMIMIKYU_PokemonBrainComponent_generated_h
#error "PokemonBrainComponent.generated.h already included, missing '#pragma once' in PokemonBrainComponent.h"
#endif
#define PROJECTMIMIKYU_PokemonBrainComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPokemonAICombatBrainConfig;
struct FGameplayTag;

// ********** Begin Class UPokemonBrainComponent ***************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDesiredCombatMode); \
	DECLARE_FUNCTION(execSetBrainConfig);


struct Z_Construct_UClass_UPokemonBrainComponent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBrainComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonBrainComponent(); \
	friend struct ::Z_Construct_UClass_UPokemonBrainComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonBrainComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonBrainComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonBrainComponent_NoRegister) \
	DECLARE_SERIALIZER(UPokemonBrainComponent)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonBrainComponent(UPokemonBrainComponent&&) = delete; \
	UPokemonBrainComponent(const UPokemonBrainComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonBrainComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonBrainComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPokemonBrainComponent) \
	NO_API virtual ~UPokemonBrainComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_29_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonBrainComponent;

// ********** End Class UPokemonBrainComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
