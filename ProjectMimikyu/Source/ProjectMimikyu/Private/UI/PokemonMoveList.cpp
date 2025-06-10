// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PokemonMoveList.h"
#include "UI/PokemonMove.h"

void UPokemonMoveList::SetupMoveList(TMap<EDirectionPoint, UPokemonMoveDataAsset*> NewMoveSet)
{
	for (int32 i = 0; i < PokemonMoves.Num(); i++)
	{
		EDirectionPoint GamepadDirection = static_cast<EDirectionPoint>(i);
		if (NewMoveSet.Contains(GamepadDirection))
		{
			//PokemonMoves[i]->SetCurrentPokemonMove(NewMoveSet[GamepadDirection]);
		}
		else
			continue;
	}
}
