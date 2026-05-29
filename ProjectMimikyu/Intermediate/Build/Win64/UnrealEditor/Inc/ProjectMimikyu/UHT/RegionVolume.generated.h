// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/RegionVolume.h"

#ifdef PROJECTMIMIKYU_RegionVolume_generated_h
#error "RegionVolume.generated.h already included, missing '#pragma once' in RegionVolume.h"
#endif
#define PROJECTMIMIKYU_RegionVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class URegionPopulationData;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;

// ********** Begin Class ARegionVolume ************************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRegionPopulationData); \
	DECLARE_FUNCTION(execGetEnvironmentTags); \
	DECLARE_FUNCTION(execGetBiomeTags); \
	DECLARE_FUNCTION(execGetRegionTag); \
	DECLARE_FUNCTION(execOnRegionEndOverlap); \
	DECLARE_FUNCTION(execOnRegionBeginOverlap);


struct Z_Construct_UClass_ARegionVolume_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ARegionVolume_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARegionVolume(); \
	friend struct ::Z_Construct_UClass_ARegionVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_ARegionVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ARegionVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_ARegionVolume_NoRegister) \
	DECLARE_SERIALIZER(ARegionVolume)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARegionVolume(ARegionVolume&&) = delete; \
	ARegionVolume(const ARegionVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARegionVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARegionVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARegionVolume) \
	NO_API virtual ~ARegionVolume();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_29_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARegionVolume;

// ********** End Class ARegionVolume **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
