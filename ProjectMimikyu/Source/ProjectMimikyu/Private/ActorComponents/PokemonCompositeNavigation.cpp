#include "ActorComponents/PokemonNavigationComponent.h"

#include "AIController.h"
#include "Characters/Pokemon_Parent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameplayTags/PokemonAITags.h"
#include "HAL/IConsoleManager.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonJumpTrajectoryValidator.h"

namespace PokemonCompositeNavigation
{
	TAutoConsoleVariable<int32> Debug(TEXT("pokemon.CompositeNav.Debug"), 0,
		TEXT("Composite Move parent/search/segment/continue/failure events."), ECVF_Default);
	TAutoConsoleVariable<int32> Samples(TEXT("pokemon.CompositeNav.MaxSamples"), 12,
		TEXT("Maximum support scan rays per local search (2..24)."), ECVF_Default);
	TAutoConsoleVariable<float> Spacing(TEXT("pokemon.CompositeNav.SampleSpacing"), 75.f,
		TEXT("Support discovery spacing in cm, minimum 25."), ECVF_Default);
	TAutoConsoleVariable<float> Distance(TEXT("pokemon.CompositeNav.MaxDistance"), 1200.f,
		TEXT("Local scan cap in cm, also bounded by current jump capability (0..2000)."), ECVF_Default);
	TAutoConsoleVariable<float> Drop(TEXT("pokemon.CompositeNav.MaxDrop"), 200.f,
		TEXT("Conservative support discovery drop bound in cm (0..500)."), ECVF_Default);
	TAutoConsoleVariable<int32> FanCount(TEXT("pokemon.CompositeNav.FanCount"), 4,
		TEXT("Landing fan: center, left, right, forward (1..4)."), ECVF_Default);
	TAutoConsoleVariable<float> Spread(TEXT("pokemon.CompositeNav.FanSpread"), 60.f,
		TEXT("Landing fan offsets in cm (0..150)."), ECVF_Default);
	TAutoConsoleVariable<float> CostTolerance(TEXT("pokemon.CompositeNav.CostTolerance"), 0.05f,
		TEXT("Minimum improvement in estimated seconds before changing selected candidate."), ECVF_Default);
}

bool UPokemonNavigationComponent::IsCompositePlayerMove() const
{
	return bHasActiveRequest && CurrentNavigationRequest.IntentTag == PokemonAITags::NavIntent_PlayerCommand_Move
		&& !CurrentNavigationRequest.HasTargetActor() && !CurrentNavigationRequest.bIsAttackTraversal;
}

void UPokemonNavigationComponent::LogCompositeEvent(const TCHAR* Event, FName Reason) const
{
	if (IsCompositePlayerMove() && PokemonCompositeNavigation::Debug.GetValueOnGameThread() > 0)
	{
		const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());
		const FVector Feet = Pokemon ? Pokemon->GetCharacterMovement()->GetActorFeetLocation() : FVector::ZeroVector;
		UE_LOG(LogTemp, Display,
			TEXT("[CompositeNav] %s | RequestId=%s | Generation=%u | Searches=%u | Segment=%u | ParentDestination=%s | Feet=%s | DistanceToParentDestination=%.1f | Reason=%s"),
			Event, *CurrentNavigationRequest.RequestId.ToString(), CompositePlanningGeneration, CompositeSearchCount, TraversalSegmentSerial,
			*CurrentNavigationRequest.TargetLocation.ToCompactString(), *Feet.ToCompactString(),
			FVector::Dist2D(Feet, CurrentNavigationRequest.TargetLocation), *Reason.ToString());
	}
}

void UPokemonNavigationComponent::ResetLocalTraversal()
{
	bTraversalPlanReady = false;
	bReachingTakeoff = false;
	TakeoffApproachElapsed = 0.f;
	PendingTraversalRequirement = FPokemonTraversalRequirement();
	LastTraversalRequirement = FPokemonTraversalRequirement();
	LastTraversalCandidate = FPokemonTraversalCandidate();
	ActiveJumpLink.Reset();
	SelectedCompositeCost = FPokemonCompositeMoveCost();
}

