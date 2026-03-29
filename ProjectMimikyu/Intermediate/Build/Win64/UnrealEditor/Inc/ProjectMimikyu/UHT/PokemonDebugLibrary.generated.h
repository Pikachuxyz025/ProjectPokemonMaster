// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debugging/PokemonDebugLibrary.h"

#ifdef PROJECTMIMIKYU_PokemonDebugLibrary_generated_h
#error "PokemonDebugLibrary.generated.h already included, missing '#pragma once' in PokemonDebugLibrary.h"
#endif
#define PROJECTMIMIKYU_PokemonDebugLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EPokemonDebugOutputMode : uint8;
enum class EPokemonDebugVerbosity : uint8;
struct FGameplayTag;
struct FLinearColor;

// ********** Begin Class UPokemonDebugLibrary *****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMaxVerbosity); \
	DECLARE_FUNCTION(execClearObserverdActor); \
	DECLARE_FUNCTION(execSetObserverActor); \
	DECLARE_FUNCTION(execIsCategoryEnabled); \
	DECLARE_FUNCTION(execSetCategoryEnabled); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawSphere); \
	DECLARE_FUNCTION(execPrintMessage);


struct Z_Construct_UClass_UPokemonDebugLibrary_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDebugLibrary_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonDebugLibrary(); \
	friend struct ::Z_Construct_UClass_UPokemonDebugLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonDebugLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonDebugLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonDebugLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPokemonDebugLibrary)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonDebugLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonDebugLibrary(UPokemonDebugLibrary&&) = delete; \
	UPokemonDebugLibrary(const UPokemonDebugLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonDebugLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonDebugLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonDebugLibrary) \
	NO_API virtual ~UPokemonDebugLibrary();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_14_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonDebugLibrary;

// ********** End Class UPokemonDebugLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
