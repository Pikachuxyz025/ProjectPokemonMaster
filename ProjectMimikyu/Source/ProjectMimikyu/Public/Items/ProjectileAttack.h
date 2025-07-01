// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PokemonAbilityTypes.h"
#include "Items/Projectile.h"
#include <GameplayEffectTypes.h>
#include "ProjectileAttack.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProjectileImpact, AActor*, OtherActor, FHitResult, HitResult);

UCLASS()
class PROJECTMIMIKYU_API AProjectileAttack : public AProjectile
{
	GENERATED_BODY()
	
public:
	AProjectileAttack();
	FOnProjectileImpact OnProjectileImpact;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn = true))
	FGameplayEffectSpecHandle DamageEffectSpecHandle;

	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn = true))
	FDamageEffectParams DamageEffectParams;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
protected:

	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	virtual void OnProjectileOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* ImpactParticles;

	UPROPERTY(EditAnywhere)
	class USoundCue* ImpactSound;

	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* TrailSystem;

	UPROPERTY(EditDefaultsOnly)
	class UParticleSystemComponent* TrailComponent;

	UPROPERTY(EditAnywhere)
	AActor* Target;

private:
	UPROPERTY(EditAnywhere)
	float InitialSpeed = 550.f;

	UPROPERTY(EditAnywhere)
	bool bIsHoming = false;

	UPROPERTY(EditAnywhere)
	float ProjectileGravity = 0;

public:
	FORCEINLINE	 void SetInitialSpeed(float NewSpeed) { InitialSpeed = NewSpeed; }
	FORCEINLINE void SetTarget(AActor* NewTarget) { Target = NewTarget; }
};
