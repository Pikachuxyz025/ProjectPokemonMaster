// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorComponents/PokemonCombatSocketComponent.h"

#include "Characters/Pokemon_Parent.h"
#include "GameplayTags/PokemonGameplayTags.h"

UPokemonCombatSocketComponent::UPokemonCombatSocketComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokemonCombatSocketComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerPokemon = Cast<APokemon_Parent>(GetOwner());
}

APokemon_Parent* UPokemonCombatSocketComponent::GetOwnerPokemon() const
{
	return OwnerPokemon ? OwnerPokemon.Get() : Cast<APokemon_Parent>(GetOwner());
}

FName UPokemonCombatSocketComponent::GetSocketNameFromTag(const FGameplayTag& SocketTag) const
{
	const FPokemonGameplayTags& GameplayTags = FPokemonGameplayTags::Get();

	if (SocketTag.MatchesTagExact(GameplayTags.CombatSocket_Melee))
	{
		return MeleeSocketName;
	}

	if (SocketTag.MatchesTagExact(GameplayTags.CombatSocket_Projectile))
	{
		return ProjectileSocketName;
	}

	if (SocketTag.MatchesTagExact(GameplayTags.CombatSocket_Melee_RightHand))
	{
		return RightHandSocketName;
	}

	if (SocketTag.MatchesTagExact(GameplayTags.CombatSocket_Melee_LeftHand))
	{
		return LeftHandSocketName;
	}

	if (SocketTag.MatchesTagExact(GameplayTags.CombatSocket_Melee_Tail))
	{
		return TailSocketName;
	}

	return NAME_None;
}

FVector UPokemonCombatSocketComponent::GetCombatSocketLocation(const FGameplayTag& SocketTag) const
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon || !Pokemon->GetMesh())
	{
		return FVector::ZeroVector;
	}

	const FName SocketName = GetSocketNameFromTag(SocketTag);
	if (SocketName == NAME_None)
	{
		return FVector::ZeroVector;
	}

	if (!Pokemon->GetMesh()->DoesSocketExist(SocketName))
	{
		UE_LOG(LogTemp, Warning, TEXT("Combat socket '%s' does not exist on %s."),
			*SocketName.ToString(),
			*GetNameSafe(Pokemon));

		return FVector::ZeroVector;
	}

	return Pokemon->GetMesh()->GetSocketLocation(SocketName);
}