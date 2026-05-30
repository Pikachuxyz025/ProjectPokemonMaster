// Fill out your copyright notice in the Description page of Project Settings.

#include "Subsystems/WorldPopulationSubsystem.h"

#include "World/RegionVolume.h"
#include "DataAssets/RegionPopulationData.h"
#include "Engine/World.h"

void UWorldPopulationSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogTemp, Warning, TEXT("[WorldPopulationSubsystem] Initialized for world: %s"), *GetNameSafe(GetWorld()));
}

void UWorldPopulationSubsystem::Deinitialize()
{
	ActiveRegionsByActor.Empty();
	RuntimePopulationByRegion.Empty();
	UE_LOG(LogTemp, Log, TEXT("[WorldPopulationSubsystem] Deinitialized for world: %s"), *GetNameSafe(GetWorld()));

	Super::Deinitialize();
}

void UWorldPopulationSubsystem::NotifyActorEnteredRegion(AActor* Actor, ARegionVolume* RegionVolume)
{
	if (!Actor || !RegionVolume)
	{
		return;
	}

	SetActiveRegion(Actor, RegionVolume);
}

void UWorldPopulationSubsystem::NotifyActorExitedRegion(AActor* Actor, ARegionVolume* RegionVolume)
{
	if (!Actor || !RegionVolume)
	{
		return;
	}

	ClearActiveRegion(Actor, RegionVolume);
}

bool UWorldPopulationSubsystem::GetActiveRegionForActor(AActor* Actor, FActiveRegionInfo& OutRegionInfo) const
{
	if (!Actor)
	{
		return false;
	}

	const FActiveRegionInfo* FoundInfo = ActiveRegionsByActor.Find(Actor);
	if (!FoundInfo)
	{
		return false;
	}

	OutRegionInfo = *FoundInfo;
	return OutRegionInfo.IsValid();
}

bool UWorldPopulationSubsystem::HasActiveRegion(AActor* Actor) const
{
	if (!Actor)
	{
		return false;
	}

	const FActiveRegionInfo* FoundInfo = ActiveRegionsByActor.Find(Actor);
	return FoundInfo && FoundInfo->IsValid();
}

bool UWorldPopulationSubsystem::GetRuntimePopulationStateForRegion(FGameplayTag& RegionTag, FRuntimeRegionPopulationState& OutPopulationState) const
{
	if (!RegionTag.IsValid())
	{
		return false;
	}

	const FRuntimeRegionPopulationState* FoundState = RuntimePopulationByRegion.Find(RegionTag);
	if (!FoundState)
	{
		return false;
	}

	OutPopulationState = *FoundState;
	return OutPopulationState.IsValid();
}

bool UWorldPopulationSubsystem::CanSpawnWildPokemonInRegion(FGameplayTag RegionTag) const
{
	const FRuntimeRegionPopulationState* FoundState = RuntimePopulationByRegion.Find(RegionTag);
	if (!FoundState || !FoundState->RegionPopulationData.IsValid())
	{
		return false;
	}

	const URegionPopulationData* RegionData = FoundState->RegionPopulationData.Get();
	return FoundState->ActivePokemonCount < RegionData->PopulationBudget.MaxActivePokemon;
}

bool UWorldPopulationSubsystem::CanSpawnTrainerInRegion(FGameplayTag RegionTag) const
{
	const FRuntimeRegionPopulationState* FoundState = RuntimePopulationByRegion.Find(RegionTag);
	if (!FoundState || !FoundState->RegionPopulationData.IsValid())
	{
		return false;
	}

	const URegionPopulationData* RegionData = FoundState->RegionPopulationData.Get();
	return FoundState->ActiveTrainerCount < RegionData->PopulationBudget.MaxActiveTrainers;
}

bool UWorldPopulationSubsystem::CanSpawnCivilianInRegion(FGameplayTag RegionTag) const
{
	const FRuntimeRegionPopulationState* FoundState = RuntimePopulationByRegion.Find(RegionTag);
	if (!FoundState || !FoundState->RegionPopulationData.IsValid())
	{
		return false;
	}

	const URegionPopulationData* RegionData = FoundState->RegionPopulationData.Get();
	return FoundState->ActiveCivilianCount < RegionData->PopulationBudget.MaxActiveCivilians;
}

