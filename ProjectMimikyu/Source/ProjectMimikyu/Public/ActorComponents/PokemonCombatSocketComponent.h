// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "PokemonCombatSocketComponent.generated.h"

class APokemon_Parent;

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonCombatSocketComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonCombatSocketComponent();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pokemon|Combat Socket")
	FVector GetCombatSocketLocation(const FGameplayTag& SocketTag) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pokemon|Combat Socket")
	FName GetSocketNameFromTag(const FGameplayTag& SocketTag) const;

private:
	APokemon_Parent* GetOwnerPokemon() const;

private:
	UPROPERTY()
	TObjectPtr<APokemon_Parent> OwnerPokemon;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Combat Socket")
	FName ProjectileSocketName = NAME_None;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Combat Socket")
	FName MeleeSocketName = NAME_None;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Combat Socket")
	FName TailSocketName = NAME_None;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Combat Socket")
	FName LeftHandSocketName = NAME_None;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Combat Socket")
	FName RightHandSocketName = NAME_None;
};