bool UPokemonNavigationComponent::TryCompletePlayerMove()
{
	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());
	if (!IsCompositePlayerMove() || !Pokemon || !Pokemon->GetCharacterMovement()->IsMovingOnGround())
	{
		return false;
	}
	const FVector Feet = Pokemon->GetCharacterMovement()->GetActorFeetLocation();
	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f
		? CurrentNavigationRequest.AcceptableRadius : PlayerCommandAcceptableRadius;
	// A landing on another level cannot finish a destination directly above/below it.
	if (FVector::Dist2D(Feet, CurrentNavigationRequest.TargetLocation) > Radius
		|| FMath::Abs(Feet.Z - CurrentNavigationRequest.TargetLocation.Z)
			> FMath::Max(5.f, Pokemon->GetCharacterMovement()->MaxStepHeight))
	{
		return false;
	}
	LogCompositeEvent(TEXT("Complete"));
	ResolveNavigationRequest(CurrentNavigationRequest.RequestId, EPokemonNavigationResolution::Succeeded, NAME_None);
	return true;
}

void UPokemonNavigationComponent::HoldCompositeFailure(FName Reason)
{
	if (!IsCompositePlayerMove())
	{
		return;
	}
	bCompositeFailureHeld = true;
	bPlayerMovePlanningOnly = true;
	bTraversalPlanReady = false;
	bReachingTakeoff = false;
	LastTraversalCandidate.FailureReason = Reason;
	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());
	CompositeFailureFeet = Pokemon->GetCharacterMovement()->GetActorFeetLocation();
	if (CachedAIController)
	{
		CachedAIController->StopMovement();
	}
	LogCompositeEvent(TEXT("Failed"), Reason);
}

void UPokemonNavigationComponent::InvalidateCompositePlanning()
{
	bCompositeFailureHeld = false;
	++CompositePlanningGeneration;
	ResetLocalTraversal();
	bPlayerMovePlanningOnly = false;
	TimeSinceLastNavigationThink = NavigationThinkInterval;
}

void UPokemonNavigationComponent::HandleNavigationGenerationFinished(ANavigationData* NavData)
{
	// Rebuilds unlock a held failure; never churn a frozen approach/preparation plan.
	if (IsCompositePlayerMove() && bCompositeFailureHeld)
	{
		InvalidateCompositePlanning();
		LogCompositeEvent(TEXT("Continue"), TEXT("NavigationRebuilt"));
	}
}

FPokemonCompositeMoveCost UPokemonNavigationComponent::EstimateCompositeCost(
	const FVector& Exit, double GroundCost, double JumpCost) const
{
	FPokemonCompositeMoveCost Cost;
	Cost.Ground = GroundCost;
	Cost.Jump = JumpCost;
	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());
	const double Speed = FMath::Max(1.f, Pokemon->GetNaturalTraversalMovementSpeed());
	const FVector& ParentDestination = CurrentNavigationRequest.TargetLocation;
	Cost.Remaining = FVector::Dist(Exit, ParentDestination) / Speed;
	UNavigationPath* Route = UNavigationSystemV1::FindPathToLocationSynchronously(
		GetWorld(), Exit, ParentDestination, OwnerPawn,
		CachedAIController ? CachedAIController->GetDefaultNavigationFilterClass() : nullptr);
	if (Route && Route->IsValid() && !Route->PathPoints.IsEmpty())
	{
		const double WeightedCost = Route->GetPathCost();
		const double Length = Route->GetPathLength();
		const bool bWeighted = FMath::IsFinite(WeightedCost) && WeightedCost >= 0.;
		const double Metric = bWeighted ? WeightedCost : Length;
		if (FMath::IsFinite(Metric) && Metric >= 0.)
		{
			Cost.bCompleteRoute = !Route->IsPartial();
			Cost.Remaining = Metric / Speed;
			Cost.RouteSource = bWeighted ? TEXT("NavPathCost") : TEXT("NavPathLength");
			if (!Cost.bCompleteRoute)
			{
				Cost.Remaining += FVector::Dist(Route->PathPoints.Last(), ParentDestination) / Speed;
				Cost.RouteSource = TEXT("PartialRouteWithStraightTailFallback");
			}
		}
	}
	return Cost;
}

