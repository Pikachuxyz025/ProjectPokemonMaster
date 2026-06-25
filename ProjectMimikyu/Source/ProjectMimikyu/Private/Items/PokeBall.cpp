// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/PokeBall.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "ActorComponents/PokeballCaptureComponent.h"
#include "ActorComponents/PokeballSummonComponent.h"
#include <Characters/TrainerCharacter.h>
#include "Components/SphereComponent.h"


APokeBall::APokeBall()
{
	ProjectileMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pokeball Mesh"));
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	CaptureComponent = CreateDefaultSubobject<UPokeballCaptureComponent>(TEXT("Pokeball Capture Component"));
	SummonComponent = CreateDefaultSubobject<UPokeballSummonComponent>(TEXT("Pokeball Summoning Component"));

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
		SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &APokeBall::OnBeginOverlap);
	}
}

void APokeBall::InitializeForCapture(AActor* InSourceActor)
{
	ActiveUseMode = EPokeballUseMode::Capture;
	
	SetOwner(InSourceActor);
	SetInstigator(Cast<APawn>(InSourceActor));

	if (CaptureComponent)
	{
		CaptureComponent->InitializeCapture(this);
	}
}

void APokeBall::InitializeForSummon(AActor* InSourceActor, const FVector& InTargetLocation, int32 InPartySlotIndex)
{
	ActiveUseMode = EPokeballUseMode::Summon;
	SetOwner(InSourceActor);
	SetInstigator(Cast<APawn>(InSourceActor));

	if (SphereCollision && InSourceActor)
	{
		SphereCollision->IgnoreActorWhenMoving(InSourceActor, true);
	}

	if (SummonComponent)
	{
		SummonComponent->InitializeForSummon(InSourceActor, InTargetLocation, InPartySlotIndex);
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
	switch (ActiveUseMode)
	{
	case EPokeballUseMode::None:
		break;
	case EPokeballUseMode::Capture:
		if (CaptureComponent)
		{
			CaptureComponent->HandleHit(OtherActor);
		}
		
		// Eventually, we'll have the ball fall and wiggle before confirming capture or escape, but for now, just destroy on hit.
		Destroy();
		break;
	case EPokeballUseMode::Summon:
		if (SummonComponent)
		{
			SummonComponent->HandleHit(Hit);
		}
		break;
	default:
		break;
	}
}

void APokeBall::DestroyPokeball()
{
	Destroy();
}

void APokeBall::HandlePokemonContact(AActor* OtherActor)
{
	APokemon_Parent* HitPokemon = Cast<APokemon_Parent>(OtherActor);
	if (!IsValid(HitPokemon))
	{
		return;
	}

	ATrainerCharacter* Trainer = Cast<ATrainerCharacter>(GetOwner());
	if (!IsValid(Trainer))
	{
		return;
	}

	Trainer->ServerRequestCatchPokemonWithPokeball(HitPokemon);
}

void APokeBall::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	switch (ActiveUseMode)
	{
	case EPokeballUseMode::None:
		break;
	case EPokeballUseMode::Capture:
		if (CaptureComponent)
		{
			CaptureComponent->HandleBeginOverlap(OtherActor);
		}
		break;
	case EPokeballUseMode::Summon:
		// Usually ignore overlaps while summoning
		break;
	default:
		break;
	}
}
