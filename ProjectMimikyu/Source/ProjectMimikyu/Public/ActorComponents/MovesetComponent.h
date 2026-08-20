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

USTRUCT(BlueprintType)
struct FPokemonMoveRuntimeState
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UPokemonMoveDataAsset> MoveData = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayTag InputTag = FGameplayTag();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 CurrentPowerPoints = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 MaxPowerPoints = 0;


	
	 // Server world time at which a depleted move finishes recharging. Zero means no active recharge.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float RechargeEndServerTime = 0.f;

	bool HasPowerPoints() const
	{
		return CurrentPowerPoints > 0;
	}

	bool IsDepleted() const
	{
		return CurrentPowerPoints <= 0;
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UMovesetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UMovesetComponent();

public:	

	UPROPERTY(VisibleAnywhere)
	TArray< UPokemonMoveDataAsset*> CurrentPokemonMoves;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Moves")
	TArray<FPokemonMoveRuntimeState> MoveRuntimeStates;

	void SetupMoveset(TArray< UPokemonMoveDataAsset*> NewMoveset);
	void SpawnWithDataMoveSet(int32 CurrentPokemonLevel, UPokemonDataAsset* PokemonMoveList);

};	
