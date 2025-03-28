// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TrainerPlayerState.h"

void ATrainerPlayerState::AddToParty(APokemon_Parent* NewPokemon)
{
	if (CurrentParty.Num() < 6)
	{
		CurrentParty.Add(NewPokemon);
		OnPartyUpdatedDelegate.Broadcast(CurrentParty);
	}
	// TO DO
	// When there are too many Pokemon in the Party, send them to a PC.
}
