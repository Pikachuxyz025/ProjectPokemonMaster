// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DamageInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMIMIKYU_DamageInterface_generated_h
#error "DamageInterface.generated.h already included, missing '#pragma once' in DamageInterface.h"
#endif
#define PROJECTMIMIKYU_DamageInterface_generated_h

#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_SPARSE_DATA
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsAttacking_Implementation() { return false; }; \
	virtual bool HasFainted_Implementation() { return false; }; \
	virtual void RecieveHealth_Implementation(float AddHealthPercent) {}; \
 \
	DECLARE_FUNCTION(execIsAttacking); \
	DECLARE_FUNCTION(execHasFainted); \
	DECLARE_FUNCTION(execRecieveHealth);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_CALLBACK_WRAPPERS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTMIMIKYU_API UDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROJECTMIMIKYU_API UDamageInterface(UDamageInterface&&); \
	PROJECTMIMIKYU_API UDamageInterface(const UDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTMIMIKYU_API, UDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageInterface) \
	PROJECTMIMIKYU_API virtual ~UDamageInterface();


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageInterface(); \
	friend struct Z_Construct_UClass_UDamageInterface_Statics; \
public: \
	DECLARE_CLASS(UDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), PROJECTMIMIKYU_API) \
	DECLARE_SERIALIZER(UDamageInterface)


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageInterface() {} \
public: \
	typedef UDamageInterface UClassType; \
	typedef IDamageInterface ThisClass; \
	static bool Execute_HasFainted(UObject* O); \
	static bool Execute_IsAttacking(UObject* O); \
	static void Execute_RecieveHealth(UObject* O, float AddHealthPercent); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_11_PROLOG
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_SPARSE_DATA \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_CALLBACK_WRAPPERS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class UDamageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
