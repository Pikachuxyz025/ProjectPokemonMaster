

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "PokemonLandingOrientationComponent.generated.h"

class APokemon_Parent;
class ACharacter;
struct FPokemonCommandTarget;

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonLandingOrientationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonLandingOrientationComponent();

	bool ArmWhiffFacing(FGuid CommandId, const FPokemonCommandTarget& Target);

	void ReleaseAfterAirborneRecovery(FGuid CommandId);
	void CancelLandingFacing(FGuid ExpectedCommandId = FGuid());

	bool IsPivoting() const { return bPivotActive; }

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UFUNCTION()
	void HandleLanded(const FHitResult& Hit);

	UFUNCTION()
	void HandleMovementModeChanged(ACharacter* Character, EMovementMode PrevioustMode, uint8 PreviousCustomMode);

	void TryBeginGroundedPivot();
	bool ResolveFacingTarget(FVector& OutLocation) const;

	TWeakObjectPtr<APokemon_Parent> PokemonOwner;
	TWeakObjectPtr<AActor> FacingTargetActor;

	FGameplayTag FacingTargetPointTag;
	FVector FixedTargetLocation = FVector::ZeroVector;

	FGuid SourceCommandId;

	float PivotElapsedTime = 0.0f;
	float ArmedWorldTime = 0.0f;

	bool bHasFixedTarget = false;
	bool bArmed = false;
	bool bAirborneOwnsYaw = false;
	bool bLandingObserved = false;
	bool bPivotActive = false;

	bool bSavedControllerYaw = false;
	bool bSavedOrientToMovement = false;
	bool bSavedDesiredRotation = false;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Landing|Development")
	float PrototypePivotDuration = 0.22f;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Landing|Development")
	float PrototypePivotYawSpeed = 900.f;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Landing|Development")
	float PivotAlignmentTolerance = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Landing|Development")
	float PendingFacingTimeout = 5.f;
};
