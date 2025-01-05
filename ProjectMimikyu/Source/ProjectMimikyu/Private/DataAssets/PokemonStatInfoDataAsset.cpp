// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PokemonStatInfoDataAsset.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Interfaces/PokemonCombatInterface.h"

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

void UPokemonStatInfoDataAsset::AddToEffortValueInfo(const FGameplayTag& StatTag, bool bLogNotFound)
{
	for (FPokemonStatInfo& Info : StatInformation)
	{
		if (Info.StatTag.MatchesTagExact(StatTag))
		{
			int32 NewEffortLevel = Info.EffortLevelValue + 1;
			Info.EffortLevelValue = NewEffortLevel;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find Info for StatTag [%s] on Stat [%s]."), *StatTag.ToString(), *GetNameSafe(this));
		return;
	}
}

void UPokemonStatInfoDataAsset::SetAttributeInfo(const FGameplayTag& AttributeTag, const FGameplayAttribute& Attribute) 
{
	check(PokemonAttributes);
	for (FPokemonStatInfo& Info : StatInformation)
	{
		if (Info.StatTag.MatchesTagExact(AttributeTag))
		{
			Info.StatValue = Attribute.GetNumericValue(PokemonAttributes);
		}
	}
	//FPokemonStatInfo Info = FindStatInfoForTag(AttributeTag);

}

void UPokemonStatInfoDataAsset::SetPokemonAttribute(UPokemonBaseAttributeSet* NewPokemonAttribute)
{
	PokemonAttributes = NewPokemonAttribute;

	for (auto& Pair : PokemonAttributes->TagsToAttributes)
	{
		SetAttributeInfo(Pair.Key, Pair.Value());
	}
}
