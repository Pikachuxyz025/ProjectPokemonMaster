// Fill out your copyright notice in the Description page of Project Settings.


#include "PokemonAssetManager.h"
#include "PokemonGameplayTags.h"

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
}
