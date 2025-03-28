// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TrainerPlayerState.generated.h"

class APokemon_Parent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnPartyUpdatedSignature, TArray<APokemon_Parent*> /*PokemonParty*/);

UCLASS()
class PROJECTMIMIKYU_API ATrainerPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:

	FOnPartyUpdatedSignature OnPartyUpdatedDelegate;

	void AddToParty(APokemon_Parent* NewPokemon);

private:

	UPROPERTY(VisibleAnywhere, Category = "Pokemon Party")
	TArray<APokemon_Parent*> CurrentParty;
};
