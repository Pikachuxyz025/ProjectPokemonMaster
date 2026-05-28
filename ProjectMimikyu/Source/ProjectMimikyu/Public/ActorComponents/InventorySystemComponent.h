// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/CharacterTypes.h"
#include "InventorySystemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

USTRUCT(BlueprintType)
struct FInventoryDisplayInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FName ItemID = NAME_None;

	UPROPERTY(BlueprintReadOnly)
	FText ItemName;

	UPROPERTY(BlueprintReadOnly)
	FText Description;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UTexture2D> Thumbnail = nullptr;

	UPROPERTY(BlueprintReadOnly)
	int32 Quantity = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 MaxStackSize = 0;

	UPROPERTY(BlueprintReadOnly)
	bool bIsThrowable = false;

	UPROPERTY(BlueprintReadOnly)
	TSubclassOf<AProjectile> ProjectileClass = nullptr;

	bool IsValid() const
	{
		return !ItemID.IsNone() && Quantity > 0;
	}
};

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

	bool AddToInventory(FName ItemID,int32 Quantityk);
	void RemoveFromInventory();

	bool CreateNewStack(FName ItemID,int32 Quantity);
	bool AnyEmptySlotAvailable(int32& EmptyIndex);
	void AddToStack(int32 Index, int32 Quantity,FName ItemID);
	bool FindSlot(FName ItemID,int32& Index);
	void TransferSlot(int32 SourceIndex,UInventorySystemComponent* SourceInventory,int32 DestinationIndex);

	bool HasItem(FName ItemID, int32 RequiredQuantity = 1)const;
	bool TryConsumeItem(FName ItemID, int32 QuantityToConsume = 1);
	bool GetSlotByItemID(FName ItemID, FInventorySlotInfo& OutSlotInfo) const;

	int32 GetMaxStackSize(FName ItemID);

	FOnInventoryUpdated OnInventoryUpdated;

	UPROPERTY(EditAnywhere)
	int32 InventorySize = 0;

	UPROPERTY(VisibleAnywhere)
	TArray<FInventorySlotInfo> Content;

	UPROPERTY(EditAnywhere)
	class UDataTable*ItemDataTable;


	FInventoryItemInfo* GetInventoryItemInfo(FName ItemID) const;
	bool BuildInventoryDisplayInfo(const FInventorySlotInfo& SlotInfo, FInventoryDisplayInfo& OutDisplayInfo) const;
	TArray<FInventoryDisplayInfo> GetThrowableDisplayItems() const;
	TArray<FInventoryDisplayInfo> GetInventoryDisplayItems() const;
};
