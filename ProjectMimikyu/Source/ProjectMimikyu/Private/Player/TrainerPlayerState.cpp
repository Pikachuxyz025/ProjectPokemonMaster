// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TrainerPlayerState.h"
#include "Characters/Pokemon_Parent.h"
#include "PokemonGameplayTags.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "DataAssets/PokemonMoveDataAsset.h"

void ATrainerPlayerState::AddToParty(APokemon_Parent* NewPokemon)
{
	if (CurrentPartyInfo.Num() < 6)
	{
		CurrentParty.Add(NewPokemon);
		FPokemonInfo PokemonInfo = NewPokemon->GetPokemonInfo();
		PokemonInfo.PartyMode = EPartyStatus::EPS_Ready;
		CurrentPartyInfo.Add(PokemonInfo);
		OnPartyUpdatedDelegate.Broadcast(CurrentParty);
		OnPartyInfoUpdatedDelegate.Broadcast(CurrentPartyInfo);
	}
	// TO DO
	// When there are too many Pokemon in the Party, send them to a PC.
}

FPokemonInfo ATrainerPlayerState::GetCurrentPokemonInfo()
{
	return CurrentPartyInfo[PartyIndex];
}

void ATrainerPlayerState::PokemonIsOut(APokemon_Parent* PokemonOut)
{
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
		//CurrentPartyInfo[PartyIndex].StoredAttributeValue = ;
		//CurrentPartyInfo[PartyIndex].CurrentUiInfo.PokemonLevel = CurrentPartyInfo[PartyIndex].StoredAttributeValue[FPokemonGameplayTags::Get().Attributes_Stats_Level];
	}
}

void ATrainerPlayerState::SetTrainerIsInCombat(AActor* CombatTarget)
{
	bIsInCombat = true;
	EngagedPokemon = CombatTarget;
	PokemonActiveInCombat.Broadcast();
}


