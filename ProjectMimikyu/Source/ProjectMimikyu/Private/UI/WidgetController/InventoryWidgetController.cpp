#include "UI/WidgetController/InventoryWidgetController.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "AIControllers/TrainerController.h"

void UInventoryWidgetController::BroadcastInitialValues()
{
	Super::BroadcastInitialValues();
	BroadcastInventory();
}

void UInventoryWidgetController::BindCallbacksToDependencies()
{
	Super::BindCallbacksToDependencies();

	AProjectMimikyuCharacter* TrainerCharacter = Cast<AProjectMimikyuCharacter>(GetTC()->GetPawn());

	if (!TrainerCharacter)
	{
		return;
	}

	InventorySystem = TrainerCharacter->GetInventorySystem();

	if (InventorySystem)
	{
		InventorySystem->OnInventoryUpdated.AddUniqueDynamic(this, &UInventoryWidgetController::HandleInventoryUpdated);
	}
}

void UInventoryWidgetController::HandleInventoryUpdated()
{
	BroadcastInventory();
}

void UInventoryWidgetController::BroadcastInventory()
{
	if (!InventorySystem)
	{
		return;
	}
		OnInventoryDisplayUpdated.Broadcast(InventorySystem->GetInventoryDisplayItems());
}