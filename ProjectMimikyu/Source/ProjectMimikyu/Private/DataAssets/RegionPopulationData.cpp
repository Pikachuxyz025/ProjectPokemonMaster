// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/RegionPopulationData.h"

FString URegionPopulationData::GetDebugSummary() const
{
	const FString RegionString = RegionTag.IsValid() ? RegionTag.ToString() : TEXT("None");

	return FString::Printf(
	TEXT("RegionData: %s | MaxPokemon: %d | MaxCombatPokemon: %d | SpawnDistance: %.0f - %.0f | DespawnDistance: %.0f"),
		*RegionString,
		PopulationBudget.MaxActivePokemon,
		PopulationBudget.MaxCombatReadyPokemon,
		SpawnSettings.MinSpawnDistanceFromPlayer,
		SpawnSettings.MaxSpawnDistanceFromPlayer,
		SpawnSettings.DespawnDistanceFromPlayer
	);
}
