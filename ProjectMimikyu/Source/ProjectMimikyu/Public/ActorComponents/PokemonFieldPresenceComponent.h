// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonFieldPresenceComponent.generated.h"

class APokemon_Parent;

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonFieldPresenceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonFieldPresenceComponent();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Field Presence")
	void PrepareForFieldRemoval();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Field Presence")
	void ReturnToFieldStorage();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayReturnEffects();

	UFUNCTION(BlueprintPure, Category = "Pokemon|Field Presence")
	bool IsPreparedForFieldRemoval() const { return bPreparedForFieldRemoval; }

private:
	APokemon_Parent* GetOwnerPokemon() const;

	void StopAIAndBrain(APokemon_Parent* Pokemon) const;
	void StopMovement(APokemon_Parent* Pokemon) const;
	void DisableGameplayCollision(APokemon_Parent* Pokemon) const;

private:
	UPROPERTY()
	TObjectPtr<APokemon_Parent> OwnerPokemon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Field Presence", meta = (AllowPrivateAccess = "true"))
	bool bPreparedForFieldRemoval = false;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Field Presence", meta = (ClampMin = "0.0"))
	float ReturnLifeSpanAfterEffects = 1.f;
};