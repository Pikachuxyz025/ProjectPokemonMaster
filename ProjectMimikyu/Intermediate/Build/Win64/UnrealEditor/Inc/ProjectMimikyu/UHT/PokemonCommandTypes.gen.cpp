// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Command/PokemonCommandTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonCommandTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonCommandTarget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPokemonCommandTargetType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokemonCommandTargetType;
static UEnum* EPokemonCommandTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokemonCommandTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokemonCommandTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokemonCommandTargetType"));
	}
	return Z_Registration_Info_UEnum_EPokemonCommandTargetType.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonCommandTargetType>()
{
	return EPokemonCommandTargetType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllyPokemon.Comment", "// A friendly Pok\xc3\xa9mon target.\n" },
		{ "AllyPokemon.DisplayName", "Ally Pok\xc3\xa9mon" },
		{ "AllyPokemon.Name", "EPokemonCommandTargetType::AllyPokemon" },
		{ "AllyPokemon.ToolTip", "A friendly Pok\xc3\xa9mon target." },
		{ "BlueprintType", "true" },
		{ "EnemyPokemon.Comment", "// A valid enemy or hostile Pok\xc3\xa9mon target.\n" },
		{ "EnemyPokemon.DisplayName", "Enemy Pok\xc3\xa9mon" },
		{ "EnemyPokemon.Name", "EPokemonCommandTargetType::EnemyPokemon" },
		{ "EnemyPokemon.ToolTip", "A valid enemy or hostile Pok\xc3\xa9mon target." },
		{ "Environment.Comment", "// World geometry, props, walls, floors, rocks, trees, etc.\n" },
		{ "Environment.DisplayName", "Environment" },
		{ "Environment.Name", "EPokemonCommandTargetType::Environment" },
		{ "Environment.ToolTip", "World geometry, props, walls, floors, rocks, trees, etc." },
		{ "Interactable.Comment", "// A non-Pok\xc3\xa9mon actor that can be interacted with.\n" },
		{ "Interactable.DisplayName", "Interactable" },
		{ "Interactable.Name", "EPokemonCommandTargetType::Interactable" },
		{ "Interactable.ToolTip", "A non-Pok\xc3\xa9mon actor that can be interacted with." },
		{ "Location.Comment", "// A pure world-space point with no important actor.\n" },
		{ "Location.DisplayName", "Location" },
		{ "Location.Name", "EPokemonCommandTargetType::Location" },
		{ "Location.ToolTip", "A pure world-space point with no important actor." },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPokemonCommandTargetType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokemonCommandTargetType::None", (int64)EPokemonCommandTargetType::None },
		{ "EPokemonCommandTargetType::EnemyPokemon", (int64)EPokemonCommandTargetType::EnemyPokemon },
		{ "EPokemonCommandTargetType::AllyPokemon", (int64)EPokemonCommandTargetType::AllyPokemon },
		{ "EPokemonCommandTargetType::Interactable", (int64)EPokemonCommandTargetType::Interactable },
		{ "EPokemonCommandTargetType::Environment", (int64)EPokemonCommandTargetType::Environment },
		{ "EPokemonCommandTargetType::Location", (int64)EPokemonCommandTargetType::Location },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokemonCommandTargetType",
	"EPokemonCommandTargetType",
	Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType()
{
	if (!Z_Registration_Info_UEnum_EPokemonCommandTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokemonCommandTargetType.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokemonCommandTargetType.InnerSingleton;
}
// ********** End Enum EPokemonCommandTargetType ***************************************************

// ********** Begin ScriptStruct FPokemonCommandTarget *********************************************
struct Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPokemonCommandTarget); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPokemonCommandTarget); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandTag_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasHitResult_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/Command/PokemonCommandTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPokemonCommandTarget constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommandTag;
	static void NewProp_bHasHitResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPokemonCommandTarget constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonCommandTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonCommandTarget;
class UScriptStruct* FPokemonCommandTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonCommandTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonCommandTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonCommandTarget, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonCommandTarget"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonCommandTarget.OuterSingleton;
	}

// ********** Begin ScriptStruct FPokemonCommandTarget Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonCommandTarget, TargetType), Z_Construct_UEnum_ProjectMimikyu_EPokemonCommandTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) }; // 2778963205
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonCommandTarget, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonCommandTarget, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonCommandTarget, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactNormal_MetaData), NewProp_ImpactNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_CommandTag = { "CommandTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonCommandTarget, CommandTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandTag_MetaData), NewProp_CommandTag_MetaData) }; // 517357616
void Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_bHasHitResult_SetBit(void* Obj)
{
	((FPokemonCommandTarget*)Obj)->bHasHitResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_bHasHitResult = { "bHasHitResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPokemonCommandTarget), &Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_bHasHitResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasHitResult_MetaData), NewProp_bHasHitResult_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonCommandTarget, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_ImpactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_CommandTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_bHasHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPokemonCommandTarget Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonCommandTarget",
	Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::PropPointers),
	sizeof(FPokemonCommandTarget),
	alignof(FPokemonCommandTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonCommandTarget()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonCommandTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonCommandTarget.InnerSingleton, Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPokemonCommandTarget.InnerSingleton);
}
// ********** End ScriptStruct FPokemonCommandTarget ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPokemonCommandTargetType_StaticEnum, TEXT("EPokemonCommandTargetType"), &Z_Registration_Info_UEnum_EPokemonCommandTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2778963205U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPokemonCommandTarget::StaticStruct, Z_Construct_UScriptStruct_FPokemonCommandTarget_Statics::NewStructOps, TEXT("PokemonCommandTarget"),&Z_Registration_Info_UScriptStruct_FPokemonCommandTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonCommandTarget), 1298194729U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h__Script_ProjectMimikyu_1394738973{
	TEXT("/Script/ProjectMimikyu"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Command_PokemonCommandTypes_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
