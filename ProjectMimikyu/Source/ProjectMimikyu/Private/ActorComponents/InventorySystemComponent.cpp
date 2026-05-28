// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/InventorySystemComponent.h"
#include "Items/Item.h"
#include "ActorComponents/ItemDataComponent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "Engine/DataTable.h"


UInventorySystemComponent::UInventorySystemComponent()
{	
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UInventorySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	Content.SetNum(InventorySize);
}

void UInventorySystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UInventorySystemComponent::Interact(AItem* ItemToAdd)
{
	if(!ItemToAdd)
	{
		return;
	}

	UItemDataComponent* ItemData = ItemToAdd->GetItemData();
	if (!ItemData)
	{
		return;
	}

	FInventoryItemInfo* ItemInfo = ItemData->GetInvetoryItemInfo();
	
	if (!ItemInfo)
		return;

	FName ItemID = ItemToAdd->GetItemID();
	int32 Quantity = ItemToAdd->GetQuantity();


	UE_LOG(LogTemp, Display, TEXT("Add Item: %s"),*ItemID.ToString());
	UE_LOG(LogTemp, Display, TEXT("Item Quantity: %d"),Quantity);

	if (AddToInventory(ItemID, Quantity))
	{
		UE_LOG(LogTemp, Display, TEXT("Item added"));

		if (OwnerCharacter)
		{
			OwnerCharacter->SetOverlappingItem(nullptr);
		}

		ItemToAdd->Destroy();
		OnInventoryUpdated.Broadcast();
	}
}


bool UInventorySystemComponent::AddToInventory(FName ItemID, int32 Quantity)
{
	if (ItemID.IsNone() || Quantity <= 0)
	{
		return false;
	}

	int32 QuantityRemaining = Quantity;

	while (QuantityRemaining > 0)
	{
		int32 ExistingStackIndex = INDEX_NONE;

		if (FindSlot(ItemID, ExistingStackIndex))
		{
			const int32 MaxStackSize = GetMaxStackSize(ItemID);
			const int32 CurrentQuantity = Content[ExistingStackIndex].Quantity;
			const int32 SpaceRemaining = MaxStackSize - CurrentQuantity;

			if (SpaceRemaining <= 0)
			{
				break;
			}

			const int32 AmountToAdd = FMath::Min(SpaceRemaining, QuantityRemaining);
			Content[ExistingStackIndex].Quantity += AmountToAdd;
			QuantityRemaining -= AmountToAdd;

			continue;
		}
		int32 EmptyIndex = INDEX_NONE;

		if (!AnyEmptySlotAvailable(EmptyIndex))
		{
			break;
		}

		const int32 MaxStackSize = GetMaxStackSize(ItemID);
		const int32 AmountToAdd = FMath::Min(MaxStackSize, QuantityRemaining);

		FInventorySlotInfo NewSlot;
		NewSlot.ItemID = ItemID;
		NewSlot.Quantity = AmountToAdd;

		Content[EmptyIndex] = NewSlot;
		QuantityRemaining -= AmountToAdd;
	}

	const bool bAddedEverything = QuantityRemaining <= 0;

	if (!bAddedEverything)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not enough space to add all items. %d items could not be added."), QuantityRemaining);
	}

	OnInventoryUpdated.Broadcast();

	return bAddedEverything;
}

void UInventorySystemComponent::RemoveFromInventory()
{
}

bool UInventorySystemComponent::CreateNewStack(FName ItemID, int32 Quantity)
{
	int32 EmptyStack = INDEX_NONE;

	if (!AnyEmptySlotAvailable(EmptyStack))
	{
		return false;
	}
	
	FInventorySlotInfo NewItemInfo;
	NewItemInfo.ItemID = ItemID;
	NewItemInfo.Quantity = Quantity;
	Content[EmptyStack] = NewItemInfo;

	return true;
}

bool UInventorySystemComponent::AnyEmptySlotAvailable(int32& EmptyIndex)
{
	EmptyIndex = INDEX_NONE;

	for (int32 i = 0; i < Content.Num(); i++)
	{
		if (Content[i].IsEmpty())
		{
			EmptyIndex = i;
			return true;
		}
	}

	return false;
}

void UInventorySystemComponent::AddToStack(int32 Index, int32 Quantity,FName ItemID)
{	
	if (!Content.IsValidIndex(Index))
	{
		return;
	}

	if(Content[Index].ItemID != ItemID)
	{
		return;
	}

	Content[Index].Quantity += Quantity;
}

bool UInventorySystemComponent::FindSlot(FName ItemID,int32& Index)
{
	for (int32 i = 0; i < Content.Num(); i++)
	{
		if (Content[i].ItemID == ItemID)
		{
			if (Content[i].Quantity < GetMaxStackSize(ItemID))
			{
				Index = i;
				return true;
			}
		}
	} 
	Index = -1;
	return false;
}

