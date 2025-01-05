// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/MouseInterface.h"
#include "PlayerInventoryMenuOverlay.generated.h"

class APokemon_Parent;
class AProjectMimikyuCharacter;
class UInventoryGrid;
UCLASS()
class PROJECTMIMIKYU_API UPlayerInventoryMenuOverlay : public UUserWidget,public IMouseInterface
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(meta = (BindWidget))
	 UInventoryGrid* InventoryGrid;

	UPROPERTY(EditAnywhere)
 AProjectMimikyuCharacter* PlayerCharacter;

	virtual void AddMouseCursor() override;
	virtual void RemoveMouseCursor() override;
	UPROPERTY()
	APlayerController* CurrentController;

	void DisplayInventory();
	void DisplayOverlay(APlayerController* PlayerController);

	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;

	UPROPERTY(EditAnywhere)
	FKey ExitKey;

	virtual void NativePreConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeConstruct() override;

 FORCEINLINE void SetPlayerController(APlayerController* PlayerController) { CurrentController = PlayerController; }

 UFUNCTION(BlueprintImplementableEvent)
 void AllocatePokemonInfo();


 void SetReturnToWidegt(UUserWidget* ReturnWidget) { ReturnToWidget = ReturnWidget; }
protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	TArray<APokemon_Parent*> PokemonPartyInfo;

	UPROPERTY(VisibleAnywhere)
	UUserWidget* ReturnToWidget = nullptr;
};
