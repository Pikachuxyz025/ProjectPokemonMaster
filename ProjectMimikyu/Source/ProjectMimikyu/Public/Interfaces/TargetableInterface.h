

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "ActorComponent/TargetingType.h"
#include "TargetableInterface.generated.h"

UINTERFACE(BlueprintType)
class PROJECTMIMIKYU_API UTargetableInterface : public UInterface
{
		GENERATED_BODY()
};

class PROJECTMIMIKYU_API ITargetableInterface
{
	GENERATED_BODY()

public:
	/** General: can this actor be targeted at all right now? */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool IsTargetable() const;
	virtual bool IsTargetable_Implementation() const;

	/** Can this actor be lock-on targeted in the current aim context? */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool CanBeLockOnTargeted(EAimContext AimContext) const;
	virtual bool CanBeLockOnTargeted_Implementation(EAimContext AimContext) const;

	/** Can this actor be free-aim targeted in the current aim context? */
		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool CanBeFreeAimTargeted(EAimContext AimContext) const;
	virtual bool CanBeFreeAimTargeted_Implementation(EAimContext AimContext) const;

	/** Is this actor currently fainted / downed / invalid for combat targeting? */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool IsFaintedForTargeting() const;
	virtual bool IsFaintedForTargeting_Implementation() const;

	/** Is this actor visually or mechanically obscured enough to break or deny lock? */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool IsTargetObscured() const;
		virtual bool IsTargetObscured_Implementation() const;

	/** Is this actor hidden / untargetable / decoy-protected etc. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool IsTargetHidden() const;
		virtual bool IsTargetHidden_Implementation() const;

	/** Returns the world-space point abilities and reticles should aim at. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	FVector GetTargetAimPoint() const;
	virtual FVector GetTargetAimPoint_Implementation() const;

	/** Optional lock-on focus point, can be same as aim point. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	FVector GetLockOnFocusPoint() const;
	virtual FVector GetLockOnFocusPoint_Implementation() const;

	/** Optional socket name for targeting, useful for skeletal meshes. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	FName GetTargetingSocketName() const;
		virtual FName GetTargetingSocketName_Implementation() const;

	/** Returns true if this target is considered hostile to the requesting actor. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool IsHostileToActor(const AActor* RequestingActor) const;
		virtual bool IsHostileToActor_Implementation(const AActor* RequestingActor) const;

	/** Returns true if this actor is catchable in the current context. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool IsCatchableTarget() const;
		virtual bool IsCatchableTarget_Implementation() const;

	/** Returns true if this actor is interactable in the current context. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	bool IsInteractableTarget() const;
	virtual bool IsInteractableTarget_Implementation() const;
	
	/** Optional target priority score for lock-on selection. Higher is better. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	float GetTargetPriorityScore() const;
		virtual float GetTargetPriorityScore_Implementation() const;

	/** Optional gameplay tags affecting targeting behavior. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Targeting")
	FGameplayTagContainer GetTargetingTags() const;
	virtual FGameplayTagContainer GetTargetingTags_Implementation() const;
};
