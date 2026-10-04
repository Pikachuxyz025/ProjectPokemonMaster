#pragma once

#include "CoreMinimal.h"
#include "PokemonTraversalTypes.generated.h"

UENUM(BlueprintType)
enum class EPokemonTraversalCircumstance :uint8
{
	Unclassified UMETA(DisplayName = "Unclassified"),
	VerticalAccess UMETA(DisplayName = "Vertical Access"),
	GapTraversal UMETA(DisplayName = "Gap Traversal"),
	AirborneExecution UMETA(DisplayName = "Airborne Execution")
};

UENUM(BlueprintType)
enum class EPokemonTraversalEvidence :uint8
{
	NavigationFailure,
	SuppliedMeasurement,
	MeasuredDiscontinuity,
	AuthoredJumpLink,

	AttackExecutionRequirement
};

UENUM(BlueprintType)
enum class EPokemonTraversalSolutionType :uint8
{
	NoSolution,
	Jump
};

// Execution modality, independent of Physical/Special damage category.
UENUM(BlueprintType)
enum class EPokemonJumpTrajectoryPreference : uint8
{
	Direct,
	Projectile
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

// Deprecated Traversal 0.1 planning/debug model; never authorizes execution.
// Kept to preserve existing authored Blueprint data during migration to 0.2.
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

// Per-plan effective physical inputs. All speeds are cm/s, gravity is cm/s^2.
USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonJumpCapabilitySnapshot
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	bool bCanNaturallyJump = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float EffectiveSpeedAttribute = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float EffectiveMovementSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float BaseVerticalLaunchVelocity = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float EffectiveAttack = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float AttackHorizontalDeltaV = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float AttackVerticalDeltaV = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float InheritedAlignedSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float AuthorizedMoveAlignedSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float GravityMagnitude = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float AvailableHorizontalSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float AvailableVerticalSpeed = 0.f;
};

// A ballistic plan becomes executable only after capsule and landing validation.
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float FlightTime = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float RequiredHorizontalLaunchSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float RequiredVerticalLaunchSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	FVector FinalLaunchVelocity = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	float GravityMagnitude = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	FPokemonJumpCapabilitySnapshot CapabilitySnapshot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	EPokemonJumpTrajectoryPreference TrajectoryPreference = EPokemonJumpTrajectoryPreference::Direct;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	FName TrajectoryReason = NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	bool bAuthorizedMoveMomentumContributed = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	bool bPhysicsValidated = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	bool bCapsuleClearanceValidated = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|Jump")
	bool bLandingValidated = false;

	bool IsValidForPlanning() const
	{
		return ParentRequestId.IsValid()
			&& Solution == EPokemonTraversalSolutionType::Jump
			&& FailureReason.IsNone();
	}

	bool IsExecutable() const
	{
		return IsValidForPlanning() && bPhysicsValidated && !bRequiresPhysicsValidation
			&& bCapsuleClearanceValidated && bLandingValidated
			&& FMath::IsFinite(FlightTime) && FlightTime > 0.f
			&& !FinalLaunchVelocity.ContainsNaN();
	}
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonAirborneExecutionTrajectoryCandidate
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	FGuid ParentRequestId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	FName FailureReason = TEXT("NotEvaluated");

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	FName CapabilityProfileId = NAME_None;

	// Supported point from which the ballistic motion begins.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	FVector StartFeetLocation = FVector::ZeroVector;

	// NOT a landing.
	// This is the position the attacker must pass though
	// when the authored attack contact occurs.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	FVector RequiredContactFeet = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	float ContactTime = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	FVector FinalLaunchVelocity = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	FVector VelocityAtContact = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	float GravityMagnitude = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	float ApexTime = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	float TriggerTime = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	float RequiredHorizontalLaunchSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	float RequiredVerticalLaunchSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Traversal|AirborneExecution")
	FPokemonJumpCapabilitySnapshot CapabilitySnapshot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	EPokemonJumpTrajectoryPreference TrajectoryPreference =	EPokemonJumpTrajectoryPreference::Direct;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	FName TrajectoryReason = NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	bool bAuthorizedMoveMomentumContributed = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	bool bPhysicsSolved = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	bool bPreContactClearanceValidated = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	bool bAscendingAtContact = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Traversal|AirborneExecution")
	bool bLeadTimeSatisfied = false;

	bool IsValidForPlanning() const  
	{
		return ParentRequestId.IsValid()
			&& FailureReason.IsNone()
			&& bPhysicsSolved
			&& FMath::IsFinite(ContactTime)
			&& ContactTime > 0.f
			&&FMath::IsFinite(GravityMagnitude)
			&& GravityMagnitude > 0.f
			&& !StartFeetLocation.ContainsNaN()
			&& !RequiredContactFeet.ContainsNaN()
			&& !FinalLaunchVelocity.ContainsNaN();
	}

	bool IsExecutableToContact() const
	{
		return IsValidForPlanning()
			&& bPreContactClearanceValidated
			&& bAscendingAtContact
			&& bLeadTimeSatisfied;
	}
};