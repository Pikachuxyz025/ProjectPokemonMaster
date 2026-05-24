// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/TrainerQuickSlotComponent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "Characters/Pokemon_Parent.h"

UTrainerQuickSlotComponent::UTrainerQuickSlotComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UTrainerQuickSlotComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<AProjectMimikyuCharacter>(GetOwner());

	if (OwnerCharacter)
	{
		InitializeQuickSlots(OwnerCharacter);
	}
}

void UTrainerQuickSlotComponent::InitializeQuickSlots(AProjectMimikyuCharacter* InOwnerCharacter)
{
	OwnerCharacter = InOwnerCharacter;

	if(!OwnerCharacter)
		{
		UE_LOG(LogTemp, Warning, TEXT("TrainerQuickSlotComponent: Owner character is null"));
		return;
	}

	InventorySystem = OwnerCharacter->GetInventorySystem();

	RefreshParty(OwnerCharacter->GetCurrentParty());
	RefreshInventory();

	RebuildSelection();
}

void UTrainerQuickSlotComponent::RefreshParty(const TArray<APokemon_Parent*>& NewParty)
{
	CachedPokemonParty.Reset();

	for (APokemon_Parent* Pokemon : NewParty)
	{
		CachedPokemonParty.Add(Pokemon);
	}

	if (PartyIndex >= CachedPokemonParty.Num())
	{
		PartyIndex = FMath::Max(0, CachedPokemonParty.Num() - 1);
	}

	RebuildSelection();
}

void UTrainerQuickSlotComponent::RefreshInventory()
{
	CachedThrowableContent.Reset();

	if (InventorySystem)
	{
		CachedThrowableContent = InventorySystem->GetThrowableContent();
	}

	if (InventoryIndex >= CachedThrowableContent.Num())
	{
		InventoryIndex = FMath::Max(0, CachedThrowableContent.Num() - 1);
	}

	RebuildSelection();
}

void UTrainerQuickSlotComponent::SwapSlotMode()
{
	if (CurrentSlotMode == ESlotType::EST_PokemonParty)
	{
		SetSlotMode(ESlotType::EST_Inventory);
	}
	else 
	{
		SetSlotMode(ESlotType::EST_PokemonParty);
	}
}

void UTrainerQuickSlotComponent::SetSlotMode(ESlotType NewMode)
{
	if (CurrentSlotMode == NewMode)
		return;

	CurrentSlotMode = NewMode;

	RebuildSelection();

	OnQuickSlotModeChanged.Broadcast(CurrentSlotMode);
	OnQuickSlotSelectionChanged.Broadcast();
}

void UTrainerQuickSlotComponent::ShiftLeft()
{
	switch (CurrentSlotMode)
	{
	case ESlotType::EST_PokemonParty:
		if (CachedPokemonParty.Num() < 2)
			return;

		SetIndexLeft(PartyIndex, 0, CachedPokemonParty.Num() - 1);
		break;

	case ESlotType::EST_Inventory:
		if (CachedThrowableContent.Num() < 2)
			return;

		SetIndexLeft(InventoryIndex, 0, CachedThrowableContent.Num() - 1);
		break;
	default:
	return;
	}

	RebuildSelection();

	OnQuickSlotSelectionChanged.Broadcast();
}

void UTrainerQuickSlotComponent::ShiftRight()
{
	switch (CurrentSlotMode)
	{
	case ESlotType::EST_PokemonParty:
		if (CachedPokemonParty.Num() < 2)
			return;

		SetIndexRight(PartyIndex, 0, CachedPokemonParty.Num() - 1);
		break;

	case ESlotType::EST_Inventory:
		if (CachedThrowableContent.Num() < 2)
			return;

		SetIndexRight(InventoryIndex, 0, CachedThrowableContent.Num() - 1);
		break;
	default:
	return;
	}

	RebuildSelection();
	OnQuickSlotSelectionChanged.Broadcast();
}

void UTrainerQuickSlotComponent::RebuildSelection()
{
	switch (CurrentSlotMode)
	{
	case ESlotType::EST_PokemonParty:
		RebuildPokemonSelection();
		break;

	case ESlotType::EST_Inventory:
		RebuildInventorySelection();
		break;

	default:
		SelectedPokemon = nullptr;
		SelectedThrowableItemID = NAME_None;
		SelectedThrowableProjectileClass = nullptr;
		break;
	}
}

void UTrainerQuickSlotComponent::RebuildPokemonSelection()
{
	SelectedThrowableItemID = NAME_None;
	SelectedThrowableProjectileClass = nullptr;

	if (!CachedPokemonParty.IsValidIndex(PartyIndex))
	{
		SelectedPokemon = nullptr;
		return;
	}

	SelectedPokemon = CachedPokemonParty[PartyIndex];
}

void UTrainerQuickSlotComponent::RebuildInventorySelection()
{
	SelectedPokemon = nullptr;
	SelectedThrowableItemID = NAME_None;
	SelectedThrowableProjectileClass = nullptr;

	if (!InventorySystem)
	{
		return;
	}

	if (!CachedThrowableContent.IsValidIndex(InventoryIndex))
	{
		return;
	}

	const FSlotInfo& SelectedSlot = CachedThrowableContent[InventoryIndex];

	if (SelectedSlot.ItemName.IsNone() || SelectedSlot.Quantity <= 0)
	{
		return;
	}

	FInventoryItemInfo* ItemInfo = InventorySystem->GetInventoryItemInfo(SelectedSlot.ItemName);

	if (!ItemInfo || !ItemInfo->bIsThrowable || !ItemInfo->ProjectileClass)
	{
		return;
	}


	SelectedThrowableItemID = SelectedSlot.ItemName;
	SelectedThrowableProjectileClass = ItemInfo->ProjectileClass;
}

bool UTrainerQuickSlotComponent::HasSelectedPokemon() const
{
	return IsValid(SelectedPokemon);
}

bool UTrainerQuickSlotComponent::HasSelectedThrowableItem() const
{
	return !SelectedThrowableItemID.IsNone() && SelectedThrowableProjectileClass != nullptr;
}

void UTrainerQuickSlotComponent::SetIndexLeft(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex)
{
	CurrentIndex--;

	if (CurrentIndex < LowestIndex)
	{
		CurrentIndex = HighestIndex;
	}
}

void UTrainerQuickSlotComponent::SetIndexRight(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex)
{
	CurrentIndex++;

	if (CurrentIndex > HighestIndex)
	{
		CurrentIndex = LowestIndex;
	}
}
