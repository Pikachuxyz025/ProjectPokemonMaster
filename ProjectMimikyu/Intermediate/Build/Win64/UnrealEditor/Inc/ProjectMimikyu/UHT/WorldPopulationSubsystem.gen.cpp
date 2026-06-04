// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/WorldPopulationSubsystem.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWorldPopulationSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ARegionVolume_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_URegionPopulationData_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UWorldPopulationSubsystem();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UWorldPopulationSubsystem_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FActiveRegionInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPopulationSpawnCandidate();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeRegionPopulationState();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActiveRegionInfo *************************************************
struct Z_Construct_UScriptStruct_FActiveRegionInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActiveRegionInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActiveRegionInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FActiveRegionInfo\n *\n * Lightweight runtime record for which region an actor is currently inside.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FActiveRegionInfo\n\nLightweight runtime record for which region an actor is currently inside." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionVolume_MetaData[] = {
		{ "Category", "ActiveRegionInfo" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionPopulationData_MetaData[] = {
		{ "Category", "ActiveRegionInfo" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionTag_MetaData[] = {
		{ "Category", "ActiveRegionInfo" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActiveRegionInfo constinit property declarations *****************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegionVolume;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegionPopulationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FActiveRegionInfo constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveRegionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActiveRegionInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActiveRegionInfo;
class UScriptStruct* FActiveRegionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveRegionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActiveRegionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveRegionInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ActiveRegionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FActiveRegionInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FActiveRegionInfo Property Definitions ****************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::NewProp_RegionVolume = { "RegionVolume", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveRegionInfo, RegionVolume), Z_Construct_UClass_ARegionVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionVolume_MetaData), NewProp_RegionVolume_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::NewProp_RegionPopulationData = { "RegionPopulationData", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveRegionInfo, RegionPopulationData), Z_Construct_UClass_URegionPopulationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionPopulationData_MetaData), NewProp_RegionPopulationData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveRegionInfo, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionTag_MetaData), NewProp_RegionTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::NewProp_RegionVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::NewProp_RegionPopulationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::NewProp_RegionTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FActiveRegionInfo Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ActiveRegionInfo",
	Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::PropPointers),
	sizeof(FActiveRegionInfo),
	alignof(FActiveRegionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveRegionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveRegionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActiveRegionInfo.InnerSingleton, Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActiveRegionInfo.InnerSingleton);
}
// ********** End ScriptStruct FActiveRegionInfo ***************************************************

// ********** Begin Enum EPopulationActorType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPopulationActorType;
static UEnum* EPopulationActorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPopulationActorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPopulationActorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPopulationActorType"));
	}
	return Z_Registration_Info_UEnum_EPopulationActorType.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPopulationActorType>()
{
	return EPopulationActorType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Civilian.Name", "EPopulationActorType::Civilian" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
		{ "None.Name", "EPopulationActorType::None" },
		{ "Trainer.Name", "EPopulationActorType::Trainer" },
		{ "WildPokemon.Name", "EPopulationActorType::WildPokemon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPopulationActorType::None", (int64)EPopulationActorType::None },
		{ "EPopulationActorType::WildPokemon", (int64)EPopulationActorType::WildPokemon },
		{ "EPopulationActorType::Trainer", (int64)EPopulationActorType::Trainer },
		{ "EPopulationActorType::Civilian", (int64)EPopulationActorType::Civilian },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPopulationActorType",
	"EPopulationActorType",
	Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType()
{
	if (!Z_Registration_Info_UEnum_EPopulationActorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPopulationActorType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPopulationActorType.InnerSingleton;
}
// ********** End Enum EPopulationActorType ********************************************************

// ********** Begin ScriptStruct FPopulationSpawnCandidate *****************************************
struct Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPopulationSpawnCandidate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPopulationSpawnCandidate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPopulationSpawnCandidate constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPopulationSpawnCandidate constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPopulationSpawnCandidate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate;
class UScriptStruct* FPopulationSpawnCandidate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPopulationSpawnCandidate, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PopulationSpawnCandidate"));
	}
	return Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate.OuterSingleton;
	}

