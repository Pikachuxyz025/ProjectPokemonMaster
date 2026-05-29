// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/RegionPopulationData.h"

#ifdef PROJECTMIMIKYU_RegionPopulationData_generated_h
#error "RegionPopulationData.generated.h already included, missing '#pragma once' in RegionPopulationData.h"
#endif
#define PROJECTMIMIKYU_RegionPopulationData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRegionPopulationBudget *******************************************
struct Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FRegionPopulationBudget;
// ********** End ScriptStruct FRegionPopulationBudget *********************************************

// ********** Begin ScriptStruct FRegionSpawnSettings **********************************************
struct Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics;
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FRegionSpawnSettings;
// ********** End ScriptStruct FRegionSpawnSettings ************************************************

// ********** Begin Class URegionPopulationData ****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDebugSummary); \
	DECLARE_FUNCTION(execIsValidRegionData);


struct Z_Construct_UClass_URegionPopulationData_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_URegionPopulationData_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURegionPopulationData(); \
	friend struct ::Z_Construct_UClass_URegionPopulationData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_URegionPopulationData_NoRegister(); \
public: \
	DECLARE_CLASS2(URegionPopulationData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_URegionPopulationData_NoRegister) \
	DECLARE_SERIALIZER(URegionPopulationData)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URegionPopulationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URegionPopulationData(URegionPopulationData&&) = delete; \
	URegionPopulationData(const URegionPopulationData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URegionPopulationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionPopulationData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URegionPopulationData) \
	NO_API virtual ~URegionPopulationData();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_87_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_90_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URegionPopulationData;

// ********** End Class URegionPopulationData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
