// Fill out your copyright notice in the Description page of Project Settings.


#include "PokemonAssetManager.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"

UPokemonAssetManager& UPokemonAssetManager::Get()
{
	check(GEngine);
	UPokemonAssetManager* PokemonAssetManager= Cast<UPokemonAssetManager>(GEngine->AssetManager);
	return *PokemonAssetManager;
}

void UPokemonAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FPokemonGameplayTags::InitializeNativeGameplayTags();
	FPokemonCombatGameplayTags::InitializeNativeGameplayTags();
}