bool UPokemonNavigationComponent::SearchCompositeTraversal(const UNavigationPath* GroundPath, FName Trigger,
	FPokemonTraversalRequirement& OutRequirement, FPokemonTraversalCandidate& OutCandidate)
{
	++CompositeSearchCount;
	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());
	const FVector CurrentFeet = Pokemon->GetCharacterMovement()->GetActorFeetLocation();
	FVector Origin = CurrentFeet;
	FVector Heading = FVector::ZeroVector;
	FName HeadingSource = TEXT("ParentDirectionFallback");
	if (GroundPath && GroundPath->IsValid() && !GroundPath->PathPoints.IsEmpty())
	{
		// The reachable corridor locates the local problem, not a takeoff solution.
		// SearchTakeoffAnchors still evaluates supported, reachable alternatives.
		Origin = GroundPath->PathPoints.Last();
		for (int32 Index = GroundPath->PathPoints.Num() - 1; Index > 0; --Index)
		{
			Heading = (GroundPath->PathPoints[Index] - GroundPath->PathPoints[Index - 1]).GetSafeNormal2D();
			if (!Heading.IsNearlyZero())
			{
				HeadingSource = TEXT("RetainedPathHeading");
				break;
			}
		}
	}
	if (Heading.IsNearlyZero())
	{
		Heading = (CurrentNavigationRequest.TargetLocation - CurrentFeet).GetSafeNormal2D();
	}
	using namespace PokemonCompositeNavigation;
	FPokemonTraversalExitSearchSettings Settings;
	Settings.MaxSamples = Samples.GetValueOnGameThread();
	Settings.SampleSpacing = Spacing.GetValueOnGameThread();
	Settings.MaxDistance = Distance.GetValueOnGameThread();
	Settings.MaxDrop = Drop.GetValueOnGameThread();
	Settings.FanCount = FanCount.GetValueOnGameThread();
	Settings.FanSpread = Spread.GetValueOnGameThread();
	const FPokemonJumpCapabilitySnapshot Capability = FPokemonJumpSolver::CaptureCapabilities(
		*Pokemon, CurrentNavigationRequest, Heading);
	TArray<FVector> Exits;
	FName Failure;
	FPokemonJumpTrajectoryValidator::DiscoverLandingFan(*Pokemon, Origin, Heading, Capability, Settings, Exits, Failure);
	if (Debug.GetValueOnGameThread() > 0)
	{
		UE_LOG(LogTemp, Display, TEXT("[CompositeNav] ExitSearch | RequestId=%s | Origin=%s | Heading=%s | HeadingSource=%s | Candidates=%d | Rejection=%s"),
			*CurrentNavigationRequest.RequestId.ToString(), *Origin.ToCompactString(), *Heading.ToCompactString(),
			*HeadingSource.ToString(), Exits.Num(), *Failure.ToString());
	}
	// Preserve Jump 0.2's direct vertical/short-gap case when no intermediate band
	// was discovered. Its takeoff search still requires measured discontinuity.
	if (Exits.IsEmpty())
	{
		Exits.Add(CurrentNavigationRequest.TargetLocation);
	}
	bool bSelected = false;
	for (int32 Index = 0; Index < Exits.Num(); ++Index)
	{
		FPokemonTraversalRequirement Requirement;
		FPokemonTraversalCandidate Candidate;
		float GroundTime = 0.f;
		const bool bValid = SearchTakeoffAnchors(Exits[Index], Trigger, GroundPath, Requirement, Candidate, &GroundTime);
		FPokemonCompositeMoveCost Cost;
		if (bValid)
		{
			Cost = EstimateCompositeCost(Candidate.DestinationFeetLocation, GroundTime, Candidate.FlightTime);
			if (!bSelected || Cost.IsBetterThan(SelectedCompositeCost, CostTolerance.GetValueOnGameThread()))
			{
				bSelected = true;
				SelectedCompositeCost = Cost;
				OutRequirement = Requirement;
				OutCandidate = Candidate;
			}
		}
		else if (!bSelected)
		{
			OutCandidate = Candidate;
		}
		if (Debug.GetValueOnGameThread() > 0)
		{
			UE_LOG(LogTemp, Display,
				TEXT("[CompositeNav] ExitSearch | RequestId=%s | Candidate=%d | Exit=%s | GroundCost=%.3f | JumpCost=%.3f | RemainingRouteCost=%.3f | RouteSource=%s | TotalCost=%.3f | Valid=%d | Rejection=%s"),
				*CurrentNavigationRequest.RequestId.ToString(), Index, *Exits[Index].ToCompactString(),
				Cost.Ground, Cost.Jump, Cost.Remaining, *Cost.RouteSource.ToString(), bValid ? Cost.Total() : -1.,
				bValid, *Candidate.FailureReason.ToString());
		}
	}
	if (bSelected)
	{
		++TraversalSegmentSerial;
		if (Debug.GetValueOnGameThread() > 0)
		{
			UE_LOG(LogTemp, Display, TEXT("[CompositeNav] Segment | RequestId=%s | Segment=%u | Type=Jump | Entry=%s | Exit=%s | Takeoff=%s | TotalCost=%.3f"),
				*CurrentNavigationRequest.RequestId.ToString(), TraversalSegmentSerial,
				*Origin.ToCompactString(), *OutRequirement.DestinationFeetLocation.ToCompactString(),
				*OutRequirement.StartFeetLocation.ToCompactString(), SelectedCompositeCost.Total());
		}
	}
	return bSelected;
}
