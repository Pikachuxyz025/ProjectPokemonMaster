// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/TrainerQuickSlotComponent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "Player/TrainerPlayerState.h"
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
	TrainerPlayerState = OwnerCharacter->GetPlayerState<ATrainerPlayerState>();

	if (TrainerPlayerState)
	{
		RefreshPartyInfo(TrainerPlayerState->GetCurrentPokemonParty());
	
		TrainerPlayerState->OnPartyInfoUpdatedDelegate.AddLambda(
			[this](const TArray<FPokemonInfo>& NewPartyInfo)
			{
				RefreshPartyInfo(NewPartyInfo);
			}
		);
	}

	if (InventorySystem)
	{
		InventorySystem->OnInventoryUpdated.AddUniqueDynamic(this, &UTrainerQuickSlotComponent::RefreshInventory);
	}

	RefreshInventory();
	RebuildSelection();
}

void UTrainerQuickSlotComponent::RefreshInventory()
{
	CachedThrowableContent.Reset();

	if (InventorySystem)
	{
		CachedThrowableContent = InventorySystem->GetThrowableDisplayItems();
	}

	if (InventoryIndex >= CachedThrowableContent.Num())
	{
		InventoryIndex = FMath::Max(0, CachedThrowableContent.Num() - 1);
	}

	RebuildSelection();
	OnQuickSlotSelectionChanged.Broadcast();
}

void UTrainerQuickSlotComponent::RefreshPartyInfo(const TArray<FPokemonInfo>& NewPartyInfo)
{
	CachedPartyInfo = NewPartyInfo;

	if (PartyIndex >= CachedPartyInfo.Num())
	{
		PartyIndex = FMath::Max(0, CachedPartyInfo.Num() - 1);
	}

	RebuildSelection();
	OnQuickSlotSelectionChanged.Broadcast();
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
		if (CachedPartyInfo.Num() < 2)
			return;

		SetIndexLeft(PartyIndex, 0, CachedPartyInfo.Num() - 1);
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
		if (CachedPartyInfo.Num() < 2)
			return;

		SetIndexRight(PartyIndex, 0, CachedPartyInfo.Num() - 1);
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
		bHasSelectedPokemonInfo = false;
		SelectedThrowableItemID = NAME_None;
		SelectedThrowableProjectileClass = nullptr;
		break;
	}
}

void UTrainerQuickSlotComponent::RebuildPokemonSelection()
{
	SelectedThrowableItemID = NAME_None;
	SelectedThrowableProjectileClass = nullptr;
	SelectedThrowableInfo = FInventoryDisplayInfo();

	bHasSelectedPokemonInfo = false;
	SelectedPokemonInfo = FPokemonInfo();

	if (!CachedPartyInfo.IsValidIndex(PartyIndex))
	{
		return;
	}

	SelectedPokemonInfo = CachedPartyInfo[PartyIndex];

	if (SelectedPokemonInfo.PartyMode == EPartyStatus::EPS_Empty)
	{
		return;
	}

	bHasSelectedPokemonInfo = true;
}

void UTrainerQuickSlotComponent::RebuildInventorySelection()
{
	bHasSelectedPokemonInfo = false;
	SelectedPokemonInfo = FPokemonInfo();

	SelectedThrowableInfo = FInventoryDisplayInfo();
	SelectedThrowableItemID = NAME_None;
	SelectedThrowableProjectileClass = nullptr;

	if (!CachedThrowableContent.IsValidIndex(InventoryIndex))
	{
		return;
	}

	const FInventoryDisplayInfo& SelectedItem = CachedThrowableContent[InventoryIndex];

	if (!SelectedItem.IsValid() || !SelectedItem.bIsThrowable||!SelectedItem.ProjectileClass)
	{
		return;
	}

	SelectedThrowableInfo = SelectedItem;
	SelectedThrowableItemID = SelectedItem.ItemID;
	SelectedThrowableProjectileClass = SelectedItem.ProjectileClass;
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
