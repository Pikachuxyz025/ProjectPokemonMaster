// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Net/UnrealNetwork.h"

UPokemonBaseAttributeSet::UPokemonBaseAttributeSet()
{
}

void UPokemonBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, SpecialAttack, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, SpecialDefense, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Defense, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Attack, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Speed, COND_None, REPNOTIFY_Always);
}

void UPokemonBaseAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Health, OldHealth);
}

void UPokemonBaseAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, MaxHealth, OldMaxHealth);
}

void UPokemonBaseAttributeSet::OnRep_Speed(const FGameplayAttributeData& OldSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Speed, OldSpeed);
}

void UPokemonBaseAttributeSet::OnRep_SpecialAttack(const FGameplayAttributeData& OldSpecialAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, SpecialAttack, OldSpecialAttack);
}

void UPokemonBaseAttributeSet::OnRep_SpecialDefense(const FGameplayAttributeData& OldSpecialDefense) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, SpecialDefense, OldSpecialDefense);
}

void UPokemonBaseAttributeSet::OnRep_Attack(const FGameplayAttributeData& OldAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Attack, OldAttack);
}

void UPokemonBaseAttributeSet::OnRep_Defense(const FGameplayAttributeData& OldDefense) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Defense, OldDefense);
}
