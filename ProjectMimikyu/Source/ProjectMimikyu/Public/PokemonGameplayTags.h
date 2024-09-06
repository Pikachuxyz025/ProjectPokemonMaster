// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
/**
 * 
 */
struct FPokemonGameplayTags
{

public:
	static const FPokemonGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	FGameplayTag Attributes_Vital_HP;
	FGameplayTag Attributes_Vital_PP;
	FGameplayTag Attributes_Stats_MaxHP;
	FGameplayTag Attributes_Stats_Attack;
	FGameplayTag Attributes_Stats_SpecialAttack;
	FGameplayTag Attributes_Stats_SpecialDefense;
	FGameplayTag Attributes_Stats_Defense;
	FGameplayTag Attributes_Stats_Speed;

	FGameplayTag Damage_Status_Burned;
	FGameplayTag Damage_Status_Poisoned;
	FGameplayTag Damage_Status_Sleep;
	FGameplayTag Damage_Status_Frostbit;
	FGameplayTag Damage_Status_Paralyzed;

	FGameplayTag Damage_Response_HitReaction;
	FGameplayTag Damage_Response_Stagger;
	FGameplayTag Damage_Response_Stun;
	FGameplayTag Damage_Response_Knockback;

	FGameplayTag PokemonMoves_MoveAction_Melee;
	FGameplayTag PokemonMoves_MoveAction_Projectile;
	FGameplayTag PokemonMoves_MoveAction_Ramming;
	FGameplayTag PokemonMoves_MoveAction_Environment;
	FGameplayTag PokemonMoves_MoveAction_Stats;

	FGameplayTag PokemonMoves_MoveType_Physical;
	FGameplayTag PokemonMoves_MoveType_Special;
	FGameplayTag PokemonMoves_MoveType_Status;

	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;

private:
	static FPokemonGameplayTags GameplayTags;
};
