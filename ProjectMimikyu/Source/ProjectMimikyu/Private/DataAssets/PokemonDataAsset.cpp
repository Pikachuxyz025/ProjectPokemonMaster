// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PokemonDataAsset.h"

int32 UPokemonDataAsset::GetStatFromTag(const FGameplayTag& StatTag)
{
	if (TagsToBaseStats.Contains(StatTag))
		return TagsToBaseStats[StatTag];
	return 0;
}
