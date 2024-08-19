// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/CharacterTypes.h"
#include "InventorySystemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UInventorySystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventorySystemComponent();
	friend class AProjectMimikyuCharacter;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(	)
	class AProjectMimikyuCharacter* OwnerCharacter;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Interact(class AItem* ItemToAdd);

	bool AddToInventory(FName ItemID,int32 Quantity,  bool bIsThrowable);
	void RemoveFromInventory();
	bool CreateNewStack(FName ItemID,int32 Quantity, bool bIsThrowable);
	bool AnyEmptySlotAvailable(int32& EmptyIndex);
	void AddToStack(int32 Index, int32 Quantity,FName ItemID, bool bIsThrowable);
	bool FindSlot(FName ItemID,int32& Index);
	void TransferSlot(int32 SourceIndex,UInventorySystemComponent* SourceInventory,int32 DestinationIndex);
	int32 GetMaxStackSize(FName ItemID);

	FOnInventoryUpdated OnInventoryUpdated;

	UPROPERTY(EditAnywhere)
	int32 InventorySize = 0;

	UPROPERTY(VisibleAnywhere)
	TArray<FSlotInfo> Content;


	TArray<FSlotInfo> GetThrowableContent();

	UPROPERTY(EditAnywhere)
	class UDataTable*ItemDataTable;

};
