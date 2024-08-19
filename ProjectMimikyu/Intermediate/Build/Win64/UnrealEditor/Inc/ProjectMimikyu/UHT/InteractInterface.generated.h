// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InteractInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMIMIKYU_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define PROJECTMIMIKYU_InteractInterface_generated_h

#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_SPARSE_DATA
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTMIMIKYU_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROJECTMIMIKYU_API UInteractInterface(UInteractInterface&&); \
	PROJECTMIMIKYU_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTMIMIKYU_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	PROJECTMIMIKYU_API virtual ~UInteractInterface();


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), PROJECTMIMIKYU_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_10_PROLOG
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_SPARSE_DATA \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
