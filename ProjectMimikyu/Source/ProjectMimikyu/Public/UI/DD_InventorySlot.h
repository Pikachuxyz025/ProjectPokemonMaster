// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "DD_InventorySlot.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UDD_InventorySlot : public UDragDropOperation
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditDefaultsOnly)
	class UInventorySystemComponent* InventoryComponent;

	int32 ContentIndex = 0;
};