void UInventorySystemComponent::TransferSlot(int32 SourceIndex, UInventorySystemComponent* SourceInventory, int32 DestinationIndex)
{

	if (!SourceInventory ||
		!SourceInventory->Content.IsValidIndex(SourceIndex) ||
		!Content.IsValidIndex(DestinationIndex))
	{
		return;
	}

	FInventorySlotInfo& SourceSlot = SourceInventory->Content[SourceIndex];
	FInventorySlotInfo& DestinationSlot = Content[DestinationIndex];

	if (SourceSlot.IsEmpty())
	{
		return;
	}

	if (DestinationSlot.IsEmpty())
	{
		DestinationSlot = SourceSlot;
		SourceSlot.ClearSlot();

		SourceInventory->OnInventoryUpdated.Broadcast();
		OnInventoryUpdated.Broadcast();
		return;
	}

	if (SourceSlot.ItemID == DestinationSlot.ItemID)
	{
		const int32 MaxStackSize = GetMaxStackSize(DestinationSlot.ItemID);
		const int32 SpaceRemaining = MaxStackSize - DestinationSlot.Quantity;

		if (SpaceRemaining>0)
		{
			const int32 AmountToTransfer = FMath::Min(SpaceRemaining, SourceSlot.Quantity);

			DestinationSlot.Quantity += AmountToTransfer;
			SourceSlot.Quantity -= AmountToTransfer;

			if (SourceSlot.Quantity <= 0)
			{
				SourceSlot.ClearSlot();
			}
		}

		SourceInventory->OnInventoryUpdated.Broadcast();
		OnInventoryUpdated.Broadcast();
		return;
	}

	Swap(SourceSlot, DestinationSlot);

	SourceInventory->OnInventoryUpdated.Broadcast();
	OnInventoryUpdated.Broadcast();
}

bool UInventorySystemComponent::HasItem(FName ItemID, int32 RequiredQuantity) const
{
	if (ItemID.IsNone() || RequiredQuantity <= 0)
	{
		return false;
	}

	int32 TotalQuantity = 0;

	for (const FInventorySlotInfo& SlotInfo : Content)
	{
		if (SlotInfo.ItemID == ItemID)
		{
			TotalQuantity += SlotInfo.Quantity;

			if (TotalQuantity >= RequiredQuantity)
			{
				return true;
			}
		}
	}
	return false;
}

bool UInventorySystemComponent::TryConsumeItem(FName ItemID, int32 QuantityToConsume)
{
	if (ItemID.IsNone() || QuantityToConsume <= 0)
	{
		return false;
	}

	for (FInventorySlotInfo& SlotInfo : Content)
	{
		if (SlotInfo.ItemID != ItemID)
		{
			continue;
		}

		if (SlotInfo.Quantity < QuantityToConsume)
		{
			return false;
		}

		SlotInfo.Quantity -= QuantityToConsume;

		if (SlotInfo.Quantity <= 0)
		{
			SlotInfo.ClearSlot();
		}

		OnInventoryUpdated.Broadcast();
		return true;
	}

	return false;
}

bool UInventorySystemComponent::GetSlotByItemID(FName ItemID, FInventorySlotInfo& OutSlotInfo) const
{
	if (ItemID.IsNone())
	{
		return false;
	}

	for (const FInventorySlotInfo& SlotInfo : Content)
	{
		if (SlotInfo.ItemID == ItemID && SlotInfo.Quantity > 0)
		{
			OutSlotInfo = SlotInfo;
			return true;
		}
	}

	return false;
}

int32 UInventorySystemComponent::GetMaxStackSize(FName ItemID)
{
	FInventoryItemInfo* ItemInfo = GetInventoryItemInfo(ItemID);

	if (!ItemInfo)
	{
		return 1;
	}

	return FMath::Max(1, ItemInfo->MaxStackSize);
}

TArray<FInventoryDisplayInfo> UInventorySystemComponent::GetThrowableDisplayItems() const
{
	TArray<FInventoryDisplayInfo> Results;

	for (const FInventorySlotInfo& SlotInfo : Content)
	{
		FInventoryDisplayInfo DisplayInfo;

		if (!BuildInventoryDisplayInfo(SlotInfo, DisplayInfo))
		{
			continue;
		}

		if (DisplayInfo.bIsThrowable)
		{
			Results.Add(DisplayInfo);
		}
	}

	return Results;
}

TArray<FInventoryDisplayInfo> UInventorySystemComponent::GetInventoryDisplayItems() const
{
	TArray<FInventoryDisplayInfo> Results;

	for (const FInventorySlotInfo& SlotInfo : Content)
	{
		FInventoryDisplayInfo DisplayInfo;

		if (BuildInventoryDisplayInfo(SlotInfo, DisplayInfo))
		{
			Results.Add(DisplayInfo);
		}
	}

	return Results;
}

FInventoryItemInfo* UInventorySystemComponent::GetInventoryItemInfo(FName ItemID) const
{
	if(!ItemDataTable||ItemID.IsNone())
	return nullptr;

	FString ItemContextString;

	FDataTableRowHandle ItemRow;
	ItemRow.DataTable = ItemDataTable;
	ItemRow.RowName = ItemID;

	return ItemRow.GetRow<FInventoryItemInfo>(ItemContextString);
}

bool UInventorySystemComponent::BuildInventoryDisplayInfo(const FInventorySlotInfo& SlotInfo, FInventoryDisplayInfo& OutDisplayInfo) const
{
	OutDisplayInfo = FInventoryDisplayInfo();

	if (SlotInfo.IsEmpty())
	{
		return false;
	}

	FInventoryItemInfo* ItemInfo = GetInventoryItemInfo(SlotInfo.ItemID);

	if(!ItemInfo)
	{
		return false;
	}

	OutDisplayInfo.ItemID = SlotInfo.ItemID;
	OutDisplayInfo.Quantity = SlotInfo.Quantity;
	OutDisplayInfo.Description = ItemInfo->Description;
	OutDisplayInfo.Thumbnail = ItemInfo->Thumbnail;
	OutDisplayInfo.bIsThrowable = ItemInfo->bIsThrowable;
	OutDisplayInfo.MaxStackSize = ItemInfo->MaxStackSize;
	OutDisplayInfo.ProjectileClass = ItemInfo->ProjectileClass;
	OutDisplayInfo.ItemName = ItemInfo->ItemName;

	return true;
}