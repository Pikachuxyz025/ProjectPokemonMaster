// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/DragPreview.h"
#include "Components/Image.h"

void UDragPreview::NativePreConstruct()
{
	FString ContextString;
	FInventoryItemInfo* ItemInfo = ItemDataTable->FindRow<FInventoryItemInfo>(ItemID, ContextString, true);
	if (!ItemInfo->Thumbnail)
	{
		//QuantityBox->SetVisibility(ESlateVisibility::Hidden);
		DraggedItem->SetVisibility(ESlateVisibility::Hidden);
		return;
	}

	DraggedItem->SetBrushFromTexture(ItemInfo->Thumbnail);

}
