// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InventorySlot.h"
#include "Engine/DataTable.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "UI/DD_InventorySlot.h"


void UInventorySlot::PreCons()
{
	ArrowImage->SetVisibility(ESlateVisibility::Hidden);
	if (!ItemDataTable)
	{
		QuantityBox->SetVisibility(ESlateVisibility::Hidden);
		ItemImage->SetVisibility(ESlateVisibility::Hidden);
		return;
	}
	FDataTableRowHandle ItemRow;
	ItemRow.DataTable = ItemDataTable;
	ItemRow.RowName = ItemID;

	if (ItemRow.IsNull()||ItemID=="None")
	{
		QuantityBox->SetVisibility(ESlateVisibility::Hidden);
		ItemImage->SetVisibility(ESlateVisibility::Hidden);
		return;
	}

	FString ContextString;
	FInventoryItemInfo* ItemInfo = ItemRow.GetRow<FInventoryItemInfo>(ContextString);//ItemDataTable->FindRow<FInventoryItemItemInfo>(ItemID, ContextString, true);

	if (!ItemInfo || !ItemInfo->Thumbnail)
	{
		QuantityBox->SetVisibility(ESlateVisibility::Hidden);
		ItemImage->SetVisibility(ESlateVisibility::Hidden);
		return;
	}

	ItemImage->SetBrushFromTexture(ItemInfo->Thumbnail);
	ItemQuantity->SetText(FText::FromString(FString::FromInt(Quantity)));
	QuantityBox->SetVisibility(ESlateVisibility::Visible);
	ItemImage->SetVisibility(ESlateVisibility::Visible);
}

void UInventorySlot::NativePreConstruct()
{
	PreCons();
	Super::NativePreConstruct();

}

bool UInventorySlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UDD_InventorySlot* InventorySlot = Cast<UDD_InventorySlot>(InOperation);
	if (InventorySlot->ContentIndex != ContentIndex||InventorySlot->InventoryComponent != InventoryComponent)
	{
		InventoryComponent->TransferSlot(ContentIndex, InventorySlot->InventoryComponent, ContentIndex);
	}
	return true;
}

void UInventorySlot::SetupData(FName ID, int32 NewQuantity, UInventorySystemComponent* NewInventoryComponent)
{
	ItemID = ID;
	Quantity = NewQuantity;
	InventoryComponent = NewInventoryComponent;
}
