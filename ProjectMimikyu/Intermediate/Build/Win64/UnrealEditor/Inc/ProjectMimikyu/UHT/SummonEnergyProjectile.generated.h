// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/SummonEnergyProjectile.h"

#ifdef PROJECTMIMIKYU_SummonEnergyProjectile_generated_h
#error "SummonEnergyProjectile.generated.h already included, missing '#pragma once' in SummonEnergyProjectile.h"
#endif
#define PROJECTMIMIKYU_SummonEnergyProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnSummonEnergyLanded *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_16_DELEGATE \
PROJECTMIMIKYU_API void FOnSummonEnergyLanded_DelegateWrapper(const FMulticastScriptDelegate& OnSummonEnergyLanded, FVector LandingLocation, FVector LandingNormal);


// ********** End Delegate FOnSummonEnergyLanded ***************************************************

// ********** Begin Class ASummonEnergyProjectile **************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleHit); \
	DECLARE_FUNCTION(execInitSummonEnergy);


struct Z_Construct_UClass_ASummonEnergyProjectile_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ASummonEnergyProjectile_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASummonEnergyProjectile(); \
	friend struct ::Z_Construct_UClass_ASummonEnergyProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_ASummonEnergyProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(ASummonEnergyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_ASummonEnergyProjectile_NoRegister) \
	DECLARE_SERIALIZER(ASummonEnergyProjectile)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASummonEnergyProjectile(ASummonEnergyProjectile&&) = delete; \
	ASummonEnergyProjectile(const ASummonEnergyProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASummonEnergyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASummonEnergyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASummonEnergyProjectile) \
	NO_API virtual ~ASummonEnergyProjectile();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_18_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASummonEnergyProjectile;

// ********** End Class ASummonEnergyProjectile ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
