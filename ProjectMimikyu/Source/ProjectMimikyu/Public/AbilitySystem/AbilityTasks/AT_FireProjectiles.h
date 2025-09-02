// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include <PokemonAbilityTypes.h>
#include "AT_FireProjectiles.generated.h"


UENUM(BlueprintType)
enum class EProjectileSpreadMode : uint8
{
	SingleShot UMETA(DisplayName = "SingleShot"),
	Burst UMETA(DisplayName = "Burst"),
	Spread UMETA(DisplayName = "Spread"),
	Sequential UMETA(DisplayName = "Sequential"),
	Beam UMETA(DisplayName = "Beam")
};

class AProjectileAttack;
class UGameplayEffect;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireProjectileFinished);

UCLASS()
class PROJECTMIMIKYU_API UAT_FireProjectiles : public UAbilityTask
{
	GENERATED_BODY()
	
public: 

	UPROPERTY(BlueprintAssignable)
	FOnFireProjectileFinished OnFinished;

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAT_FireProjectiles* FireProjectiles
	(
		UGameplayAbility* OwningAbility,
		FName TaskInstanceName,
		EProjectileSpreadMode SpreadMode = EProjectileSpreadMode::SingleShot,
		TSubclassOf<AProjectileAttack> ProjectileClass = nullptr,
		TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr,
		FGameplayEffectContextHandle DamageEffectContextHandle = FGameplayEffectContextHandle(),
		FDamageEffectParams DamageEffectParams = FDamageEffectParams(),
		int32 AbilityLevel = 1,
		FVector SpawnLocation = FVector::ZeroVector,
		FRotator BaseRotation = FRotator::ZeroRotator,
		AActor* SourceActor = nullptr,
		int32 NumberOfProjectiles = 1,
		float TimeBetweenShots = 0.1f,
		float SpreadAngle = 0.f,
		float BeamDuration = 0.f
	);

protected:
	virtual void Activate() override;

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Task")
	void HandleSingleShotBP();

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Task")
	void HandleBurstBP();

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Task")
	void HandleSpreadBP();

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Task")
	void HandleSequentialBP();

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Task")
	void HandleBeamBP();

	virtual void HandleSingleShotBP_Implementation();
	virtual void HandleBurstBP_Implementation();
	virtual void HandleSpreadBP_Implementation();
	virtual void HandleSequentialBP_Implementation();
	virtual void HandleBeamBP_Implementation();
	
	void FireOneProjectile(const FRotator& NewRotation);
	FRotator GetRandomScatterRotation(const FVector& StartLocation,const FVector& EndLocation, float DistanceToSphere,float SphereRadius);
private:
	FTimerHandle SequentialTimerHandle;
	EProjectileSpreadMode SpreadMode;
	TSubclassOf<AProjectileAttack> ProjectileClass;
	TSubclassOf<UGameplayEffect> DamageEffectClass;
	FVector SpawnLocation;
	FRotator BaseRotation;
	AActor* SourceActor;
	FGameplayEffectContextHandle DamageEffectContextHandle;
	FDamageEffectParams DamageEffectParams;
	int32 NumOfProjectiles;
	int32 AbilityLevel;
	float FireRate;
	float Spread;
	float BeamTime;
	int32 ProjectilesFired = 0;
};
