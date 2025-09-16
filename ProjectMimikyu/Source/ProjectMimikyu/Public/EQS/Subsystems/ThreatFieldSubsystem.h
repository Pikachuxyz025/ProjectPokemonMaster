// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ThreatFieldSubsystem.generated.h"

class UAbilitySystemComponent;

// EQS World Subsystem

USTRUCT(BlueprintType)
struct FEnvAreaCenterEntry
{
	GENERATED_BODY()

	TWeakObjectPtr<UAbilitySystemComponent> OwnerASC = nullptr;

	int32 ActivationId = -1;
	FVector AreaCenter = FVector::ZeroVector;
	float AreaRadius = 0.f;

	double CreationTime = 0.f; // when this center was registered
	double LastUpdatedAt = 0.f; // if you retarget the center between waves
	double ExpiresAt = 0.f; // optional TTL; after this, contexts ignore it // 0 = never expires
};

USTRUCT(BlueprintType)
struct FThreatEntry
{
	GENERATED_BODY()

	TWeakObjectPtr<UAbilitySystemComponent> OwnerASC = nullptr;

	FVector Location = FVector::ZeroVector;
	float ImpactRadius = 0.f;

	double TelegraphAt = 0.f; // when you spawned the threat (For UI/weighting)
	double ETA = 0.f; // when the threat will hit (used by dodge queries)
	double ExpiresAt = 0.f; // when the threat is no longer relevant (for lingering AoE attacks) // = ETA for instant attacks; > ETA for lingering 

	TWeakObjectPtr<AActor> Instigator = nullptr;
	int32 ActivationId = -1;
};

UCLASS(BlueprintType, Blueprintable)
class PROJECTMIMIKYU_API UThreatFieldSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()
	
public:
	
	// Centers
	UFUNCTION(BlueprintCallable, Category = "Threat Field Subsystem")
	void RegisterAreaCenter(UAbilitySystemComponent* OwnerASC, int32 ActivationId, const FVector& AreaCenter, float AreaRadius, double TimeToLive = 0.f);
	
	UFUNCTION(BlueprintCallable, Category = "Threat Field Subsystem")
	bool GetAreaCenter(UAbilitySystemComponent* OwnerASC, int32 ActivationId, FVector& OutAreaCenter, float& OutAreaRadius) const;
	
	UFUNCTION(BlueprintCallable, Category = "Threat Field Subsystem")
	void UpdateAreaCenter(UAbilitySystemComponent* OwnerASC, int32 ActivationId, const FVector& NewAreaCenter);
	
	UFUNCTION(BlueprintCallable, Category = "Threat Field Subsystem")
	void ClearCenterByActivationId(UAbilitySystemComponent* OwnerASC, int32 ActivationId);

	// Threats
	UFUNCTION(BlueprintCallable, Category = "Threat Field Subsystem")
	void RegisterThreat(UAbilitySystemComponent* OwnerASC, int32 ActivationId, const FVector& Location, float ImpactRadius, double TelegraphedAt, double ETA, double EndAt, AActor* Instigator = nullptr);
	
	UFUNCTION(BlueprintCallable, Category = "Threat Field Subsystem")
	void QueryThreats(const FVector& Near, float MaxRadius, double TimeHorizon, TArray<FThreatEntry>& OutThreats) const;
	
	UFUNCTION(BlueprintCallable, Category = "Threat Field Subsystem")
	void ClearThreatsByActivationId(UAbilitySystemComponent* OwnerASC, int32 ActivationId);

	// Housekeeping
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

private:
	// Per-owner bucket -> activations -> entrties
	TMap<TWeakObjectPtr<UAbilitySystemComponent>, TMap<int32, FEnvAreaCenterEntry>> AreaCenters;
	TMap<TWeakObjectPtr<UAbilitySystemComponent>, TMultiMap<int32, FThreatEntry>>   Threats;
};
