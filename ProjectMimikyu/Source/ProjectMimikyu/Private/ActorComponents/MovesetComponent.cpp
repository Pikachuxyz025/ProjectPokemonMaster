// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/MovesetComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"

// Sets default values for this component's properties
UMovesetComponent::UMovesetComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovesetComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovesetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMovesetComponent::CommenceCommand(int32 CurrentMoveIndex)
{
	if (CurrentPokemonMoves.IsValidIndex(CurrentMoveIndex) && CurrentPokemonMoves[CurrentMoveIndex])
	{
		EnactMove(CurrentPokemonMoves[CurrentMoveIndex]);
}
}

void UMovesetComponent::EnactMove(UPokemonMoveDataAsset* MoveToUse)
{
	// Establish that the pokemon is taking action
	// Establish basic functionality based on move type
}

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
				CurrentPokemonMoves[CurrentPokemonMoves.Num() - 1]->SetInputTag(CurrentInput);

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
		FString InputName = FString::Printf(TEXT("InputTag.%s"), AbilityIndex);
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

