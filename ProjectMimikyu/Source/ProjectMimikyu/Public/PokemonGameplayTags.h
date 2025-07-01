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
	FGameplayTag Attributes_Stats_XP;
	FGameplayTag Attributes_Stats_Level;

	FGameplayTag Attributes_Meta_IncomingDamage;
	FGameplayTag Attributes_Meta_IncomingXP;

	FGameplayTag SpawnPoint_Trees;
	FGameplayTag SpawnPoint_ComeOnOut;
	FGameplayTag SpawnPoint_Bushes;

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
	FGameplayTag PokemonMoves_MoveAction_Dodging;
	FGameplayTag PokemonMoves_MoveAction_Environment;
	FGameplayTag PokemonMoves_MoveAction_Stats;

	FGameplayTag PokemonMoves_MoveType_Physical;
	FGameplayTag PokemonMoves_MoveType_Special;
	FGameplayTag PokemonMoves_MoveType_Status;

	FGameplayTag Abilities_Status_Locked;
	FGameplayTag Abilities_Status_Unlocked;
	FGameplayTag Abilities_Status_Equipped;
	FGameplayTag Abilities_Status_Eligible;

	FGameplayTag Abilities_Upgrades;

	FGameplayTag Abilities_IronDefense;
	FGameplayTag Abilities_FlashCannon;
	FGameplayTag Abilities_MachPunch;
	FGameplayTag Abilities_QuickAttack;
	FGameplayTag Abilities_Thunderbolt;
	FGameplayTag Abilities_Bite;
	FGameplayTag Abilities_AuraSphere;
	FGameplayTag Abilities_DoubleTeam;
	FGameplayTag Abilities_Dig;
	FGameplayTag Abilities_Nuzzle;
	FGameplayTag Abilities_BulletPunch;
	FGameplayTag Abilities_Earthquake;
	FGameplayTag Abilities_IronTail;
	FGameplayTag Abilities_BulletSeed;
	FGameplayTag Abilities_AirCutter;

	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;
	FGameplayTag InputTag_Dodge;
	FGameplayTag InputTag_Dodge_Jump;
	FGameplayTag InputTag_Dodge_Left;
	FGameplayTag InputTag_Dodge_Right;
	FGameplayTag InputTag_Dodge_Forward;
	FGameplayTag InputTag_Dodge_Backward;

	FGameplayTag Debuff_Chance;
	FGameplayTag Debuff_Damage;
	FGameplayTag Debuff_Duration;
	FGameplayTag Debuff_Frequency;

	FGameplayTag Buff_Chance;
	FGameplayTag Buff_DamageMultiplier;
	FGameplayTag Buff_Duration;
	FGameplayTag Buff_Frequency;

	FGameplayTag Cooldown_InputTag;
	FGameplayTag Cooldown_InputTag_1;
	FGameplayTag Cooldown_InputTag_2;
	FGameplayTag Cooldown_InputTag_3;
	FGameplayTag Cooldown_InputTag_4;

	FGameplayTag CombatSocket_Projectile;
	FGameplayTag CombatSocket_Melee_RightHand;
	FGameplayTag CombatSocket_Melee;
	FGameplayTag CombatSocket_Melee_LeftHand;
	FGameplayTag CombatSocket_Melee_Tail;

	FGameplayTag XP_Fluctuating;
	FGameplayTag XP_Slow;
	FGameplayTag XP_MediumSlow;
	FGameplayTag XP_MediumFast;
	FGameplayTag XP_Fast;
	FGameplayTag XP_Erratic;

	FGameplayTag Data_PowerPointCost;
	TMap<FGameplayTag, FGameplayTag> InputsToCooldowns;
	TMap<FGameplayTag, FGameplayTag> CooldownsToInputs;
private:
	static FPokemonGameplayTags GameplayTags;
};
