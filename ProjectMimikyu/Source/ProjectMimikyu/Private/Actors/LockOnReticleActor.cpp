// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/LockOnReticleActor.h"
#include "Components/WidgetComponent.h"

// Sets default values
ALockOnReticleActor::ALockOnReticleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	SetRootComponent(RootSceneComponent);

	ReticleWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("ReticleWidgetComponent"));
	ReticleWidgetComponent->SetupAttachment(RootComponent);
	ReticleWidgetComponent->SetWidgetSpace(EWidgetSpace::World);
	ReticleWidgetComponent->SetDrawSize(FVector2D(128.f, 128.f));
	ReticleWidgetComponent->SetPivot(FVector2D(0.5f, 0.5f));
	ReticleWidgetComponent->SetTwoSided(true);

	SetActorEnableCollision(false);
	ReticleWidgetComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ReticleWidgetComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
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

FVector ALockOnReticleActor::GetReticleDisplayLocation(AActor* TargetActor) const
{
	if (!TargetActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("[LockReticle] GetReticleDisplayLocation failed: TargetActor is null"));
		return GetActorLocation();
	}

	APlayerController* PC = GetWorld() ? GetWorld()->GetFirstPlayerController() : nullptr;
	if (!PC || !PC->PlayerCameraManager)
	{
		UE_LOG(LogTemp, Warning, TEXT("[LockReticle] Target=%s No valid PlayerCameraManager"), *GetNameSafe(TargetActor));
		return TargetActor->GetActorLocation();
	}

	const FVector TargetLocation = TargetActor->GetActorLocation() + FVector(0.f, 0.f, 60.f);
	const FVector CameraLocation = PC->PlayerCameraManager->GetCameraLocation();
	const FVector TowardCamera = (CameraLocation - TargetLocation).GetSafeNormal();

	const FVector DesiredLocation = TargetLocation + TowardCamera * ReticleForwardOffset;

	UE_LOG(
		LogTemp,
		Display,
		TEXT("[LockReticleCalc] Target=%s TargetLoc=(%.2f %.2f %.2f) Camera=(%.2f %.2f %.2f) TowardCamera=(%.2f %.2f %.2f) Desired=(%.2f %.2f %.2f)"),
		*GetNameSafe(TargetActor),
		TargetLocation.X, TargetLocation.Y, TargetLocation.Z,
		CameraLocation.X, CameraLocation.Y, CameraLocation.Z,
		TowardCamera.X, TowardCamera.Y, TowardCamera.Z,
		DesiredLocation.X, DesiredLocation.Y, DesiredLocation.Z
	);

	return DesiredLocation;
}

void ALockOnReticleActor::LockOnTarget(AActor* TargetActor)
{
	if (!TargetActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("[LockReticle] LockOnTarget failed: TargetActor null"));
		return;
	}

	LockedTarget = TargetActor;

	UE_LOG(LogTemp, Display, TEXT("[LockReticle] Locked onto Target=%s"), *GetNameSafe(TargetActor));

	SetActorHiddenInGame(false);
	SetActorLocation(GetReticleDisplayLocation(TargetActor));
}

void ALockOnReticleActor::UnlockTarget()
{
	UE_LOG(LogTemp, Warning, TEXT("[LockReticle] UnlockTarget called. OldTarget=%s"), *GetNameSafe(LockedTarget));
	LockedTarget = nullptr;
	SetActorHiddenInGame(true);
	//DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}

// Called every frame
void ALockOnReticleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsValid(LockedTarget))
	{

		const FVector DesiredLocation = GetReticleDisplayLocation(LockedTarget);
		const FVector CurrentLocation = GetActorLocation();

		const FVector NewLocation = FMath::VInterpTo(
			CurrentLocation,
			DesiredLocation,
			DeltaTime,
			18.f
		);

		const float RemainingDist = FVector::Distance(CurrentLocation, DesiredLocation);

		UE_LOG(
			LogTemp,
			Display,
			TEXT("[LockReticle] Target=%s Current=(%.2f %.2f %.2f) Desired=(%.2f %.2f %.2f) New=(%.2f %.2f %.2f) RemainingDist=%.2f"),
			*GetNameSafe(LockedTarget),
			CurrentLocation.X, CurrentLocation.Y, CurrentLocation.Z,
			DesiredLocation.X, DesiredLocation.Y, DesiredLocation.Z,
			NewLocation.X, NewLocation.Y, NewLocation.Z,
			RemainingDist
		);

		SetActorLocation(NewLocation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[LockReticle] LockedTarget invalid or lost. Reticle=%s"), *GetNameSafe(this));
	}

	LookAtCamera();
}

