// Fill out your copyright notice in the Description page of Project Settings.


#include "PokemonGameplayTags.h"
#include "GameplayTagsManager.h"

FPokemonGameplayTags FPokemonGameplayTags::GameplayTags;
void FPokemonGameplayTags::InitializeNativeGameplayTags()
{
	GameplayTags.Attributes_Stats_MaxHP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.MaxHP"),
		FString("The max amount of damage a Pokemon can take before death")
	);

	GameplayTags.Attributes_Stats_Attack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.Attack"),
		FString("Increases Physical Damage")
	);

	GameplayTags.Attributes_Stats_SpecialAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.SpecialAttack"),
		FString("Increases Special Damage")
	);

	GameplayTags.Attributes_Stats_Defense = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.Defense"),
		FString("Defense against Physical Damage")
	);

	GameplayTags.Attributes_Stats_SpecialDefense = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.SpecialDefense"),
		FString("Defense Against Special Damage")
	);

	GameplayTags.Attributes_Stats_Speed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.Speed"),
		FString("How fast is the Pokemon's mobility")
	);

	GameplayTags.Attributes_Vital_HP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Vital.HP"),
		FString("Amount of damage a player can take before death")
	);

	GameplayTags.Attributes_Vital_PP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Vital.PP"),
		FString("Amount of energy the pokemon has to do their moves")
	);

	GameplayTags.Damage_Response_Stun = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.Stun"),
		FString("Pokemon will become immobilized for a second when hit")
	);

	GameplayTags.Damage_Response_Stagger = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.Stagger"),
		FString("Pokemon will lose balance for a second when hit")
	);

	GameplayTags.Damage_Response_HitReaction = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.HitReaction"),
		FString("Pokemon will take a hit react")
	);

	GameplayTags.Damage_Response_Knockback = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.Knockback"),
		FString("Pokemon will be blown away by the hit")
	);

	GameplayTags.Damage_Status_Burned = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Burned"),
		FString("Halves Attack, Does Continuous Damage")
	);

	GameplayTags.Damage_Status_Frostbit = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Frostbit"),
		FString("Halves Defense, Does Continuous Damage")
	);

	GameplayTags.Damage_Status_Paralyzed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Paralyzed"),
		FString("Halves Speed, Can occasionally stun")
	);

	GameplayTags.Damage_Status_Poisoned = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Poisoned"),
		FString("Does Continuous Damage, Can be amplified")
	);

	GameplayTags.Damage_Status_Sleep = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Sleep"),
		FString("Pokemon becomes immobile")
	);

	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.1"),
		FString("Input Tag for 1 key")
	);
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.2"),
		FString("Input Tag for 2 key")
	);
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.3"),
		FString("Input Tag for 3 Key")
	);

	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.4"),
		FString("Input Tag for 4 Key")
	);

	GameplayTags.InputTag_Dodge = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge"),
		FString("Input Tag for the Dodge Key")
	);

	GameplayTags.InputTag_Dodge_Left = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Left"),
		FString("Input Tag for Dodging Left")
	);
	
	GameplayTags.InputTag_Dodge_Right = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Right"),
		FString("Input Tag for Dodging Right")
	);

	GameplayTags.InputTag_Dodge_Forward = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Forward"),
		FString("Input Tag for Dodging Forward")
	);

	GameplayTags.InputTag_Dodge_Backward = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Backward"),
		FString("Input Tag for Dodging Backward")
	);

	GameplayTags.PokemonMoves_MoveAction_Melee = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Melee"),
		FString("Pokemon goes to an ideal range and hits the target")
	);

	GameplayTags.PokemonMoves_MoveAction_Projectile = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Projectile"),
		FString("Pokemon fires off a projectile at target")
	);

	GameplayTags.PokemonMoves_MoveAction_Ramming = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Ramming"),
		FString("Pokemon has to run into or through the target")
	);

	GameplayTags.PokemonMoves_MoveAction_Environment = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Environment"),
		FString("Pokemon adds an effect that changes the field")
	);

	GameplayTags.PokemonMoves_MoveAction_Stats = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Stats"),
		FString("Pokemon add a stat change")
	);

	GameplayTags.PokemonMoves_MoveType_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveType.Physical"),
		FString("Moves that account for Attack and Defense")
	);

	GameplayTags.PokemonMoves_MoveType_Special = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveType.Special"),
		FString("Moves that account for Special Attack and Special Defense")
	);

	GameplayTags.PokemonMoves_MoveType_Status = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveType.Status"),
		FString("Moves that account for stat or status changes")
	);
}
