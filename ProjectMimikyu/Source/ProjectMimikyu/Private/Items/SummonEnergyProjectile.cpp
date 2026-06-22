// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SummonEnergyProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"

ASummonEnergyProjectile::ASummonEnergyProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    SetRootComponent(CollisionComponent);

    CollisionComponent->InitSphereRadius(16.0f);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionComponent->SetCollisionObjectType(ECC_WorldDynamic);
    CollisionComponent->SetCollisionResponseToAllChannels(ECR_Block);
    CollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
    CollisionComponent->SetNotifyRigidBodyCollision(true);

    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;

    TrailComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TrailComponent"));
    TrailComponent->SetupAttachment(RootComponent);
    TrailComponent->bAutoActivate = false;

    InitialLifeSpan = 3.0f;
}

void ASummonEnergyProjectile::BeginPlay()
{
    Super::BeginPlay();

    CollisionComponent->OnComponentHit.AddDynamic(this, &ASummonEnergyProjectile::HandleHit);

    if (TrailSystem)
    {
        TrailComponent->SetAsset(TrailSystem);
        TrailComponent->Activate(true);
    }
}

void ASummonEnergyProjectile::InitSummonEnergy(const FVector& InTargetLocation, AActor* InSourceActor)
{
    TargetLocation = InTargetLocation;

    if (InSourceActor)
    {
        SetOwner(InSourceActor);
        SetInstigator(Cast<APawn>(InSourceActor));
    }

	ProjectileMovement->InitialSpeed = LaunchSpeed;
	ProjectileMovement->MaxSpeed = LaunchSpeed;
	ProjectileMovement->ProjectileGravityScale = GravityScale;

    const FVector StartLocation = GetActorLocation();
    FVector LaunchDirection = (TargetLocation - StartLocation).GetSafeNormal();

    // Adds a small upward arc so the energy looks like it launches/falls,
    // instead of traveling as a flat laser beam.
    LaunchDirection = (LaunchDirection + FVector::UpVector * ArcLiftStrength).GetSafeNormal();

    ProjectileMovement->Velocity = LaunchDirection * LaunchSpeed;
}

void ASummonEnergyProjectile::HandleHit(
    UPrimitiveComponent* HitComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    FVector NormalImpulse,
    const FHitResult& Hit
)
{
    if (bHasLanded)
    {
        return;
    }

    bHasLanded = true;

    ProjectileMovement->StopMovementImmediately();
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    if (TrailComponent)
    {
        TrailComponent->Deactivate();
    }

    const FVector LandingLocation = Hit.ImpactPoint;
    const FVector LandingNormal = Hit.ImpactNormal.GetSafeNormal();

    if (LandingImpactSystem)
    {
        const FRotator ImpactRotation = FRotationMatrix::MakeFromZ(LandingNormal).Rotator();

        UNiagaraFunctionLibrary::SpawnSystemAtLocation(
            GetWorld(),
            LandingImpactSystem,
            LandingLocation,
            ImpactRotation
        );
    }

    OnSummonEnergyLanded.Broadcast(LandingLocation, LandingNormal);

    SetLifeSpan(LifeAfterLanding);
}

