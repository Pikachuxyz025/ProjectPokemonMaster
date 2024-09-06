// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovesetComponent.generated.h"

class UPokemonMoveDataAsset;
class UPokemonGameplayAbilities;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UMovesetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovesetComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly)
	TMap<int32, UPokemonMoveDataAsset*> PokemonLevelUpMoveset;

	UPROPERTY(EditDefaultsOnly)
	TMap<int32, TSubclassOf<UPokemonGameplayAbilities>> PokemonLevelUpAbilities;

	UPROPERTY(EditDefaultsOnly)
	TArray<int32> AvailibleTMMoves;

	UPROPERTY(VisibleAnywhere)
	TArray< UPokemonMoveDataAsset*> CurrentPokemonMoves;

	TMap<FGameplayTag, UPokemonGameplayAbilities> CurrentPokemonAbilities;

	void CommenceCommand(int32 CurrentMoveIndex);
	void EnactMove(UPokemonMoveDataAsset* MoveToUse);
	void SpawnWithMoveSet(int32 CurrentPokemonLevel);
private:

};