// ********** Begin ScriptStruct FPopulationSpawnCandidate Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPopulationSpawnCandidate, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
void Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FPopulationSpawnCandidate*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPopulationSpawnCandidate), &Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPopulationSpawnCandidate, FailureReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPopulationSpawnCandidate Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PopulationSpawnCandidate",
	Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::PropPointers),
	sizeof(FPopulationSpawnCandidate),
	alignof(FPopulationSpawnCandidate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPopulationSpawnCandidate()
{
	if (!Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate.InnerSingleton, Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate.InnerSingleton);
}
// ********** End ScriptStruct FPopulationSpawnCandidate *******************************************

// ********** Begin ScriptStruct FRegisteredPopulationActorInfo ************************************
struct Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRegisteredPopulationActorInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRegisteredPopulationActorInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "RegisteredPopulationActorInfo" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionTag_MetaData[] = {
		{ "Category", "RegisteredPopulationActorInfo" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopulationType_MetaData[] = {
		{ "Category", "RegisteredPopulationActorInfo" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombatReady_MetaData[] = {
		{ "Category", "RegisteredPopulationActorInfo" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRegisteredPopulationActorInfo constinit property declarations ****
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PopulationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PopulationType;
	static void NewProp_bCombatReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombatReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRegisteredPopulationActorInfo constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisteredPopulationActorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo;
class UScriptStruct* FRegisteredPopulationActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("RegisteredPopulationActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FRegisteredPopulationActorInfo Property Definitions ***************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisteredPopulationActorInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisteredPopulationActorInfo, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionTag_MetaData), NewProp_RegionTag_MetaData) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_PopulationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_PopulationType = { "PopulationType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisteredPopulationActorInfo, PopulationType), Z_Construct_UEnum_ProjectMimikyu_EPopulationActorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopulationType_MetaData), NewProp_PopulationType_MetaData) }; // 619235926
void Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_bCombatReady_SetBit(void* Obj)
{
	((FRegisteredPopulationActorInfo*)Obj)->bCombatReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_bCombatReady = { "bCombatReady", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRegisteredPopulationActorInfo), &Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_bCombatReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombatReady_MetaData), NewProp_bCombatReady_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_PopulationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_PopulationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewProp_bCombatReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRegisteredPopulationActorInfo Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"RegisteredPopulationActorInfo",
	Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::PropPointers),
	sizeof(FRegisteredPopulationActorInfo),
	alignof(FRegisteredPopulationActorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo.InnerSingleton);
}
// ********** End ScriptStruct FRegisteredPopulationActorInfo **************************************

// ********** Begin ScriptStruct FRuntimeRegionPopulationState *************************************
struct Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRuntimeRegionPopulationState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRuntimeRegionPopulationState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionTag_MetaData[] = {
		{ "Category", "RuntimeRegionPopulationState" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionPopulationData_MetaData[] = {
		{ "Category", "RuntimeRegionPopulationState" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePokemonCount_MetaData[] = {
		{ "Category", "RuntimeRegionPopulationState" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatReadyPokemonCount_MetaData[] = {
		{ "Category", "RuntimeRegionPopulationState" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTrainerCount_MetaData[] = {
		{ "Category", "RuntimeRegionPopulationState" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCivilianCount_MetaData[] = {
		{ "Category", "RuntimeRegionPopulationState" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRuntimeRegionPopulationState constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegionPopulationData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivePokemonCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CombatReadyPokemonCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveTrainerCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveCivilianCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRuntimeRegionPopulationState constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeRegionPopulationState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState;
class UScriptStruct* FRuntimeRegionPopulationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeRegionPopulationState, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("RuntimeRegionPopulationState"));
	}
	return Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState.OuterSingleton;
	}

// ********** Begin ScriptStruct FRuntimeRegionPopulationState Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeRegionPopulationState, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionTag_MetaData), NewProp_RegionTag_MetaData) }; // 517357616
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_RegionPopulationData = { "RegionPopulationData", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeRegionPopulationState, RegionPopulationData), Z_Construct_UClass_URegionPopulationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionPopulationData_MetaData), NewProp_RegionPopulationData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_ActivePokemonCount = { "ActivePokemonCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeRegionPopulationState, ActivePokemonCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePokemonCount_MetaData), NewProp_ActivePokemonCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_CombatReadyPokemonCount = { "CombatReadyPokemonCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeRegionPopulationState, CombatReadyPokemonCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatReadyPokemonCount_MetaData), NewProp_CombatReadyPokemonCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_ActiveTrainerCount = { "ActiveTrainerCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeRegionPopulationState, ActiveTrainerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTrainerCount_MetaData), NewProp_ActiveTrainerCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_ActiveCivilianCount = { "ActiveCivilianCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeRegionPopulationState, ActiveCivilianCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCivilianCount_MetaData), NewProp_ActiveCivilianCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_RegionPopulationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_ActivePokemonCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_CombatReadyPokemonCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_ActiveTrainerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewProp_ActiveCivilianCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRuntimeRegionPopulationState Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"RuntimeRegionPopulationState",
	Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::PropPointers),
	sizeof(FRuntimeRegionPopulationState),
	alignof(FRuntimeRegionPopulationState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeRegionPopulationState()
{
	if (!Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState.InnerSingleton);
}
// ********** End ScriptStruct FRuntimeRegionPopulationState ***************************************

// ********** Begin Class UWorldPopulationSubsystem Function CanSpawnCivilianInRegion **************
struct Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics
{
	struct WorldPopulationSubsystem_eventCanSpawnCivilianInRegion_Parms
	{
		FGameplayTag RegionTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanSpawnCivilianInRegion constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanSpawnCivilianInRegion constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanSpawnCivilianInRegion Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventCanSpawnCivilianInRegion_Parms, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPopulationSubsystem_eventCanSpawnCivilianInRegion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPopulationSubsystem_eventCanSpawnCivilianInRegion_Parms), &Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::PropPointers) < 2048);
// ********** End Function CanSpawnCivilianInRegion Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "CanSpawnCivilianInRegion", 	Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::WorldPopulationSubsystem_eventCanSpawnCivilianInRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::WorldPopulationSubsystem_eventCanSpawnCivilianInRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execCanSpawnCivilianInRegion)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_RegionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSpawnCivilianInRegion(Z_Param_RegionTag);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function CanSpawnCivilianInRegion ****************

// ********** Begin Class UWorldPopulationSubsystem Function CanSpawnTrainerInRegion ***************
struct Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics
{
	struct WorldPopulationSubsystem_eventCanSpawnTrainerInRegion_Parms
	{
		FGameplayTag RegionTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanSpawnTrainerInRegion constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanSpawnTrainerInRegion constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanSpawnTrainerInRegion Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventCanSpawnTrainerInRegion_Parms, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPopulationSubsystem_eventCanSpawnTrainerInRegion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPopulationSubsystem_eventCanSpawnTrainerInRegion_Parms), &Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::PropPointers) < 2048);
// ********** End Function CanSpawnTrainerInRegion Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "CanSpawnTrainerInRegion", 	Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::WorldPopulationSubsystem_eventCanSpawnTrainerInRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::WorldPopulationSubsystem_eventCanSpawnTrainerInRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execCanSpawnTrainerInRegion)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_RegionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSpawnTrainerInRegion(Z_Param_RegionTag);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function CanSpawnTrainerInRegion *****************

// ********** Begin Class UWorldPopulationSubsystem Function CanSpawnWildPokemonInRegion ***********
struct Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics
{
	struct WorldPopulationSubsystem_eventCanSpawnWildPokemonInRegion_Parms
	{
		FGameplayTag RegionTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanSpawnWildPokemonInRegion constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanSpawnWildPokemonInRegion constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanSpawnWildPokemonInRegion Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventCanSpawnWildPokemonInRegion_Parms, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPopulationSubsystem_eventCanSpawnWildPokemonInRegion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPopulationSubsystem_eventCanSpawnWildPokemonInRegion_Parms), &Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::PropPointers) < 2048);
// ********** End Function CanSpawnWildPokemonInRegion Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "CanSpawnWildPokemonInRegion", 	Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::WorldPopulationSubsystem_eventCanSpawnWildPokemonInRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::WorldPopulationSubsystem_eventCanSpawnWildPokemonInRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execCanSpawnWildPokemonInRegion)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_RegionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSpawnWildPokemonInRegion(Z_Param_RegionTag);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function CanSpawnWildPokemonInRegion *************

// ********** Begin Class UWorldPopulationSubsystem Function DespawnAllPopulationActorsInRegion ****
struct Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics
{
	struct WorldPopulationSubsystem_eventDespawnAllPopulationActorsInRegion_Parms
	{
		FGameplayTag RegionTag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population|Spawning" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DespawnAllPopulationActorsInRegion constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DespawnAllPopulationActorsInRegion constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DespawnAllPopulationActorsInRegion Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventDespawnAllPopulationActorsInRegion_Parms, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventDespawnAllPopulationActorsInRegion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::PropPointers) < 2048);
// ********** End Function DespawnAllPopulationActorsInRegion Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "DespawnAllPopulationActorsInRegion", 	Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::WorldPopulationSubsystem_eventDespawnAllPopulationActorsInRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::WorldPopulationSubsystem_eventDespawnAllPopulationActorsInRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execDespawnAllPopulationActorsInRegion)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_RegionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DespawnAllPopulationActorsInRegion(Z_Param_RegionTag);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function DespawnAllPopulationActorsInRegion ******

// ********** Begin Class UWorldPopulationSubsystem Function DespawnPopulationActor ****************
struct Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics
{
	struct WorldPopulationSubsystem_eventDespawnPopulationActor_Parms
	{
		AActor* ActorToDespawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population|Spawning" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DespawnPopulationActor constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToDespawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DespawnPopulationActor constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DespawnPopulationActor Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::NewProp_ActorToDespawn = { "ActorToDespawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventDespawnPopulationActor_Parms, ActorToDespawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPopulationSubsystem_eventDespawnPopulationActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPopulationSubsystem_eventDespawnPopulationActor_Parms), &Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::NewProp_ActorToDespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::PropPointers) < 2048);
// ********** End Function DespawnPopulationActor Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "DespawnPopulationActor", 	Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::WorldPopulationSubsystem_eventDespawnPopulationActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::WorldPopulationSubsystem_eventDespawnPopulationActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execDespawnPopulationActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToDespawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DespawnPopulationActor(Z_Param_ActorToDespawn);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function DespawnPopulationActor ******************

// ********** Begin Class UWorldPopulationSubsystem Function DespawnPopulationActorsTooFarFromActor 
struct Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics
{
	struct WorldPopulationSubsystem_eventDespawnPopulationActorsTooFarFromActor_Parms
	{
		AActor* ReferenceActor;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population|Spawning" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DespawnPopulationActorsTooFarFromActor constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DespawnPopulationActorsTooFarFromActor constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DespawnPopulationActorsTooFarFromActor Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::NewProp_ReferenceActor = { "ReferenceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventDespawnPopulationActorsTooFarFromActor_Parms, ReferenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventDespawnPopulationActorsTooFarFromActor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::NewProp_ReferenceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::PropPointers) < 2048);
// ********** End Function DespawnPopulationActorsTooFarFromActor Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "DespawnPopulationActorsTooFarFromActor", 	Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::WorldPopulationSubsystem_eventDespawnPopulationActorsTooFarFromActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::WorldPopulationSubsystem_eventDespawnPopulationActorsTooFarFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execDespawnPopulationActorsTooFarFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_ReferenceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DespawnPopulationActorsTooFarFromActor(Z_Param_ReferenceActor);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function DespawnPopulationActorsTooFarFromActor **

// ********** Begin Class UWorldPopulationSubsystem Function GetActiveRegionForActor ***************
struct Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics
{
	struct WorldPopulationSubsystem_eventGetActiveRegionForActor_Parms
	{
		AActor* Actor;
		FActiveRegionInfo OutRegionInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveRegionForActor constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRegionInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveRegionForActor constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveRegionForActor Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventGetActiveRegionForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_OutRegionInfo = { "OutRegionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventGetActiveRegionForActor_Parms, OutRegionInfo), Z_Construct_UScriptStruct_FActiveRegionInfo, METADATA_PARAMS(0, nullptr) }; // 931129769
void Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPopulationSubsystem_eventGetActiveRegionForActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPopulationSubsystem_eventGetActiveRegionForActor_Parms), &Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_OutRegionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::PropPointers) < 2048);
// ********** End Function GetActiveRegionForActor Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "GetActiveRegionForActor", 	Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::WorldPopulationSubsystem_eventGetActiveRegionForActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::WorldPopulationSubsystem_eventGetActiveRegionForActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execGetActiveRegionForActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FActiveRegionInfo,Z_Param_Out_OutRegionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActiveRegionForActor(Z_Param_Actor,Z_Param_Out_OutRegionInfo);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function GetActiveRegionForActor *****************

// ********** Begin Class UWorldPopulationSubsystem Function GetRuntimePopulationStateForRegion ****
struct Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics
{
	struct WorldPopulationSubsystem_eventGetRuntimePopulationStateForRegion_Parms
	{
		FGameplayTag RegionTag;
		FRuntimeRegionPopulationState OutPopulationState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRuntimePopulationStateForRegion constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPopulationState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRuntimePopulationStateForRegion constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRuntimePopulationStateForRegion Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventGetRuntimePopulationStateForRegion_Parms, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_OutPopulationState = { "OutPopulationState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventGetRuntimePopulationStateForRegion_Parms, OutPopulationState), Z_Construct_UScriptStruct_FRuntimeRegionPopulationState, METADATA_PARAMS(0, nullptr) }; // 1077767949
void Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPopulationSubsystem_eventGetRuntimePopulationStateForRegion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPopulationSubsystem_eventGetRuntimePopulationStateForRegion_Parms), &Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_OutPopulationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::PropPointers) < 2048);
// ********** End Function GetRuntimePopulationStateForRegion Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "GetRuntimePopulationStateForRegion", 	Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::WorldPopulationSubsystem_eventGetRuntimePopulationStateForRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::WorldPopulationSubsystem_eventGetRuntimePopulationStateForRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execGetRuntimePopulationStateForRegion)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_RegionTag);
	P_GET_STRUCT_REF(FRuntimeRegionPopulationState,Z_Param_Out_OutPopulationState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRuntimePopulationStateForRegion(Z_Param_Out_RegionTag,Z_Param_Out_OutPopulationState);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function GetRuntimePopulationStateForRegion ******

// ********** Begin Class UWorldPopulationSubsystem Function HasActiveRegion ***********************
struct Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics
{
	struct WorldPopulationSubsystem_eventHasActiveRegion_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasActiveRegion constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasActiveRegion constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasActiveRegion Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventHasActiveRegion_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPopulationSubsystem_eventHasActiveRegion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPopulationSubsystem_eventHasActiveRegion_Parms), &Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::PropPointers) < 2048);
// ********** End Function HasActiveRegion Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "HasActiveRegion", 	Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::WorldPopulationSubsystem_eventHasActiveRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::WorldPopulationSubsystem_eventHasActiveRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execHasActiveRegion)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasActiveRegion(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function HasActiveRegion *************************

// ********** Begin Class UWorldPopulationSubsystem Function StartPopulationUpdateTimer ************
struct Z_Construct_UFunction_UWorldPopulationSubsystem_StartPopulationUpdateTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartPopulationUpdateTimer constinit property declarations ************
// ********** End Function StartPopulationUpdateTimer constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_StartPopulationUpdateTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "StartPopulationUpdateTimer", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_StartPopulationUpdateTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_StartPopulationUpdateTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_StartPopulationUpdateTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_StartPopulationUpdateTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execStartPopulationUpdateTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPopulationUpdateTimer();
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function StartPopulationUpdateTimer **************

// ********** Begin Class UWorldPopulationSubsystem Function StopPopulationUpdateTimer *************
struct Z_Construct_UFunction_UWorldPopulationSubsystem_StopPopulationUpdateTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopPopulationUpdateTimer constinit property declarations *************
// ********** End Function StopPopulationUpdateTimer constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_StopPopulationUpdateTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "StopPopulationUpdateTimer", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_StopPopulationUpdateTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_StopPopulationUpdateTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_StopPopulationUpdateTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_StopPopulationUpdateTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execStopPopulationUpdateTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPopulationUpdateTimer();
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function StopPopulationUpdateTimer ***************

// ********** Begin Class UWorldPopulationSubsystem Function TrySpawnPlaceholderPokemonForActor ****
struct Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics
{
	struct WorldPopulationSubsystem_eventTrySpawnPlaceholderPokemonForActor_Parms
	{
		AActor* RequestingActor;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Population|Spawning" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TrySpawnPlaceholderPokemonForActor constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestingActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TrySpawnPlaceholderPokemonForActor constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TrySpawnPlaceholderPokemonForActor Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::NewProp_RequestingActor = { "RequestingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventTrySpawnPlaceholderPokemonForActor_Parms, RequestingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPopulationSubsystem_eventTrySpawnPlaceholderPokemonForActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::NewProp_RequestingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::PropPointers) < 2048);
// ********** End Function TrySpawnPlaceholderPokemonForActor Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWorldPopulationSubsystem, nullptr, "TrySpawnPlaceholderPokemonForActor", 	Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::WorldPopulationSubsystem_eventTrySpawnPlaceholderPokemonForActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::WorldPopulationSubsystem_eventTrySpawnPlaceholderPokemonForActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPopulationSubsystem::execTrySpawnPlaceholderPokemonForActor)
{
	P_GET_OBJECT(AActor,Z_Param_RequestingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->TrySpawnPlaceholderPokemonForActor(Z_Param_RequestingActor);
	P_NATIVE_END;
}
// ********** End Class UWorldPopulationSubsystem Function TrySpawnPlaceholderPokemonForActor ******

// ********** Begin Class UWorldPopulationSubsystem ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWorldPopulationSubsystem;
UClass* UWorldPopulationSubsystem::GetPrivateStaticClass()
{
	using TClass = UWorldPopulationSubsystem;
	if (!Z_Registration_Info_UClass_UWorldPopulationSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WorldPopulationSubsystem"),
			Z_Registration_Info_UClass_UWorldPopulationSubsystem.InnerSingleton,
			StaticRegisterNativesUWorldPopulationSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWorldPopulationSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UWorldPopulationSubsystem_NoRegister()
{
	return UWorldPopulationSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWorldPopulationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UWorldPopulationSubsystem\n *\n * Owns runtime world population state.\n *\n * First milestone:\n * - Track active region per player/pawn.\n *\n * Later:\n * - Spawn/despawn Pokemon.\n * - Track population budgets.\n * - Promote/demote inhabitants.\n * - Handle persistent world population records.\n */" },
#endif
		{ "IncludePath", "Subsystems/WorldPopulationSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UWorldPopulationSubsystem\n\nOwns runtime world population state.\n\nFirst milestone:\n- Track active region per player/pawn.\n\nLater:\n- Spawn/despawn Pokemon.\n- Track population budgets.\n- Promote/demote inhabitants.\n- Handle persistent world population records." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRegionsByActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredPopulationActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopulationUpdateInterval_MetaData[] = {
		{ "Category", "World Population|Update" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldPopulationSubsystem.h" },
		{ "Units", "s" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWorldPopulationSubsystem constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveRegionsByActor_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveRegionsByActor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveRegionsByActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredPopulationActors_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredPopulationActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredPopulationActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PopulationUpdateInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWorldPopulationSubsystem constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanSpawnCivilianInRegion"), .Pointer = &UWorldPopulationSubsystem::execCanSpawnCivilianInRegion },
		{ .NameUTF8 = UTF8TEXT("CanSpawnTrainerInRegion"), .Pointer = &UWorldPopulationSubsystem::execCanSpawnTrainerInRegion },
		{ .NameUTF8 = UTF8TEXT("CanSpawnWildPokemonInRegion"), .Pointer = &UWorldPopulationSubsystem::execCanSpawnWildPokemonInRegion },
		{ .NameUTF8 = UTF8TEXT("DespawnAllPopulationActorsInRegion"), .Pointer = &UWorldPopulationSubsystem::execDespawnAllPopulationActorsInRegion },
		{ .NameUTF8 = UTF8TEXT("DespawnPopulationActor"), .Pointer = &UWorldPopulationSubsystem::execDespawnPopulationActor },
		{ .NameUTF8 = UTF8TEXT("DespawnPopulationActorsTooFarFromActor"), .Pointer = &UWorldPopulationSubsystem::execDespawnPopulationActorsTooFarFromActor },
		{ .NameUTF8 = UTF8TEXT("GetActiveRegionForActor"), .Pointer = &UWorldPopulationSubsystem::execGetActiveRegionForActor },
		{ .NameUTF8 = UTF8TEXT("GetRuntimePopulationStateForRegion"), .Pointer = &UWorldPopulationSubsystem::execGetRuntimePopulationStateForRegion },
		{ .NameUTF8 = UTF8TEXT("HasActiveRegion"), .Pointer = &UWorldPopulationSubsystem::execHasActiveRegion },
		{ .NameUTF8 = UTF8TEXT("StartPopulationUpdateTimer"), .Pointer = &UWorldPopulationSubsystem::execStartPopulationUpdateTimer },
		{ .NameUTF8 = UTF8TEXT("StopPopulationUpdateTimer"), .Pointer = &UWorldPopulationSubsystem::execStopPopulationUpdateTimer },
		{ .NameUTF8 = UTF8TEXT("TrySpawnPlaceholderPokemonForActor"), .Pointer = &UWorldPopulationSubsystem::execTrySpawnPlaceholderPokemonForActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnCivilianInRegion, "CanSpawnCivilianInRegion" }, // 1211119901
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnTrainerInRegion, "CanSpawnTrainerInRegion" }, // 21629349
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_CanSpawnWildPokemonInRegion, "CanSpawnWildPokemonInRegion" }, // 1945477604
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnAllPopulationActorsInRegion, "DespawnAllPopulationActorsInRegion" }, // 2432582733
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActor, "DespawnPopulationActor" }, // 411381885
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_DespawnPopulationActorsTooFarFromActor, "DespawnPopulationActorsTooFarFromActor" }, // 2129176263
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_GetActiveRegionForActor, "GetActiveRegionForActor" }, // 3763671329
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_GetRuntimePopulationStateForRegion, "GetRuntimePopulationStateForRegion" }, // 754156077
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_HasActiveRegion, "HasActiveRegion" }, // 2268144290
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_StartPopulationUpdateTimer, "StartPopulationUpdateTimer" }, // 1040273987
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_StopPopulationUpdateTimer, "StopPopulationUpdateTimer" }, // 1032835784
		{ &Z_Construct_UFunction_UWorldPopulationSubsystem_TrySpawnPlaceholderPokemonForActor, "TrySpawnPlaceholderPokemonForActor" }, // 3394755085
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPopulationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWorldPopulationSubsystem_Statics

// ********** Begin Class UWorldPopulationSubsystem Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_ActiveRegionsByActor_ValueProp = { "ActiveRegionsByActor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActiveRegionInfo, METADATA_PARAMS(0, nullptr) }; // 931129769
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_ActiveRegionsByActor_Key_KeyProp = { "ActiveRegionsByActor_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_ActiveRegionsByActor = { "ActiveRegionsByActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPopulationSubsystem, ActiveRegionsByActor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveRegionsByActor_MetaData), NewProp_ActiveRegionsByActor_MetaData) }; // 931129769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_RegisteredPopulationActors_ValueProp = { "RegisteredPopulationActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo, METADATA_PARAMS(0, nullptr) }; // 430957552
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_RegisteredPopulationActors_Key_KeyProp = { "RegisteredPopulationActors_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_RegisteredPopulationActors = { "RegisteredPopulationActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPopulationSubsystem, RegisteredPopulationActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredPopulationActors_MetaData), NewProp_RegisteredPopulationActors_MetaData) }; // 430957552
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_PopulationUpdateInterval = { "PopulationUpdateInterval", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPopulationSubsystem, PopulationUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopulationUpdateInterval_MetaData), NewProp_PopulationUpdateInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPopulationSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_ActiveRegionsByActor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_ActiveRegionsByActor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_ActiveRegionsByActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_RegisteredPopulationActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_RegisteredPopulationActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_RegisteredPopulationActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPopulationSubsystem_Statics::NewProp_PopulationUpdateInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPopulationSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UWorldPopulationSubsystem Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UWorldPopulationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPopulationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPopulationSubsystem_Statics::ClassParams = {
	&UWorldPopulationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWorldPopulationSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPopulationSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPopulationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPopulationSubsystem_Statics::Class_MetaDataParams)
};
void UWorldPopulationSubsystem::StaticRegisterNativesUWorldPopulationSubsystem()
{
	UClass* Class = UWorldPopulationSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWorldPopulationSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWorldPopulationSubsystem()
{
	if (!Z_Registration_Info_UClass_UWorldPopulationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPopulationSubsystem.OuterSingleton, Z_Construct_UClass_UWorldPopulationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPopulationSubsystem.OuterSingleton;
}
UWorldPopulationSubsystem::UWorldPopulationSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWorldPopulationSubsystem);
UWorldPopulationSubsystem::~UWorldPopulationSubsystem() {}
// ********** End Class UWorldPopulationSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPopulationActorType_StaticEnum, TEXT("EPopulationActorType"), &Z_Registration_Info_UEnum_EPopulationActorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 619235926U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveRegionInfo::StaticStruct, Z_Construct_UScriptStruct_FActiveRegionInfo_Statics::NewStructOps, TEXT("ActiveRegionInfo"),&Z_Registration_Info_UScriptStruct_FActiveRegionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveRegionInfo), 931129769U) },
		{ FPopulationSpawnCandidate::StaticStruct, Z_Construct_UScriptStruct_FPopulationSpawnCandidate_Statics::NewStructOps, TEXT("PopulationSpawnCandidate"),&Z_Registration_Info_UScriptStruct_FPopulationSpawnCandidate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPopulationSpawnCandidate), 3070159616U) },
		{ FRegisteredPopulationActorInfo::StaticStruct, Z_Construct_UScriptStruct_FRegisteredPopulationActorInfo_Statics::NewStructOps, TEXT("RegisteredPopulationActorInfo"),&Z_Registration_Info_UScriptStruct_FRegisteredPopulationActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegisteredPopulationActorInfo), 430957552U) },
		{ FRuntimeRegionPopulationState::StaticStruct, Z_Construct_UScriptStruct_FRuntimeRegionPopulationState_Statics::NewStructOps, TEXT("RuntimeRegionPopulationState"),&Z_Registration_Info_UScriptStruct_FRuntimeRegionPopulationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeRegionPopulationState), 1077767949U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPopulationSubsystem, UWorldPopulationSubsystem::StaticClass, TEXT("UWorldPopulationSubsystem"), &Z_Registration_Info_UClass_UWorldPopulationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPopulationSubsystem), 1765619154U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_137420539{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Subsystems_WorldPopulationSubsystem_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
