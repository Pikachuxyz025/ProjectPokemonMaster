// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "ActorComponents/ItemDataComponent.h"
#include "Components/SphereComponent.h"
#include "Characters/ProjectMimikyuCharacter.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	ItemData = CreateDefaultSubobject<UItemDataComponent>(TEXT("Item Data"));
	OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
	OverlapSphere->SetupAttachment(RootComponent);
	OverlapSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	OverlapSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	OverlapSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item Mesh"));
	ItemMesh->SetupAttachment(OverlapSphere);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AProjectMimikyuCharacter* TrainerCharacter = Cast<AProjectMimikyuCharacter>(OtherActor);
	if (TrainerCharacter)
	{
		TrainerCharacter->SetOverlappingItem(this);
	}
}

void AItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AProjectMimikyuCharacter* TrainerCharacter = Cast<AProjectMimikyuCharacter>(OtherActor);
	if (TrainerCharacter)
	{
		TrainerCharacter->SetOverlappingItem(nullptr);
	}
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnSphereOverlap);
	OverlapSphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnSphereEndOverlap);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FName AItem::GetItemID()
{
	return ItemData->ItemID.RowName;
}

