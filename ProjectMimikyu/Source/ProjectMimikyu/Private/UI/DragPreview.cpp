// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/DragPreview.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UDragPreview::NativeConstruct()
{
	Super::NativeConstruct();

	RefreshPreview();

}

void UDragPreview::RefreshPreview()
{
	if (!DraggedItem)
	{
		return;
	}

	if(!DisplayInfo.IsValid() || !DisplayInfo.Thumbnail)
	{
		DraggedItem->SetVisibility(ESlateVisibility::Hidden);

		if (QuantityText)
		{
			QuantityText->SetVisibility(ESlateVisibility::Hidden);
		}
		return;
	}

	DraggedItem->SetVisibility(ESlateVisibility::Visible);
	DraggedItem->SetBrushFromTexture(DisplayInfo.Thumbnail);

	if (QuantityText)
	{
		QuantityText->SetText(FText::AsNumber(DisplayInfo.Quantity));
		QuantityText->SetVisibility(DisplayInfo.Quantity > 1
			? ESlateVisibility::Visible
			: ESlateVisibility::Hidden);
	}
}

void UDragPreview::SetupPreview(const FInventoryDisplayInfo& InDisplayInfo)
{
	DisplayInfo = InDisplayInfo;
	RefreshPreview();
}
