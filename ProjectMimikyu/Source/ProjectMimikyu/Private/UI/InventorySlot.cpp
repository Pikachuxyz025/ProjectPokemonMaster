// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InventorySlot.h"
#include "Engine/DataTable.h"
#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "UI/DD_InventorySlot.h"


void UInventorySlot::PreCons()
{
	ArrowImage->SetVisibility(ESlateVisibility::Hidden);

	if (!DisplayInfo.IsValid()||!DisplayInfo.Thumbnail)
	{
		QuantityBox->SetVisibility(ESlateVisibility::Hidden);
		ItemImage->SetVisibility(ESlateVisibility::Hidden);
		return;
	}

	ItemImage->SetBrushFromTexture(DisplayInfo.Thumbnail);
	ItemQuantity->SetText(FText::AsNumber(DisplayInfo.Quantity));

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

void UInventorySlot::SetupData(const FInventoryDisplayInfo& InDisplayInfo, int32 InContentIndex, UInventorySystemComponent* NewInventoryComponent)
{
	DisplayInfo = InDisplayInfo;
	ContentIndex = InContentIndex;
	InventoryComponent = NewInventoryComponent;
	PreCons();
}

