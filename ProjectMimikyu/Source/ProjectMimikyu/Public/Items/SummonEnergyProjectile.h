#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SummonEnergyProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UNiagaraComponent;
class UNiagaraSystem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FOnSummonEnergyLanded,
    FVector, LandingLocation,
    FVector, LandingNormal
);

UCLASS()
class PROJECTMIMIKYU_API ASummonEnergyProjectile : public AActor
{
    GENERATED_BODY()

public:
    ASummonEnergyProjectile();

    UFUNCTION(BlueprintCallable)
    void InitSummonEnergy(const FVector& InTargetLocation, AActor* InSourceActor);

    UPROPERTY(BlueprintAssignable)
    FOnSummonEnergyLanded OnSummonEnergyLanded;

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<USphereComponent> CollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<UNiagaraComponent> TrailComponent;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "VFX")
    TObjectPtr<UNiagaraSystem> TrailSystem;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "VFX")
    TObjectPtr<UNiagaraSystem> LandingImpactSystem;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement")
    float LaunchSpeed = 1800.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement")
	float GravityScale = 1.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement")
    float ArcLiftStrength = 0.35f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Lifetime")
    float LifeAfterLanding = 0.25f;

private:
    UFUNCTION()
    void HandleHit(
        UPrimitiveComponent* HitComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        FVector NormalImpulse,
        const FHitResult& Hit
    );

    FVector TargetLocation = FVector::ZeroVector;
    bool bHasLanded = false;
};