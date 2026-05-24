// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/CharacterTypes.h"
#include "TrainerQuickSlotComponent.generated.h"

class AProjectMimikyuCharacter;
class APokemon_Parent;
class AProjectile;
class UInventorySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuickSlotModeChanged, ESlotType, NewMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnQuickSlotSelectionChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UTrainerQuickSlotComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UTrainerQuickSlotComponent();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	TObjectPtr<AProjectMimikyuCharacter> OwnerCharacter;

	UPROPERTY()
	TObjectPtr<UInventorySystemComponent> InventorySystem;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	ESlotType CurrentSlotMode = ESlotType::EST_PokemonParty;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	int32 PartyIndex = 0;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	int32 InventoryIndex = 0;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	FName SelectedThrowableItemID = NAME_None;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	TSubclassOf<AProjectile> SelectedThrowableProjectileClass = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	TObjectPtr<APokemon_Parent> SelectedPokemon = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	TArray<TObjectPtr<APokemon_Parent>> CachedPokemonParty;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	TArray<FSlotInfo> CachedThrowableContent;

public:
	UPROPERTY(BlueprintAssignable, Category = "Quick Slots")
	FOnQuickSlotModeChanged OnQuickSlotModeChanged;

	UPROPERTY(BlueprintAssignable, Category = "Quick Slots")
	FOnQuickSlotSelectionChanged OnQuickSlotSelectionChanged;

public:	

	void InitializeQuickSlots(AProjectMimikyuCharacter* InOwnerCharacter);

	UFUNCTION()
	void RefreshParty(const TArray<APokemon_Parent*>& NewParty);

	UFUNCTION()
	void RefreshInventory();

	void SwapSlotMode();
	void ShiftLeft();
	void ShiftRight();

	void SetSlotMode(ESlotType NewMode);

	ESlotType GetCurrentSlotMode() const { return CurrentSlotMode; }

	int32 GetPartyIndex() const { return PartyIndex; }
	int32 GetInventoryIndex() const { return InventoryIndex; }

	APokemon_Parent* GetSelectedPokemon() const { return SelectedPokemon; }

	FName GetSelectedThrowableItemID() const { return SelectedThrowableItemID; }
	TSubclassOf<AProjectile> GetSelectedThrowableProjectileClass() const { return SelectedThrowableProjectileClass; }

	const TArray<TObjectPtr<APokemon_Parent>>& GetCachedPokemonParty() const { return CachedPokemonParty; }
	const TArray<FSlotInfo>& GetCachedThrowableContent() const { return CachedThrowableContent; }

	bool HasSelectedPokemon() const;
	bool HasSelectedThrowableItem() const;

private:
	void RebuildSelection();
	void RebuildPokemonSelection();
	void RebuildInventorySelection();

	void SetIndexLeft(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex);
	void SetIndexRight(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex);
};
