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
			EnergyProjectile->OnSummonEnergyLanded.AddDynamic(
				this,
				&UPokeballSummonComponent::HandleSummonEnergyLanded
			);

			EnergyProjectile->InitSummonEnergy(TargetLocation, SourceActorPtr);
		}
	}

	OwningPokeBall->SetLifeSpan(0.15f);
}

void UPokeballSummonComponent::HandleSummonEnergyLanded(FVector LandingLocation, FVector LandingNormal)
{
	OnPokeBallSummonLanded.Broadcast(LandingLocation, LandingNormal, PartySlotIndex);
}