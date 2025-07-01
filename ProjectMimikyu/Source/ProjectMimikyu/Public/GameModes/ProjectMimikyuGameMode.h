// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Characters/CharacterTypes.h"
#include "Abilities/GameplayAbility.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectMimikyuGameMode.generated.h"

UCLASS(minimalapi)
class AProjectMimikyuGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProjectMimikyuGameMode();

	UPROPERTY(EditAnywhere)
	UDataTable* TypeChartDataTable;

	float TypeChartDamageMultiplier(EElementalType DamageElementType,const FPokemonTypeInfo& PokemonTypes);

	int32 CalculateEffortLevelBase(int32 BaseStat, int32 AsCurrentLevel, const FGameplayTag& StatTag);

	float NatureModifier(ENatureType CurrentNature, const FGameplayTag& StatTagToBeModified);

	UPROPERTY()
	TMap<int32, int32> MultiplierMap =
	{
		{ 0, 0 },
		{ 1, 2 },
		{ 2, 3 },
		{ 3, 4 },
		{ 4, 7 },
		{ 5, 8 },
		{ 6, 9 },
		{ 7, 14 },
		{ 8, 15 },
		{ 9, 16 },
		{ 10, 25 }
	};

	UPROPERTY()
	TMap<EElementalType, FName> TypeResponse =
	{
		{EElementalType::EET_Bug,"Bug" },
		{EElementalType::EET_Dark,"Dark" },
		{EElementalType::EET_Dragon,"Dragon" },
		{EElementalType::EET_Electric,"Electric" },
		{EElementalType::EET_Fairy,"Fairy" },
		{EElementalType::EET_Fighting,"Fighting" },
		{EElementalType::EET_Fire,"Fire" },
		{EElementalType::EET_Flying,"Flying" },
		{EElementalType::EET_Ghost,"Ghost" },
		{EElementalType::EET_Grass,"Grass" },
		{EElementalType::EET_Ground,"Ground" },
		{EElementalType::EET_Ice,"Ice" },
		{EElementalType::EET_Normal,"Normal" },
		{EElementalType::EET_Poison,"Poison" },
		{EElementalType::EET_Psychic,"Psychic" },
		{EElementalType::EET_Rock,"Rock" },
		{EElementalType::EET_Water,"Water" },
		{EElementalType::EET_Steel,"Steel" }
	};

	int32 GetExperienceAtLevel(const FGameplayTag& XPType, int32 Level);
	int32 GetExperienceNeededToLevelUp(const FGameplayTag& XPType, int32 CurrentLevel);
};



