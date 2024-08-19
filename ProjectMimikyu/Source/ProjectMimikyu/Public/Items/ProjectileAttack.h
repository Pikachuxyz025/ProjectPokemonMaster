// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Projectile.h"
#include "ProjectileAttack.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProjectileImpact, AActor*, OtherActor, FHitResult, HitResult);

UCLASS()
class PROJECTMIMIKYU_API AProjectileAttack : public AProjectile
{
	GENERATED_BODY()
	
public:
	AProjectileAttack();
	FOnProjectileImpact OnProjectileImpact;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
protected:

	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;


	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* ImpactParticles;

	UPROPERTY(EditAnywhere)
	class USoundCue* ImpactSound;

	UPROPERTY(EditAnywhere)
	class	UNiagaraSystem* TrailSystem;

	UPROPERTY(EditDefaultsOnly)
	class UParticleSystemComponent* TrailComponent;

	UPROPERTY(EditAnywhere)
	AActor* Target;

private:
	UPROPERTY(EditAnywhere)
	float InitialSpeed = 15000;

	UPROPERTY(EditAnywhere)
	bool bIsHoming = false;

	UPROPERTY(EditAnywhere)
	float ProjectileGravity = 0;

public:
	FORCEINLINE	 void SetInitialSpeed(float NewSpeed) { InitialSpeed = NewSpeed; }
	FORCEINLINE void SetTarget(AActor* NewTarget) { Target = NewTarget; }
};
