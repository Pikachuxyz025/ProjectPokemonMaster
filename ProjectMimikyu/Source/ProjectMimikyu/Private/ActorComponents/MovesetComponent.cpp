// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/MovesetComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "DataAssets/PokemonDataAsset.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"

UMovesetComponent::UMovesetComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

/*
 //////////////////////---Depricated Not Used---//////////////////////
void UMovesetComponent::SpawnWithMoveSet(int32 CurrentPokemonLevel)
{
	if (PokemonLevelUpMoveset.Num() == 0)
		return;
	TArray<int32> PokemonLevels;
	PokemonLevelUpMoveset.GetKeys(PokemonLevels);
	for (int32 i = PokemonLevels.Num() - 1; i < PokemonLevels.Num(); i--)
	{
		if (CurrentPokemonLevel < PokemonLevels[i])
			continue;
		if (!CurrentPokemonMoves.Contains(PokemonLevelUpMoveset[PokemonLevels[i]]))
		{
			CurrentPokemonMoves.AddUnique(PokemonLevelUpMoveset[PokemonLevels[i]]);

			int32 AbilityIndex = CurrentPokemonMoves.Num();
			FString InputName = FString::Printf(TEXT("InputTag.%d"), AbilityIndex);
			FGameplayTag CurrentInput = FGameplayTag::RequestGameplayTag(FName(*InputName));

			if (CurrentInput.IsValid())
			{
				CurrentPokemonMoves[CurrentPokemonMoves.Num() - 1]->InputTag = CurrentInput;
				CurrentPokemonMoves[CurrentPokemonMoves.Num() - 1]->CooldownTag = FPokemonGameplayTags::Get().InputsToCooldowns[CurrentInput];
			}

			if (CurrentPokemonMoves.Num() == 4)
				break;
			continue;
		}
		continue;
	}
}

void UMovesetComponent::SpawnWithAbilitySet(int32 CurrentPokemonLevel)
{
	if (PokemonLevelUpAbilities.Num() == 0)
		return;

	TArray<TSubclassOf <UPokemonGameplayAbilities>> CurrentAbilities= GetGameplayAbilities(CurrentPokemonLevel);
	for (auto Ability : CurrentAbilities)
	{
		int32 AbilityIndex = CurrentAbilities.IndexOfByKey(Ability) + 1;
		FString InputName = FString::Printf(TEXT("InputTag.%d"), AbilityIndex);
		FGameplayTag CurrentInput = FGameplayTag::RequestGameplayTag(FName(*InputName));
		if (CurrentInput.IsValid() && CurrentPokemonAbilities.Contains(CurrentInput))
		{
			CurrentPokemonAbilities[CurrentInput] = Ability;
		}
	}
}

TArray<TSubclassOf<UPokemonGameplayAbilities>> UMovesetComponent::GetGameplayAbilities(const int32& CurrentPokemonLevel)
{
	TArray<int32> PokemonLevels;
	PokemonLevelUpAbilities.GetKeys(PokemonLevels);
	TArray<TSubclassOf <UPokemonGameplayAbilities>> CurrentAbilities;
	for (int32 i = PokemonLevels.Num() - 1; i < PokemonLevels.Num(); i--)
	{
		if (CurrentPokemonLevel < PokemonLevels[i])
			continue;
		if (!CurrentAbilities.Contains(PokemonLevelUpAbilities[PokemonLevels[i]]))
		{
			CurrentAbilities.AddUnique(PokemonLevelUpAbilities[PokemonLevels[i]]);
			if (CurrentAbilities.Num() == 4)
				break;
			continue;
		}
		continue;
	}
	return CurrentAbilities;
}
*/


void UMovesetComponent::SpawnWithDataMoveSet(int32 CurrentPokemonLevel, UPokemonDataAsset* PokemonMoveList)
{
	for (int32 i = CurrentPokemonLevel; i <= CurrentPokemonLevel; i--)
	{
		if (UPokemonMoveDataAsset* NewMove = PokemonMoveList->FindPokemonMoveForLevel(i))
		{
			if (!CurrentPokemonMoves.Contains(NewMove))
			{
				CurrentPokemonMoves.AddUnique(NewMove);
				int32 AbilityIndex = CurrentPokemonMoves.Num();
				FString InputName = FString::Printf(TEXT("InputTag.%d"), AbilityIndex);
				FGameplayTag CurrentInput = FGameplayTag::RequestGameplayTag(FName(*InputName));

				if (CurrentInput.IsValid())
				{
					CurrentPokemonMoves[CurrentPokemonMoves.Num() - 1]->InputTag = CurrentInput;
					CurrentPokemonMoves[CurrentPokemonMoves.Num() - 1]->CooldownTag = FPokemonGameplayTags::Get().InputsToCooldowns[CurrentInput];
				}

				if (CurrentPokemonMoves.Num() == 4)
					break;
				continue;
			}
		}
		continue;
	}
}

void UMovesetComponent::SetupMoveset(TArray<UPokemonMoveDataAsset*> NewMoveset)
{
	CurrentPokemonMoves = NewMoveset;
}

