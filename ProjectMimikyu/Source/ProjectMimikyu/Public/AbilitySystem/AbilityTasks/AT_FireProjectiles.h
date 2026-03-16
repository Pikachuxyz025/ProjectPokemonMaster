// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Characters/CharacterTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "AbilitySystem/Abilities/ProjectileAbility.h"
#include <PokemonAbilityTypes.h>
#include <EQS/Subsystems/ThreatFieldSubsystem.h>
#include "AT_FireProjectiles.generated.h"



class AProjectileAttack;
class UGameplayEffect;
class UEnvQueryInstanceBlueprintWrapper;
//class UThreatFieldSubsystem;

UENUM(BlueprintType)
enum class EProjectileSpreadMode : uint8
{
	SingleShot UMETA(DisplayName = "SingleShot"),
	Burst UMETA(DisplayName = "Burst"),
	Spread UMETA(DisplayName = "Spread"),
	Sequential UMETA(DisplayName = "Sequential"),
	Drop UMETA(DisplayName = "Drop"),
	Erupt UMETA(DisplayName = "Erupt"),
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
	FProjectileModifierSettings Modifiers;

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

	UPROPERTY(BlueprintReadWrite)
	AActor* TargetActor = nullptr;

	UPROPERTY(BlueprintReadWrite)
	int32 ActivationId = -1;

	UPROPERTY(BlueprintReadWrite)
	float InitialSpeed = 100.f;

	UPROPERTY(BlueprintReadWrite)
	float ProjectileGravityScale = 0.1f;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireProjectileFinished);

UCLASS()
class PROJECTMIMIKYU_API UAT_FireProjectiles : public UAbilityTask
{
	GENERATED_BODY()
	
public: 

	UPROPERTY(BlueprintAssignable)
	FOnFireProjectileFinished OnFinished;

	//UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
	//static UAT_FireProjectiles* FireProjectiles
	//(
	//	UGameplayAbility* OwningAbility,
	//	FName TaskInstanceName,
	//	EProjectileSpreadMode SpreadMode = EProjectileSpreadMode::SingleShot,
	//	TSubclassOf<AProjectileAttack> ProjectileClass = nullptr,
	//	TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr,
	//	FGameplayEffectContextHandle DamageEffectContextHandle = FGameplayEffectContextHandle(),
	//	FDamageEffectParams DamageEffectParams = FDamageEffectParams(),
	//	FGameplayTagContainer CategoryTags=FGameplayTagContainer(),
	//	FVector SpawnLocation = FVector::ZeroVector,
	//	FRotator BaseRotation = FRotator::ZeroRotator,
	//	AActor* SourceActor = nullptr,
	//	int32 NumberOfProjectiles = 1,
	//	float TimeBetweenShots = 0.1f,
	//	float SpreadAngle = 0.f,
	//	float BeamDuration = 0.f
	//);

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
	static UAT_FireProjectiles* FireEnvironmentDrop
	(
		UGameplayAbility* OwningAbility,
		FName TaskInstanceName,
		const FProjectileBaseParams& Common,
		const FEnvironmentDropParams& EnvDropParams
	);


	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Fire Projectiles", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
	static UAT_FireProjectiles* FireEnvironmentErupt
	(
		UGameplayAbility* OwningAbility,
		FName TaskInstanceName,
		const FProjectileBaseParams& Common,
		const FEnvironmentDropParams& EnvDropParams
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

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Task")
	void HandleEnvironmentalDropBP();

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Task")
	void HandleEnvironmentalEruptBP();

	virtual void HandleSingleShotBP_Implementation();
	virtual void HandleBurstBP_Implementation();
	virtual void HandleSpreadBP_Implementation();
	virtual void HandleSequentialBP_Implementation();
	virtual void HandleBeamBP_Implementation();
	virtual void HandleEnvironmentalDropBP_Implementation();
	virtual void HandleEnvironmentalEruptBP_Implementation();
	
	void FireOneProjectile(const FRotator& NewRotation);
	void SpawnProjectile(AProjectileAttack* Projectile, const UAbilitySystemComponent* SourceASC, FTransform& SpawnTransform);
	void FireSequentialShot(int32 ShotIndex);
	void ScheduleWave(int32 WaveIndex);
	void ReleaseSingleDropImpact(const FThreatEntry& ThreatEntry);
	void HandleSequentialTick();

private:

#pragma region Variables Set Upon Creation
	FProjectileBaseParams CommonParams;
	FEnvironmentDropParams EnvDropParams;

	FTimerHandle SequentialTimerHandle;
	FTimerHandle WaveTimerHandle;

	EProjectileSpreadMode SpreadMode;

	TArray<TArray<FThreatEntry>>ScheduledWaves;
	TArray<TArray<FVector>> WavePoints;
	float DistanceToSphere = 0.f;
	float SphereRadius = 0.f;
	float Spread;
	int32 NumOfProjectiles;
	float FireRate;
	float BeamTime;
#pragma endregion

	UPROPERTY()
	TObjectPtr<UThreatFieldSubsystem> ThreatSubsystem = nullptr;

	TWeakObjectPtr<UAbilitySystemComponent> OwnerASC = nullptr;

	int32 ProjectilesFired = 0;
	bool bCancelled = false;
	bool bIsEruptMode = false;
	static UAT_FireProjectiles* InitializeTask(UAT_FireProjectiles* Task, const FProjectileBaseParams& Common);
	
public:
	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Ability|Tasks")
	int32 GetActivationId() const { return CommonParams.ActivationId; }

private:
	static void SetParam(UEnvQueryInstanceBlueprintWrapper* Wrapper, const TCHAR* Name, float Value);

	UFUNCTION()
    void OnEQSFinished(UEnvQueryInstanceBlueprintWrapper* Wrapper, EEnvQueryStatus::Type QueryStatus);

	float TraceToGroundZ(const FVector& XY, float FallBackZ) const;

	FVector ProjectToNavMesh(const FVector& InLocation) const;
	void SpawnTelegraph(const FVector& Location, float Radius);
};
