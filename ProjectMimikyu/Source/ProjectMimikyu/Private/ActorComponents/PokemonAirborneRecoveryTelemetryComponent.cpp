


#include "ActorComponents/PokemonAirborneRecoveryTelemetryComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Characters/Pokemon_Parent.h"

UPokemonAirborneRecoveryTelemetryComponent::UPokemonAirborneRecoveryTelemetryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokemonAirborneRecoveryTelemetryComponent::HandleLanded(const FHitResult& Hit)
{
    if (!bObserving)
    {
        return;
    }

	PokemonOwner = Cast<APokemon_Parent>(GetOwner());

    UCharacterMovementComponent* Movement =
        PokemonOwner->GetCharacterMovement();

    if (!Movement)
    {
        return;
    }

    const FVector LandingFeet =
        Movement->GetActorFeetLocation();

    const bool bWalkable =
        Movement->IsWalkable(Hit);

    UE_LOG(LogTemp, Display,
        TEXT("[AirRecoveryTrace] Landed | ")
        TEXT("RequestId=%s | ")
        TEXT("CommandId=%s | ")
        TEXT("Feet=%s | ")
        TEXT("LastFallingVelocity=%s | ")
        TEXT("Walkable=%d | ")
        TEXT("StartPenetrating=%d | ")
        TEXT("ImpactNormal=%s"),
        *Observation.RequestId.ToString(),
        *Observation.CommandId.ToString(),
        *LandingFeet.ToCompactString(),
        *Observation.LastFallingVelocity.ToCompactString(),
        bWalkable,
        Hit.bStartPenetrating,
        *Hit.ImpactNormal.ToCompactString());

    Observation.bLanded = true;
}


