// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/PokeballSummonComponent.h"

#ifdef PROJECTMIMIKYU_PokeballSummonComponent_generated_h
#error "PokeballSummonComponent.generated.h already included, missing '#pragma once' in PokeballSummonComponent.h"
#endif
#define PROJECTMIMIKYU_PokeballSummonComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FPokeBallSummonLanded *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_16_DELEGATE \
PROJECTMIMIKYU_API void FPokeBallSummonLanded_DelegateWrapper(const FMulticastScriptDelegate& PokeBallSummonLanded, FVector LandingLocation, FVector LandingNormal, int32 PartySlotIndex);


// ********** End Delegate FPokeBallSummonLanded ***************************************************

// ********** Begin Class UPokeballSummonComponent *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSummonEnergyLanded);


struct Z_Construct_UClass_UPokeballSummonComponent_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokeballSummonComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokeballSummonComponent(); \
	friend struct ::Z_Construct_UClass_UPokeballSummonComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokeballSummonComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokeballSummonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokeballSummonComponent_NoRegister) \
	DECLARE_SERIALIZER(UPokeballSummonComponent)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokeballSummonComponent(UPokeballSummonComponent&&) = delete; \
	UPokeballSummonComponent(const UPokeballSummonComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokeballSummonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokeballSummonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPokeballSummonComponent) \
	NO_API virtual ~UPokeballSummonComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_18_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokeballSummonComponent;

// ********** End Class UPokeballSummonComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
