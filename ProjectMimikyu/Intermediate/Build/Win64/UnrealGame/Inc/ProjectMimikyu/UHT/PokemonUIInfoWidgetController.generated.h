// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/PokemonUIInfoWidgetController.h"

#ifdef PROJECTMIMIKYU_PokemonUIInfoWidgetController_generated_h
#error "PokemonUIInfoWidgetController.generated.h already included, missing '#pragma once' in PokemonUIInfoWidgetController.h"
#endif
#define PROJECTMIMIKYU_PokemonUIInfoWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnAttributeChangedSignature ******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_10_DELEGATE \
PROJECTMIMIKYU_API void FOnAttributeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignature, float NewValue);


// ********** End Delegate FOnAttributeChangedSignature ********************************************

// ********** Begin Class UPokemonUIInfoWidgetController *******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInitialHealthValues); \
	DECLARE_FUNCTION(execBroadcastInitialValues);


struct Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUIInfoWidgetController_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPokemonUIInfoWidgetController(); \
	friend struct ::Z_Construct_UClass_UPokemonUIInfoWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UPokemonUIInfoWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UPokemonUIInfoWidgetController, UPokemonWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UPokemonUIInfoWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UPokemonUIInfoWidgetController)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPokemonUIInfoWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPokemonUIInfoWidgetController(UPokemonUIInfoWidgetController&&) = delete; \
	UPokemonUIInfoWidgetController(const UPokemonUIInfoWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPokemonUIInfoWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonUIInfoWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonUIInfoWidgetController) \
	NO_API virtual ~UPokemonUIInfoWidgetController();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_14_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPokemonUIInfoWidgetController;

// ********** End Class UPokemonUIInfoWidgetController *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonUIInfoWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
