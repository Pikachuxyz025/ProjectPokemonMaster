// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "Characters/CharacterTypes.h"
#include "ProjectileAbility.generated.h"

class AProjectileAttack;

UENUM(BlueprintType)
enum class EProjectileEditorMode :uint8
{
	None,
	Single,
	Burst,
	Spread,
	Sequential,
	Drop,
	Erupt,
	Beam,
	AOE
};

inline EProjectileEditorMode InferProjectileEditorModeFromTags(const FGameplayTagContainer& Tags)
{
	const FPokemonGameplayTags& GameplayTags = FPokemonGameplayTags::Get();

	bool bIsBurst = Tags.HasTagExact(GameplayTags.Projectiles_Categories_FireShot_Burst);
	bool bIsSpread = Tags.HasTagExact(GameplayTags.Projectiles_Categories_FireShot_Spread);
	bool bIsSequential = Tags.HasTagExact(GameplayTags.Projectiles_Categories_FireShot_Sequential);
	bool bIsDrop = Tags.HasTagExact(GameplayTags.Projectiles_Categories_Environment_Drop);
	bool bIsErupt = Tags.HasTagExact(GameplayTags.Projectiles_Categories_Environment_Erupt);
	bool bIsBeam = Tags.HasTag(GameplayTags.Projectiles_Categories_Beam);
	bool bIsAOE = Tags.HasTag(GameplayTags.Projectiles_Categories_AOE);

	if (bIsBeam)
	{
		return EProjectileEditorMode::Beam;
	}
	else if (bIsDrop)
	{
		return EProjectileEditorMode::Drop;
	}
	else if (bIsErupt)
	{
		return EProjectileEditorMode::Erupt;
	}
	else if (bIsBurst)
	{
		return EProjectileEditorMode::Burst;
	}
	else if (bIsSpread)
	{
		return EProjectileEditorMode::Spread;
	}
	else if (bIsSequential)
	{
		return EProjectileEditorMode::Sequential;
	}
	else if (bIsSequential)
	{
		return EProjectileEditorMode::Sequential;
	}
	else if (bIsAOE)
	{
		return EProjectileEditorMode::AOE;
	}
	else
	{
		return EProjectileEditorMode::Single;
	}
}

USTRUCT(BlueprintType)
struct FProjectileHomingParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing")
	float HomingAccelerationMagnitude = 6000.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing")
	float HomingLockRange = 2500.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing", meta = (ClampMin = "0"))
	float RetargetInterval = 0.5f;
};

USTRUCT(BlueprintType)
struct FProjectileBounceParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Bounce", meta = (ClampMin = "0", ClampMax = "1") )
	float Bounciness = 0.6f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Bounce", meta = (ClampMin = "0"))
	float Friction = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Bounce", meta = (ClampMin = "0"))
	int32 MaxBounces = 1;
};

USTRUCT(BlueprintType)
struct FProjectileReflectParams
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Reflect")
	int32 MaxReflections = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Reflect", meta = (ClampMin = "0"))
	float ReflectionAngleTolerance = 45.f;

	// Optionally scale speed/damage per reflect
	UPROPERTY(EditAnywhere, Category = "Reflect")
	float SpeedMultiplierOnReflect = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Reflect")
	float DamageMultiplierOnReflect = 1.0f;
};

USTRUCT(BlueprintType)
struct FProjectileMultiHitParams
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MultiHit", meta = (ClampMin = "0"))
	float PeriodBetweenHits = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MultiHit", meta = (ClampMin = "1"))
	int32 MaxHits = 3;
};

USTRUCT(BlueprintType)
struct FProjectileChargeParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Charge", meta = (ClampMin = "0"))
	float ChargeTime = .75f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Charge", meta = (ClampMin = "0"))
	float DamageScaleAtFullCharge = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Charge", meta = (ClampMin = "0"))
	float SpeedScaleAtFullCharge = 1.25f;
};

USTRUCT(BlueprintType)
struct FProjectileTrackingParams
{
	GENERATED_BODY()

	// Variables for tracking a moving target
	// Used during Motion Warpping
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tracking")
	float MaxTrackingDuration = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tracking")
	float MaxTrackingDistance = 2000.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tracking")
	float AcceptableTrackingRadius = 100.f;	
};

