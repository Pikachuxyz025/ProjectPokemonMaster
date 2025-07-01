// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameModes/ProjectMimikyuGameMode.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "PokemonGameplayTags.h"
#include "UObject/ConstructorHelpers.h"

AProjectMimikyuGameMode::AProjectMimikyuGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

float AProjectMimikyuGameMode::TypeChartDamageMultiplier(EElementalType DamageElementType, const FPokemonTypeInfo& PokemonTypes)
{
	FString FirstTypeContextString;
	float X = 1;
	float Y = 1;
	FTypeChartMatchup* FirstTypeChart;
	FTypeChartMatchup* SecondTypeChart;

	FirstTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[PokemonTypes.FirstType], FirstTypeContextString, true);
	X = FirstTypeChart->TypeResponse[DamageElementType];
	if (PokemonTypes.SecondType != EElementalType::EET_None)
	{
		SecondTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[PokemonTypes.SecondType], FirstTypeContextString, true);
		Y = SecondTypeChart->TypeResponse[DamageElementType];
	}

	return X*Y;
}

int32 AProjectMimikyuGameMode::CalculateEffortLevelBase(int32 BaseStat, int32 AsCurrentLevel, const FGameplayTag& StatTag)
{
	return int32();
}

float AProjectMimikyuGameMode::NatureModifier(ENatureType CurrentNature, const FGameplayTag& StatTagToBeModified)
{
	return 0.0f;
}

int32 AProjectMimikyuGameMode::GetExperienceAtLevel(const FGameplayTag& XPType, int32 Level)
{
	FPokemonGameplayTags XPTags = FPokemonGameplayTags::Get();
	int32 ExperiencePoints = 0;
	if (XPType.MatchesTagExact(XPTags.XP_Erratic))
	{
		if (Level < 50)
		{
			ExperiencePoints = int32((FMath::Cube(Level) * (100 - Level)) / 50);
		}
		else if (Level >= 50 && Level < 68)
		{
			ExperiencePoints = int32((FMath::Cube(Level) * (150 - Level)) / 100);
		}
		else if (Level >= 68 && Level < 98)
		{
			ExperiencePoints = int32((FMath::Cube(Level) * ((1911 - (10 * Level)) / 3)) / 500);
		}
		else if (Level >= 98 && Level <= 100)
		{
			ExperiencePoints = int32((FMath::Cube(Level) * (160 - Level)) / 100);
		}
	}
	if (XPType.MatchesTagExact(XPTags.XP_Fast))
	{
		ExperiencePoints = int32((4 * FMath::Cube(Level)) / 5);
	}
	if (XPType.MatchesTagExact(XPTags.XP_Fluctuating))
	{
		if (Level < 15)
		{
			ExperiencePoints = int32((FMath::Cube(Level) * (((Level + 1) / 3) + 24)) / 50);
		}
		else if (Level >= 15 && Level < 36)
		{
			ExperiencePoints = int32((FMath::Cube(Level) * (Level + 14)) / 50);
		}
		else if (Level >= 36 && Level <= 100)
		{
			ExperiencePoints = int32(((FMath::Cube(Level) * ((Level / 2) + 32)) / 50));
		}
	}
	if(XPType.MatchesTagExact(XPTags.XP_MediumFast))
	{
		ExperiencePoints = int32(FMath::Cube(Level));
	}
	if (XPType.MatchesTagExact(XPTags.XP_MediumSlow))
	{
		ExperiencePoints = int32(((6 / 5) * FMath::Cube(Level)) - (15 * FMath::Square(Level)) + (100 * Level) - 140);
	}
	if (XPType.MatchesTagExact(XPTags.XP_Slow))
	{
		ExperiencePoints = int32((5 * FMath::Cube(Level)) / 4);
	}
	return ExperiencePoints;
}

int32 AProjectMimikyuGameMode::GetExperienceNeededToLevelUp(const FGameplayTag& XPType, int32 CurrentLevel)
{
	int32 NextLevel = CurrentLevel+1;
	int32 ExperienceNeeded = GetExperienceAtLevel(XPType, NextLevel) - GetExperienceAtLevel(XPType, CurrentLevel);
	return ExperienceNeeded;
}
