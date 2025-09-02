// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/PokemonWidgetController.h"

#ifdef PROJECTMIMIKYU_PokemonWidgetController_generated_h
#error "PokemonWidgetController.generated.h already included, missing '#pragma once' in PokemonWidgetController.h"
#endif
#define PROJECTMIMIKYU_PokemonWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ATrainerController;
class ATrainerPlayerState;
struct FWidgetControllerParams;

// ********** Begin Delegate FOnPokemonStatChangedSignature ****************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_19_DELEGATE \
PROJECTMIMIKYU_API void FOnPokemonStatChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonStatChangedSignature, int32 NewValue);


// ********** End Delegate FOnPokemonStatChangedSignature ******************************************

// ********** Begin ScriptStruct FWidgetControllerParams *******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics; \
	PROJECTMIMIKYU_API static class UScriptStruct* StaticStruct();


struct FWidgetControllerParams;
// ********** End ScriptStruct FWidgetControllerParams *********************************************

// ********** Begin Class UPokemonWidgetController *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTPS); \
	DECLARE_FUNCTION(execGetTC); \
	DECLARE_FUNCTION(execSetWidgetControllerParams);


PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonWidgetController(); \
	friend struct Z_Construct_UClass_UPokemonWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonWidgetController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UPokemonWidgetController)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonWidgetController(UPokemonWidgetController&&) = delete; \
	UPokemonWidgetController(const UPokemonWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonWidgetController) \
	NO_API virtual ~UPokemonWidgetController();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_46_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_49_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonWidgetController;

// ********** End Class UPokemonWidgetController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
