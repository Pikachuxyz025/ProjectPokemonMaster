


#include "Navigation/PokemonTraversalEvaluator.h"

FPokemonTraversalCandidate FPokemonTraversalEvaluator::Evaluate(const FPokemonTraversalRequirement& Requirement, const FPokemonTraversalCapabilities& Capabilities)
{
	FPokemonTraversalCandidate Result;
	Result.ParentRequestId = Requirement.ParentRequestId;
	Result.StartFeetLocation = Requirement.StartFeetLocation;
	Result.DestinationFeetLocation = Requirement.DestinationFeetLocation;
	Result.TrajectoryReason = TEXT("DeprecatedProvisionalPlanningOnly");

	const FPokemonProvisionalJumpEnvelope& Envelope = Capabilities.ProvisionalJump;
	Result.CapabilityProfileId = Envelope.ProfileId;

	const auto Reject = [&Result](const TCHAR* Reason)
		{
			Result.FailureReason = FName(Reason);
			return Result;
		};

	if (!Requirement.ParentRequestId.IsValid() || Requirement.StartFeetLocation.ContainsNaN() || Requirement.DestinationFeetLocation.ContainsNaN())
	{
		return Reject(TEXT("InvalidParentRequest"));
	}

	if (Requirement.Circumstance == EPokemonTraversalCircumstance::Unclassified)
	{
		return Reject(TEXT("UnclassifiedCircumstance"));
	}

	if (Requirement.Evidence != EPokemonTraversalEvidence::SuppliedMeasurement)
	{
		return Reject(TEXT("ClassificationEvidenceMissing"));
	}

	const double Horizontal = Requirement.HorizontalSeparation();
	const double Vertical = Requirement.VerticalSeparation();

	if (!FMath::IsFinite(Horizontal) || !FMath::IsFinite(Vertical))
	{
		return Reject(TEXT("InvalidSeparation"));
	}

	switch (Requirement.Circumstance)
	{
	case EPokemonTraversalCircumstance::VerticalAccess:
		if (FMath::IsNearlyZero(Vertical))
		{
			return Reject(TEXT("VerticalSeparationMissing"));
		}
		break;

	case EPokemonTraversalCircumstance::GapTraversal:
		if (FMath::IsNearlyZero(Horizontal))
		{
			return Reject(TEXT("HorizontalSeparationMissing"));
		}
		break;

	default:
		return Reject(TEXT("UnsupportedCircumstance"));
	}

	// 0.1 only models relocation that must end on support.
	// Airborne completion requires a later parent/executor contract.
	if (!Requirement.bLandingRequired || Requirement.bParentMayCompleteWhileAirborne)
	{
		return Reject(TEXT("UnsupportedCompletionPolicy"));
	}

	if (!Requirement.bStartSupportKnown)
	{
		return Reject(TEXT("StartSupportUnknown"));
	}

	if (!Requirement.bDestinationSupportKnown)
	{
		return Reject(TEXT("DestinationSupportUnknown"));
	}

	if (!Capabilities.bCanNaturallyJump)
	{
		return Reject(TEXT("NaturalJumpUnavailable"));
	}

	if (!Envelope.bEnabled)
	{
		return Reject(TEXT("JumpModelUnavailable"));
	}

	if (Envelope.ProfileId.IsNone() || !FMath::IsFinite(Envelope.MaxHorizontalSpan) || !FMath::IsFinite(Envelope.MaxRise) || !FMath::IsFinite(Envelope.MaxDrop) || Envelope.MaxHorizontalSpan < 0.f || Envelope.MaxRise < 0.f || Envelope.MaxDrop < 0.f)
	{
		return Reject(TEXT("InvalidCapabilityProfile"));
	}

	if (Horizontal > Envelope.MaxHorizontalSpan || Vertical > Envelope.MaxRise || -Vertical > Envelope.MaxDrop)
	{
		return Reject(TEXT("CapabilityInsufficient"));
	}

	Result.Solution = EPokemonTraversalSolutionType::Jump;
	Result.FailureReason = NAME_None;

	// Legacy planning never sets physical/body/landing validation or authorizes execution.
	return Result;
}