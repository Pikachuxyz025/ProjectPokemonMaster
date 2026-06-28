#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PokemonImpactTypes.generated.h"

class AActor;

UENUM(BlueprintType)
enum class EPokemonImpactResult : uint8
{
	None UMETA(DisplayName = "None"),

	CleanHit UMETA(DisplayName = "Clean Hit"),
	HeavyHit UMETA(DisplayName = "Heavy Hit"),
	GlancingHit UMETA(DisplayName = "Glancing Hit"),

	Blocked UMETA(DisplayName = "Blocked"),
	GuardBreak UMETA(DisplayName = "Guard Break"),

	NoSell UMETA(DisplayName = "No Sell"),
	BounceOff UMETA(DisplayName = "Bounce Off"),
	PushOff UMETA(DisplayName = "Push Off"),

	Clash UMETA(DisplayName = "Clash"),
	ProjectileClash UMETA(DisplayName = "Projectile Clash"),
	BeamClash UMETA(DisplayName = "Beam Clash"),

	CounterHit UMETA(DisplayName = "Counter Hit"),
	Stuffed UMETA(DisplayName = "Stuffed"),

	Launch UMETA(DisplayName = "Launch"),
	WallBounce UMETA(DisplayName = "Wall Bounce"),
	GroundBounce UMETA(DisplayName = "Ground Bounce")
};

USTRUCT(BlueprintType)
struct FPokemonMoveContactContext
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite,Category = "Combat|Impact")
	TObjectPtr<AActor> AttackingActor;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	TObjectPtr<AActor> DefendingActor;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Move")
	FGameplayTag MoveStyleTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Move")
	FGameplayTag MoveActionTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Move")
	FGameplayTag MoveTypeTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Move")
	FGameplayTag DamageResponseTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Approach")
	FGameplayTag ApproachTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Aim")
	FGameplayTag AimTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	FVector ContactPoint = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	FVector AttackDirection = FVector::ForwardVector;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float Damage = 0.f;
	
	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float ImpactForce = 50.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float KnockbackForce = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float AttackerSpeed = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float AttackerWeight = 1.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float DefenderWeight = 1.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float DefenderDefense = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	float DefenderPoise = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	bool bWasCounterHit = false;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	bool bDefenderBraced = false;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	bool bDefenderAirborne = false;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	bool bAttackerAirborne = false;
};

USTRUCT(BlueprintType)
struct FPokemonImpactResolution
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	EPokemonImpactResult ImpactResult = EPokemonImpactResult::None;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Impact")
	FGameplayTag ImpactResultTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|State")
	FGameplayTag AttackerPostImpactState;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|State")
	FGameplayTag DefenderPostImpactState;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Advantage")
	FGameplayTag AdvantageTag;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Movement")
	FVector AttackerImpulse = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Movement")
	FVector DefenderImpulse = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Timing")
	float AttackerHitStop = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Timing")
	float DefenderHitStop = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Timing")
	float AttackerRecoveryTime = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Timing")
	float DefenderStunTime = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Damage")
	float DamageMultiplier = 1.f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Damage")
	bool bApplyDamage = true;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Advantage")
	bool bCanCancelToDefensiveAction = false;

	UPROPERTY(BlueprintReadWrite, Category = "Combat|Advantage")
	bool bLeavesAttackerVulnerable = false;
};