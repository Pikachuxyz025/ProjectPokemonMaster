// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TrainerPlayerState.h"
#include "Characters/Pokemon_Parent.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "DataAssets/PokemonMoveDataAsset.h"

void ATrainerPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATrainerPlayerState, CurrentPartyInfo);
	DOREPLIFETIME(ATrainerPlayerState, ActivePokemon);
	DOREPLIFETIME(ATrainerPlayerState, ActivePokemonInfo);
	DOREPLIFETIME(ATrainerPlayerState, EngagedPokemon);
	DOREPLIFETIME(ATrainerPlayerState, bIsInCombat);
}

void ATrainerPlayerState::OnRep_CurrentPartyInfo()
{
	OnPartyInfoUpdatedDelegate.Broadcast(CurrentPartyInfo);
}

void ATrainerPlayerState::AddToParty(APokemon_Parent* NewPokemon)
{
	if (!HasAuthority() || !IsValid(NewPokemon))
	{
		return;
	}

	if (CurrentPartyInfo.Num() < 6)
	{
		FPokemonInfo PokemonInfo = NewPokemon->GetPokemonInfo();
		PokemonInfo.PartyMode = EPartyStatus::EPS_Ready;
		CurrentPartyInfo.Add(PokemonInfo);

		OnPartyInfoUpdatedDelegate.Broadcast(CurrentPartyInfo);
	}
	// TO DO
	// When there are too many Pokemon in the Party, send them to a PC.
}

FPokemonInfo ATrainerPlayerState::GetCurrentPokemonInfo()
{
	if (!CurrentPartyInfo.IsValidIndex(PartyIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("GetCurrentPokemonInfo failed: invalid PartyIndex %d, PartySize %d"),
			PartyIndex, CurrentPartyInfo.Num());
		return FPokemonInfo();
	}

	return CurrentPartyInfo[PartyIndex];
}

void ATrainerPlayerState::PokemonIsOut(APokemon_Parent* PokemonOut)
{
	if (!CurrentPartyInfo.IsValidIndex(PartyIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("PokemonIsOut failed: invalid PartyIndex %d, PartySize %d"),
			PartyIndex, CurrentPartyInfo.Num());
		return;
	}

	CurrentPartyInfo[PartyIndex].PartyMode = EPartyStatus::EPS_Out;
	ActivePokemon = PokemonOut;
	ActivePokemonInfo = CurrentPartyInfo[PartyIndex];
	OnPokemonActiveDelegate.Broadcast(ActivePokemon);
}

void ATrainerPlayerState::UpdatePokemonInfoInParty(APokemon_Parent* AlteredPokemon)
{
	if (AlteredPokemon == ActivePokemon)
	{
		CurrentPartyInfo[PartyIndex].UpdateStoredAttributeValues(ActivePokemon->GetPokemonAS()->GetAttributeTagValues());
	}
}

void ATrainerPlayerState::SetTrainerIsInCombat(AActor* CombatTarget)
{
	bIsInCombat = true;
	EngagedPokemon = CombatTarget;
	PokemonActiveInCombat.Broadcast();
}


