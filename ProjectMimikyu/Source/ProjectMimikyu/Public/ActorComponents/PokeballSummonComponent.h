#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokeballSummonComponent.generated.h"

class APokeBall;
class UNiagaraSystem;
class ASummonEnergyProjectile;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FPokeBallSummonLanded,
	FVector, LandingLocation,
	FVector, LandingNormal,
	int32, PartySlotIndex	
);

UCLASS(ClassGroup = (Pokeball), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokeballSummonComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokeballSummonComponent();

	void InitializeForSummon(AActor* InSourceActor, const FVector& InTargetLocation, int32 InPartySlotIndex);

	void HandleHit(const FHitResult& Hit);

	UPROPERTY(BlueprintAssignable)
	FPokeBallSummonLanded OnPokeBallSummonLanded;

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokeball|Summon")
	float OpenDistance = 600.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokeball|Summon")
	TObjectPtr<UNiagaraSystem> OpenBurstSystem;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokeball|Summon")
	TSubclassOf<ASummonEnergyProjectile> SummonEnergyProjectileClass;

private:
	UPROPERTY()
	TObjectPtr<APokeBall> OwningPokeBall;

	UPROPERTY()
	TObjectPtr<AActor> SourceActor;

	FVector StartLocation = FVector::ZeroVector;
	FVector TargetLocation = FVector::ZeroVector;
	int32 PartySlotIndex = INDEX_NONE;

	bool bIsInitialized = false;
	bool bHasOpened = false;

	void OpenPokeBall();

	UFUNCTION()
	void HandleSummonEnergyLanded(FVector LandingLocation, FVector LandingNormal);
};