USTRUCT(BlueprintType)
struct FProjectileCombustableParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combustable", meta = (ClampMin = "2"))
	int32 SplitCount = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combustable")
	float SplitAngle = 30.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combustable", meta = (ClampMin = "0"))
	float SplitDelay = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combustable", meta = (ClampMin = "0"))
	float SpeedMultiplierPerSplit = 0.8f;
};

USTRUCT(BlueprintType)
struct FProjectileContinuousParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Continuous", meta = (ClampMin = "0"))
	float TickInterval = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Continuous", meta = (ClampMin = "0"))
	float LifeSpan = 5;
};

USTRUCT(BlueprintType)
struct FProjectileModifierSettings
{
	GENERATED_BODY()

	// Derived “show” flags — recomputed from tags (VisibleAnywhere so designers see why things appear)
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasHoming = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasBounce = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasReflectable = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasTracking = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasScatter = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasMultiHit = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasContinuous = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasCharge = false;
	UPROPERTY(VisibleAnywhere, Category = "Derived") bool bHasCombustable = false;

	// Actual modifier structs, only editable if the corresponding tag is set
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasHoming", EditConditionHides))
	FProjectileHomingParams HomingParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasBounce", EditConditionHides))
	FProjectileBounceParams BounceParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasReflectable", EditConditionHides))
	FProjectileReflectParams ReflectParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasMultiHit", EditConditionHides))
	FProjectileMultiHitParams MultiHitParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasCharge", EditConditionHides))
	FProjectileChargeParams ChargeParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasTracking", EditConditionHides))
	FProjectileTrackingParams TrackingParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasCombustable", EditConditionHides))
	FProjectileCombustableParams CombustableParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (EditCondition = "bHasContinuous", EditConditionHides))
	FProjectileContinuousParams ContinuousParams;
};

USTRUCT(BlueprintType)
struct FProjectileSettings
{

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Derived")
	EProjectileEditorMode DerivedMode = EProjectileEditorMode::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile", meta = (EditCondition = "DerivedMode != EProjectileEditorMode::Drop", EditConditionHides))
	float Speed = 1200.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float GravityScale = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float LifeTime = 5.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Sequential", EditConditionHides))
	float FireRate = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Sequential", EditConditionHides))
	bool bUseSequentialOverride =false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Sequential", EditConditionHides))
	int32 NumProjectiles = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Burst", EditConditionHides))
	float BurstSpreadAngle = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Burst", EditConditionHides))
	int32 BurstCount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Beam", EditConditionHides))
	float BeamTime = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile|Sequential", meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Sequential", EditConditionHides))
	float SpreadAngle = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile|Sequential", meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Sequential", EditConditionHides, ClampMin = "1"))
	int32 SpreadCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile", meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Sequential || DerivedMode == EProjectileEditorMode::Burst || DerivedMode == EProjectileEditorMode::Spread", EditConditionHides))
	float DistanceToSphere = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile", meta = (EditCondition = "DerivedMode == EProjectileEditorMode::Sequential || DerivedMode == EProjectileEditorMode::Burst || DerivedMode == EProjectileEditorMode::Spread", EditConditionHides))
	float SphereRadius = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	TSubclassOf<AProjectileAttack> ProjectileClass = nullptr;
};


UCLASS()
class PROJECTMIMIKYU_API UProjectileAbility : public UPokemonDamageGameplayAbilities
{
	GENERATED_BODY()
	
protected:
	
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = "Projectile|Editor")
	EProjectileEditorMode EditorMode = EProjectileEditorMode::None;
#endif
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag, AActor* TargetActor);

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	FProjectileTagContainer ProjectileCategoryTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	FProjectileSettings ProjectileConfig;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	FProjectileModifierSettings ProjectileModifierSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile|Environment", meta = (EditCondition = "EditorMode == EProjectileEditorMode::Drop || EditorMode == EProjectileEditorMode::Erupt ",EditConditionHides))
	FEnvironmentDropParams EnvironmentDropParams;


public:


#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	void RefreshEditorModeToggles();
#endif

	// Function Overrides

	UFUNCTION(BlueprintNativeEvent, Category = "Task Override")
	bool OverrideSequentialShotRotation(const FGameplayTagContainer& ResolvedTags, const FSequentialShotParams& SequentialShotParams, FRotator& OutRotation);
};
