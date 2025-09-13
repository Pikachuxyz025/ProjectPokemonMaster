// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "Characters/CharacterTypes.h"
#include "ProjectileAbility.generated.h"

class AProjectileAttack;

USTRUCT(BlueprintType)
struct FProjectileSettings
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = "Projectile")
	bool bHasProjectile = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float Speed = 1200.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float DistanceToSphere = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float SphereRadius = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float BeamTime = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float FireRate = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float GravityScale = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	bool bIsHoming = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile", meta = (EditCondition = "bIsHoming"))
	float HomingStrength = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float SpreadAngle = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float LifeTime = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	TSubclassOf<AProjectileAttack> ProjectileClass;
};


UCLASS()
class PROJECTMIMIKYU_API UProjectileAbility : public UPokemonDamageGameplayAbilities
{
	GENERATED_BODY()
	
protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag);

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	FProjectileTagContainer ProjectileCategoryTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	FProjectileSettings ProjectileConfig;

public:

	UFUNCTION(BlueprintImplementableEvent, Category="Task Override")
	bool OverrideSequentialShotRotation(const FGameplayTagContainer& ResolvedTags, const FSequentialShotParams& SequentialShotParams, FRotator& OutRotation);



};
