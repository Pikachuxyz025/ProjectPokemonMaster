// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/RegionPopulationData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRegionPopulationData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_URegionPopulationData();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_URegionPopulationData_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FRegionPopulationBudget();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FRegionSpawnSettings();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRegionPopulationBudget *******************************************
struct Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRegionPopulationBudget); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRegionPopulationBudget); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FRegionPopulationBudget\n *\n * Controls how many inhabitants can be active in this region.\n * These are early prototype values and will be expanded later.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FRegionPopulationBudget\n\nControls how many inhabitants can be active in this region.\nThese are early prototype values and will be expanded later." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActivePokemon_MetaData[] = {
		{ "Category", "Pokemon" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum number of active wild Pokemon actors allowed in this region.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of active wild Pokemon actors allowed in this region." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCombatReadyPokemon_MetaData[] = {
		{ "Category", "Pokemon" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum number of Pokemon allowed to run full combat-ready logic.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of Pokemon allowed to run full combat-ready logic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActiveTrainers_MetaData[] = {
		{ "Category", "NPC" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum number of active trainer NPCs allowed in this region.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of active trainer NPCs allowed in this region." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActiveCivilians_MetaData[] = {
		{ "Category", "NPC" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum number of civilian/ambient NPCs allowed in this region.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of civilian/ambient NPCs allowed in this region." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRegionPopulationBudget constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActivePokemon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCombatReadyPokemon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActiveTrainers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActiveCivilians;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRegionPopulationBudget constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegionPopulationBudget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRegionPopulationBudget;
class UScriptStruct* FRegionPopulationBudget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRegionPopulationBudget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRegionPopulationBudget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegionPopulationBudget, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("RegionPopulationBudget"));
	}
	return Z_Registration_Info_UScriptStruct_FRegionPopulationBudget.OuterSingleton;
	}

// ********** Begin ScriptStruct FRegionPopulationBudget Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxActivePokemon = { "MaxActivePokemon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionPopulationBudget, MaxActivePokemon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActivePokemon_MetaData), NewProp_MaxActivePokemon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxCombatReadyPokemon = { "MaxCombatReadyPokemon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionPopulationBudget, MaxCombatReadyPokemon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCombatReadyPokemon_MetaData), NewProp_MaxCombatReadyPokemon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxActiveTrainers = { "MaxActiveTrainers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionPopulationBudget, MaxActiveTrainers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActiveTrainers_MetaData), NewProp_MaxActiveTrainers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxActiveCivilians = { "MaxActiveCivilians", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionPopulationBudget, MaxActiveCivilians), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActiveCivilians_MetaData), NewProp_MaxActiveCivilians_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxActivePokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxCombatReadyPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxActiveTrainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewProp_MaxActiveCivilians,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRegionPopulationBudget Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"RegionPopulationBudget",
	Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::PropPointers),
	sizeof(FRegionPopulationBudget),
	alignof(FRegionPopulationBudget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegionPopulationBudget()
{
	if (!Z_Registration_Info_UScriptStruct_FRegionPopulationBudget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRegionPopulationBudget.InnerSingleton, Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRegionPopulationBudget.InnerSingleton);
}
// ********** End ScriptStruct FRegionPopulationBudget *********************************************

// ********** Begin ScriptStruct FRegionSpawnSettings **********************************************
struct Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRegionSpawnSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRegionSpawnSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FRegionSpawnSettings\n *\n * Controls where spawning can happen relative to the player.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FRegionSpawnSettings\n\nControls where spawning can happen relative to the player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDistanceFromPlayer_MetaData[] = {
		{ "Category", "Distance" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum distance from the player where something is allowed to spawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum distance from the player where something is allowed to spawn." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDistanceFromPlayer_MetaData[] = {
		{ "Category", "Distance" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum distance from the player where the system should attempt to spawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance from the player where the system should attempt to spawn." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnDistanceFromPlayer_MetaData[] = {
		{ "Category", "Distance" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance at which non-important spawned actors can be despawned.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance at which non-important spawned actors can be despawned." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCheckInterval_MetaData[] = {
		{ "Category", "Timing" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How often the future population subsystem should attempt spawn checks.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often the future population subsystem should attempt spawn checks." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnAttemptsPerCycle_MetaData[] = {
		{ "Category", "Validation" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of spawn-location attempts before giving up for this cycle.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of spawn-location attempts before giving up for this cycle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNavMesh_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether spawn points should require NavMesh.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether spawn points should require NavMesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidPlayerLineOfSight_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether spawn points should avoid being directly visible to the player.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether spawn points should avoid being directly visible to the player." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRegionSpawnSettings constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDistanceFromPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDistanceFromPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DespawnDistanceFromPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnCheckInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnAttemptsPerCycle;
	static void NewProp_bRequireNavMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNavMesh;
	static void NewProp_bAvoidPlayerLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidPlayerLineOfSight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRegionSpawnSettings constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegionSpawnSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRegionSpawnSettings;
class UScriptStruct* FRegionSpawnSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRegionSpawnSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRegionSpawnSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegionSpawnSettings, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("RegionSpawnSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FRegionSpawnSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FRegionSpawnSettings Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_MinSpawnDistanceFromPlayer = { "MinSpawnDistanceFromPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionSpawnSettings, MinSpawnDistanceFromPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnDistanceFromPlayer_MetaData), NewProp_MinSpawnDistanceFromPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_MaxSpawnDistanceFromPlayer = { "MaxSpawnDistanceFromPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionSpawnSettings, MaxSpawnDistanceFromPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnDistanceFromPlayer_MetaData), NewProp_MaxSpawnDistanceFromPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_DespawnDistanceFromPlayer = { "DespawnDistanceFromPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionSpawnSettings, DespawnDistanceFromPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnDistanceFromPlayer_MetaData), NewProp_DespawnDistanceFromPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_SpawnCheckInterval = { "SpawnCheckInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionSpawnSettings, SpawnCheckInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCheckInterval_MetaData), NewProp_SpawnCheckInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_MaxSpawnAttemptsPerCycle = { "MaxSpawnAttemptsPerCycle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionSpawnSettings, MaxSpawnAttemptsPerCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnAttemptsPerCycle_MetaData), NewProp_MaxSpawnAttemptsPerCycle_MetaData) };
void Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bRequireNavMesh_SetBit(void* Obj)
{
	((FRegionSpawnSettings*)Obj)->bRequireNavMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bRequireNavMesh = { "bRequireNavMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRegionSpawnSettings), &Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bRequireNavMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireNavMesh_MetaData), NewProp_bRequireNavMesh_MetaData) };
void Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bAvoidPlayerLineOfSight_SetBit(void* Obj)
{
	((FRegionSpawnSettings*)Obj)->bAvoidPlayerLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bAvoidPlayerLineOfSight = { "bAvoidPlayerLineOfSight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRegionSpawnSettings), &Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bAvoidPlayerLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidPlayerLineOfSight_MetaData), NewProp_bAvoidPlayerLineOfSight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_MinSpawnDistanceFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_MaxSpawnDistanceFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_DespawnDistanceFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_SpawnCheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_MaxSpawnAttemptsPerCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bRequireNavMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewProp_bAvoidPlayerLineOfSight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRegionSpawnSettings Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"RegionSpawnSettings",
	Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::PropPointers),
	sizeof(FRegionSpawnSettings),
	alignof(FRegionSpawnSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegionSpawnSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FRegionSpawnSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRegionSpawnSettings.InnerSingleton, Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRegionSpawnSettings.InnerSingleton);
}
// ********** End ScriptStruct FRegionSpawnSettings ************************************************

// ********** Begin Class URegionPopulationData Function GetDebugSummary ***************************
struct Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics
{
	struct RegionPopulationData_eventGetDebugSummary_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDebugSummary constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDebugSummary constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDebugSummary Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionPopulationData_eventGetDebugSummary_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::PropPointers) < 2048);
// ********** End Function GetDebugSummary Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URegionPopulationData, nullptr, "GetDebugSummary", 	Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::RegionPopulationData_eventGetDebugSummary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::RegionPopulationData_eventGetDebugSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URegionPopulationData_GetDebugSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URegionPopulationData_GetDebugSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URegionPopulationData::execGetDebugSummary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDebugSummary();
	P_NATIVE_END;
}
// ********** End Class URegionPopulationData Function GetDebugSummary *****************************

// ********** Begin Class URegionPopulationData Function IsValidRegionData *************************
struct Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics
{
	struct RegionPopulationData_eventIsValidRegionData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidRegionData constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidRegionData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidRegionData Property Definitions ********************************
void Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RegionPopulationData_eventIsValidRegionData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RegionPopulationData_eventIsValidRegionData_Parms), &Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::PropPointers) < 2048);
// ********** End Function IsValidRegionData Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URegionPopulationData, nullptr, "IsValidRegionData", 	Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::RegionPopulationData_eventIsValidRegionData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::RegionPopulationData_eventIsValidRegionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URegionPopulationData_IsValidRegionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URegionPopulationData_IsValidRegionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URegionPopulationData::execIsValidRegionData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidRegionData();
	P_NATIVE_END;
}
// ********** End Class URegionPopulationData Function IsValidRegionData ***************************

// ********** Begin Class URegionPopulationData ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URegionPopulationData;
UClass* URegionPopulationData::GetPrivateStaticClass()
{
	using TClass = URegionPopulationData;
	if (!Z_Registration_Info_UClass_URegionPopulationData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RegionPopulationData"),
			Z_Registration_Info_UClass_URegionPopulationData.InnerSingleton,
			StaticRegisterNativesURegionPopulationData,
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
	return Z_Registration_Info_UClass_URegionPopulationData.InnerSingleton;
}
UClass* Z_Construct_UClass_URegionPopulationData_NoRegister()
{
	return URegionPopulationData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URegionPopulationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * URegionPopulationData\n *\n * Data asset that describes the population/spawn rules for a gameplay region.\n *\n * This is referenced by ARegionVolume.\n * Later, UWorldPopulationSubsystem will use this data to spawn Pokemon/NPCs.\n */" },
#endif
		{ "IncludePath", "DataAssets/RegionPopulationData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URegionPopulationData\n\nData asset that describes the population/spawn rules for a gameplay region.\n\nThis is referenced by ARegionVolume.\nLater, UWorldPopulationSubsystem will use this data to spawn Pokemon/NPCs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionTag_MetaData[] = {
		{ "Categories", "Region" },
		{ "Category", "Region" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main identity tag for this region.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main identity tag for this region." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomeTags_MetaData[] = {
		{ "Categories", "Biome" },
		{ "Category", "Region" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broad biome tags, such as Biome.Grassland, Biome.Forest, Biome.Cave.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broad biome tags, such as Biome.Grassland, Biome.Forest, Biome.Cave." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentTags_MetaData[] = {
		{ "Categories", "Environment" },
		{ "Category", "Region" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local environment feature tags, such as Environment.TallGrass, Environment.Road.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local environment feature tags, such as Environment.TallGrass, Environment.Road." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopulationBudget_MetaData[] = {
		{ "Category", "Population" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Population budget for this region.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Population budget for this region." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSettings_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spawning/despawning settings for this region.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawning/despawning settings for this region." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionDescription_MetaData[] = {
		{ "Category", "Region" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Designer-facing description of what this region is meant to represent.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Designer-facing description of what this region is meant to represent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceholderPokemonClass_MetaData[] = {
		{ "Category", "Spawning|Prototype" },
		{ "ModuleRelativePath", "Public/DataAssets/RegionPopulationData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URegionPopulationData constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiomeTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvironmentTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PopulationBudget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnSettings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_RegionDescription;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlaceholderPokemonClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URegionPopulationData constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDebugSummary"), .Pointer = &URegionPopulationData::execGetDebugSummary },
		{ .NameUTF8 = UTF8TEXT("IsValidRegionData"), .Pointer = &URegionPopulationData::execIsValidRegionData },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URegionPopulationData_GetDebugSummary, "GetDebugSummary" }, // 3019728371
		{ &Z_Construct_UFunction_URegionPopulationData_IsValidRegionData, "IsValidRegionData" }, // 1327195351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URegionPopulationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URegionPopulationData_Statics

// ********** Begin Class URegionPopulationData Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URegionPopulationData_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegionPopulationData, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionTag_MetaData), NewProp_RegionTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URegionPopulationData_Statics::NewProp_BiomeTags = { "BiomeTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegionPopulationData, BiomeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomeTags_MetaData), NewProp_BiomeTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URegionPopulationData_Statics::NewProp_EnvironmentTags = { "EnvironmentTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegionPopulationData, EnvironmentTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentTags_MetaData), NewProp_EnvironmentTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URegionPopulationData_Statics::NewProp_PopulationBudget = { "PopulationBudget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegionPopulationData, PopulationBudget), Z_Construct_UScriptStruct_FRegionPopulationBudget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopulationBudget_MetaData), NewProp_PopulationBudget_MetaData) }; // 815603554
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URegionPopulationData_Statics::NewProp_SpawnSettings = { "SpawnSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegionPopulationData, SpawnSettings), Z_Construct_UScriptStruct_FRegionSpawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSettings_MetaData), NewProp_SpawnSettings_MetaData) }; // 1154855977
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URegionPopulationData_Statics::NewProp_RegionDescription = { "RegionDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegionPopulationData, RegionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionDescription_MetaData), NewProp_RegionDescription_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URegionPopulationData_Statics::NewProp_PlaceholderPokemonClass = { "PlaceholderPokemonClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegionPopulationData, PlaceholderPokemonClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceholderPokemonClass_MetaData), NewProp_PlaceholderPokemonClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URegionPopulationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionPopulationData_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionPopulationData_Statics::NewProp_BiomeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionPopulationData_Statics::NewProp_EnvironmentTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionPopulationData_Statics::NewProp_PopulationBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionPopulationData_Statics::NewProp_SpawnSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionPopulationData_Statics::NewProp_RegionDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionPopulationData_Statics::NewProp_PlaceholderPokemonClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URegionPopulationData_Statics::PropPointers) < 2048);
// ********** End Class URegionPopulationData Property Definitions *********************************
UObject* (*const Z_Construct_UClass_URegionPopulationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URegionPopulationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URegionPopulationData_Statics::ClassParams = {
	&URegionPopulationData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URegionPopulationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URegionPopulationData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URegionPopulationData_Statics::Class_MetaDataParams), Z_Construct_UClass_URegionPopulationData_Statics::Class_MetaDataParams)
};
void URegionPopulationData::StaticRegisterNativesURegionPopulationData()
{
	UClass* Class = URegionPopulationData::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URegionPopulationData_Statics::Funcs));
}
UClass* Z_Construct_UClass_URegionPopulationData()
{
	if (!Z_Registration_Info_UClass_URegionPopulationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URegionPopulationData.OuterSingleton, Z_Construct_UClass_URegionPopulationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URegionPopulationData.OuterSingleton;
}
URegionPopulationData::URegionPopulationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URegionPopulationData);
URegionPopulationData::~URegionPopulationData() {}
// ********** End Class URegionPopulationData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRegionPopulationBudget::StaticStruct, Z_Construct_UScriptStruct_FRegionPopulationBudget_Statics::NewStructOps, TEXT("RegionPopulationBudget"),&Z_Registration_Info_UScriptStruct_FRegionPopulationBudget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegionPopulationBudget), 815603554U) },
		{ FRegionSpawnSettings::StaticStruct, Z_Construct_UScriptStruct_FRegionSpawnSettings_Statics::NewStructOps, TEXT("RegionSpawnSettings"),&Z_Registration_Info_UScriptStruct_FRegionSpawnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegionSpawnSettings), 1154855977U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URegionPopulationData, URegionPopulationData::StaticClass, TEXT("URegionPopulationData"), &Z_Registration_Info_UClass_URegionPopulationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URegionPopulationData), 528132426U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h__Script_ProjectMimikyu_40437921{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_RegionPopulationData_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
