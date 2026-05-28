// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/InventoryWidgetController.h"

#ifdef PROJECTMIMIKYU_InventoryWidgetController_generated_h
#error "InventoryWidgetController.generated.h already included, missing '#pragma once' in InventoryWidgetController.h"
#endif
#define PROJECTMIMIKYU_InventoryWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryDisplayInfo;

// ********** Begin Delegate FOnInventoryDisplayUpdated ********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_10_DELEGATE \
PROJECTMIMIKYU_API void FOnInventoryDisplayUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryDisplayUpdated, TArray<FInventoryDisplayInfo> const& InventoryItems);


// ********** End Delegate FOnInventoryDisplayUpdated **********************************************

// ********** Begin Class UInventoryWidgetController ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInventoryUpdated);


struct Z_Construct_UClass_UInventoryWidgetController_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryWidgetController_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryWidgetController(); \
	friend struct ::Z_Construct_UClass_UInventoryWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UInventoryWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryWidgetController, UPokemonWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UInventoryWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UInventoryWidgetController)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryWidgetController(UInventoryWidgetController&&) = delete; \
	UInventoryWidgetController(const UInventoryWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidgetController) \
	NO_API virtual ~UInventoryWidgetController();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_12_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryWidgetController;

// ********** End Class UInventoryWidgetController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_InventoryWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
