// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "DataAssets/RegionPopulationData.h"
#include "WorldPopulationSubsystem.generated.h"

class ARegionVolume;

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

UENUM(BlueprintType)
enum class EPopulationActorType : uint8
{
	None,
	WildPokemon,
	Trainer,
	Civilian
};

USTRUCT()
struct FPopulationSpawnCandidate
{
	GENERATED_BODY()

	UPROPERTY()
	FVector Location = FVector::ZeroVector;

	UPROPERTY()
	bool bIsValid = false;

	UPROPERTY()
	FString FailureReason;
};

USTRUCT(BlueprintType)
struct FRegisteredPopulationActorInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	TWeakObjectPtr<AActor> Actor;

	UPROPERTY(BlueprintReadOnly)
	FGameplayTag RegionTag;

	UPROPERTY(BlueprintReadOnly)
	EPopulationActorType PopulationType = EPopulationActorType::None;

	UPROPERTY(BlueprintReadOnly)
	bool bCombatReady = false;

	bool IsValid() const
	{
		return Actor.IsValid() && RegionTag.IsValid() && PopulationType != EPopulationActorType::None;
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
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
public:
	void NotifyActorEnteredRegion(AActor* Actor, ARegionVolume* RegionVolume);
	void NotifyActorExitedRegion(AActor* Actor, ARegionVolume* RegionVolume);

	void RegisterSpawnedPokemon(AActor* SpawnedActor, FGameplayTag RegionTag, bool bIsCombatReady = false);
	void UnregisterSpawnedPokemon(AActor* SpawnActor);

	void RegisterSpawnedTrainer(AActor* SpawnedActor, FGameplayTag RegionTag);
	void UnregisterSpawnedTrainer(AActor* SpawnActor);

	void RegisterSpawnedCivilian(AActor* SpawnedActor, FGameplayTag RegionTag);
	void UnregisterSpawnedCivilian(AActor* SpawnActor);

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool GetActiveRegionForActor(AActor* Actor, FActiveRegionInfo& OutRegionInfo) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool HasActiveRegion(AActor* Actor) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool GetRuntimePopulationStateForRegion(const FGameplayTag& RegionTag, FRuntimeRegionPopulationState& OutPopulationState) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool CanSpawnWildPokemonInRegion(FGameplayTag RegionTag) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool CanSpawnTrainerInRegion(FGameplayTag RegionTag) const;

	UFUNCTION(BlueprintPure, Category = "World Population")
	bool CanSpawnCivilianInRegion(FGameplayTag RegionTag) const;

	UFUNCTION(BlueprintCallable, Category = "World Population|Spawning")
	int32 TrySpawnWildPokemonForActor(AActor* RequestingActor);

	UFUNCTION(BlueprintCallable, Category = "World Population|Spawning")
	bool DespawnPopulationActor(AActor* ActorToDespawn);

	UFUNCTION(BlueprintCallable, Category = "World Population|Spawning")
	int32 DespawnAllPopulationActorsInRegion(FGameplayTag RegionTag);

	UFUNCTION(BlueprintCallable, Category = "World Population|Spawning")
	int32 DespawnPopulationActorsTooFarFromActor(AActor* ReferenceActor);

	UFUNCTION(BlueprintCallable, Category = "World Population")
	void StartPopulationUpdateTimer();

	UFUNCTION(BlueprintCallable, Category = "World Population")
	void StopPopulationUpdateTimer();
private:
	void SetActiveRegion(AActor* Actor, ARegionVolume* RegionVolume);
	void ClearActiveRegion(AActor* Actor, ARegionVolume* RegionVolume);
	void RunPopulationUpdate();
	int32 RunWildPokemonSpawnPass();

	FGameplayTag ResolveRegionTagFromVolume(const ARegionVolume* RegionVolume) const;
	URegionPopulationData* ResolveRegionDataFromVolume(const ARegionVolume* RegionVolume) const;

	FRuntimeRegionPopulationState& EnsureRuntimeStateForRegionTag(FGameplayTag RegionTag, URegionPopulationData* RegionPopulationData);

	void PrintPopulationBudgetForRegion(FGameplayTag RegionTag) const;

	bool CanRegisterActor(AActor* Actor, FGameplayTag RegionTag) const;

	void RegisterPopulationActor(AActor* Actor, FGameplayTag RegionTag, EPopulationActorType PopulationType, bool bIsCombatReady);

	void UnregisterPopulationActor(AActor* Actor);

	void IncrementPopulationCount(FRuntimeRegionPopulationState& RuntimeState, EPopulationActorType PopulationType, bool bCombatReady);
	void DecrementPopulationCount(FRuntimeRegionPopulationState& RuntimeState, EPopulationActorType PopulationType, bool bCombatReady);

	bool GetSpawnContextForActor(AActor* RequestingActor, FActiveRegionInfo& OutRegionInfo, FRuntimeRegionPopulationState& OutPopulationState) const;
	bool FindPlaceholderSpawnTransform(AActor* RequestingActor, const URegionPopulationData* RegionData, FTransform& OutSpawnTransform) const;

	bool ShouldDespawnPopulationActorByDistance(const AActor* ReferenceActor, const AActor* PopulationActor, const URegionPopulationData* RegionData) const;
	bool ShouldAttemptPlaceholderSpawnForActor(AActor* ReferenceActor);

	bool IsRegionRelevantToAnyActiveActor(FGameplayTag RegionTag) const;
	int32 DespawnPopulationActorsInInactiveRegions();

	FPopulationSpawnCandidate FindValidSpawnLocationForActor(AActor* ReferenceActor, const URegionPopulationData* RegionData) const;

	bool IsSpawnLocationFarEnoughFromActor(const FVector& CandidateLocation, const AActor* ReferenceActor, const URegionPopulationData* RegionData) const;
	bool ProjectSpawnLocationToNavMesh(const FVector& CandidateLocation, FVector& OutProjectedLocation) const;

	bool IsSpawnLocationClear(const FVector& CandidateLocation, float CheckRadius, float CheckHalfHeight) const;
	bool IsSpawnLocationOutOfLineOfSight(const FVector& CandidateLocation, const AActor* ReferenceActor) const;

	bool SelectWildPokemonSpawnEntry(const FActiveRegionInfo& RegionInfo, FRegionPokemonSpawnEntry& OutEntry) const;
	bool CanRegisterCombatReadyPokemonInRegion(FGameplayTag RegionTag) const;

	int32 GetSpawnCountForSpawnStyle(const FRegionPokemonSpawnEntry& SelectedEntry,const FActiveRegionInfo& RegionInfo) const;

	int32 GetRemainingWild

	int32 TrySpawnWildPokemonGroupForActor(AActor* RequestingActor, const FActiveRegionInfo& RegionInfo, const FRegionPokemonSpawnEntry& SelectedEntry);

	AActor* SpawnWildPokemonFromEntry(const FActiveRegionInfo& RegionInfo, const FRegionPokemonSpawnEntry& SelectedEntry, const FTransform& SpawnTransform);

	bool FindGroupMemberSpawnTransform(const FVector& AnchorLocation, const TArray<FVector>& ExistingGroupLocations, const URegionPopulationData* RegionData, FTransform& OutSpawnTransform) const;

	bool IsFarEnoughFromExistingGroupMembers(const FVector& CandidateLocation, const TArray<FVector>& ExistingGroupLocations, float MinSpacing) const;

	bool FindPairSpawnTransform(const FVector& AnchorLocation, const AActor* RequestingActor,const TArray<FVector>& ExistingGroupLocations, const URegionPopulationData* RegionData, FTransform& OutSpawnTransform) const;

	bool TryBuildGroupMemberTransformFromLocation(const FVector& CandidateGroundLocation, const TArray<FVector>& ExistingGroupLocations, const URegionPopulationData* RegionData, FTransform& OutSpawnTransform) const;
private:
	UPROPERTY()
	TMap<TObjectPtr<AActor>, FActiveRegionInfo> ActiveRegionsByActor;
	TMap<FGameplayTag, FRuntimeRegionPopulationState> RuntimePopulationByRegion;

	UPROPERTY()
	TMap<TObjectPtr<AActor>, FRegisteredPopulationActorInfo> RegisteredPopulationActors;

	UPROPERTY(EditDefaultsOnly, Category = "World Population|Update", meta = (ClampMin = "0.1", Units = "s"))
	float PopulationUpdateInterval = 2.0f;

	FTimerHandle PopulationUpdateTimerHandle;
};
