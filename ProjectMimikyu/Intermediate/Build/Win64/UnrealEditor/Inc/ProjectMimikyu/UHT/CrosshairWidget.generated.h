// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CrosshairWidget.h"

#ifdef PROJECTMIMIKYU_CrosshairWidget_generated_h
#error "CrosshairWidget.generated.h already included, missing '#pragma once' in CrosshairWidget.h"
#endif
#define PROJECTMIMIKYU_CrosshairWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCrosshairDisplayData;
struct FLinearColor;

// ********** Begin Class UCrosshairWidget *********************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCrosshairDisplayData); \
	DECLARE_FUNCTION(execSetCrosshairColor); \
	DECLARE_FUNCTION(execSetCrosshairSpread);


struct Z_Construct_UClass_UCrosshairWidget_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairWidget(); \
	friend struct ::Z_Construct_UClass_UCrosshairWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UCrosshairWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrosshairWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UCrosshairWidget_NoRegister) \
	DECLARE_SERIALIZER(UCrosshairWidget)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrosshairWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrosshairWidget(UCrosshairWidget&&) = delete; \
	UCrosshairWidget(const UCrosshairWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrosshairWidget) \
	NO_API virtual ~UCrosshairWidget();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_14_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrosshairWidget;

// ********** End Class UCrosshairWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_CrosshairWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
