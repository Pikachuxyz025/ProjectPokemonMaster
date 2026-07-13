#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonHitStopComponent.generated.h"

class USkeletalMeshComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FPokemonHitStopChangedSignature,
	bool, bIsActive,
	float, Duration
);

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonHitStopComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonHitStopComponent();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Combat|Hit Stop")
	void ApplyHitStop(float Duration);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Combat|Hit Stop")
	void ClearHitStop();

	UFUNCTION(BlueprintPure, Category = "Pokemon|Combat|Hit Stop")
	bool IsHitStopActive() const
	{
		return bHitStopActive;
	}

	UFUNCTION(BlueprintPure, Category = "Pokemon|Combat|Hit Stop")
	float GetHitStopRemainingTime() const;

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Combat|Hit Stop")
	FPokemonHitStopChangedSignature OnHitStopChanged;

protected:
	virtual void EndPlay(
		const EEndPlayReason::Type EndPlayReason
	) override;

	UPROPERTY(
		EditDefaultsOnly,
		BlueprintReadOnly,
		Category = "Pokemon|Combat|Hit Stop",
		meta = (ClampMin = "0.001", ClampMax = "1.0")
	)
	float HitStopTimeDilation = 0.01f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Combat|Hit Stop")
	bool bPauseSkeletalAnimation = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Combat|Hit Stop")
	bool bPauseCombatStateTimers = true;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastApplyHitStop(float Duration);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastClearHitStop();

private:
	void ApplyHitStopLocal(float Duration);
	void ClearHitStopLocal();

	FTimerHandle HitStopTimerHandle;

	UPROPERTY(Transient)
	bool bHitStopActive = false;

	float SavedCustomTimeDilation = 1.f;
	float SavedGlobalAnimRateScale = 1.f;

	TWeakObjectPtr<USkeletalMeshComponent> CachedSkeletalMesh;
};