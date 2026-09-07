#pragma once

#include "CoreMinimal.h"
#include "PokemonTraversalTypes.generated.h"

UENUM(BlueprintType)
enum class EPokemonTraversalCircumstance :uint8
{
	Unclassified UMETA(DisplayName = "Unclassified"),
	VerticalAccess UMETA(DisplayName = "Vertical Access"),
	GapTraversal UMETA(DisplayName = "Gap Traversal")
};

UENUM(BlueprintType)
enum class EPokemonTraversalEvidence :uint8
{
	NavigationFailure,
	SuppliedMeasurement
};

UENUM(BlueprintType)
enum class EPokemonTraversalSolutionType :uint8
{
	NoSolution,
	Jump
};

// Spatial problem only. All positions use world-space capsule-feet coordinates.
// A feet position is not, by itself, proof of a supporting/landable surface.
USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonTraversalRequirement
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FGuid ParentRequestId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	EPokemonTraversalCircumstance Circumstance = EPokemonTraversalCircumstance::Unclassified;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	EPokemonTraversalEvidence Evidence = EPokemonTraversalEvidence::NavigationFailure;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FName Trigger =	NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FVector StartFeetLocation = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FVector DestinationFeetLocation = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	bool bDestinationSupportKnown = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")	
	bool bStartSupportKnown = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	bool bLandingRequired = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	bool bParentMayCompleteWhileAirborne = false;

	// Derive these from the anchors so cachedd measurements cannot drift.
	double HorizontalSeparation() const
	{
		return FVector::Dist2D(StartFeetLocation, DestinationFeetLocation);
	}

	double VerticalSeparation() const
	{
		return DestinationFeetLocation.Z - StartFeetLocation.Z;
	}
};

// Temporary, explicitly enabled capability model.
// These are not Character Movement or jump-physics settings.
USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonProvisionalJumpEnvelope
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Traversal|Provisional")
	bool bEnabled = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Traversal|Provisional")
	FName ProfileId = NAME_None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Traversal|Provisional", meta = (ClampMin = "0.0"))
	float MaxHorizontalSpan = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Traversal|Provisional", meta = (ClampMin = "0.0"))
	float MaxRise = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Traversal|Provisional", meta = (ClampMin = "0.0"))
	float MaxDrop = 0.f;
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonTraversalCapabilities
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Traversal")
	bool bCanNaturallyJump = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Traversal")
	FPokemonProvisionalJumpEnvelope ProvisionalJump;
};

// A planning candidate, never permission to execute a jump in 0.1.
USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonTraversalCandidate
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FGuid ParentRequestId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	EPokemonTraversalSolutionType Solution = EPokemonTraversalSolutionType::NoSolution;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FName FailureReason = FName(TEXT("NotEvaluated"));

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FName CapabilityProfileId = NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FVector StartFeetLocation = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	FVector DestinationFeetLocation = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal")
	bool bRequiresPhysicsValidation = true;

	bool IsValidForPlanning() const
	{
		return ParentRequestId.IsValid()
			&& Solution == EPokemonTraversalSolutionType::Jump
			&& FailureReason.IsNone();
	}
};