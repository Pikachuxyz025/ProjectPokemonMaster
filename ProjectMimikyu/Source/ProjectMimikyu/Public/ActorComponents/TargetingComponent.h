// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorComponents/TargetingType.h"
#include "TargetingComponent.generated.h"

UCLASS(ClassGroup = (Custom), BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|State")
	EAimContext CurrentAimContext = EAimContext::Combat;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|State")
	EAimTypeMode CurrentAimMode = EAimTypeMode::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|State")
	TWeakObjectPtr<AActor> CurrentLockedTarget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|State")
	FVector CachedAimLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|State")
	FVector CachedAimDirection = FVector::ForwardVector;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|State")
	bool bFreeAimHeld = false;

#pragma region Lock-On Settings
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Lock-On")
	float LockOnSearchRadius = 2500.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Lock-On")
	float MaxLockOnDistance = 3000.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Lock-On")
	float LockOnBreakGracePeriod = 0.35f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Lock-On")
	float TargetSwitchSearchRadius = 3000.f;


	// Should look into making a bar variable with these weights. 
	// The dot on this bar would represent the current target's balance of distance vs alignment, and the player could adjust the weights to their liking. 
	// For example, a player who prefers to lock onto targets that are more directly in front of them, 
	// even if they are farther away, could increase the LockScoreAlignmentWeight and decrease the LockScoreDistanceWeight, 
	// while a player who prefers to lock onto closer targets, even if they are not perfectly aligned, could do the opposite.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Lock-On")
	float LockScoreDistanceWeight = .35f; // Both LockScoreDistanceWeight and LockScoreAlignmentWeight are in the range [0,1] and should add up to 1, as they are used to weight the distance and alignment scores when calculating the overall lock score for a target.

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Lock-On")
	float LockScoreAlignmentWeight = .65f; // Both LockScoreDistanceWeight and LockScoreAlignmentWeight are in the range [0,1] and should add up to 1, as they are used to weight the distance and alignment scores when calculating the overall lock score for a target.
#pragma endregion

#pragma region Free Aim Settings

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Free Aim")
	float FreeAimTraceDistance = 10000.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Free Aim")
	TEnumAsByte<ECollisionChannel> AimTraceChannel = ECC_Visibility;
#pragma endregion


#pragma region Aim Assist Settings
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Aim Assist")
	bool bEnableAimAssist = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Aim Assist")
	float AimAssistMaxDistance = 2500.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Aim Assist")
	float AimAssistConeDotThreshold = 0.94f;
#pragma endregion

#pragma region Runtime
	UPROPERTY(Transient)
	float CurrentLockInvalidTime = 0.f;
#pragma endregion

public:	
	UTargetingComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	virtual void BeginPlay() override;

public:	

#pragma region Aim Mode / Context

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void SetAimContext(EAimContext NewContext);

	UFUNCTION(BlueprintPure, Category = "Targeting")
	EAimContext GetAimContext() const { return CurrentAimContext; }

	UFUNCTION(BlueprintPure, Category = "Targeting")
	EAimTypeMode GetAimMode() const { return CurrentAimMode; }

	UFUNCTION(BlueprintPure, Category = "Targeting")
	bool IsInFreeAim() const { return CurrentAimMode == EAimTypeMode::FreeAim; }

	UFUNCTION(BlueprintPure, Category = "Targeting")
	bool IsLockedOn() const { return CurrentAimMode == EAimTypeMode::LockOn && CurrentLockedTarget.IsValid(); }
#pragma endregion

#pragma region Lock-On
	UFUNCTION(BlueprintCallable,Category="Targeting")
	void ToggleLockOn();

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	bool TryLockOnToBestTarget();

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void ClearLockOn();

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void SwitchTargetLeft();

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void SwitchTargetRight();

	UFUNCTION(BlueprintPure, Category = "Targeting")
	AActor* GetCurrentLockedTarget() const { return CurrentLockedTarget.Get(); }
#pragma endregion

#pragma region Free Aim
	
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void BeginFreeAim();

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void EndFreeAim();

	UFUNCTION(BlueprintPure,Category="Targeting")
	FVector GetCurrentAimWorldLocation() const { return CachedAimLocation; }

	UFUNCTION(BlueprintPure, Category = "Targeting")
	FVector GetCurrentAimDirection() const { return CachedAimDirection; }
#pragma endregion

#pragma region Final Aim Output
	FAimData BuildAimData() const;
#pragma endregion

#pragma region Validation / Assist
	UFUNCTION(BlueprintCallable,Category="Targeting")
	bool IsLockTargetStillValid(AActor* Target) const;

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	bool TryGetAimAssistTarget(AActor*& OutTarget, FVector& OutAimLocation) const;
#pragma endregion

protected:

#pragma region Internal Updates
	void UpdateAimMode();
	void UpdateFreeAimTrace();
	void UpdateLockOnState(float DeltaTime);
#pragma endregion

#pragma region Queries
	bool GetViewPoint(FVector& OutLocation, FRotator& OutRotation) const;
	bool PerformAimTrace(FHitResult& OutHit) const;
	void GatherTargetCandidates(TArray<AActor*>& OutCandidates,EAimTypeMode QueryAimMode) const;
	AActor* FindBestLockOnTarget() const;
	AActor* FindSwitchTarget(bool bSwitchRight) const;
#pragma endregion


#pragma region Helpers
	float ScoreTargetForLockOn(AActor* Candidate) const;
	bool HasLineOfSightToTarget(AActor* Target) const;
	FVector GetTargetAimPoint(AActor* Target) const;
	bool IsActorTargetable(AActor* Target, EAimTypeMode QueryAimMode) const;
	bool IsActorHostileOrRelevant(AActor* Target) const;
#pragma endregion
};
