// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/PokemonDataAsset.h"

#ifdef PROJECTMIMIKYU_PokemonDataAsset_generated_h
#error "PokemonDataAsset.generated.h already included, missing '#pragma once' in PokemonDataAsset.h"
#endif
#define PROJECTMIMIKYU_PokemonDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;
struct FPokemonStatInfo;

// ********** Begin ScriptStruct FPokemonMovesetList ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokemonMovesetList_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonMovesetList;
// ********** End ScriptStruct FPokemonMovesetList *************************************************

// ********** Begin ScriptStruct FPokemonStatInfo **************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokemonStatInfo_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FPokemonStatInfo;
// ********** End ScriptStruct FPokemonStatInfo ****************************************************

// ********** Begin Class UPokemonDataAsset ********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateStatInfo);


PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonDataAsset(); \
	friend struct Z_Construct_UClass_UPokemonDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPokemonDataAsset)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonDataAsset(UPokemonDataAsset&&) = delete; \
	UPokemonDataAsset(const UPokemonDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonDataAsset) \
	NO_API virtual ~UPokemonDataAsset();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_50_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonDataAsset;

// ********** End Class UPokemonDataAsset **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
