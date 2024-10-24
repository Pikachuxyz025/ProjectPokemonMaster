// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PokemonStatInfoDataAsset.h"

FPokemonStatInfo UPokemonStatInfoDataAsset::FindStatInfoForTag(const FGameplayTag& StatTag, bool bLogNotFound) const
{
	for (const FPokemonStatInfo& Info : StatInformation)
	{
		if (Info.StatTag.MatchesTagExact(StatTag))
		{
			return Info;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find Info for StatTag [%s] on Stat [%s]."), *StatTag.ToString(), *GetNameSafe(this));
	}
	return FPokemonStatInfo();
}
