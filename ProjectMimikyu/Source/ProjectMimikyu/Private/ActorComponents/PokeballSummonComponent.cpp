#include "ActorComponents/PokeballSummonComponent.h"
#include "Components/SphereComponent.h"
#include "Items/PokeBall.h"
#include "Items/SummonEnergyProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"

UPokeballSummonComponent::UPokeballSummonComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetComponentTickEnabled(false);
}

void UPokeballSummonComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPokeballSummonComponent::InitializeForSummon(AActor* InSourceActor, const FVector& InTargetLocation, int32 InPartySlotIndex)
{
	OwningPokeBall = Cast<APokeBall>(GetOwner());
	SourceActor = InSourceActor;
	TargetLocation = InTargetLocation;
	PartySlotIndex = InPartySlotIndex;

	if (!IsValid(OwningPokeBall))
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokeballSummonComponent] Owning PokeBall is not valid during initialization."));
		return;
	}

	StartLocation = OwningPokeBall->GetActorLocation();
	bIsInitialized = true;
	bHasOpened = false;

	SetComponentTickEnabled(true);
}

void UPokeballSummonComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bIsInitialized || bHasOpened || !IsValid(OwningPokeBall))
	{
		return;
	}

	const float DistanceTravelled = FVector::Dist(StartLocation, OwningPokeBall->GetActorLocation());

	if (DistanceTravelled >= OpenDistance)
	{
		OpenPokeBall();
	}
}

void UPokeballSummonComponent::HandleHit(const FHitResult& Hit)
{
	// Optional behavior:
	// If the ball hits something before reaching OpenDistance, open immediately.
	if (!bHasOpened)
	{
		OpenPokeBall();
	}
}

void UPokeballSummonComponent::OpenPokeBall()
{
	if (bHasOpened || !IsValid(OwningPokeBall))
	{
		return;
	}

	FVector EnergyLandingTarget = TargetLocation;
	if (UWorld* World = OwningPokeBall->GetWorld())
	{
		const FVector TraceStart = OwningPokeBall->GetActorLocation();
		const FVector TraceEnd = TraceStart - FVector::UpVector * 5000.f;

		FHitResult GroundHit;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(OwningPokeBall);

		if (AActor* SourceActorPtr = SourceActor.Get())
		{
			Params.AddIgnoredActor(SourceActorPtr);
		}

		if (World->LineTraceSingleByChannel(
			GroundHit,
			TraceStart,
			TraceEnd,
			ECC_Visibility,
			Params

		))
		{
			EnergyLandingTarget = GroundHit.ImpactPoint;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[PokeballSummonComponent] Failed to find ground for energy landing target."));
		}
	}

	bHasOpened = true;
	SetComponentTickEnabled(false);

	UProjectileMovementComponent* MovementComp = OwningPokeBall->GetProjectileMovementComponent();
	if (MovementComp)
	{
		MovementComp->StopMovementImmediately();
	}

	if (OwningPokeBall->GetSphereComponent())
	{
		OwningPokeBall->GetSphereComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if (OpenBurstSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			OwningPokeBall->GetWorld(),
			OpenBurstSystem,
			OwningPokeBall->GetActorLocation(),
			OwningPokeBall->GetActorRotation()
		);
	}

	if (SummonEnergyProjectileClass)
	{
		FActorSpawnParameters SpawnParams;
		AActor* SourceActorPtr = SourceActor.Get();

		if (!IsValid(SourceActorPtr) && IsValid(OwningPokeBall))
		{
			SourceActorPtr = OwningPokeBall->GetOwner();
		}

		SpawnParams.Owner = SourceActorPtr;
		SpawnParams.Instigator = Cast<APawn>(SourceActorPtr);

		ASummonEnergyProjectile* EnergyProjectile =
			OwningPokeBall->GetWorld()->SpawnActor<ASummonEnergyProjectile>(
				SummonEnergyProjectileClass,
				OwningPokeBall->GetActorLocation(),
				OwningPokeBall->GetActorRotation(),
				SpawnParams
			);

		if (EnergyProjectile)
		{
			UE_LOG(LogTemp, Log, TEXT("[PokeballSummonComponent] Spawned SummonEnergyProjectile at location: %s"), *OwningPokeBall->GetActorLocation().ToString());
			EnergyProjectile->OnSummonEnergyLanded.AddDynamic(this, &UPokeballSummonComponent::HandleSummonEnergyLanded);

			EnergyProjectile->InitSummonEnergy(EnergyLandingTarget, SourceActorPtr);
		}
	}

	OwningPokeBall->SetLifeSpan(0.15f);
}

void UPokeballSummonComponent::HandleSummonEnergyLanded(FVector LandingLocation, FVector LandingNormal)
{
	UE_LOG(LogTemp, Log, TEXT("[PokeballSummonComponent] Summon energy landed at location: %s, normal: %s"), *LandingLocation.ToString(), *LandingNormal.ToString());
	OnPokeBallSummonLanded.Broadcast(LandingLocation, LandingNormal, PartySlotIndex);
}