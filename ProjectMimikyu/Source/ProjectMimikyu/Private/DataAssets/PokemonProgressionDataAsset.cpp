// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PokemonProgressionDataAsset.h"
#include "PokemonGameplayTags.h"

int32 UPokemonProgressionDataAsset::GetExperienceAtLevel(const FGameplayTag& XPType, int32 Level) const
{
	FPokemonGameplayTags XPTags = FPokemonGameplayTags::Get();
	double ExperiencePoints = 0;
	if (XPType.MatchesTagExact(XPTags.XP_Erratic))
	{
		if (Level < 50)
		{
			ExperiencePoints = (FMath::Pow(Level, 3.0) * (100 - Level)) / 50;
		}
		else if (Level >= 50 && Level < 68)
		{
			ExperiencePoints = (FMath::Pow(Level, 3.0) * (150 - Level)) / 100;
		}
		else if (Level >= 68 && Level < 98)
		{
			ExperiencePoints = (FMath::Pow(Level, 3.0) * ((1911 - (10 * Level)) / 3)) / 500;
		}
		else if (Level >= 98 && Level <= 100)
		{
			ExperiencePoints = (FMath::Pow(Level, 3.0) * (160 - Level)) / 100;
		}
	}
	if (XPType.MatchesTagExact(XPTags.XP_Fast))
	{
		ExperiencePoints = (4 * FMath::Pow(Level, 3.0)) / 5;
	}
	if (XPType.MatchesTagExact(XPTags.XP_Fluctuating))
	{
		if (Level < 15)
		{
			ExperiencePoints = (FMath::Pow(Level, 3.0) * (((Level + 1) / 3) + 24)) / 50;
		}
		else if (Level >= 15 && Level < 36)
		{
			ExperiencePoints = (FMath::Pow(Level, 3.0) * (Level + 14)) / 50;
		}
		else if (Level >= 36 && Level <= 100)
		{
			ExperiencePoints = (FMath::Pow(Level, 3.0) * ((Level / 2) + 32)) / 50;
		}
	}
	if (XPType.MatchesTagExact(XPTags.XP_MediumFast))
	{
		ExperiencePoints = FMath::Pow(Level, 3.0);
	}
	if (XPType.MatchesTagExact(XPTags.XP_MediumSlow))
	{
		ExperiencePoints = ((6 / 5) * FMath::Pow(Level, 3.0))
			- (15 * FMath::Pow(Level, 2.0))
			+ (100 * Level)
			- 140;
	}
	if (XPType.MatchesTagExact(XPTags.XP_Slow))
	{
		ExperiencePoints = (5 * FMath::Pow((double)Level, 3.0)) / 4;
	}
	return FMath::RoundToInt(ExperiencePoints);
}

int32 UPokemonProgressionDataAsset::GetExperienceNeededToLevelUp(const FGameplayTag& XPType, int32 CurrentLevel) const
{
	int32 NextLevel = CurrentLevel + 1;
	int32 ExperienceNeeded = GetExperienceAtLevel(XPType, NextLevel) - GetExperienceAtLevel(XPType, CurrentLevel);
	return ExperienceNeeded;
}
