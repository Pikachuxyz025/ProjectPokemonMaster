#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "InventoryWidgetController.generated.h"

class UInventorySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryDisplayUpdated, const TArray<FInventoryDisplayInfo>&, InventoryItems);

UCLASS(BlueprintType,Blueprintable)
class PROJECTMIMIKYU_API UInventoryWidgetController : public UPokemonWidgetController
{
	GENERATED_BODY()

public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnInventoryDisplayUpdated OnInventoryDisplayUpdated;

protected:

	UPROPERTY()
	TObjectPtr<UInventorySystemComponent> InventorySystem;

	UFUNCTION()
	void HandleInventoryUpdated();

	void BroadcastInventory();
};