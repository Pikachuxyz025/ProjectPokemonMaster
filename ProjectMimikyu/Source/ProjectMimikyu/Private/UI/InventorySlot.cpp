// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InventorySlot.h"
#include "Engine/DataTable.h"
#include "Input/Reply.h"
#include "UI/DD_InventorySlot.h"
#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "ActorComponents/InventorySystemComponent.h"
#include <Blueprint/WidgetBlueprintLibrary.h>
#include <UI/DragPreview.h>


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
	UDD_InventorySlot* DraggedSlot = Cast<UDD_InventorySlot>(InOperation);

	if (!DraggedSlot || !InventoryComponent || !DraggedSlot->InventoryComponent)
	{
		return false;
	}

	if (DraggedSlot->ContentIndex == ContentIndex && DraggedSlot->InventoryComponent == InventoryComponent)
	{
		return false;
	}

	InventoryComponent->TransferSlot(DraggedSlot->ContentIndex, DraggedSlot->InventoryComponent, ContentIndex);

	return true;
}

FReply UInventorySlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (!DisplayInfo.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Display Info"));
		return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	}

	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		UE_LOG(LogTemp, Warning, TEXT("Mouse Button Down Detected"));
		return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton).NativeReply;
	}
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UInventorySlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	UE_LOG(LogTemp, Warning, TEXT("Drag Detected"));

	if (!InventoryComponent || ContentIndex < 0||!DisplayInfo.IsValid())
	{
		return;
	}

	UDD_InventorySlot* DragOperation = NewObject<UDD_InventorySlot>();

	if (!DragOperation)
	{
		return;
	}

	DragOperation->InventoryComponent = InventoryComponent;
	DragOperation->ContentIndex = ContentIndex;
	DragOperation->DraggedItemInfo = DisplayInfo;

	if (DragVisualClass)
	{
		UDragPreview* DragVisual = CreateWidget<UDragPreview>(GetOwningPlayer(), DragVisualClass);

		if(DragVisual)
		{
			DragVisual->SetupPreview(DisplayInfo);
			DragOperation->DefaultDragVisual = DragVisual;
			DragOperation->Pivot = EDragPivot::MouseDown;
		}
	}

	OutOperation = DragOperation;
}

FReply UInventorySlot::NativeOnPreviewMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		UE_LOG(LogTemp, Warning, TEXT("Preview Mouse Button Down Detected on InventorySlot"));

		return UWidgetBlueprintLibrary::DetectDragIfPressed(
			InMouseEvent,
			this,
			EKeys::LeftMouseButton
		).NativeReply;
	}

	return Super::NativeOnPreviewMouseButtonDown(InGeometry, InMouseEvent);
}

void UInventorySlot::SetupData(const FInventoryDisplayInfo& InDisplayInfo, int32 InContentIndex, UInventorySystemComponent* NewInventoryComponent)
{
	DisplayInfo = InDisplayInfo;
	ContentIndex = InContentIndex;
	InventoryComponent = NewInventoryComponent;
	PreCons();
}

