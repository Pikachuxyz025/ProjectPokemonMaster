// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonAbilitySystemGlobals.h"
#include "PokemonAbilityTypes.h"

FGameplayEffectContext* UPokemonAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FPokemonGameplayEffectContext();
}
