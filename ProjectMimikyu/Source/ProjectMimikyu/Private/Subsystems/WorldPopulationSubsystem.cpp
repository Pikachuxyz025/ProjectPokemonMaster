// Fill out your copyright notice in the Description page of Project Settings.

#include "Subsystems/WorldPopulationSubsystem.h"
#include "NavigationSystem.h"
#include "CollisionShape.h"
#include "World/RegionVolume.h"
#include "DataAssets/RegionPopulationData.h"
#include "Engine/World.h"

void UWorldPopulationSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogTemp, Warning, TEXT("[WorldPopulationSubsystem] Initialized for world: %s"), *GetNameSafe(GetWorld()));

	StartPopulationUpdateTimer();
}

void UWorldPopulationSubsystem::Deinitialize()
{
	StopPopulationUpdateTimer();

	ActiveRegionsByActor.Empty();
	RuntimePopulationByRegion.Empty();
	RegisteredPopulationActors.Empty();

	UE_LOG(LogTemp, Log, TEXT("[WorldPopulationSubsystem] Deinitialized for world: %s"), *GetNameSafe(GetWorld()));

	Super::Deinitialize();
}

bool UWorldPopulationSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	const UWorld* World = Cast<UWorld>(Outer);
	if(!World)
	{
		return false;
	}

	return World->IsGameWorld();
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

void UWorldPopulationSubsystem::RegisterSpawnedPokemon(AActor* SpawnedActor, FGameplayTag RegionTag, bool bIsCombatReady)
{
	RegisterPopulationActor(SpawnedActor, RegionTag, EPopulationActorType::WildPokemon, bIsCombatReady);
}

void UWorldPopulationSubsystem::UnregisterSpawnedPokemon(AActor* SpawnActor)
{
	UnregisterPopulationActor(SpawnActor);
}

void UWorldPopulationSubsystem::RegisterSpawnedTrainer(AActor* SpawnedActor, FGameplayTag RegionTag)
{
	RegisterPopulationActor(SpawnedActor, RegionTag, EPopulationActorType::Trainer, false);
}

void UWorldPopulationSubsystem::UnregisterSpawnedTrainer(AActor* SpawnActor)
{
	UnregisterPopulationActor(SpawnActor);
}

void UWorldPopulationSubsystem::RegisterSpawnedCivilian(AActor* SpawnedActor, FGameplayTag RegionTag)
{
	RegisterPopulationActor(SpawnedActor, RegionTag, EPopulationActorType::Civilian, false);
}

void UWorldPopulationSubsystem::UnregisterSpawnedCivilian(AActor* SpawnActor)
{
	UnregisterPopulationActor(SpawnActor);
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

AActor* UWorldPopulationSubsystem::TrySpawnPlaceholderPokemonForActor(AActor* RequestingActor)
{
	if (!RequestingActor)
	{
		return nullptr;
	}

	FActiveRegionInfo RegionInfo;
	FRuntimeRegionPopulationState PopulationState;

	if (!GetSpawnContextForActor(RequestingActor, RegionInfo, PopulationState))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Cannot spawn placeholder Pokemon. No valid spawn context for %s."),
			*GetNameSafe(RequestingActor)
		);

		return nullptr;
	}

	if (!CanSpawnWildPokemonInRegion(RegionInfo.RegionTag))
	{
		UE_LOG(LogTemp, Log,
			TEXT("[WorldPopulationSubsystem] Cannot spawn placeholder Pokemon in %s. Region is at Pokemon budget."),
			*RegionInfo.RegionTag.ToString()
		);

		return nullptr;
	}

	FRegionPokemonSpawnEntry SelectedEntry;
	if(!SelectWildPokemonSpawnEntry(RegionInfo, SelectedEntry))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Cannot spawn placeholder Pokemon in %s. Failed to select spawn entry."),
			*RegionInfo.RegionTag.ToString()
		);
		return nullptr;
	}
	
	FTransform SpawnTransform;
	if (!FindPlaceholderSpawnTransform(RequestingActor, RegionInfo.RegionPopulationData.Get(), SpawnTransform))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Could not find placeholder spawn transform for %s."),
			*GetNameSafe(RequestingActor)
		);

		return nullptr;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride =
		ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

	AActor* SpawnedActor = World->SpawnActor<AActor>(
		SelectedEntry.ActorClass,
		SpawnTransform,
		SpawnParams
	);

	if (!SpawnedActor)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] SpawnActor failed for placeholder Pokemon in %s."),
			*RegionInfo.RegionTag.ToString()
		);

		return nullptr;
	}

	const bool bShouldBeCombatReady = SelectedEntry.bCanBeCombatReady && PopulationState.CombatReadyPokemonCount < RegionInfo.RegionPopulationData->PopulationBudget.MaxCombatReadyPokemon;
	RegisterSpawnedPokemon(SpawnedActor, RegionInfo.RegionTag, bShouldBeCombatReady);

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Spawned wild Pokemon entry %s | Species=%s | Region=%s | LevelRange=%d-%d."),
		*GetNameSafe(SpawnedActor),
		*SelectedEntry.SpeciesTag.ToString(),
		*RegionInfo.RegionTag.ToString(),
		SelectedEntry.MinLevel,
		SelectedEntry.MaxLevel
	);

	return SpawnedActor;
}

