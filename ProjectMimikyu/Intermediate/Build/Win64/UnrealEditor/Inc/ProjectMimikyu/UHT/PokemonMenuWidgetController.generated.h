// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/PokemonMenuWidgetController.h"

#ifdef PROJECTMIMIKYU_PokemonMenuWidgetController_generated_h
#error "PokemonMenuWidgetController.generated.h already included, missing '#pragma once' in PokemonMenuWidgetController.h"
#endif
#define PROJECTMIMIKYU_PokemonMenuWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;
struct FPokemonStatInfo;

// ********** Begin Delegate FStatInfoSignature ****************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_15_DELEGATE \
PROJECTMIMIKYU_API void FStatInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& StatInfoSignature, FPokemonStatInfo const& Info);


// ********** End Delegate FStatInfoSignature ******************************************************

// ********** Begin Delegate FAttributeInfoSignature ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_16_DELEGATE \
PROJECTMIMIKYU_API void FAttributeInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& AttributeInfoSignature, FGameplayTag const& Info);


// ********** End Delegate FAttributeInfoSignature *************************************************

// ********** Begin Class UPokemonMenuWidgetController *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastInitialValues);


PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonMenuWidgetController(); \
	friend struct Z_Construct_UClass_UPokemonMenuWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonMenuWidgetController, UPokemonWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UPokemonMenuWidgetController)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonMenuWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonMenuWidgetController(UPokemonMenuWidgetController&&) = delete; \
	UPokemonMenuWidgetController(const UPokemonMenuWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonMenuWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonMenuWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonMenuWidgetController) \
	NO_API virtual ~UPokemonMenuWidgetController();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_18_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonMenuWidgetController;

// ********** End Class UPokemonMenuWidgetController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
