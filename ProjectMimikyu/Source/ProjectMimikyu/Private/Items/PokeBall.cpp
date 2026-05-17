// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/PokeBall.h"
#include "GameFramework/ProjectileMovementComponent.h"

APokeBall::APokeBall()
{
	ProjectileMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pokeball Mesh"));
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;

	ProjectileMovementComponent->InitialSpeed = 0.f;
	ProjectileMovementComponent->MaxSpeed = 3000.f;
	ProjectileMovementComponent->ProjectileGravityScale = 1.f;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.35f;
	ProjectileMovementComponent->Friction = 0.8f;
	ProjectileMovementComponent->BounceVelocityStopSimulatingThreshold = 80.f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	InitialLifeSpan = 15.f;
}

void APokeBall::BeginPlay()
{
	Super::BeginPlay();

	if (ProjectileMovementComponent)
	{
		ProjectileMovementComponent->OnProjectileStop.AddDynamic(this, &APokeBall::OnPokeballStop);
	}
}

void APokeBall::OnPokeballStop(const FHitResult& ImpactResult)
{
	UE_LOG(LogTemp, Display, TEXT("[Pokeball] Stopped. Destroying in %.2f seconds."), DestroyAfterStopDelay);

	GetWorldTimerManager().SetTimer(
		DestroyAfterStopTimerHandle,
		this,
		&APokeBall::DestroyPokeball,
		DestroyAfterStopDelay,
		false);
}

void APokeBall::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Display, TEXT("[Pokeball] Hit detected. Actor: %s"), *OtherActor->GetName());

	// Temporary behavior:
	// Do not destroy on impact
	// Let ProjectileMovement bounce/roll and trigger OnProjectileStop.
}

void APokeBall::DestroyPokeball()
{
	Destroy();
}