void UWorldPopulationSubsystem::SetActiveRegion(AActor* Actor, ARegionVolume* RegionVolume)
{
	if (!Actor || !RegionVolume)
	{
		return;
	}

	FActiveRegionInfo RegionInfo;
	RegionInfo.RegionVolume = RegionVolume;
	RegionInfo.RegionPopulationData = ResolveRegionDataFromVolume(RegionVolume);
	RegionInfo.RegionTag = ResolveRegionTagFromVolume(RegionVolume);

	ActiveRegionsByActor.FindOrAdd(Actor) = RegionInfo;

	const FString RegionString = RegionInfo.RegionTag.IsValid()
		? RegionInfo.RegionTag.ToString()
		: TEXT("None");

	const FString DataAssetString = RegionInfo.RegionPopulationData.IsValid()
		? RegionInfo.RegionPopulationData->GetName()
		: TEXT("None");

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] %s active region set to %s. DataAsset: %s."),
		*GetNameSafe(Actor),
		*RegionString,
		*DataAssetString
	);

	if (RegionInfo.RegionTag.IsValid())
	{
		EnsureRuntimeStateForRegionTag(RegionInfo.RegionTag, RegionInfo.RegionPopulationData.Get());
		PrintPopulationBudgetForRegion(RegionInfo.RegionTag);
	}
}

void UWorldPopulationSubsystem::ClearActiveRegion(AActor* Actor, ARegionVolume* RegionVolume)
{
	if (!Actor || !RegionVolume)
	{
		return;
	}

	const FActiveRegionInfo* FoundInfo = ActiveRegionsByActor.Find(Actor);
	if (!FoundInfo)
	{
		return;
	}

	// Only clear if the actor is exiting the same region that is currently active.
	// This prevents one overlapping volume exit from clearing a newer active region.
	if (FoundInfo->RegionVolume.Get() != RegionVolume)
	{
		return;
	}

	const FString RegionString = FoundInfo->RegionTag.IsValid()
		? FoundInfo->RegionTag.ToString()
		: TEXT("None");

	ActiveRegionsByActor.Remove(Actor);

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] %s exited active region %s. Active region cleared."),
		*GetNameSafe(Actor),
		*RegionString
	);
}

FGameplayTag UWorldPopulationSubsystem::ResolveRegionTagFromVolume(const ARegionVolume* RegionVolume) const
{
	if (!RegionVolume)
	{
		return FGameplayTag();
	}

	if (URegionPopulationData* RegionData = RegionVolume->GetRegionPopulationData())
	{
		if (RegionData->RegionTag.IsValid())
		{
			return RegionData->RegionTag;
		}
	}

	return RegionVolume->GetRegionTag();
}

URegionPopulationData* UWorldPopulationSubsystem::ResolveRegionDataFromVolume(const ARegionVolume* RegionVolume) const
{
	if (!RegionVolume)
	{
		return nullptr;
	}

	return RegionVolume->GetRegionPopulationData();
}

FRuntimeRegionPopulationState& UWorldPopulationSubsystem::EnsureRuntimeStateForRegionTag(FGameplayTag RegionTag, URegionPopulationData* RegionPopulationData)
{
	FRuntimeRegionPopulationState& RuntimeState = RuntimePopulationByRegion.FindOrAdd(RegionTag);

	RuntimeState.RegionTag = RegionTag;

	if (RegionPopulationData)
	{
		RuntimeState.RegionPopulationData = RegionPopulationData;
	}

	return RuntimeState;
}

void UWorldPopulationSubsystem::PrintPopulationBudgetForRegion(FGameplayTag RegionTag) const
{
	if (!RegionTag.IsValid())
	{
		return;
	}

	const FRuntimeRegionPopulationState* FoundState = RuntimePopulationByRegion.Find(RegionTag);
	if (!FoundState)
	{
		UE_LOG(LogTemp, Warning, TEXT("[WorldPopulationSubsystem] No runtime population state found for region %s."), *RegionTag.ToString());
		return;
	}

	const URegionPopulationData* RegionData = FoundState->RegionPopulationData.Get();
	if (!RegionData)
	{
		UE_LOG(LogTemp, Warning, TEXT("[WorldPopulationSubsystem] No RegionPopulationData found for region %s."), *RegionTag.ToString());
		return;
	}

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] %s Budget | Pokemon: %d / %d | Combat Ready: %d / %d | Trainers: %d / %d | Civilians: %d / %d"),
		*RegionTag.ToString(),
		FoundState->ActivePokemonCount,
		RegionData->PopulationBudget.MaxActivePokemon,
		FoundState->CombatReadyPokemonCount,
		RegionData->PopulationBudget.MaxCombatReadyPokemon,
		FoundState->ActiveTrainerCount,
		RegionData->PopulationBudget.MaxActiveTrainers,
		FoundState->ActiveCivilianCount,
		RegionData->PopulationBudget.MaxActiveCivilians
	);

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] %s CanSpawn | WildPokemon=%s | Trainer=%s | Civilian=%s"),
		*RegionTag.ToString(),
		CanSpawnWildPokemonInRegion(RegionTag) ? TEXT("True") : TEXT("False"),
		CanSpawnTrainerInRegion(RegionTag) ? TEXT("True") : TEXT("False"),
		CanSpawnCivilianInRegion(RegionTag) ? TEXT("True") : TEXT("False")
	);
}