bool UWorldPopulationSubsystem::DespawnPopulationActor(AActor* ActorToDespawn)
{
	if (!ActorToDespawn)
	{
		return false;
	}

	if (!RegisteredPopulationActors.Contains(ActorToDespawn))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Tried to despawn %s, but it is not registered as a population actor."),
			*GetNameSafe(ActorToDespawn)
		);

		return false;
	}

	UnregisterPopulationActor(ActorToDespawn);

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Destroying population actor %s."),
		*GetNameSafe(ActorToDespawn)
	);

	ActorToDespawn->Destroy();

	return true;
}

int32 UWorldPopulationSubsystem::DespawnAllPopulationActorsInRegion(FGameplayTag RegionTag)
{
	if(!RegionTag.IsValid())
	{
		return 0;
	}

	TArray<TObjectPtr<AActor>> ActorsToDespawn;

	for (const TPair<TObjectPtr<AActor>, FRegisteredPopulationActorInfo>& Pair : RegisteredPopulationActors) 
	{
		const FRegisteredPopulationActorInfo& ActorInfo = Pair.Value;

		if (ActorInfo.RegionTag == RegionTag&&Pair.Key)
		{
			ActorsToDespawn.Add(Pair.Key);
		}
	}

	int32 DespawnedCount = 0;

	for (AActor* ActorToDespawn : ActorsToDespawn)
	{
		if (DespawnPopulationActor(ActorToDespawn))
		{
			DespawnedCount++;
		}
	}

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Despawned %d population actors in region %s."),
		DespawnedCount,
		*RegionTag.ToString()
	);

	PrintPopulationBudgetForRegion(RegionTag);

	return DespawnedCount;
}

int32 UWorldPopulationSubsystem::DespawnPopulationActorsTooFarFromActor(AActor* ReferenceActor)
{
	if(!ReferenceActor)
	{
		return 0;
	}

	FActiveRegionInfo RegionInfo;
	if(!GetActiveRegionForActor(ReferenceActor, RegionInfo))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Cannot despawn population actors around %s. No active region found."),
			*GetNameSafe(ReferenceActor)
		);
		return 0;
	}

	if (!RegionInfo.RegionTag.IsValid())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Cannot despawn population actors around %s. Active region tag is invalid."),
			*GetNameSafe(ReferenceActor)
		);
		return 0;
	}

	const URegionPopulationData* RegionData = RegionInfo.RegionPopulationData.Get();
	if(!RegionData)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Cannot despawn population actors around %s. Active region data is invalid."),
			*GetNameSafe(ReferenceActor)
		);
		return 0;
	}

	TArray<TObjectPtr<AActor>> ActorsToDespawn;

	for (const TPair<TObjectPtr<AActor>, FRegisteredPopulationActorInfo>& Pair : RegisteredPopulationActors)
	{
		AActor* RegisteredActor = Pair.Key;
		const FRegisteredPopulationActorInfo& ActorInfo = Pair.Value;

		if (!RegisteredActor)
		{
			continue;
		}

		if (ActorInfo.RegionTag != RegionInfo.RegionTag)
		{
			continue;
		}

		if (ShouldDespawnPopulationActorByDistance(ReferenceActor, RegisteredActor, RegionData))
		{
			ActorsToDespawn.Add(RegisteredActor);
		}
	}

	int32 DespawnedCount = 0;

	for (AActor* ActorToDespawn : ActorsToDespawn)
	{
		if (DespawnPopulationActor(ActorToDespawn))
		{
			DespawnedCount++;
		}
	}

	if (DespawnedCount > 0)
	{
		UE_LOG(LogTemp, Log,
			TEXT("[WorldPopulationSubsystem] Despawned %d population actors around %s in region %s."),
			DespawnedCount,
			*GetNameSafe(ReferenceActor),
			*RegionInfo.RegionTag.ToString()
		);
		PrintPopulationBudgetForRegion(RegionInfo.RegionTag);
	}

	return DespawnedCount;
}

void UWorldPopulationSubsystem::StartPopulationUpdateTimer()
{
	UWorld* World = GetWorld();
	if(!World)
	{
		return;
	}

	if (PopulationUpdateInterval <= 0.f)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Cannot start population update timer. PopulationUpdateInterval is set to %.2f."), 
			PopulationUpdateInterval
		);
		return;
	}

	World->GetTimerManager().SetTimer(
		PopulationUpdateTimerHandle,
		this,
		&UWorldPopulationSubsystem::RunPopulationUpdate,
		PopulationUpdateInterval,
		true
	);

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Started population update timer with interval %.2f seconds."), 
		PopulationUpdateInterval
	);
}

void UWorldPopulationSubsystem::StopPopulationUpdateTimer()
{
	UWorld* World = GetWorld();
	if(!World)
	{
		return;
	}
	World->GetTimerManager().ClearTimer(PopulationUpdateTimerHandle);

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Stopped population update timer.")
	);
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

void UWorldPopulationSubsystem::RunPopulationUpdate()
{
	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Running population update. Active regions: %d, Registered population actors: %d."),
		ActiveRegionsByActor.Num(),
		RegisteredPopulationActors.Num()
	);

	int32 TotalDespawned = 0;

	// 1. Distance despawn for active regions
	if (RegisteredPopulationActors.Num() > 0)
	{
		for (const TPair<TObjectPtr<AActor>, FActiveRegionInfo>& Pair : ActiveRegionsByActor)
		{
			AActor* ReferenceActor = Pair.Key;

			if (!IsValid(ReferenceActor))
			{
				continue;
			}

			TotalDespawned += DespawnPopulationActorsTooFarFromActor(ReferenceActor);
		}
	}

	// 2. Hard cleanup for regions that no active actor cares about anymore
	if (RegisteredPopulationActors.Num() > 0)
	{
		TotalDespawned += DespawnPopulationActorsInInactiveRegions();
	}

	if (TotalDespawned > 0)
	{
		UE_LOG(LogTemp, Log,
			TEXT("[WorldPopulationSubsystem] Population update despawned a total of %d actors across all regions."),
			TotalDespawned
		);
	}

	// 3. Spawn pass only for currently active regions
	const int32 TotalSpawned = RunPlaceholderSpawnPass();

	if (TotalSpawned > 0 || TotalDespawned > 0)
	{
		UE_LOG(LogTemp, Log,
			TEXT("[WorldPopulationSubsystem] Population update completed. Spawned=%d Despawned=%d."),
			TotalSpawned,
			TotalDespawned
		);
	}
}

