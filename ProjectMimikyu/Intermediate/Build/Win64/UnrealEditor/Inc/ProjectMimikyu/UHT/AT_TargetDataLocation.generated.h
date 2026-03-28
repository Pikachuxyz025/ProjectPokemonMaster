// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AT_TargetDataLocation.h"

#ifdef PROJECTMIMIKYU_AT_TargetDataLocation_generated_h
#error "AT_TargetDataLocation.generated.h already included, missing '#pragma once' in AT_TargetDataLocation.h"
#endif
#define PROJECTMIMIKYU_AT_TargetDataLocation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAT_TargetDataLocation;
class UGameplayAbility;
struct FGameplayAbilityTargetDataHandle;

// ********** Begin Delegate FTargetDataLocationSignature ******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_10_DELEGATE \
PROJECTMIMIKYU_API void FTargetDataLocationSignature_DelegateWrapper(const FMulticastScriptDelegate& TargetDataLocationSignature, const FGameplayAbilityTargetDataHandle DataHandle);


// ********** End Delegate FTargetDataLocationSignature ********************************************

// ********** Begin Class UAT_TargetDataLocation ***************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateTargetDataLocation);


struct Z_Construct_UClass_UAT_TargetDataLocation_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TargetDataLocation_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAT_TargetDataLocation(); \
	friend struct ::Z_Construct_UClass_UAT_TargetDataLocation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UAT_TargetDataLocation_NoRegister(); \
public: \
	DECLARE_CLASS2(UAT_TargetDataLocation, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UAT_TargetDataLocation_NoRegister) \
	DECLARE_SERIALIZER(UAT_TargetDataLocation)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAT_TargetDataLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAT_TargetDataLocation(UAT_TargetDataLocation&&) = delete; \
	UAT_TargetDataLocation(const UAT_TargetDataLocation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAT_TargetDataLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAT_TargetDataLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAT_TargetDataLocation) \
	NO_API virtual ~UAT_TargetDataLocation();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_17_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAT_TargetDataLocation;

// ********** End Class UAT_TargetDataLocation *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
