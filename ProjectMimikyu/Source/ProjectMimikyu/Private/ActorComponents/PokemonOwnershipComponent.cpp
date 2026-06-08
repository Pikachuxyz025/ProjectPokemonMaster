// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorComponents/PokemonOwnershipComponent.h"

#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "Net/UnrealNetwork.h"

UPokemonOwnershipComponent::UPokemonOwnershipComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void UPokemonOwnershipComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerPokemon = Cast<APokemon_Parent>(GetOwner());
}

void UPokemonOwnershipComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPokemonOwnershipComponent, CurrentTrainer);
	DOREPLIFETIME(UPokemonOwnershipComponent, PokemonStatus);
	DOREPLIFETIME(UPokemonOwnershipComponent, bIsCaught);
}

APokemon_Parent* UPokemonOwnershipComponent::GetOwnerPokemon() const
{
	return OwnerPokemon ? OwnerPokemon.Get() : Cast<APokemon_Parent>(GetOwner());
}

void UPokemonOwnershipComponent::SetPokemonTrainer(AActor* NewTrainer)
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		UE_LOG(LogTemp, Warning, TEXT("SetPokemonTrainer failed: OwnerPokemon is null."));
		return;
	}

	if (CurrentTrainer == NewTrainer)
	{
		PokemonStatus = CurrentTrainer ? EPokemonStatus::EPS_PlayerTrainer : EPokemonStatus::EPS_Wild;
		RefreshAIControllerOwnershipState();
		return;
	}

	ClearTrainerBindings();

	CurrentTrainer = NewTrainer;
	PokemonStatus = CurrentTrainer ? EPokemonStatus::EPS_PlayerTrainer : EPokemonStatus::EPS_Wild;

	if (CurrentTrainer)
	{
		Pokemon->BindTrainerTargetDelegate(CurrentTrainer);
	}

	RefreshAIControllerOwnershipState();
}

void UPokemonOwnershipComponent::ClearTrainerBindings()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon || !CurrentTrainer)
	{
		return;
	}

	Pokemon->UnbindTrainerTargetDelegate(CurrentTrainer);
}

void UPokemonOwnershipComponent::SetIsCaught(bool bNewIsCaught)
{
	bIsCaught = bNewIsCaught;
}

void UPokemonOwnershipComponent::RefreshAIControllerOwnershipState() const
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		return;
	}

	APokemonAIController* PokemonController = Pokemon->GetPokemonController();
	if (!PokemonController)
	{
		return;
	}

	PokemonController->SetTrainer(CurrentTrainer);
	PokemonController->SetPokemonStatus(PokemonStatus);
}