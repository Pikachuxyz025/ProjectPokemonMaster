// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "MovesetComponent.generated.h"


class UPokemonMoveDataAsset;
class 	UPokemonDataAsset;
struct FPokemonMovesetList;
class UPokemonGameplayAbilities;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UMovesetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UMovesetComponent();

public:	
	UPROPERTY(VisibleAnywhere)
	TArray< UPokemonMoveDataAsset*> CurrentPokemonMoves;

	void SetupMoveset(TArray< UPokemonMoveDataAsset*> NewMoveset);
	void SpawnWithDataMoveSet(int32 CurrentPokemonLevel, UPokemonDataAsset* PokemonMoveList);

};	
