// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Pokemon_Parent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTMIMIKYU_Pokemon_Parent_generated_h
#error "Pokemon_Parent.generated.h already included, missing '#pragma once' in Pokemon_Parent.h"
#endif
#define PROJECTMIMIKYU_Pokemon_Parent_generated_h

#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_13_DELEGATE \
PROJECTMIMIKYU_API void FOnAttackEnd_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnd);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_SPARSE_DATA
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetTrainer_Implementation(AActor* NewTrainer); \
 \
	DECLARE_FUNCTION(execServerSetTrainer); \
	DECLARE_FUNCTION(execSetBoxCollision); \
	DECLARE_FUNCTION(execSelectRandomMove); \
	DECLARE_FUNCTION(execGetReadyForCombat); \
	DECLARE_FUNCTION(execStartBoxTrace); \
	DECLARE_FUNCTION(execRemoveCollision); \
	DECLARE_FUNCTION(execAddCollision); \
	DECLARE_FUNCTION(execFaint); \
	DECLARE_FUNCTION(execOnBoxOverlap); \
	DECLARE_FUNCTION(execOnBoxHit); \
	DECLARE_FUNCTION(execAttackEnded);


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_ACCESSORS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_CALLBACK_WRAPPERS
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPokemon_Parent(); \
	friend struct Z_Construct_UClass_APokemon_Parent_Statics; \
public: \
	DECLARE_CLASS(APokemon_Parent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), NO_API) \
	DECLARE_SERIALIZER(APokemon_Parent) \
	virtual UObject* _getUObject() const override { return const_cast<APokemon_Parent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentTrainer=NETFIELD_REP_START, \
		PokemonStatus, \
		bIsCaught, \
		NETFIELD_REP_END=bIsCaught	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APokemon_Parent(APokemon_Parent&&); \
	NO_API APokemon_Parent(const APokemon_Parent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APokemon_Parent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APokemon_Parent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APokemon_Parent) \
	NO_API virtual ~APokemon_Parent();


#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_15_PROLOG
#define FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_SPARSE_DATA \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_ACCESSORS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_CALLBACK_WRAPPERS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class APokemon_Parent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS