// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/MovesetComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "DataAssets/PokemonDataAsset.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

UMovesetComponent::UMovesetComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}

void UMovesetComponent::SpawnWithDataMoveSet(int32 CurrentPokemonLevel, UPokemonDataAsset* PokemonMoveList)
{
	for (int32 i = CurrentPokemonLevel; i <= CurrentPokemonLevel; i--)
	{
		if (UPokemonMoveDataAsset* NewMove = PokemonMoveList->FindPokemonMoveForLevel(i))
		{
			if (!CurrentPokemonMoves.Contains(NewMove))
			{
				CurrentPokemonMoves.AddUnique(NewMove);
				int32 AbilityIndex = CurrentPokemonMoves.Num();
				FString InputName = FString::Printf(TEXT("InputTag.%d"), AbilityIndex);
				FGameplayTag CurrentInput = FGameplayTag::RequestGameplayTag(FName(*InputName));

				if (CurrentInput.IsValid())
				{
					CurrentPokemonMoves[CurrentPokemonMoves.Num() - 1]->InputTag = CurrentInput;
				}

				if (CurrentPokemonMoves.Num() == 4)
					break;
				continue;
			}
		}
		continue;
	}

	InitializeMoveRuntimeStates();
}

void UMovesetComponent::SetupMoveset(TArray<UPokemonMoveDataAsset*> NewMoveset)
{
	CurrentPokemonMoves = NewMoveset;

	InitializeMoveRuntimeStates();
}

void UMovesetComponent::InitializeMoveRuntimeStates()
{
	// Prevent old recharge callbacks from firing if the Pokemon's moveset gets rebuilt.
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearAllTimersForObject(this);
	}

	MoveRuntimeStates.Reset();
	MoveRuntimeStates.Reserve(CurrentPokemonMoves.Num());

	for (UPokemonMoveDataAsset* MoveData : CurrentPokemonMoves)
	{
		if (!MoveData)
		{
			continue;
		}

		FPokemonMoveRuntimeState& RuntimeState = MoveRuntimeStates.AddDefaulted_GetRef();

		RuntimeState.MoveData = MoveData;
		RuntimeState.InputTag = MoveData->InputTag;

		RuntimeState.MaxPowerPoints = FMath::Max(1, MoveData->BaseMaxPowerPoints);

		RuntimeState.CurrentPowerPoints = RuntimeState.MaxPowerPoints;

		RuntimeState.RechargeEndServerTime = 0.f;

		UE_LOG(LogTemp,Display,
			TEXT(
				"[PokemonPP] Initialized | "
				"Pokemon=%s | Move=%s | PP=%d/%d"
			),
			*GetNameSafe(GetOwner()),
			*MoveData->MoveName.ToString(),
			RuntimeState.CurrentPowerPoints,
			RuntimeState.MaxPowerPoints
		);

		if (GetOwner())
		{
			GetOwner()->ForceNetUpdate();
		}
	}
}

FPokemonMoveRuntimeState* UMovesetComponent::FindRuntimeState(const UPokemonMoveDataAsset* MoveData)
{
	if (!MoveData)
	{
		return nullptr;
	}

	return MoveRuntimeStates.FindByPredicate(
		[MoveData](const FPokemonMoveRuntimeState& State)
		{
			return State.MoveData.Get() == MoveData;
		}
	);
}	

const FPokemonMoveRuntimeState* UMovesetComponent::FindRuntimeState(const UPokemonMoveDataAsset* MoveData) const
{
	if (!MoveData)
	{
		return nullptr;
	}
	return MoveRuntimeStates.FindByPredicate(
		[MoveData](const FPokemonMoveRuntimeState& State)
		{
			return State.MoveData.Get() == MoveData;
		}
	);
}

bool UMovesetComponent::CanUseMove(const UPokemonMoveDataAsset* MoveData) const
{
	const FPokemonMoveRuntimeState* RuntimeState = FindRuntimeState(MoveData);
	if (!RuntimeState)
	{
		return false;
	}
	return RuntimeState && RuntimeState->HasPowerPoints();
}

bool UMovesetComponent::ConsumePowerPoint(const UPokemonMoveDataAsset* MoveData)
{
	AActor* Owner = GetOwner();

	if (!Owner || !Owner->HasAuthority())
	{
		return false;
	}

	FPokemonMoveRuntimeState* RuntimeState = FindRuntimeState(MoveData);

	if (!RuntimeState)
	{
		UE_LOG(LogTemp,Warning,
			TEXT(
				"[PokemonPP] Consume failed: "
				"No runtime state for Move=%s"
			),
			*GetNameSafe(MoveData)
		);

		return false;
	}

	if (!RuntimeState->HasPowerPoints())
	{
		UE_LOG(LogTemp, Display,
			TEXT(
				"[PokemonPP] Move depleted | "
				"Pokemon=%s | Move=%s"
			),
			*GetNameSafe(Owner),
			*MoveData->MoveName.ToString()
		);

		return false;
	}

	// Baseline rule: every successful use cost EXCATLY one PP.
	RuntimeState->CurrentPowerPoints--;

	UE_LOG(LogTemp, Display,
		TEXT(
			"[PokemonPP] Consumed | "
			"Pokemon=%s | Move=%s | PP=%d/%d"
		),
		*GetNameSafe(Owner),
		*MoveData->MoveName.ToString(),
		RuntimeState->CurrentPowerPoints,
		RuntimeState->MaxPowerPoints
	);

	if (RuntimeState->IsDepleted())
	{
		StartPowerPointRecharge(*RuntimeState);
	}

	Owner->ForceNetUpdate();

	return true;
}

float UMovesetComponent::GetServerWorldTimeSeconds() const
{
	const UWorld* World = GetWorld();

	if (!World)
	{
		return 0.f;
	}

	if (const AGameStateBase* GameState = World->GetGameState())
	{
		return GameState->GetServerWorldTimeSeconds();
	}

	return World->GetTimeSeconds();
}

void UMovesetComponent::StartPowerPointRecharge(FPokemonMoveRuntimeState& RuntimeState)
{
	if (!RuntimeState.MoveData)
	{
		return;
	}

	const float RechargeDuration = FMath::Max(0.f, RuntimeState.MoveData->PowerPointRechargeDuration);

	// Zero-duration recharge effectively makes the move immediately available again
	if (RechargeDuration < +KINDA_SMALL_NUMBER)
	{
		RuntimeState.CurrentPowerPoints = RuntimeState.MaxPowerPoints;
		RuntimeState.RechargeEndServerTime = 0.f;
		return;
	}

	RuntimeState.RechargeEndServerTime = GetServerWorldTimeSeconds() + RechargeDuration;

	UE_LOG(LogTemp, Display,
		TEXT(
			"[PokemonPP] Recharge started | "
			"Pokemon=%s | Move=%s | Duration=%.2f"
		),
		*GetNameSafe(GetOwner()),
		*RuntimeState.MoveData->MoveName.ToString(),
		RechargeDuration
	);

	FTimerDelegate RechargeDelegate;

	RechargeDelegate.BindUObject(this, &UMovesetComponent::CompletePowerPointRecharge, RuntimeState.InputTag);

	FTimerHandle RechargeTimer;

	GetWorld()->GetTimerManager().SetTimer(RechargeTimer, RechargeDelegate, RechargeDuration, false);
}

void UMovesetComponent::CompletePowerPointRecharge(FGameplayTag InputTag)
{
	AActor* Owner = GetOwner();

	if (!Owner || !Owner->HasAuthority())
	{
		return;
	}

	FPokemonMoveRuntimeState* RuntimeState = MoveRuntimeStates.FindByPredicate(
		[InputTag](const FPokemonMoveRuntimeState& State)
		{
			return State.InputTag.MatchesTagExact(InputTag);
		}
	);

	if (!RuntimeState)
	{
		return;
	}

	RuntimeState->CurrentPowerPoints = RuntimeState->MaxPowerPoints;

	RuntimeState->RechargeEndServerTime = 0.f;

	UE_LOG(LogTemp, Display,
		TEXT(
			"[PokemonPP] Recharge complete | "
			"Pokemon=%s | Move=%s | PP=%d/%d"
		),
		*GetNameSafe(Owner),
		*GetNameSafe(RuntimeState->MoveData),
		RuntimeState->CurrentPowerPoints,
		RuntimeState->MaxPowerPoints
	);

	Owner->ForceNetUpdate();
}

void UMovesetComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearAllTimersForObject(this);
	}

	Super::EndPlay(EndPlayReason);
}

void UMovesetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UMovesetComponent, MoveRuntimeStates);
}