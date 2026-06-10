// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorComponents/PokemonFieldPresenceComponent.h"

#include "AIControllers/PokemonAIController.h"
#include "BrainComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

UPokemonFieldPresenceComponent::UPokemonFieldPresenceComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void UPokemonFieldPresenceComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerPokemon = Cast<APokemon_Parent>(GetOwner());
}

APokemon_Parent* UPokemonFieldPresenceComponent::GetOwnerPokemon() const
{
	return OwnerPokemon ? OwnerPokemon.Get() : Cast<APokemon_Parent>(GetOwner());
}

void UPokemonFieldPresenceComponent::PrepareForFieldRemoval()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon || !Pokemon->HasAuthority())
	{
		return;
	}

	if (bPreparedForFieldRemoval)
	{
		return;
	}

	bPreparedForFieldRemoval = true;

	StopAIAndBrain(Pokemon);
	StopMovement(Pokemon);
	DisableGameplayCollision(Pokemon);

	Pokemon->ClearActiveCommandState();
	Pokemon->ClearTrainerBindings();
}

void UPokemonFieldPresenceComponent::ReturnToFieldStorage()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon || !Pokemon->HasAuthority())
	{
		return;
	}

	PrepareForFieldRemoval();

	MulticastPlayReturnEffects();

	Pokemon->SetLifeSpan(ReturnLifeSpanAfterEffects);
}

void UPokemonFieldPresenceComponent::MulticastPlayReturnEffects_Implementation()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		return;
	}

	Pokemon->Dissolve();
}

void UPokemonFieldPresenceComponent::StopAIAndBrain(APokemon_Parent* Pokemon) const
{
	if (!Pokemon)
	{
		return;
	}

	APokemonAIController* PokemonController = Pokemon->GetPokemonController();
	if (!PokemonController)
	{
		return;
	}

	PokemonController->SetPokemonState(EPokemonState::EPS_Fainted);

	if (UBrainComponent* BrainComponent = PokemonController->GetBrainComponent())
	{
		BrainComponent->StopLogic(TEXT("Returned to ball / caught"));
	}

	PokemonController->StopMovement();
}

void UPokemonFieldPresenceComponent::StopMovement(APokemon_Parent* Pokemon) const
{
	if (!Pokemon)
	{
		return;
	}

	if (UCharacterMovementComponent* MovementComponent = Pokemon->GetCharacterMovement())
	{
		MovementComponent->StopMovementImmediately();
		MovementComponent->DisableMovement();
	}
}

void UPokemonFieldPresenceComponent::DisableGameplayCollision(APokemon_Parent* Pokemon) const
{
	if (!Pokemon)
	{
		return;
	}

	Pokemon->SetActorEnableCollision(false);

	if (UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent())
	{
		Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if (USkeletalMeshComponent* MeshComp = Pokemon->GetMesh())
	{
		MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}