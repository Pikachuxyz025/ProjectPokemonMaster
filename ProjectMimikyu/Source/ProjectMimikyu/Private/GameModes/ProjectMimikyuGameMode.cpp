// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameModes/ProjectMimikyuGameMode.h"
#include "Characters/ProjectMimikyuCharacter.h"
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
