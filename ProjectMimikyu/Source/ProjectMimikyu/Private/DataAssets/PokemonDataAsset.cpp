// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PokemonDataAsset.h"

int32 UPokemonDataAsset::GetStatFromTag(const FGameplayTag& StatTag)
{
	if (TagsToBaseStats.Contains(StatTag))
		return TagsToBaseStats[StatTag];
	return 0;
}

FText UPokemonDataAsset::GetNameFromTag(const FGameplayTag& StatTag)
{
	if (TagsToNames.Contains(StatTag))
		return TagsToNames[StatTag];
	return FText();
}

UPokemonMoveDataAsset* UPokemonDataAsset::FindPokemonMoveForLevel(int32 CurrentLevel)
{
	for (FPokemonMovesetList MoveInfo : PokemonMoveInfo)
	{
		if (MoveInfo.LevelLearned == CurrentLevel)
		{
			int32 MoveCount = MoveInfo.PokemonMovesLearntAtLevel.Num();
			if (MoveCount > 1)
			{
				int32 SelectIndex = FMath::RandRange(0, MoveCount - 1);
				return MoveInfo.PokemonMovesLearntAtLevel[SelectIndex];
			}
			else
				return MoveInfo.PokemonMovesLearntAtLevel[0];
		}
	}
	return nullptr;
}

FPokemonStatInfo UPokemonDataAsset::CreateStatInfo(const FGameplayTag StatTag, const float PokemonStatValue)
{
	FPokemonStatInfo Info;
	Info.StatTag = StatTag;
	Info.StatValue = PokemonStatValue;
	Info.StatBaseValue = GetStatFromTag(StatTag);
	Info.StatName = GetNameFromTag(StatTag);
	return Info;
}
