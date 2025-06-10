// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonGameplayTags.h"
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
    FPokemonGameplayTags GameplayTags=FPokemonGameplayTags::Get();

public:	

	UPROPERTY(EditDefaultsOnly)
	TMap<int32, UPokemonMoveDataAsset*> PokemonLevelUpMoveset;

	UPROPERTY(EditDefaultsOnly)
	TMap<int32, TSubclassOf<UPokemonGameplayAbilities>> PokemonLevelUpAbilities;

	UPROPERTY(VisibleAnywhere)
	TArray< UPokemonMoveDataAsset*> CurrentPokemonMoves;

	TMap<FGameplayTag, TSubclassOf<UPokemonGameplayAbilities>> CurrentPokemonAbilities=
	{
		{GameplayTags.InputTag_1,nullptr},
		{GameplayTags.InputTag_2,nullptr},
		{GameplayTags.InputTag_3,nullptr},
		{GameplayTags.InputTag_4,nullptr}
	};

	void SpawnWithMoveSet(int32 CurrentPokemonLevel);
	void SpawnWithAbilitySet(int32 CurrentPokemonLevel);
	void SetupMoveset(TArray< UPokemonMoveDataAsset*> NewMoveset);
	void SpawnWithDataMoveSet(int32 CurrentPokemonLevel, UPokemonDataAsset* PokemonMoveList);
private:

TArray<TSubclassOf <UPokemonGameplayAbilities>> GetGameplayAbilities(const int32& CurrentPokemonLevel);
};	