int32 UWorldPopulationSubsystem::RunPlaceholderSpawnPass()
{
	if(ActiveRegionsByActor.Num() <= 0)
	{
		return 0;
	}

	int32 SpawnedCount = 0;

	for (const TPair<TObjectPtr<AActor>, FActiveRegionInfo>& Pair : ActiveRegionsByActor)
	{
		AActor* ReferenceActor = Pair.Key;
		if (!IsValid(ReferenceActor))
		{
			continue;
		}
		if(!ShouldAttemptPlaceholderSpawnForActor(ReferenceActor))
		{
			continue;
		}

		AActor* SpawnedActor = TrySpawnPlaceholderPokemonForActor(ReferenceActor);
		if (SpawnedActor)
		{
			SpawnedCount++;
		}
	}

	if(SpawnedCount > 0)
	{
		UE_LOG(LogTemp, Log,
			TEXT("[WorldPopulationSubsystem] Placeholder spawn pass spawned a total of %d actors across all regions."),
			SpawnedCount
		);
	}

	return SpawnedCount;
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

bool UWorldPopulationSubsystem::CanRegisterActor(AActor* Actor, FGameplayTag RegionTag) const
{
	if (!Actor)
	{
		return false;
	}

	if (!RegionTag.IsValid())
	{
		return false;
	}

	if (RegisteredPopulationActors.Contains(Actor))
	{
		UE_LOG(LogTemp, Warning, TEXT("[WorldPopulationSubsystem] Actor %s is already registered as a population actor."), *GetNameSafe(Actor));
		return false;
	}
	return true;
}

void UWorldPopulationSubsystem::RegisterPopulationActor(AActor* Actor, FGameplayTag RegionTag, EPopulationActorType PopulationType, bool bIsCombatReady)
{
	if (!CanRegisterActor(Actor, RegionTag))
	{
		return;
	}

	FRuntimeRegionPopulationState* RuntimeState = RuntimePopulationByRegion.Find(RegionTag);
	if (!RuntimeState)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Tried to register %s in region %s, but no runtime region state exists."),
			*GetNameSafe(Actor),
			*RegionTag.ToString()
		);

		return;
	}

	FRegisteredPopulationActorInfo ActorInfo;
	ActorInfo.Actor = Actor;
	ActorInfo.RegionTag = RegionTag;
	ActorInfo.PopulationType = PopulationType;
	ActorInfo.bCombatReady = bIsCombatReady;

	RegisteredPopulationActors.Add(Actor, ActorInfo);

	IncrementPopulationCount(*RuntimeState, PopulationType, bIsCombatReady);
	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Registered %s as %s in %s."),
		*GetNameSafe(Actor),
		*UEnum::GetValueAsString(PopulationType),
		*RegionTag.ToString()
	);

	PrintPopulationBudgetForRegion(RegionTag);
}

void UWorldPopulationSubsystem::UnregisterPopulationActor(AActor* Actor)
{
	if (!Actor)
	{
		return;
}

	FRegisteredPopulationActorInfo ActorInfo;
	if (!RegisteredPopulationActors.RemoveAndCopyValue(Actor, ActorInfo))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Tried to unregister %s, but it was not registered."),
			*GetNameSafe(Actor)
		);

		return;
	}

	FRuntimeRegionPopulationState* RuntimeState = RuntimePopulationByRegion.Find(ActorInfo.RegionTag);
	if (!RuntimeState)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Tried to unregister %s from region %s, but no runtime region state exists."),
			*GetNameSafe(Actor),
			*ActorInfo.RegionTag.ToString()
		);
		return;
	}

	DecrementPopulationCount(*RuntimeState, ActorInfo.PopulationType, ActorInfo.bCombatReady);

	UE_LOG(LogTemp, Log,
		TEXT("[WorldPopulationSubsystem] Unregistered %s from %s."),
		*GetNameSafe(Actor),
		*ActorInfo.RegionTag.ToString()
	);

	PrintPopulationBudgetForRegion(ActorInfo.RegionTag);
}

void UWorldPopulationSubsystem::IncrementPopulationCount(FRuntimeRegionPopulationState& RuntimeState, EPopulationActorType PopulationType, bool bCombatReady)
{
	switch (PopulationType)
	{
	case EPopulationActorType::WildPokemon:
		RuntimeState.ActivePokemonCount++;

		if (bCombatReady)
		{
			RuntimeState.CombatReadyPokemonCount++;
		}

		break;
	case EPopulationActorType::Trainer:
		RuntimeState.ActiveTrainerCount++;
		break;
	case EPopulationActorType::Civilian:
		RuntimeState.ActiveCivilianCount++;
		break;
	default:
		break;
	}
}

void UWorldPopulationSubsystem::DecrementPopulationCount(FRuntimeRegionPopulationState& RuntimeState, EPopulationActorType PopulationType, bool bCombatReady)
{
	switch (PopulationType)
	{
	case EPopulationActorType::WildPokemon:
		RuntimeState.ActivePokemonCount = FMath::Max(0, RuntimeState.ActivePokemonCount - 1);

		if(bCombatReady)
		{
			RuntimeState.CombatReadyPokemonCount = FMath::Max(0, RuntimeState.CombatReadyPokemonCount - 1);
		}
		break;

	case EPopulationActorType::Trainer:
		RuntimeState.ActiveTrainerCount = FMath::Max(0, RuntimeState.ActiveTrainerCount - 1);
		break;

	case EPopulationActorType::Civilian:
		RuntimeState.ActiveCivilianCount = FMath::Max(0, RuntimeState.ActiveCivilianCount - 1);
		break;

	default:
		break;
	}
}

bool UWorldPopulationSubsystem::GetSpawnContextForActor(
	AActor* RequestingActor,
	FActiveRegionInfo& OutRegionInfo,
	FRuntimeRegionPopulationState& OutRuntimeState
) const
{
	if (!RequestingActor)
	{
		return false;
	}

	if (!GetActiveRegionForActor(RequestingActor, OutRegionInfo))
	{
		return false;
	}

	if (!OutRegionInfo.RegionTag.IsValid())
	{
		return false;
	}

	if (!OutRegionInfo.RegionPopulationData.IsValid())
	{
		return false;
	}

	if (!GetRuntimePopulationStateForRegion(OutRegionInfo.RegionTag, OutRuntimeState))
	{
		return false;
	}

	return true;
}

bool UWorldPopulationSubsystem::FindPlaceholderSpawnTransform(
	AActor* RequestingActor,
	const URegionPopulationData* RegionData,
	FTransform& OutSpawnTransform
) const
{
	if (!RequestingActor || !RegionData)
	{
		return false;
	}

	const FVector Origin = RequestingActor->GetActorLocation();

	const float MinDistance = RegionData->SpawnSettings.MinSpawnDistanceFromPlayer;
	const float MaxDistance = RegionData->SpawnSettings.MaxSpawnDistanceFromPlayer;

	if (MaxDistance <= MinDistance)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Invalid spawn distance range on %s. Min=%.2f Max=%.2f"),
			*GetNameSafe(RegionData),
			MinDistance,
			MaxDistance
		);

		return false;
	}

	const FPopulationSpawnCandidate SpawnCandidate = FindValidSpawnLocationForActor(
		RequestingActor,
		RegionData
	);

	if (!SpawnCandidate.bIsValid)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[WorldPopulationSubsystem] Failed to find valid spawn location for %s in %s. Reason: %s"),
			*GetNameSafe(RequestingActor),
			*RegionData->RegionTag.ToString(),
			*SpawnCandidate.FailureReason
		);

		return false;
	}

	const FVector GroundLocation = SpawnCandidate.Location;

	const float SpawnZOffset = 100.0f;
	const FVector SpawnLocation = GroundLocation + FVector(0.0f, 0.0f, SpawnZOffset);

	const FRotator SpawnRotation = FRotator::ZeroRotator;

	OutSpawnTransform = FTransform(SpawnRotation, SpawnLocation);

	return true;
}

bool UWorldPopulationSubsystem::ShouldDespawnPopulationActorByDistance(const AActor* ReferenceActor, const AActor* PopulationActor, const URegionPopulationData* RegionData) const
{
	if (!ReferenceActor || !PopulationActor || !RegionData)
	{
		return false;
	}

	const float DespawnDistance = RegionData->SpawnSettings.DespawnDistanceFromPlayer;

	if (DespawnDistance <= 0.0f)
	{
		return false;
	}

	const float DistanceSquared = FVector::DistSquared(ReferenceActor->GetActorLocation(), PopulationActor->GetActorLocation());

	const float DespawnDistanceSquared = FMath::Square(DespawnDistance);

	return DistanceSquared >= DespawnDistanceSquared;
}

bool UWorldPopulationSubsystem::ShouldAttemptPlaceholderSpawnForActor(AActor* ReferenceActor)
{
	if (!ReferenceActor)
	{
		return false;
	}

	FActiveRegionInfo RegionInfo;
	if(!GetActiveRegionForActor(ReferenceActor,RegionInfo))
	{
		return false;
	}

	if(!RegionInfo.RegionTag.IsValid())
	{
		return false;
	}

	if(!RegionInfo.RegionPopulationData.IsValid())
	{
		return false;
	}

	return CanSpawnWildPokemonInRegion(RegionInfo.RegionTag);
}

bool UWorldPopulationSubsystem::IsRegionRelevantToAnyActiveActor(FGameplayTag RegionTag) const
{
	if(!RegionTag.IsValid())
	{
		return false;
	}

	for (const TPair<TObjectPtr<AActor>, FActiveRegionInfo>& Pair : ActiveRegionsByActor)
	{
		const AActor* ActiveActor = Pair.Key;
		const FActiveRegionInfo& ActiveRegionInfo = Pair.Value;

		if(!IsValid(ActiveActor))
		{
			continue;
		}

		if(ActiveRegionInfo.RegionTag == RegionTag)
		{
			return true;
		}
	}

	return false;
}

int32 UWorldPopulationSubsystem::DespawnPopulationActorsInInactiveRegions()
{
	if (RegisteredPopulationActors.Num() <= 0)
	{
		return 0;
	}

	TSet<FGameplayTag> RegionsWithPopulation;
	
	for (const TPair<TObjectPtr<AActor>, FRegisteredPopulationActorInfo>& Pair : RegisteredPopulationActors)
	{
		const FRegisteredPopulationActorInfo& ActorInfo = Pair.Value;

		if (!ActorInfo.RegionTag.IsValid())
		{
			continue;
		}

		RegionsWithPopulation.Add(ActorInfo.RegionTag);
	}

	int32 TotalDespawned = 0;

	for (const FGameplayTag& RegionTag : RegionsWithPopulation)
	{
		if(IsRegionRelevantToAnyActiveActor(RegionTag))
		{
			continue;
		}

		const int32 DespawnedInRegion = DespawnAllPopulationActorsInRegion(RegionTag);
		TotalDespawned += DespawnedInRegion;

		if (DespawnedInRegion > 0)
		{
			UE_LOG(LogTemp, Log,
				TEXT("[WorldPopulationSubsystem] Despawned %d population actors in region %s because it is no longer relevant to any active actor."),
				DespawnedInRegion,
				*RegionTag.ToString()
			);
		}
	}

	return TotalDespawned;
}

FPopulationSpawnCandidate UWorldPopulationSubsystem::FindValidSpawnLocationForActor(AActor* ReferenceActor, const URegionPopulationData* RegionData) const
{
	FPopulationSpawnCandidate Result;

	if (!ReferenceActor || !RegionData)
	{
		Result.FailureReason = TEXT("Missing ReferenceActor or RegionData.");
		return Result;
	}

	const int32 MaxAttempts = RegionData->SpawnSettings.MaxSpawnAttemptsPerCycle;

	for (int32 AttemptIndex = 0; AttemptIndex < MaxAttempts; ++AttemptIndex)
	{
		const FVector Origin = ReferenceActor->GetActorLocation();

		const float RandomAngle = FMath::RandRange(0.0f, 360.0f);
		const float RandomDistance = FMath::RandRange(
			RegionData->SpawnSettings.MinSpawnDistanceFromPlayer,
			RegionData->SpawnSettings.MaxSpawnDistanceFromPlayer
		);

		const FVector Direction = FVector(
			FMath::Cos(FMath::DegreesToRadians(RandomAngle)),
			FMath::Sin(FMath::DegreesToRadians(RandomAngle)),
			0.0f
		);

		const FVector RawCandidate = Origin + Direction * RandomDistance;

		if (!IsSpawnLocationFarEnoughFromActor(RawCandidate, ReferenceActor, RegionData))
		{
			Result.FailureReason = TEXT("Candidate failed distance validation.");
			continue;
		}

		FVector ProjectedLocation;
		if (RegionData->SpawnSettings.bRequireNavMesh)
		{
			if (!ProjectSpawnLocationToNavMesh(RawCandidate, ProjectedLocation))
			{
				Result.FailureReason = TEXT("Candidate failed NavMesh projection.");
				continue;
			}
		}
		else
		{
			ProjectedLocation = RawCandidate;
		}

		if (!IsSpawnLocationClear(ProjectedLocation, 80.0f, 100.0f))
		{
			Result.FailureReason = TEXT("Candidate failed collision clearance.");
			continue;
		}

		if (RegionData->SpawnSettings.bAvoidPlayerLineOfSight)
		{
			if (!IsSpawnLocationOutOfLineOfSight(ProjectedLocation, ReferenceActor))
			{
				Result.FailureReason = TEXT("Candidate was in line of sight.");
				continue;
			}
		}

		Result.Location = ProjectedLocation;
		Result.bIsValid = true;
		Result.FailureReason = TEXT("Valid.");
		return Result;
	}

	return Result;
}

bool UWorldPopulationSubsystem::IsSpawnLocationFarEnoughFromActor(const FVector& CandidateLocation, const AActor* ReferenceActor, const URegionPopulationData* RegionData) const
{
	if (!ReferenceActor || !RegionData)
	{
		return false;
	}

	const float DistanceSquared = FVector::DistSquared(
		CandidateLocation,
		ReferenceActor->GetActorLocation()
	);

	const float MinDistanceSquared = FMath::Square(
		RegionData->SpawnSettings.MinSpawnDistanceFromPlayer
	);

	const float MaxDistanceSquared = FMath::Square(
		RegionData->SpawnSettings.MaxSpawnDistanceFromPlayer
	);

	return DistanceSquared >= MinDistanceSquared
		&& DistanceSquared <= MaxDistanceSquared;
}

bool UWorldPopulationSubsystem::ProjectSpawnLocationToNavMesh(const FVector& CandidateLocation, FVector& OutProjectedLocation) const
{
	const UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	const UNavigationSystemV1* NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if (!NavSystem)
	{
		return false;
	}

	FNavLocation ProjectedLocation;

	const FVector QueryExtent(500.0f, 500.0f, 1000.0f);

	const bool bProjected = NavSystem->ProjectPointToNavigation(
		CandidateLocation,
		ProjectedLocation,
		QueryExtent
	);

	if (!bProjected)
	{
		return false;
	}

	OutProjectedLocation = ProjectedLocation.Location;
	return true;
}

