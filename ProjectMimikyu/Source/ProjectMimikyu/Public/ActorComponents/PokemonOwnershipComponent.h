// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/CharacterTypes.h"
#include "PokemonOwnershipComponent.generated.h"

class APokemon_Parent;

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonOwnershipComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonOwnershipComponent();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Ownership")
	void SetPokemonTrainer(AActor* NewTrainer);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Ownership")
	void ClearTrainerBindings();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Ownership")
	void SetIsCaught(bool bNewIsCaught);

	UFUNCTION(BlueprintPure, Category = "Pokemon|Ownership")
	AActor* GetCurrentTrainer() const { return CurrentTrainer; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Ownership")
	EPokemonStatus GetPokemonStatus() const { return PokemonStatus; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Ownership")
	bool IsCaught() const { return bIsCaught; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Ownership")
	bool HasTrainer() const { return CurrentTrainer != nullptr; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Ownership")
	bool IsOwnedByTrainer(const AActor* TrainerActor) const { return CurrentTrainer == TrainerActor; }

private:
	APokemon_Parent* GetOwnerPokemon() const;
	void RefreshAIControllerOwnershipState() const;

private:
	UPROPERTY()
	TObjectPtr<APokemon_Parent> OwnerPokemon;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Ownership", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<AActor> CurrentTrainer = nullptr;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Ownership", meta = (AllowPrivateAccess = "true"))
	EPokemonStatus PokemonStatus = EPokemonStatus::EPS_Wild;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Ownership", meta = (AllowPrivateAccess = "true"))
	bool bIsCaught = false;
};