

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Combat/PokemonMeleeContact.h"
#include "Navigation/PokemonTraversalTypes.h"
#include "PokemonAITypes.generated.h"

namespace PokemonCrowdGroups
{
	inline constexpr int32 GroundPokemon = 1 << 0;
	inline constexpr int32 Trainer = 1 << 1;

	inline constexpr int32 GroundAvoidance = GroundPokemon | Trainer;
}


USTRUCT(BlueprintType)
struct FAgentNavigationRequest
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid RequestId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag IntentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag PreferredMovementMode;

	// Stationary player Move: authoritative ParentDestination for the whole journey.
	// Traversal entry/exit/takeoff belong to local requirements, never this field.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> TargetActor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag TargetPointTag;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FPokemonMeleeContactSettings MeleeContact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPokemonMeleeApproachSnapshot MeleeApproach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesiredDistance = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AcceptableRadius = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Urgency = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowSpecialTraversal = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowGASMovementAbilities = true;

	// When true, this Approach request is a first-class coordinator action.
	// Navigation is responsible for producing a terminal Success/Failure result.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Approach")
	bool bResolveApproachAsAction = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Approach")
	float ApproachTimeout = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Approach")
	float ApproachMoveSpeedMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Approach")
	bool bFaceTargetDuringApproach = true;

	// Execution modality is independent of Physical/Special damage category.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Traversal")
	EPokemonJumpTrajectoryPreference JumpTrajectoryPreference = EPokemonJumpTrajectoryPreference::Direct;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	bool bIsAttackTraversal = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FGuid ParentAttackCommandId;

	// Explicit parent authorization; this vector is bounded by actual aligned velocity.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	bool bTrainerAuthorizedMoveMomentum = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FVector AuthorizedMoveMomentum = FVector::ZeroVector;

	// Conservative parent-completion policy, extensible by later airborne actions.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTraversalRequiresLanding = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bParentMayCompleteWhileAirborne = false;

	bool HasValidIntent() const
	{
		return IntentTag.IsValid();
	}

	bool HasTargetActor() const
	{
		return TargetActor != nullptr;
	}

	bool HasValidRequestId() const
	{
		return RequestId.IsValid();
	}
};
