#include "ActorComponents/PokeballCaptureComponent.h"

#include "Items/PokeBall.h"
#include "Characters/Pokemon_Parent.h"
#include "Characters/TrainerCharacter.h"

UPokeballCaptureComponent::UPokeballCaptureComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokeballCaptureComponent::InitializeCapture(APokeBall* InOwningPokeBall)
{
	OwningPokeBall = InOwningPokeBall;
}

void UPokeballCaptureComponent::HandleHit(AActor* OtherActor)
{
	HandlePokemonContact(OtherActor);
}

void UPokeballCaptureComponent::HandleBeginOverlap(AActor* OtherActor)
{
	HandlePokemonContact(OtherActor);
}

void UPokeballCaptureComponent::HandlePokemonContact(AActor* OtherActor)
{
	APokemon_Parent* HitPokemon = Cast<APokemon_Parent>(OtherActor);
	if (!IsValid(HitPokemon))
	{
		return;
	}

	if (!IsValid(OwningPokeBall))
	{
		return;
	}

	ATrainerCharacter* Trainer = Cast<ATrainerCharacter>(OwningPokeBall->GetOwner());
	if (!IsValid(Trainer))
	{
		return;
	}

	Trainer->ServerRequestCatchPokemonWithPokeball(HitPokemon);
}