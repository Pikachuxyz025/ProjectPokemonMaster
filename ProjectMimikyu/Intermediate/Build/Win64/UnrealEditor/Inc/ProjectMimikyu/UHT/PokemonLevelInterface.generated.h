// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/PokemonLevelInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMIMIKYU_PokemonLevelInterface_generated_h
#error "PokemonLevelInterface.generated.h already included, missing '#pragma once' in PokemonLevelInterface.h"
#endif
#define PROJECTMIMIKYU_PokemonLevelInterface_generated_h

#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_SPARSE_DATA
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LevelUp_Implementation() {}; \
	virtual void AddToSpellPoints_Implementation(int32 InSpellPoints) {}; \
	virtual void AddToAttributePoints_Implementation(int32 InAttributePoints) {}; \
	virtual void AddToPokemonLevel_Implementation(int32 InPlayerLevel) {}; \
	virtual void AddToXP_Implementation(int32 InXP) {}; \
	virtual int32 GetSpellPointsReward_Implementation(int32 Level) const { return 0; }; \
	virtual int32 GetSpellPoints_Implementation() const { return 0; }; \
	virtual int32 GetAttributePoints_Implementation() const { return 0; }; \
	virtual int32 GetAttributePointsReward_Implementation(int32 Level) const { return 0; }; \
	virtual int32 GetXP_Implementation() const { return 0; }; \
	virtual int32 FindLevelForXP_Implementation(int32 InXP) const { return 0; }; \
 \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execAddToSpellPoints); \
	DECLARE_FUNCTION(execAddToAttributePoints); \
	DECLARE_FUNCTION(execAddToPokemonLevel); \
	DECLARE_FUNCTION(execAddToXP); \
	DECLARE_FUNCTION(execGetSpellPointsReward); \
	DECLARE_FUNCTION(execGetSpellPoints); \
	DECLARE_FUNCTION(execGetAttributePoints); \
	DECLARE_FUNCTION(execGetAttributePointsReward); \
	DECLARE_FUNCTION(execGetXP); \
	DECLARE_FUNCTION(execFindLevelForXP);


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_ACCESSORS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTMIMIKYU_API UPokemonLevelInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROJECTMIMIKYU_API UPokemonLevelInterface(UPokemonLevelInterface&&); \
	PROJECTMIMIKYU_API UPokemonLevelInterface(const UPokemonLevelInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTMIMIKYU_API, UPokemonLevelInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokemonLevelInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokemonLevelInterface) \
	PROJECTMIMIKYU_API virtual ~UPokemonLevelInterface();


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPokemonLevelInterface(); \
	friend struct Z_Construct_UClass_UPokemonLevelInterface_Statics; \
public: \
	DECLARE_CLASS(UPokemonLevelInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectMimikyu"), PROJECTMIMIKYU_API) \
	DECLARE_SERIALIZER(UPokemonLevelInterface)


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPokemonLevelInterface() {} \
public: \
	typedef UPokemonLevelInterface UClassType; \
	typedef IPokemonLevelInterface ThisClass; \
	static void Execute_AddToAttributePoints(UObject* O, int32 InAttributePoints); \
	static void Execute_AddToPokemonLevel(UObject* O, int32 InPlayerLevel); \
	static void Execute_AddToSpellPoints(UObject* O, int32 InSpellPoints); \
	static void Execute_AddToXP(UObject* O, int32 InXP); \
	static int32 Execute_FindLevelForXP(const UObject* O, int32 InXP); \
	static int32 Execute_GetAttributePoints(const UObject* O); \
	static int32 Execute_GetAttributePointsReward(const UObject* O, int32 Level); \
	static int32 Execute_GetSpellPoints(const UObject* O); \
	static int32 Execute_GetSpellPointsReward(const UObject* O, int32 Level); \
	static int32 Execute_GetXP(const UObject* O); \
	static void Execute_LevelUp(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_10_PROLOG
#define FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_SPARSE_DATA \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_ACCESSORS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIMIKYU_API UClass* StaticClass<class UPokemonLevelInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
