// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "WorldPopulationSubsystem.generated.h"

class ARegionVolume;
class URegionPopulationData;

/**
 * FActiveRegionInfo
 *
 * Lightweight runtime record for which region an actor is currently inside.
 */
USTRUCT(BlueprintType)
struct FActiveRegionInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	TWeakObjectPtr<ARegionVolume> RegionVolume;

	UPROPERTY(BlueprintReadOnly)
	TWeakObjectPtr<URegionPopulationData> RegionPopulationData;

	UPROPERTY(BlueprintReadOnly)
	FGameplayTag RegionTag;

	bool IsValid() const
	{
		return RegionVolume.IsValid() && RegionPopulationData.IsValid();
	}
};

USTRUCT(BlueprintType)
struct FRuntimeRegionPopulationState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayTag RegionTag;

	UPROPERTY(BlueprintReadOnly)
	TWeakObjectPtr<URegionPopulationData> RegionPopulationData;

	UPROPERTY(BlueprintReadOnly)
	int32 ActivePokemonCount = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 CombatReadyPokemonCount = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 ActiveTrainerCount = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 ActiveCivilianCount = 0;

	bool IsValid() const
	{
		return RegionTag.IsValid() && RegionPopulationData.IsValid();
	}
};
/**
 * UWorldPopulationSubsystem
 *
 * Owns runtime world population state.
 *
 * First milestone:
 * - Track active region per player/pawn.
 *
 * Later:
 * - Spawn/despawn Pokemon.
 * - Track population budgets.
 * - Promote/demote inhabitants.
 * - Handle persistent world population records.
 */

UCLASS()
class PROJECTMIMIKYU_API UWorldPopulationSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	void NotifyActorEnteredRegion(AActor* Actor, ARegionVolume* RegionVolume);
	void NotifyActorExitedRegion(AActor* Actor, ARegionVolume* RegionVolume);

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool GetActiveRegionForActor(AActor* Actor, FActiveRegionInfo& OutRegionInfo) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool HasActiveRegion(AActor* Actor) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool GetRuntimePopulationStateForRegion(FGameplayTag& RegionTag, FRuntimeRegionPopulationState& OutPopulationState) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool CanSpawnWildPokemonInRegion(FGameplayTag RegionTag) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool CanSpawnTrainerInRegion(FGameplayTag RegionTag) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool CanSpawnCivilianInRegion(FGameplayTag RegionTag) const;

private:
	void SetActiveRegion(AActor* Actor, ARegionVolume* RegionVolume);
	void ClearActiveRegion(AActor* Actor, ARegionVolume* RegionVolume);

	FGameplayTag ResolveRegionTagFromVolume(const ARegionVolume* RegionVolume) const;
	URegionPopulationData* ResolveRegionDataFromVolume(const ARegionVolume* RegionVolume) const;

	FRuntimeRegionPopulationState& EnsureRuntimeStateForRegionTag(FGameplayTag RegionTag,URegionPopulationData* RegionPopulationData);

	void PrintPopulationBudgetForRegion(FGameplayTag RegionTag) const;
private:
	UPROPERTY()
	TMap<TObjectPtr<AActor>, FActiveRegionInfo> ActiveRegionsByActor;
	TMap<FGameplayTag, FRuntimeRegionPopulationState> RuntimePopulationByRegion;
};
