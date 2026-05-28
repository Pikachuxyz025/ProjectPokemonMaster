// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/CharacterTypes.h"
#include "InventorySystemComponent.h"
#include "TrainerQuickSlotComponent.generated.h"


class AProjectMimikyuCharacter;
class APokemon_Parent;
class AProjectile;
class UInventorySystemComponent;
class ATrainerPlayerState;

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
	TObjectPtr<ATrainerPlayerState> TrainerPlayerState;

	UPROPERTY()
	TObjectPtr<UInventorySystemComponent> InventorySystem;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	ESlotType CurrentSlotMode = ESlotType::EST_PokemonParty;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	int32 PartyIndex = 0;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	int32 InventoryIndex = 0;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	TArray<FPokemonInfo> CachedPartyInfo;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	TArray<FInventoryDisplayInfo> CachedThrowableContent;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	FPokemonInfo SelectedPokemonInfo;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	bool bHasSelectedPokemonInfo = false;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	FInventoryDisplayInfo SelectedThrowableInfo;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	FName SelectedThrowableItemID = NAME_None;

	UPROPERTY(VisibleAnywhere, Category = "Quick Slots")
	TSubclassOf<AProjectile> SelectedThrowableProjectileClass = nullptr;

public:
	UPROPERTY(BlueprintAssignable, Category = "Quick Slots")
	FOnQuickSlotModeChanged OnQuickSlotModeChanged;

	UPROPERTY(BlueprintAssignable, Category = "Quick Slots")
	FOnQuickSlotSelectionChanged OnQuickSlotSelectionChanged;

public:	

	void InitializeQuickSlots(AProjectMimikyuCharacter* InOwnerCharacter);

	UFUNCTION()
	void RefreshInventory();

	void RefreshPartyInfo(const TArray<FPokemonInfo>& NewPartyInfo);

	void SwapSlotMode();
	void SetSlotMode(ESlotType NewMode);

	void ShiftLeft();
	void ShiftRight();

	ESlotType GetCurrentSlotMode() const { return CurrentSlotMode; }

	int32 GetPartyIndex() const { return PartyIndex; }
	int32 GetInventoryIndex() const { return InventoryIndex; }

	const TArray<FPokemonInfo>& GetCachedPartyInfo() const { return CachedPartyInfo; }
	const TArray<FInventoryDisplayInfo>& GetCachedThrowableContent() const { return CachedThrowableContent; }

	bool HasSelectedPokemonInfo() const { return bHasSelectedPokemonInfo; }
	const FPokemonInfo& GetSelectedPokemonInfo() const { return SelectedPokemonInfo; }

	bool HasSelectedThrowableItem() const;
	FName GetSelectedThrowableItemID() const { return SelectedThrowableItemID; }
	TSubclassOf<AProjectile> GetSelectedThrowableProjectileClass() const { return SelectedThrowableProjectileClass; }

private:
	void RebuildSelection();
	void RebuildPokemonSelection();
	void RebuildInventorySelection();

	void SetIndexLeft(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex);
	void SetIndexRight(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex);
};
