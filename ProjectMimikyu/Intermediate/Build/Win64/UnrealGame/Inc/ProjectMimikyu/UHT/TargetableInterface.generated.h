// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/TargetableInterface.h"

#ifdef PROJECTMIMIKYU_TargetableInterface_generated_h
#error "TargetableInterface.generated.h already included, missing '#pragma once' in TargetableInterface.h"
#endif
#define PROJECTMIMIKYU_TargetableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAimContext : uint8;
struct FGameplayTagContainer;

// ********** Begin Interface UTargetableInterface *************************************************
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetingTags); \
	DECLARE_FUNCTION(execGetTargetPriorityScore); \
	DECLARE_FUNCTION(execIsInteractableTarget); \
	DECLARE_FUNCTION(execIsCatchableTarget); \
	DECLARE_FUNCTION(execIsHostileToActor); \
	DECLARE_FUNCTION(execGetTargetingSocketName); \
	DECLARE_FUNCTION(execGetLockOnFocusPoint); \
	DECLARE_FUNCTION(execGetTargetAimPoint); \
	DECLARE_FUNCTION(execIsTargetHidden); \
	DECLARE_FUNCTION(execIsTargetObscured); \
	DECLARE_FUNCTION(execIsFaintedForTargeting); \
	DECLARE_FUNCTION(execCanBeFreeAimTargeted); \
	DECLARE_FUNCTION(execCanBeLockOnTargeted); \
	DECLARE_FUNCTION(execIsTargetable);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UTargetableInterface_Statics;
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTargetableInterface(UTargetableInterface&&) = delete; \
	UTargetableInterface(const UTargetableInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetableInterface) \
	virtual ~UTargetableInterface() = default;


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTargetableInterface(); \
	friend struct ::Z_Construct_UClass_UTargetableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* ::Z_Construct_UClass_UTargetableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTargetableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UTargetableInterface_NoRegister) \
	DECLARE_SERIALIZER(UTargetableInterface)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITargetableInterface() {} \
public: \
	typedef UTargetableInterface UClassType; \
	typedef ITargetableInterface ThisClass; \
	static bool Execute_CanBeFreeAimTargeted(const UObject* O, EAimContext AimContext); \
	static bool Execute_CanBeLockOnTargeted(const UObject* O, EAimContext AimContext); \
	static FVector Execute_GetLockOnFocusPoint(const UObject* O); \
	static FVector Execute_GetTargetAimPoint(const UObject* O); \
	static FName Execute_GetTargetingSocketName(const UObject* O); \
	static FGameplayTagContainer Execute_GetTargetingTags(const UObject* O); \
	static float Execute_GetTargetPriorityScore(const UObject* O); \
	static bool Execute_IsCatchableTarget(const UObject* O); \
	static bool Execute_IsFaintedForTargeting(const UObject* O); \
	static bool Execute_IsHostileToActor(const UObject* O, const AActor* RequestingActor); \
	static bool Execute_IsInteractableTarget(const UObject* O); \
	static bool Execute_IsTargetable(const UObject* O); \
	static bool Execute_IsTargetHidden(const UObject* O); \
	static bool Execute_IsTargetObscured(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_11_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTargetableInterface;

// ********** End Interface UTargetableInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
