// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/CharacterTypes.h"
#include "PokemonMove.generated.h"

class UTextBlock;
class UProgressBar;
class UPokemonMoveDataAsset;
UCLASS()
class PROJECTMIMIKYU_API UPokemonMove : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* MoveReloadingBar;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* PokemonMoveName;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	UPokemonMoveDataAsset* CurrentPokemonMove;

	void SetCurrentPokemonMove(UPokemonMoveDataAsset* NewPokemonMove);

	void SetName(FText NewName);
};
