// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/PokemonCombatInterface.h"

#ifdef PROJECTMIMIKYU_PokemonCombatInterface_generated_h
#error "PokemonCombatInterface.generated.h already included, missing '#pragma once' in PokemonCombatInterface.h"
#endif
#define PROJECTMIMIKYU_PokemonCombatInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FGameplayTag;

// ********** Begin Interface UPokemonCombatInterface **********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsDead_Implementation() const { return false; }; \
	virtual AActor* GetCombatTarget_Implementation() { return NULL; }; \
	virtual AActor* GetAvatar_Implementation() { return NULL; }; \
	virtual FVector GetCombatSocketLocation_Implementation(FGameplayTag const& MontageTag) { return FVector(ForceInit); }; \
	virtual void UpdatePokemonInfoInParty_Implementation() {}; \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetCombatTarget); \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execGetCombatSocketLocation); \
	DECLARE_FUNCTION(execUpdatePokemonInfoInParty);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_CALLBACK_WRAPPERS
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatInterface_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTMIMIKYU_API UPokemonCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonCombatInterface(UPokemonCombatInterface&&) = delete; \
	UPokemonCombatInterface(const UPokemonCombatInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTMIMIKYU_API, UPokemonCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonCombatInterface) \
	virtual ~UPokemonCombatInterface() = default;


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPokemonCombatInterface(); \
	friend struct Z_Construct_UClass_UPokemonCombatInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonCombatInterface_NoRegister) \
	DECLARE_SERIALIZER(UPokemonCombatInterface)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPokemonCombatInterface() {} \
public: \
	typedef UPokemonCombatInterface UClassType; \
	typedef IPokemonCombatInterface ThisClass; \
	static AActor* Execute_GetAvatar(UObject* O); \
	static FVector Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag); \
	static AActor* Execute_GetCombatTarget(UObject* O); \
	static bool Execute_IsDead(const UObject* O); \
	static void Execute_UpdatePokemonInfoInParty(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_14_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonCombatInterface;

// ********** End Interface UPokemonCombatInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
