// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include <PokemonAbilityTypes.h>
#include "AT_FireProjectiles.generated.h"


class AProjectileAttack;
class UGameplayEffect;

UENUM(BlueprintType)
enum class EProjectileSpreadMode : uint8
{
	SingleShot UMETA(DisplayName = "SingleShot"),
	Burst UMETA(DisplayName = "Burst"),
	Spread UMETA(DisplayName = "Spread"),
	Sequential UMETA(DisplayName = "Sequential"),
	Beam UMETA(DisplayName = "Beam")
};

USTRUCT(BlueprintType)
struct FProjectileBaseParams
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<AProjectileAttack> ProjectileClass = nullptr;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr;

	UPROPERTY(BlueprintReadWrite)
	FGameplayEffectContextHandle DamageEffectContextHandle = FGameplayEffectContextHandle();

	UPROPERTY(BlueprintReadWrite)
	FDamageEffectParams DamageEffectParams = FDamageEffectParams();

	UPROPERTY(BlueprintReadWrite)
	FGameplayTagContainer CategoryTags;

	UPROPERTY(BlueprintReadWrite)
	FVector SpawnLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite)
	FVector TargetLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite)
	FRotator BaseRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadWrite)
	AActor* SourceActor = nullptr;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireProjectileFinished);

UCLASS()
class PROJECTMIMIKYU_API UAT_FireProjectiles : public UAbilityTask
{
	GENERATED_BODY()
	
public: 

	UPROPERTY(BlueprintAssignable)
	FOnFireProjectileFinished OnFinished;

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
	static UAT_FireProjectiles* FireProjectiles
	(
		UGameplayAbility* OwningAbility,
		FName TaskInstanceName,
		EProjectileSpreadMode SpreadMode = EProjectileSpreadMode::SingleShot,
		TSubclassOf<AProjectileAttack> ProjectileClass = nullptr,
		TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr,
		FGameplayEffectContextHandle DamageEffectContextHandle = FGameplayEffectContextHandle(),
		FDamageEffectParams DamageEffectParams = FDamageEffectParams(),
		FGameplayTagContainer CategoryTags,
		FVector SpawnLocation = FVector::ZeroVector,
		FRotator BaseRotation = FRotator::ZeroRotator,
		AActor* SourceActor = nullptr,
		int32 NumberOfProjectiles = 1,
		float TimeBetweenShots = 0.1f,
		float SpreadAngle = 0.f,
		float BeamDuration = 0.f
	);

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
		static UAT_FireProjectiles* FireSingle
	(
		UGameplayAbility * OwningAbility,
		FName TaskInstanceName,
		const FProjectileBaseParams& Common
	);

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
		static UAT_FireProjectiles* FireSequential
	(
			UGameplayAbility* OwningAbility,
		FName TaskInstanceName,
		const FProjectileBaseParams& Common,
		int32 NumProjectiles=1,
		float TimeBetweenShots=.1f,
		float SpreadAngle = 0.f,
		float DistanceToSphere = 0.f,
		float SphereRadius = 0.f
	);

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
		static UAT_FireProjectiles* FireBurst
		(
			UGameplayAbility* OwningAbility,
			FName TaskInstanceName,
			const FProjectileBaseParams& Common,
			int32 NumProjectiles = 1,
			float SpreadAngle = 0.f,
			float DistanceToSphere = 0.f,
			float SphereRadius = 0.f
		);

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
		static UAT_FireProjectiles* FireBeam
		(
			UGameplayAbility* OwningAbility,
			FName TaskInstanceName,
			const FProjectileBaseParams & Common,
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
	void FireSequentialShot(int32 ShotIndex);
	void HandleSequentialTick();
	FRotator GetRandomScatterRotation(const FVector& StartLocation,const FVector& EndLocation, float DistanceToSphere,float SphereRadius);
private:

#pragma region Variables Set Upon Creation
	EProjectileSpreadMode SpreadMode;
	TSubclassOf<AProjectileAttack> ProjectileClass;
	TSubclassOf<UGameplayEffect> DamageEffectClass;
	FVector SpawnLocation;
	FVector TargetLocation;
	FRotator BaseRotation;
	AActor* SourceActor;
	FGameplayEffectContextHandle DamageEffectContextHandle;
	FDamageEffectParams DamageEffectParams;
	FGameplayTagContainer CategoryTags;
	int32 NumOfProjectiles;
	float FireRate;
	float Spread;
	float BeamTime;
	float DistanceToSphere = 0.f;
	float SphereRadius = 0.f;
#pragma endregion


	FTimerHandle SequentialTimerHandle;



	//int32 AbilityLevel;

	int32 ProjectilesFired = 0;
	bool bCancelled = false;

	static UAT_FireProjectiles* InitializeTask(UAT_FireProjectiles* Task, const FProjectileBaseParams& Common);
};
