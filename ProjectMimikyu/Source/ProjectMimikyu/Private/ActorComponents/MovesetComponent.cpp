// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/MovesetComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "DataAssets/PokemonDataAsset.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"

UMovesetComponent::UMovesetComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

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

