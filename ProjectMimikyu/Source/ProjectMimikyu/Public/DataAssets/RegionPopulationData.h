// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RegionPopulationData.generated.h"

/**
 * FRegionPopulationBudget
 *
 * Controls how many inhabitants can be active in this region.
 * These are early prototype values and will be expanded later.
 */
USTRUCT(BlueprintType)
struct FRegionPopulationBudget
{
	GENERATED_BODY()

public:
	// Maximum number of active wild Pokemon actors allowed in this region.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon", meta = (ClampMin = "0"))
	int32 MaxActivePokemon = 10;

	// Maximum number of Pokemon allowed to run full combat-ready logic.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon", meta = (ClampMin = "0"))
	int32 MaxCombatReadyPokemon = 4;

	// Maximum number of active trainer NPCs allowed in this region.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC", meta = (ClampMin = "0"))
	int32 MaxActiveTrainers = 3;

	// Maximum number of civilian/ambient NPCs allowed in this region.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC", meta = (ClampMin = "0"))
	int32 MaxActiveCivilians = 10;
};

/**
 * FRegionSpawnSettings
 *
 * Controls where spawning can happen relative to the player.
 */
USTRUCT(BlueprintType)
struct FRegionSpawnSettings
{
	GENERATED_BODY()

public:
	// Minimum distance from the player where something is allowed to spawn.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Distance", meta = (ClampMin = "0.0", Units = "cm"))
	float MinSpawnDistanceFromPlayer = 2000.0f;

	// Maximum distance from the player where the system should attempt to spawn.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Distance", meta = (ClampMin = "0.0", Units = "cm"))
	float MaxSpawnDistanceFromPlayer = 7000.0f;

	// Distance at which non-important spawned actors can be despawned.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Distance", meta = (ClampMin = "0.0", Units = "cm"))
	float DespawnDistanceFromPlayer = 10000.0f;

	// How often the future population subsystem should attempt spawn checks.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Timing", meta = (ClampMin = "0.1", Units = "s"))
	float SpawnCheckInterval = 3.0f;

	// Number of spawn-location attempts before giving up for this cycle.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation", meta = (ClampMin = "1"))
	int32 MaxSpawnAttemptsPerCycle = 10;

	// Whether spawn points should require NavMesh.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	bool bRequireNavMesh = true;

	// Whether spawn points should avoid being directly visible to the player.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	bool bAvoidPlayerLineOfSight = true;
};

USTRUCT(BlueprintType)
struct FRegionPokemonSpawnEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Spawn")
	TSubclassOf<AActor> ActorClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category="Spawn")
	FGameplayTag SpeciesTag;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn")
	FGameplayTagContainer RequiredEnvironmentTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn", meta = (ClampMin = "0.0"))
	float SpawnWeight = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn")
	int32 MinLevel = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn")
	int32 MaxLevel = 5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn")
	bool bCanBeCombatReady = true;

	bool IsValid() const
	{
		return ActorClass != nullptr && SpawnWeight > 0.0f;
	}
};

/**
 * URegionPopulationData
 *
 * Data asset that describes the population/spawn rules for a gameplay region.
 *
 * This is referenced by ARegionVolume.
 * Later, UWorldPopulationSubsystem will use this data to spawn Pokemon/NPCs.
 */
UCLASS(BlueprintType)
class PROJECTMIMIKYU_API URegionPopulationData : public UDataAsset
{
	GENERATED_BODY()

public:
	// Main identity tag for this region.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region",meta = (Categories = "Region"))
	FGameplayTag RegionTag;

	// Broad biome tags, such as Biome.Grassland, Biome.Forest, Biome.Cave.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region",meta = (Categories = "Biome"))
	FGameplayTagContainer BiomeTags;

	// Local environment feature tags, such as Environment.TallGrass, Environment.Road.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region",meta = (Categories = "Environment"))
	FGameplayTagContainer EnvironmentTags;

	// Population budget for this region.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Population")
	FRegionPopulationBudget PopulationBudget;

	// Spawning/despawning settings for this region.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	FRegionSpawnSettings SpawnSettings;

	// Designer-facing description of what this region is meant to represent.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region", meta = (MultiLine = true))
	FText RegionDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning|Prototype")
	TSubclassOf<AActor> PlaceholderPokemonClass;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "World Population|Wild Pokemon")
	TArray<FRegionPokemonSpawnEntry> WildPokemonSpawnEntries;

public:
	UFUNCTION(BlueprintPure, Category = "Region")
	bool IsValidRegionData() const
	{
		return RegionTag.IsValid();
	}

	UFUNCTION(BlueprintPure, Category = "Region")
	FString GetDebugSummary() const;
};
