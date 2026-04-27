// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/LockOnReticleActor.h"
#include "Components/WidgetComponent.h"

// Sets default values
ALockOnReticleActor::ALockOnReticleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ReticleWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("ReticleWidgetComponent"));
	ReticleWidgetComponent->SetupAttachment(RootComponent);
	ReticleWidgetComponent->SetWidgetSpace(EWidgetSpace::World);
	ReticleWidgetComponent->SetDrawSize(FVector2D(128.f, 128.f));
	ReticleWidgetComponent->SetPivot(FVector2D(0.5f, 0.5f));
	ReticleWidgetComponent->SetTwoSided(true);
}

// Called when the game starts or when spawned
void ALockOnReticleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALockOnReticleActor::LookAtCamera()
{
	if (!GetWorld() || !GetWorld()->GetFirstPlayerController() || !GetWorld()->GetFirstPlayerController()->PlayerCameraManager)
	{
		return;
	}
	FVector CameraLocation = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
	FRotator LookAtRotation = (CameraLocation - GetActorLocation()).Rotation();
	SetActorRotation(LookAtRotation);
}

void ALockOnReticleActor::LockOnTarget(AActor* TargetActor)
{
	SetActorHiddenInGame(false);
	SetActorLocation(TargetActor->GetActorLocation());
	AttachToActor(TargetActor, FAttachmentTransformRules::KeepWorldTransform);
}

void ALockOnReticleActor::UnlockTarget()
{
	SetActorHiddenInGame(true);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}

// Called every frame
void ALockOnReticleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LookAtCamera();
}

