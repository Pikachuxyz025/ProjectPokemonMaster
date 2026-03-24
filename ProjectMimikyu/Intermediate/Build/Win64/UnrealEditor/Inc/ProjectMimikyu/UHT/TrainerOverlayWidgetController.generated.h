// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/TrainerOverlayWidgetController.h"

#ifdef PROJECTMIMIKYU_TrainerOverlayWidgetController_generated_h
#error "TrainerOverlayWidgetController.generated.h already included, missing '#pragma once' in TrainerOverlayWidgetController.h"
#endif
#define PROJECTMIMIKYU_TrainerOverlayWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APokemon_Parent;
class UAbilitySystemComponent;
enum class EDirectionPoint : uint8;
struct FPokemonInfo;
struct FPokemonUIInfo;

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_13_DELEGATE \
PROJECTMIMIKYU_API void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth);


// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Delegate FOnMaxHealthChangedSignature ******************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_14_DELEGATE \
PROJECTMIMIKYU_API void FOnMaxHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangedSignature, float NewMaxHealth);


// ********** End Delegate FOnMaxHealthChangedSignature ********************************************

// ********** Begin Delegate FPokemonUIInfoSignature ***********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_15_DELEGATE \
PROJECTMIMIKYU_API void FPokemonUIInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& PokemonUIInfoSignature, FPokemonUIInfo const& Info);


// ********** End Delegate FPokemonUIInfoSignature *************************************************

// ********** Begin Delegate FPokemonInfoSignature *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_16_DELEGATE \
PROJECTMIMIKYU_API void FPokemonInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& PokemonInfoSignature, TArray<FPokemonInfo> const& Info);


// ********** End Delegate FPokemonInfoSignature ***************************************************

// ********** Begin Delegate FOnPartyChangedSignature **********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_19_DELEGATE \
PROJECTMIMIKYU_API void FOnPartyChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPartyChangedSignature, TArray<APokemon_Parent*> const& PokemonParty);


// ********** End Delegate FOnPartyChangedSignature ************************************************

// ********** Begin Delegate FOnPokemonActiveSignature *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_20_DELEGATE \
PROJECTMIMIKYU_API void FOnPokemonActiveSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonActiveSignature, APokemon_Parent* NewActivePokemon);


// ********** End Delegate FOnPokemonActiveSignature ***********************************************

// ********** Begin Delegate FOnEventActivatedSignature ********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_21_DELEGATE \
PROJECTMIMIKYU_API void FOnEventActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEventActivatedSignature);


// ********** End Delegate FOnEventActivatedSignature **********************************************

// ********** Begin Delegate FPokemonAbilityConfigured *********************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_22_DELEGATE \
PROJECTMIMIKYU_API void FPokemonAbilityConfigured_DelegateWrapper(const FMulticastScriptDelegate& PokemonAbilityConfigured, UAbilitySystemComponent* ASC);


// ********** End Delegate FPokemonAbilityConfigured ***********************************************

// ********** Begin Delegate FOnKeyInputSignature **************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_27_DELEGATE \
PROJECTMIMIKYU_API void FOnKeyInputSignature_DelegateWrapper(const FMulticastScriptDelegate& OnKeyInputSignature, EDirectionPoint const& KeyDirection);


// ********** End Delegate FOnKeyInputSignature ****************************************************

// ********** Begin Class UTrainerOverlayWidgetController ******************************************
struct Z_Construct_UClass_UTrainerOverlayWidgetController_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrainerOverlayWidgetController(); \
	friend struct ::Z_Construct_UClass_UTrainerOverlayWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrainerOverlayWidgetController, UPokemonWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UTrainerOverlayWidgetController)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrainerOverlayWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrainerOverlayWidgetController(UTrainerOverlayWidgetController&&) = delete; \
	UTrainerOverlayWidgetController(const UTrainerOverlayWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrainerOverlayWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrainerOverlayWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrainerOverlayWidgetController) \
	NO_API virtual ~UTrainerOverlayWidgetController();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_30_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrainerOverlayWidgetController;

// ********** End Class UTrainerOverlayWidgetController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
