// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/DamageSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMIMIKYU_DamageSystemComponent_generated_h
#error "DamageSystemComponent.generated.h already included, missing '#pragma once' in DamageSystemComponent.h"
#endif
#define PROJECTMIMIKYU_DamageSystemComponent_generated_h

#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_SPARSE_DATA
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageSystemComponent(); \
	friend struct Z_Construct_UClass_UDamageSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UDamageSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), NO_API) \
	DECLARE_SERIALIZER(UDamageSystemComponent)


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageSystemComponent(UDamageSystemComponent&&); \
	NO_API UDamageSystemComponent(const UDamageSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageSystemComponent) \
	NO_API virtual ~UDamageSystemComponent();


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_19_PROLOG
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_SPARSE_DATA \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class UDamageSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h


#define FOREACH_ENUM_EDAMAGEOUTPUT(op) \
	op(EDamageOutput::EDO_BlockDamage) \
	op(EDamageOutput::EDO_DoDamage) \
	op(EDamageOutput::EDO_NoDamage) 

enum class EDamageOutput : uint8;
template<> struct TIsUEnumClass<EDamageOutput> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EDamageOutput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS