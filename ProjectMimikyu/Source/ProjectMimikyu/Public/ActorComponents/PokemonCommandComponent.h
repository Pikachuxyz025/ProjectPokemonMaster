// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Command/PokemonCommandTypes.h"
#include "PokemonCommandComponent.generated.h"

class APokemon_Parent;
class UPokemonMoveDataAsset;

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonCommandComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonCommandComponent();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	bool TryCallCommand(int32 MoveIndex);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void AttackEnded();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void SetCommandTarget(const FPokemonCommandTarget& NewCommandTarget);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void ClearCommandTarget();

	const FPokemonCommandTarget& GetCommandTarget() const { return CurrentCommandTarget; }

	FPokemonCommandTarget BuildCommandTargetFromHit(const FHitResult& Hit) const;
	void SetCommandTargetFromHit(const FHitResult& Hit);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void Dodge(const FVector& NewDodgeDirection);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void EndDodge();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void SelectRandomMove();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void ClearActiveMove();

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	UPokemonMoveDataAsset* GetActiveMove() const { return ActivePokemonMove; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	bool IsCommandActive() const { return ActivePokemonMove != nullptr; }

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void SetIsDodging(bool bNewDodging) { bIsDodging = bNewDodging; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	bool IsDodging() const { return bIsDodging; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	bool IsUsingMove() const { return bIsUsingMove; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	FVector GetDodgeDirection() const { return DodgeDirection; }

private:
	APokemon_Parent* GetOwnerPokemon() const;

private:
	UPROPERTY()
	TObjectPtr<APokemon_Parent> OwnerPokemon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPokemonMoveDataAsset> ActivePokemonMove = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	FPokemonCommandTarget CurrentCommandTarget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	bool bIsCharging = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	bool bIsDodging = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	bool bIsUsingMove = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	FVector DodgeDirection = FVector::ZeroVector;

	FTimerHandle ChargeTimer;
};