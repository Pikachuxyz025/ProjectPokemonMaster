// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/PokemonIncapacitationComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UPokemonIncapacitationComponent::UPokemonIncapacitationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPokemonIncapacitationComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UPokemonIncapacitationComponent::StopCombatAndMovement()
{if(!OwnerPokemon)
{
	return;
}
OwnerPokemon->ActivePokemonMove = nullptr;
OwnerPokemon->OnAttackEnd.Broadcast();

if (UCharacterMovementComponent* CharMove = OwnerPokemon->GetCharacterMovement())
{
	CharMove->StopMovementImmediately();
	CharMove->DisableMovement();
}


// Called every frame
void UPokemonIncapacitationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

