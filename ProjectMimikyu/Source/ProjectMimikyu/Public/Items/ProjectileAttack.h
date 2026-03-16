// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PokemonAbilityTypes.h"
#include "Items/Projectile.h"
#include "AbilitySystem/Abilities/ProjectileAbility.h"
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
	void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
	virtual void OnProjectileOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* ImpactParticles;

	UPROPERTY(EditAnywhere)
	class USoundCue* ImpactSound;

	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* TrailSystem;

	UPROPERTY(EditDefaultsOnly)
	class UParticleSystemComponent* TrailComponent;



private:

	UPROPERTY(VisibleAnywhere, Category = "Homing")
	AActor* HomingTarget;

	UPROPERTY(VisibleAnywhere, Category = "Homing")
	float RetargetInterval = 0.1f;

	UPROPERTY(VisibleAnywhere, Category = "Homing")
	float HomingLockRange = 2000.f;

	FTimerHandle RetargetTimerHandle;

	void RetargetTick();
	void TryApplyDamage(AActor* OtherActor, const FHitResult& Hit);
public:
	//FORCEINLINE void SetTarget(AActor* NewTarget) { Target = NewTarget; }

	void SetInitialVelocity(const FVector& NewVelocity);
	void SetInitialSpeed(const float InitialSpeed);
	void SetProjectileGravity(float GravityScale);

	void EnableHoming(AActor* TargetActor, FProjectileHomingParams HomingParams);
	void EnableReflect(FProjectileReflectParams ReflectParams);
	void EnableBounce(FProjectileBounceParams BounceParams);
};
