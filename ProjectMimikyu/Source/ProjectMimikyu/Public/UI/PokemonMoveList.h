// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/CharacterTypes.h"
#include "PokemonMoveList.generated.h"

class UPokemonMove;
class UPokemonMoveDataAsset;

UCLASS()
class PROJECTMIMIKYU_API UPokemonMoveList : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<UPokemonMove*> PokemonMoves;

	void SetupMoveList(TMap<EDirectionPoint, UPokemonMoveDataAsset*> NewMoveSet);
};
