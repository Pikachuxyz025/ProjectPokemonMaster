

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonAirborneRecoveryTelemetryComponent.generated.h"

class APokemon_Parent;

struct FAirborneRecoveryObservation
{
    FGuid RequestId;
    FGuid CommandId;

    FVector StartFeet = FVector::ZeroVector;
    FVector RequiredContactFeet = FVector::ZeroVector;
    FVector LaunchVelocity = FVector::ZeroVector;
    FVector LastFallingVelocity = FVector::ZeroVector;

    float PlannedContactTime = 0.f;
    float ElapsedMovementTime = 0.f;

    double StartWorldTime = 0.0;

    bool bReachedContact = false;
    bool bCombatOutcomeKnown = false;
    bool bCombatHit = false;
    bool bLanded = false;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UPokemonAirborneRecoveryTelemetryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPokemonAirborneRecoveryTelemetryComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Traversal|AirborneRecovery")
	FAirborneRecoveryObservation Observation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|AirborneRecovery")
    bool bObserving = false;

    UFUNCTION()
	void HandleLanded(const FHitResult& Hit);
	
	TWeakObjectPtr<APokemon_Parent> PokemonOwner;
};
