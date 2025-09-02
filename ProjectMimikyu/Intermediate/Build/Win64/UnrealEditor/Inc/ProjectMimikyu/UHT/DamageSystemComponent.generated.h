// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/DamageSystemComponent.h"

#ifdef PROJECTMIMIKYU_DamageSystemComponent_generated_h
#error "DamageSystemComponent.generated.h already included, missing '#pragma once' in DamageSystemComponent.h"
#endif
#define PROJECTMIMIKYU_DamageSystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDamageSystemComponent ***************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageSystemComponent_NoRegister();

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageSystemComponent(); \
	friend struct Z_Construct_UClass_UDamageSystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageSystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDamageSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), Z_Construct_UClass_UDamageSystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UDamageSystemComponent)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDamageSystemComponent(UDamageSystemComponent&&) = delete; \
	UDamageSystemComponent(const UDamageSystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageSystemComponent) \
	NO_API virtual ~UDamageSystemComponent();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_22_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDamageSystemComponent;

// ********** End Class UDamageSystemComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h

// ********** Begin Enum EDamageOutput *************************************************************
#define FOREACH_ENUM_EDAMAGEOUTPUT(op) \
	op(EDamageOutput::EDO_BlockDamage) \
	op(EDamageOutput::EDO_DoDamage) \
	op(EDamageOutput::EDO_NoDamage) 

enum class EDamageOutput : uint8;
template<> struct TIsUEnumClass<EDamageOutput> { enum { Value = true }; };
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EDamageOutput>();
// ********** End Enum EDamageOutput ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
