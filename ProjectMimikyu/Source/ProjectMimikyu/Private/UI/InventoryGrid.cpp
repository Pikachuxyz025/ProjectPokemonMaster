// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InventoryGrid.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "UI/InventorySlot.h"
#include "Blueprint/UserWidget.h"
#include "Components/WrapBox.h"


void UInventoryGrid::Inventory()
{
	if (!InventoryComponent || !InventorySlotClass || !BoxGrid)
	{
		return;
	}
	for (int32 i = 0; i < InventoryComponent->Content.Num(); i++)
	{
		const FInventorySlotInfo& SlotInfo = InventoryComponent->Content[i];

		FInventoryDisplayInfo DisplayInfo;
		InventoryComponent->BuildInventoryDisplayInfo(SlotInfo, DisplayInfo);

		UInventorySlot* Widget = CreateWidget<UInventorySlot>(GetWorld(), InventorySlotClass);

		if(!Widget)
		{
			continue;
		}

		Widget->SetupData(DisplayInfo, i, InventoryComponent);
		BoxGrid->AddChildToWrapBox(Widget);
	}
}

void UInventoryGrid::DisplayInventory(UInventorySystemComponent* NewInventorySystem)
{
	InventoryComponent = NewInventorySystem;
	InventoryComponent->OnInventoryUpdated.AddUniqueDynamic(this, &UInventoryGrid::UpdateInventory);

	UpdateInventory();
}

void UInventoryGrid::UpdateInventory()
{
	UE_LOG(LogTemp, Display, TEXT("Inventory Updated"));
	BoxGrid->ClearChildren();
	Inventory();
}

void UInventoryGrid::NativePreConstruct()
{
	Inventory();
	Super::NativePreConstruct();
}
