// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AIControllers/TrainerController.h"
#include "TrainerPlayerState.generated.h"

class APokemon_Parent;
struct FPokemonInfo;
class UPokemonMoveDataAsset;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnPartyUpdatedSignature, TArray<APokemon_Parent*> /*PokemonParty*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnPokemonActivationSignature, APokemon_Parent* /*ActivePokemon*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnPartyInfoUpdatedSignature, TArray<FPokemonInfo> /*PokemonParty*/);

UCLASS()
class PROJECTMIMIKYU_API ATrainerPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:

	FOnPartyUpdatedSignature OnPartyUpdatedDelegate;
	FOnPokemonActivationSignature OnPokemonActiveDelegate;
	FOnPartyInfoUpdatedSignature OnPartyInfoUpdatedDelegate;
	FOnEventCaller PokemonActiveInCombat;

	void AddToParty(APokemon_Parent* NewPokemon);
	TArray<FPokemonInfo> GetCurrentPokemonParty() { return CurrentPartyInfo; }
	
	UFUNCTION()
	void OnRep_CurrentPartyInfo();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
private:

	//UPROPERTY(VisibleAnywhere, Category = "Pokemon Party")
	//TArray<APokemon_Parent*> CurrentParty;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentPartyInfo,VisibleAnywhere, Category = "Pokemon Party")
	TArray<FPokemonInfo> CurrentPartyInfo;

	int32 PartyIndex = 0;

	UPROPERTY(Replicated,VisibleAnywhere, Category = "Pokemon Party")
	TObjectPtr<APokemon_Parent> ActivePokemon;

	UPROPERTY(Replicated, VisibleAnywhere, Category = "Pokemon Party")
	FPokemonInfo ActivePokemonInfo;

	UPROPERTY(Replicated, VisibleAnywhere, Category = "Pokemon Party")
	TObjectPtr<AActor> EngagedPokemon;

	UPROPERTY(Replicated)
	bool bIsInCombat = false;
public:

	UFUNCTION(BlueprintCallable)
	void SetPartyIndex(int32 NewIndex) { PartyIndex = NewIndex; }

	FPokemonInfo GetCurrentPokemonInfo();
	void PokemonIsOut(APokemon_Parent* PokemonOut);
	void UpdatePokemonInfoInParty(APokemon_Parent* AlteredPokemon);
	void SetTrainerIsInCombat(AActor* CombatTarget);
	bool IsCurrentPartyEmpty() const { return CurrentPartyInfo.Num() == 0; }
};