bool UWorldPopulationSubsystem::IsSpawnLocationClear(const FVector& CandidateLocation, float CheckRadius, float CheckHalfHeight) const
{
	const UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	const FVector CollisionTestLocation =
		CandidateLocation + FVector(0.0f, 0.0f, CheckHalfHeight);

	const FCollisionShape CapsuleShape = FCollisionShape::MakeCapsule(
		CheckRadius,
		CheckHalfHeight
	);

	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = false;

	const bool bBlocked = World->OverlapBlockingTestByChannel(
		CollisionTestLocation,
		FQuat::Identity,
		ECC_Pawn,
		CapsuleShape,
		QueryParams
	);

#if ENABLE_DRAW_DEBUG
	DrawDebugCapsule(
		World,
		CollisionTestLocation,
		CheckHalfHeight,
		CheckRadius,
		FQuat::Identity,
		bBlocked ? FColor::Red : FColor::Green,
		false,
		2.0f
	);
#endif

	return !bBlocked;
}

bool UWorldPopulationSubsystem::IsSpawnLocationOutOfLineOfSight(const FVector& CandidateLocation, const AActor* ReferenceActor) const
{
	const UWorld* World = GetWorld();
	if (!World || !ReferenceActor)
	{
		return false;
	}

	const FVector Start = ReferenceActor->GetActorLocation() + FVector(0.0f, 0.0f, 80.0f);
	const FVector End = CandidateLocation + FVector(0.0f, 0.0f, 80.0f);

	FHitResult HitResult;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(ReferenceActor);
	QueryParams.bTraceComplex = false;

	const bool bHit = World->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECC_Visibility,
		QueryParams
	);

	// If the trace hits something before reaching the candidate, the spawn point is hidden.
	return bHit;
}

bool UWorldPopulationSubsystem::SelectWildPokemonSpawnEntry(const FActiveRegionInfo& RegionInfo, FRegionPokemonSpawnEntry& OutEntry) const
{
	const URegionPopulationData* RegionData = RegionInfo.RegionPopulationData.Get();
	if(!RegionData)
	{
		return false;
	}

	if (RegionData->WildPokemonSpawnEntries.Num() <= 0)
	{
		return false;
	}

	TArray<const FRegionPokemonSpawnEntry*> ValidEntries;
	float TotalWeight = 0.0f;

	for(const FRegionPokemonSpawnEntry& Entry : RegionData->WildPokemonSpawnEntries)
	{
		if (!Entry.IsValid())
		{
			continue;
		}

		// If an entry requires environment tags, the region must have all of them
		if (!RegionData->EnvironmentTags.HasAll(Entry.RequiredEnvironmentTags))
		{
			continue;
		}

		ValidEntries.Add(&Entry);
		TotalWeight += Entry.SpawnWeight;
	}

	if(ValidEntries.Num() <= 0 || TotalWeight <= 0.0f)
	{
		return false;
	}

	float Roll = FMath::FRandRange(0.0f, TotalWeight);

	for (const FRegionPokemonSpawnEntry* Entry : ValidEntries)
	{
		if (!Entry->IsValid())
		{
			continue;
		}

		Roll -= Entry->SpawnWeight;

		if (Roll <= 0.0f)
		{
			OutEntry = *Entry;
			return true;
		}
	}
	
	OutEntry = *ValidEntries.Last();
	return true;
}

bool UWorldPopulationSubsystem::CanRegisterCombatReadyPokemonInRegion(FGameplayTag RegionTag) const
{
	const FRuntimeRegionPopulationState* RuntimeState = RuntimePopulationByRegion.Find(RegionTag);
	if (!RuntimeState || !RuntimeState->RegionPopulationData.IsValid())
	{
		return false;
	}

	const URegionPopulationData* RegionData = RuntimeState->RegionPopulationData.Get();

	return RuntimeState->CombatReadyPokemonCount < RegionData->PopulationBudget.MaxCombatReadyPokemon;
}
