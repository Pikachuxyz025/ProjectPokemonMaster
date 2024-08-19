// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/InventorySystemComponent.h"
#include "Items/Item.h"
#include "ActorComponents/ItemDataComponent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "Engine/DataTable.h"

// Sets default values for this component's properties
UInventorySystemComponent::UInventorySystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventorySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Content.SetNum(InventorySize);
}


// Called every frame
void UInventorySystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventorySystemComponent::Interact(AItem* ItemToAdd)
{
	AItem* NewItem = ItemToAdd;

	FInventoryItemInfo* ItemInfo = NewItem->GetItemData()->GetInvetoryItemInfo();
	
	if (!ItemInfo)
		return;

	FName ItemID = NewItem->GetItemID();
	int32 Quantity = NewItem->GetQuantity();
	bool bIsThrowable = ItemInfo->bIsThrowable;


	UE_LOG(LogTemp, Display, TEXT("Add Item: %s"),*ItemID.ToString());
	UE_LOG(LogTemp, Display, TEXT("Item Quantity: %d"),Quantity);

	if (AddToInventory(ItemID, Quantity, bIsThrowable))
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


bool UInventorySystemComponent::AddToInventory(FName ItemID, int32 Quantity, bool bIsThrowable)
{
	//int32 LocalQuantityRemaining = Quantity;
	bool bHasFailed = false;

	int32 NewIndex = -1;
	if (FindSlot(ItemID, NewIndex))
	{
		AddToStack(NewIndex, Quantity, ItemID,bIsThrowable);
	}
	else
	{

		if (CreateNewStack(ItemID, Quantity,bIsThrowable))
		{
		}
		else
		{
			bHasFailed = true;
		}
	}
	return !bHasFailed;
}

void UInventorySystemComponent::RemoveFromInventory()
{
}

bool UInventorySystemComponent::CreateNewStack(FName ItemID, int32 Quantity, bool bIsThrowable)
{
	int32 EmptyStack = -1;
	if (AnyEmptySlotAvailable(EmptyStack))
	{
		FSlotInfo NewItemInfo;
		NewItemInfo.ItemName = ItemID;
		NewItemInfo.Quantity = Quantity;
		NewItemInfo.bIsThrowable = bIsThrowable;
		Content[EmptyStack] = NewItemInfo;
		return true;
	}
	return false;
}

bool UInventorySystemComponent::AnyEmptySlotAvailable(int32& EmptyIndex)
{
	bool bIsEmptySlot=false;
	EmptyIndex = -1;
	for (int32 i = 0; i < Content.Num(); i++)
	{
		if (Content[i].Quantity == 0)
		{
			bIsEmptySlot = true;
			EmptyIndex = i;
			break;
		}
	}
	return bIsEmptySlot;
}

void UInventorySystemComponent::AddToStack(int32 Index, int32 Quantity,FName ItemID, bool bIsThrowable)
{	
	if(Content.IsValidIndex(Index))
	{
		Content[Index].Quantity += Quantity;
	}
	else
	{
		FSlotInfo NewInfo;
		NewInfo.ItemName = ItemID;
		NewInfo.Quantity = Quantity;
		NewInfo.bIsThrowable = bIsThrowable;
		Content.Insert(NewInfo,Index);
	}
}

bool UInventorySystemComponent::FindSlot(FName ItemID,int32& Index)
{
	for (int32 i = 0; i < Content.Num(); i++)
	{
		if (Content[i].ItemName == ItemID)
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
	FSlotInfo SlotContent = SourceInventory->Content[SourceIndex];
	if (DestinationIndex < 0)
	{

	}
	else
	{
		if (SlotContent.ItemName == Content[DestinationIndex].ItemName)
		{

		}
		else
		{
			SourceInventory->Content[SourceIndex] = Content[DestinationIndex];
			Content[DestinationIndex] = SlotContent;
			OnInventoryUpdated.Broadcast();
		}
	}

}

int32 UInventorySystemComponent::GetMaxStackSize(FName ItemID)
{
	FString ItemContextString;

	FDataTableRowHandle ItemRow;
	ItemRow.DataTable = ItemDataTable;
	ItemRow.RowName = ItemID;

	if (!ItemDataTable) return -1;
	FInventoryItemInfo* NewItem=  ItemRow.GetRow<FInventoryItemInfo>(ItemContextString);
	if(NewItem)
	{
		return NewItem->StackSize;
	}
	return -1;
}

TArray<FSlotInfo> UInventorySystemComponent::GetThrowableContent()
{
	TArray<FSlotInfo> ThrowableContent;
	for (FSlotInfo SlotInfo : Content)
	{
		if (SlotInfo.bIsThrowable)
		{
			ThrowableContent.Add(SlotInfo);
		}
	}
	return ThrowableContent;
}

