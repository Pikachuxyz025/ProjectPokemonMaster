// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class PROJECTMIMIKYU_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
	UFUNCTION()
	virtual	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	class UItemDataComponent* ItemData;
	
	UPROPERTY(EditAnywhere)
	int32 CollectableQuantity = 0;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere)
	class USphereComponent* OverlapSphere;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE UItemDataComponent* GetItemData() { return ItemData; }

	FName GetItemID();
	FORCEINLINE int32 GetQuantity() { return CollectableQuantity; }
};
