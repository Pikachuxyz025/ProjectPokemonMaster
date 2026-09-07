// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/PokemonNavigationComponent.h"
#include "ActorComponents/TargetableComponent.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "GameplayTags/PokemonAITags.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"
#include "Navigation/PokemonTraversalEvaluator.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "Characters/Pokemon_Parent.h"
#include "NavigationPath.h"
#include "NavigationData.h"

namespace PokemonNavigationUtils
{
	bool IsInvalidPokemonNavigationTarget(AActor* TargetActor)
	{
		APokemon_Parent* TargetPokemon = Cast<APokemon_Parent>(TargetActor);

		if (!TargetPokemon)
		{
			return false;
		}

		return !TargetPokemon->CanBeCombatTargeted();
	}
}

UPokemonNavigationComponent::UPokemonNavigationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPokemonNavigationComponent::BeginPlay()
{
	Super::BeginPlay();	

	OwnerPawn = Cast<APawn>(GetOwner());

	if (OwnerPawn)
	{
		CachedAIController = Cast<AAIController>(OwnerPawn->GetController());
	}
}


void UPokemonNavigationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TickNavigation(DeltaTime);
}

void UPokemonNavigationComponent::SetNavigationIntent(const FAgentNavigationRequest& NewRequest)
{
	CurrentNavigationRequest = NewRequest;
	bHasActiveRequest = CurrentNavigationRequest.IntentTag.IsValid();

	if(bHasActiveRequest&& !CurrentNavigationRequest.RequestId.IsValid())
	{
		CurrentNavigationRequest.RequestId = FGuid::NewGuid();
	}

	bPlayerMovePlanningOnly = false;
	LastTraversalRequirement = FPokemonTraversalRequirement();
	LastTraversalCandidate = FPokemonTraversalCandidate();

	TimeSinceLastNavigationThink = NavigationThinkInterval;

	UE_LOG(LogTemp, Warning,
		TEXT("[PokemonNav] SetNavigationIntent | RequestId=%s | ")
		TEXT("Owner=%s | Intent=%s | Target=%s | ")
		TEXT("DesiredDistance=%.1f | AcceptableRadius=%.1f"),
		*CurrentNavigationRequest.RequestId.ToString(),
		*GetNameSafe(GetOwner()),
		*CurrentNavigationRequest.IntentTag.ToString(),
		*GetNameSafe(CurrentNavigationRequest.TargetActor.Get()),
		CurrentNavigationRequest.DesiredDistance,
		CurrentNavigationRequest.AcceptableRadius);
}

void UPokemonNavigationComponent::ClearNavigationIntent()
{
	CurrentNavigationRequest = FAgentNavigationRequest();
	bHasActiveRequest = false;
	bPlayerMovePlanningOnly = false;
	LastTraversalRequirement = FPokemonTraversalRequirement();
	LastTraversalCandidate = FPokemonTraversalCandidate();

	if (CachedAIController)
	{
		CachedAIController->StopMovement();
	}
}

bool UPokemonNavigationComponent::HasActiveNavigationRequest() const
{
	return bHasActiveRequest;
}

const FAgentNavigationRequest& UPokemonNavigationComponent::GetCurrentNavigationIntent() const
{
	return CurrentNavigationRequest;
}

bool UPokemonNavigationComponent::RequestPlayerMoveToLocation(const FVector& RawTargetLocation, bool bAllowSpecialTraversal)
{
	if (!OwnerPawn)
	{
		return false;
	}

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	if (!NavSystem)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] RequestPlayerMoveToLocation failed because NavSystem is null. Owner=%s"),
			*GetNameSafe(GetOwner()));
		return false;
	}

	FAgentNavigationRequest Request;
	Request.RequestId = FGuid::NewGuid();
	Request.IntentTag = PokemonAITags::NavIntent_PlayerCommand_Move;
	Request.TargetLocation = RawTargetLocation;
	Request.AcceptableRadius = PlayerCommandAcceptableRadius;
	Request.Urgency = 0.8f;
	Request.bAllowSpecialTraversal = bAllowSpecialTraversal;
	Request.bAllowGASMovementAbilities = true;

	FNavLocation ProjectedLocation;
	const FNavAgentProperties& AgentProperties = OwnerPawn->GetNavAgentPropertiesRef();

	if (!NavSystem->ProjectPointToNavigation(
		RawTargetLocation, ProjectedLocation,
		PlayerCommandProjectionExtent, &AgentProperties))
	{
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonNav] Player Move ground rejected | RequestId=%s | ")
			TEXT("Reason=ProjectionFailed | Raw=%s"),
			*Request.RequestId.ToString(),
			*RawTargetLocation.ToString());

		RetainPlayerMoveForTraversal(Request, FName(TEXT("PlayerProjectionFailed")));
		return false;
	}

	Request.TargetLocation = ProjectedLocation.Location;

	UNavigationPath* GroundPath = UNavigationSystemV1::FindPathToLocationSynchronously(GetWorld(), OwnerPawn->GetActorLocation(), ProjectedLocation.Location, OwnerPawn);

	const bool bCompleteGroundPath = GroundPath && GroundPath->IsValid() && !GroundPath->IsPartial();

	if (!bCompleteGroundPath)
	{
		const FName GroundFailure(
			!GroundPath ? TEXT("GroundPathMissing") :
			!GroundPath->IsValid() ? TEXT("GroundPathInvalid") :
			TEXT("GroundPathPartial"));

		UE_LOG(LogTemp, Display,
			TEXT("[PokemonNav] Player Move ground rejected | RequestId=%s | ")
			TEXT("Reason=%s | Projected=%s"),
			*Request.RequestId.ToString(),
			*GroundFailure.ToString(),
			*ProjectedLocation.Location.ToString());

		DrawDebugSphere(GetWorld(), ProjectedLocation.Location, 30.f, 16, FColor::Yellow, false, 3.f, 0, 3.f);

		RetainPlayerMoveForTraversal(Request, GroundFailure);
		return false;
	}

	SetNavigationIntent(Request);

	DrawDebugSphere(GetWorld(), ProjectedLocation.Location, 30.f, 16, FColor::Green, false, 3.f, 0, 3.f);

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonNav] Player Move accepted | RequestId=%s | ")
		TEXT("Owner=%s | Raw=%s | Projected=%s"),
		*Request.RequestId.ToString(),
		*GetNameSafe(OwnerPawn),
		*RawTargetLocation.ToString(),
		*ProjectedLocation.Location.ToString());

	return true;
}

void UPokemonNavigationComponent::SuspendNavigation()
{
	if (bNavigationSuspended)
	{
		return;
	}

	bNavigationSuspended = true;

	// Stop the current path-following execution but KEEP CurrentNavigationRequest.
	if (CachedAIController)
	{
		CachedAIController->StopMovement();
	}

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonNav] Navigation suspended | ")
		TEXT("Owner=%s | Intent=%s | RequestId=%s | PlanningOnly=%d"),
		*GetNameSafe(GetOwner()),
		*CurrentNavigationRequest.IntentTag.ToString(),
		*CurrentNavigationRequest.RequestId.ToString(),
		bPlayerMovePlanningOnly);
}

void UPokemonNavigationComponent::ResumeNavigation()
{
	if (!bNavigationSuspended)
	{
		return;
	}

	bNavigationSuspended = false;

	// Force the retained request to be reconsidered immediately on the next navigation tick.
	TimeSinceLastNavigationThink = NavigationThinkInterval;

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonNav] Navigation resumed | ")
		TEXT("Owner=%s | HasRequest=%s | Intent=%s | ")
		TEXT("RequestId=%s | PlanningOnly=%d"),
		*GetNameSafe(GetOwner()),
		bHasActiveRequest ? TEXT("true") : TEXT("false"),
		*CurrentNavigationRequest.IntentTag.ToString(),
		*CurrentNavigationRequest.RequestId.ToString(),
		bPlayerMovePlanningOnly);
}

void UPokemonNavigationComponent::TickNavigation(float DeltaTime)
{
	if (!bHasActiveRequest || !CachedAIController)
	{
		return;
	}

	// A transient action such as Dodge owns locomotion right now.
	// Preserve the navigation request without executing it.
	if (bNavigationSuspended)
	{
		return;
	}

	APokemon_Parent* OwnerPokemon = Cast<APokemon_Parent>(GetOwner());

	if (!OwnerPokemon || !OwnerPokemon->CanAct())
	{
		ClearNavigationIntent();
		return;
	}

	TimeSinceLastNavigationThink += DeltaTime;

	if (TimeSinceLastNavigationThink < NavigationThinkInterval)
	{
		return;
	}

	TimeSinceLastNavigationThink = 0.f;
	ProcessNavigationRequest();
}

void UPokemonNavigationComponent::ProcessNavigationRequest()
{
	if (!OwnerPawn || !CachedAIController)
	{
		return;
	}

	const FGameplayTag& IntentTag = CurrentNavigationRequest.IntentTag;

	if (IntentTag == PokemonAITags::NavIntent_Wander)
	{
		ProcessWander();
	}
	else if (IntentTag == PokemonAITags::NavIntent_Follow)
	{
		ProcessFollow();
	}
	else if (IntentTag == PokemonAITags::NavIntent_Approach)
	{
		ProcessApproach();
	}
	else if (IntentTag == PokemonAITags::NavIntent_Chase)
	{
		ProcessChase();
	}
	else if (IntentTag == PokemonAITags::NavIntent_Flee)
	{
		ProcessFlee();
	}
	else if (IntentTag == PokemonAITags::NavIntent_ReturnToTrainer)
	{
		ProcessReturnToTrainer();
	}
	else if (IntentTag == PokemonAITags::NavIntent_Combat_KeepDistance)
	{
		ProcessCombatKeepDistance();
	}
	else if (IntentTag == PokemonAITags::NavIntent_Combat_Reposition)
	{
		ProcessCombatReposition();
	}
	else if (IntentTag == PokemonAITags::NavIntent_PlayerCommand_Move)
	{
		ProcessPlayerCommandMove();
	}
}

bool UPokemonNavigationComponent::ProcessWander()
{
	if (!OwnerPawn)
	{
		return false;
	}

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	if (!NavSystem)
	{
		return false;
	}

	FNavLocation NavLocation;

	const float SearchRadius =
		CurrentNavigationRequest.DesiredDistance > 0.f
		? CurrentNavigationRequest.DesiredDistance
		: 800.f;

	const bool bFound = NavSystem->GetRandomReachablePointInRadius(
		OwnerPawn->GetActorLocation(),
		SearchRadius,
		NavLocation
	);

	if (!bFound)
	{
		return false;
	}

	return RequestMoveToLocation(NavLocation.Location, DefaultAcceptableRadius);
}

bool UPokemonNavigationComponent::ProcessFollow()
{
	AActor* FollowTarget = CurrentNavigationRequest.TargetActor.Get();

	if (!FollowTarget || !OwnerPawn)
	{
		return false;
	}

	const float DesiredDistance = CurrentNavigationRequest.DesiredDistance > 0.f ? CurrentNavigationRequest.DesiredDistance : FollowDistance;

	const float Distance = FVector::Dist(OwnerPawn->GetActorLocation(), FollowTarget->GetActorLocation());

	if (Distance <= DesiredDistance)
	{
		CachedAIController->StopMovement();
		return true;
	}

	return RequestMoveToActor(FollowTarget, DesiredDistance,false);
}

bool UPokemonNavigationComponent::ProcessChase()
{
	AActor* TargetActor = CurrentNavigationRequest.TargetActor.Get();

	if(!TargetActor)
	{
		ClearNavigationIntent();
		return false;
	}

	if (PokemonNavigationUtils::IsInvalidPokemonNavigationTarget(TargetActor))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] Clearing Chase request because target cannot be combat targeted. Owner=%s Target=%s"),
			*GetNameSafe(GetOwner()),
			*GetNameSafe(TargetActor));

		ClearNavigationIntent();
		return false;
	}

	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f ? CurrentNavigationRequest.AcceptableRadius : 100.f;

	return RequestMoveToActor(TargetActor, Radius,false);
}

bool UPokemonNavigationComponent::ProcessApproach()
{
	if (!OwnerPawn || !CachedAIController)
	{
		return false;
	}

	AActor* TargetActor = CurrentNavigationRequest.TargetActor.Get();

	// 
	// Only perform actor-specific validity checks
	// if this request actually has an actor
	//
	if (IsValid(TargetActor) && PokemonNavigationUtils::IsInvalidPokemonNavigationTarget(TargetActor))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] Clearing Approach request because target cannot be combat targeted. Owner=%s Target=%s"),
			*GetNameSafe(GetOwner()),
			*GetNameSafe(TargetActor));
		ClearNavigationIntent();
		return false;
	}

	FVector TargetLocation;

	if (!GetTargetLocation(TargetLocation))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] Clearing Approach request because target location is invalid. Owner=%s Target=%s"),
			*GetNameSafe(GetOwner()),
			*GetNameSafe(TargetActor));

		ClearNavigationIntent();
		return false;
	}

	if (CurrentNavigationRequest.MeleeContact.SocketTag.IsValid())
	{
		return ProcessMeleeApproach(TargetLocation);
	}

	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f ? CurrentNavigationRequest.AcceptableRadius : DefaultAcceptableRadius;

	const float Distance = FVector::Dist2D(OwnerPawn->GetActorLocation(), TargetLocation);

	if (Distance <= Radius)
	{
		CachedAIController->StopMovement();
		return true;
	}

	FVector ProjectedGoal;

	if (!TryProjectNavigationGoal(TargetLocation, ApproachProjectionExtent, ProjectedGoal))
	{
		// Retry on the next navigation think tick.
		// The ability task still owns the timeout.
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] Approach request failed because target location could not be projected to NavMesh. Owner=%s Target=%s"),
			*GetNameSafe(OwnerPawn),
			*GetNameSafe(CurrentNavigationRequest.TargetActor.Get()));
		return false;
	}

	const float ProjectionOffset2D = static_cast<float>(FVector::Dist2D(ProjectedGoal, TargetLocation));

	const float NavigationRadius = Radius - ProjectionOffset2D - FMath::Max(0.f, ApproachArrivalMargin);

	if (NavigationRadius <= 0.f)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] ApproachGoalRejected | Owner=%s | RequestId=%s | ")
			TEXT("Reason=NoPositiveAcceptanceRadius | ")
			TEXT("Offset2D=%.2f | Range=%.2f | Margin=%.2f"),
			*GetNameSafe(OwnerPawn),
			*CurrentNavigationRequest.RequestId.ToString(),
			ProjectionOffset2D,
			Radius,
			ApproachArrivalMargin);

		return false;
	}

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonNav] ApproachGoal | Owner=%s | RequestId=%s | ")
		TEXT("RawTarget=%s | NavGoal=%s | RawDistance2D=%.2f | ")
		TEXT("Offset2D=%.2f | ApproachRange=%.2f | NavigationRadius=%.2f"),
		*GetNameSafe(OwnerPawn),
		*CurrentNavigationRequest.RequestId.ToString(),
		*TargetLocation.ToString(),
		*ProjectedGoal.ToString(),
		Distance,
		ProjectionOffset2D,
		Radius,
		NavigationRadius);

	// Preserve the original command target.
	// Only the movement request uses this projected destination.
	return RequestMoveToLocation(
		ProjectedGoal,
		NavigationRadius,
		false, // Require a complete path.
		false, // Exclude agent radius from acceptance.
		false); // Destination has already been projected.
}

bool UPokemonNavigationComponent::ProcessMeleeApproach(const FVector& TargetLocation)
{
	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());

	UCapsuleComponent* Capsule = IsValid(Pokemon) ? Pokemon->GetCapsuleComponent() : nullptr;

	if (!IsValid(Capsule) || !CachedAIController)
	{
		return false;
	}

	const FPokemonMeleeApproachSnapshot& Plan = CurrentNavigationRequest.MeleeApproach;

	FPokemonMeleeExecutionCandidate Candidate;

	if (!UPokemonMeleeContactLibrary::BuildExecutionCandidate(
		Pokemon,
		CurrentNavigationRequest.MeleeApproach,
		TargetLocation,
		Candidate))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] MeleeCandidateFailed | RequestId=%s | ")
			TEXT("Source=%s | Profile=%s | Reason=InvalidSnapshotOrCandidate"),
			*CurrentNavigationRequest.RequestId.ToString(),
			*UEnum::GetValueAsString(Plan.Source),
			*Plan.ProfileId.ToString());
		CachedAIController->StopMovement();
		return false;
	}

	if (FVector::DistSquared(Candidate.PlannedContactCenter, TargetLocation) <= FMath::Square(Candidate.Radius))
	{
		CachedAIController->StopMovement();
		return true;
	}

	// Navigation location describes feet; execution location describes root
	const FVector RootAboveFeet(0.f, 0.f, Capsule->GetScaledCapsuleHalfHeight());

	const FVector RequiredFeet = Candidate.RootLocation - RootAboveFeet;

	FVector NavGoal;

	if (!TryProjectNavigationGoal(RequiredFeet, ApproachProjectionExtent, NavGoal))
	{
		EvaluateGroundTraversalFailure(RequiredFeet,(TEXT("MeleeProjectionFailed")));

		UE_LOG(LogTemp, Display,
			TEXT("[PokemonNav] GroundCandidateRejected | Stage=Projection | ")
			TEXT("RequestId=%s | Source=%s | Profile=%s | RequiredRoot=%s"),
			*CurrentNavigationRequest.RequestId.ToString(),
			*UEnum::GetValueAsString(Plan.Source),
			*Plan.ProfileId.ToString(),
			*Candidate.RootLocation.ToString());
		CachedAIController->StopMovement();
		return false;
	}

	const FVector GroundRoot = NavGoal + RootAboveFeet;

	// Recover the sampled contact offset in the actor's rotation frame.
	const FVector& RootSpaceContactOffset = Plan.RootSpaceContactOffset;

	// Predict how the task would face that target from the projected root.
	const FVector GroundDirection = (TargetLocation - GroundRoot).GetSafeNormal2D();

	FRotator GroundFacing = Candidate.Facing;

	if (!GroundDirection.IsNearlyZero())
	{
		const float ContactYaw = RootSpaceContactOffset.SizeSquared2D() > KINDA_SMALL_NUMBER
			? RootSpaceContactOffset.Rotation().Yaw
			: 0.f;

		GroundFacing = FRotator(0.f, FRotator::NormalizeAxis(GroundDirection.Rotation().Yaw - ContactYaw), 0.f);
	}

	const FVector GroundContact = GroundRoot + GroundFacing.RotateVector(RootSpaceContactOffset);

	const float ContactError = static_cast<float>(FVector::Dist(GroundContact, TargetLocation));

	const float NavigationRadius = Candidate.Radius - ContactError - FMath::Max(0.f, ApproachArrivalMargin);

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonNav] MeleeExecutionCandidate | RequestId=%s | ")
		TEXT("Target=%s | RequiredRoot=%s | GroundRoot=%s | ")
		TEXT("GroundContact=%s | Error3D=%.2f | VerticalError=%.2f | ")
		TEXT("ContactRadius=%.2f | NavRadius=%.2f | PlanOffset=%s | ")
		TEXT("Source=%s | Profile=%s"),
		*CurrentNavigationRequest.RequestId.ToString(),
		*TargetLocation.ToString(),
		*Candidate.RootLocation.ToString(),
		*GroundRoot.ToString(),
		*GroundContact.ToString(),
		ContactError,
		GroundContact.Z - TargetLocation.Z,
		Candidate.Radius,
		NavigationRadius,
		*RootSpaceContactOffset.ToString(),
		*UEnum::GetValueAsString(Plan.Source),
		*Plan.ProfileId.ToString());

	if (NavigationRadius <= 0.f)
	{
		EvaluateGroundTraversalFailure(
			RequiredFeet,
			FName(ContactError > Candidate.Radius
				? TEXT("MeleeContactOutsideGroundReach")
				: TEXT("MeleeNoContactArrivalMargin")));

		CachedAIController->StopMovement();

		UE_LOG(LogTemp, Display,
			TEXT("[PokemonNav] GroundCandidateRejected | ")
			TEXT("RequestId=%s | Reason=%s | Source=%s | Profile=%s"),
			*CurrentNavigationRequest.RequestId.ToString(),
			ContactError > Candidate.Radius
			? TEXT("ContactOutsideGroundReach")
			: TEXT("NoContactArrivalMargin"),
			*UEnum::GetValueAsString(Plan.Source),
			*Plan.ProfileId.ToString());

		return false;
	}

	if (!RequestMoveToLocation(NavGoal, NavigationRadius, false, false, false))
	{
		CachedAIController->StopMovement();

		UE_LOG(LogTemp, Display,
			TEXT("[PokemonNav] MeleeMoveRequestRejected | ")
			TEXT("RequestId=%s | Source=%s | Profile=%s"),
			*CurrentNavigationRequest.RequestId.ToString(),
			*UEnum::GetValueAsString(Plan.Source),
			*Plan.ProfileId.ToString());

		return false;
	}

	return true;
}

bool UPokemonNavigationComponent::ProcessFlee()
{
	if (!OwnerPawn)
	{
		return false;
	}

	FVector ThreatLocation;

	if(!GetTargetLocation(ThreatLocation))
	{
		return false;
	}

	const FVector FleeLocation = GetFleeLocationFromTarget(ThreatLocation);

	return RequestMoveToLocation(FleeLocation, DefaultAcceptableRadius);
}

bool UPokemonNavigationComponent::ProcessReturnToTrainer()
{
	AActor* TrainerActor = CurrentNavigationRequest.TargetActor.Get();

	if (!TrainerActor)
	{
		return false;
	}

	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f ? CurrentNavigationRequest.AcceptableRadius : 250.f;

	return RequestMoveToActor(TrainerActor, Radius,false);
}

bool UPokemonNavigationComponent::ProcessCombatKeepDistance()
{
	AActor* TargetActor = CurrentNavigationRequest.TargetActor.Get();

	if (!TargetActor || !OwnerPawn)
	{
		return false;
	}

	const FVector OwnerLocation = OwnerPawn->GetActorLocation();
	const FVector TargetLocation = TargetActor->GetActorLocation();

	const float DesiredDistance =
		CurrentNavigationRequest.DesiredDistance > 0.f
		? CurrentNavigationRequest.DesiredDistance
		: CombatKeepDistance;

	const float CurrentDistance = FVector::Dist(OwnerLocation, TargetLocation);

	const float DistanceTolerance =
		CurrentNavigationRequest.AcceptableRadius > 0.f
		? CurrentNavigationRequest.AcceptableRadius
		: 100.f;

	if (FMath::Abs(CurrentDistance - DesiredDistance) <= DistanceTolerance)
	{
		CachedAIController->StopMovement();
		return true;
	}

	FVector DirectionFromTarget = OwnerLocation - TargetLocation;
	DirectionFromTarget.Z = 0.f;

	if (DirectionFromTarget.IsNearlyZero())
	{
		DirectionFromTarget = OwnerPawn->GetActorForwardVector();
	}

	DirectionFromTarget.Normalize();

	const FVector DesiredLocation = TargetLocation + DirectionFromTarget * DesiredDistance;

	return RequestMoveToLocation(DesiredLocation, DistanceTolerance);
}

bool UPokemonNavigationComponent::ProcessCombatReposition()
{
	if (!OwnerPawn)
	{
		return false;
	}

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	if (!NavSystem)
	{
		return false;
	}

	FNavLocation NavLocation;

	const float SearchRadius =
		CurrentNavigationRequest.DesiredDistance > 0.f
		? CurrentNavigationRequest.DesiredDistance
		: 600.f;

	const bool bFound = NavSystem->GetRandomReachablePointInRadius(
		OwnerPawn->GetActorLocation(),
		SearchRadius,
		NavLocation
	);

	if (!bFound)
	{
		return false;
	}

	return RequestMoveToLocation(NavLocation.Location, DefaultAcceptableRadius);
}

bool UPokemonNavigationComponent::ProcessPlayerCommandMove()
{
	// 0.1 retains the command for planning; no special-traversal executor exists.
	if (bPlayerMovePlanningOnly)
	{
		return false;
	}

	if (!OwnerPawn)
	{
		return false;
	}

	FVector TargetLocation;

	if (!GetTargetLocation(TargetLocation))
	{
		ClearNavigationIntent();
		return false;
	}

	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f ? CurrentNavigationRequest.AcceptableRadius : PlayerCommandAcceptableRadius;

	const float Distance = FVector::Dist2D(OwnerPawn->GetActorLocation(), TargetLocation);

	if (Distance <= Radius)
	{
		UE_LOG(
			LogTemp,
			Display,
			TEXT(
				"[PokemonNav] Player Move completed | "
				"Owner=%s | Distance=%.1f"
			),
			*GetNameSafe(OwnerPawn),
			Distance
		);

		ClearNavigationIntent();
		return true;
	}

	UE_LOG(
		LogTemp,
		VeryVerbose,
		TEXT(
			"[PokemonNav] Player Move active | "
			"Owner=%s | Distance=%.1f | Radius=%.1f"
		),
		*GetNameSafe(OwnerPawn),
		Distance,
		Radius
	);

	return RequestMoveToLocation(TargetLocation, Radius, false, false);
}

bool UPokemonNavigationComponent::RequestMoveToLocation(const FVector& GoalLocation, float AcceptableRadius, bool bAllowPartialPath, bool bIncludeAgentRadius, bool bProjectGoalLocation)
{
	if (!CachedAIController)
	{
		return false;
	}

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalLocation(GoalLocation);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);
	MoveRequest.SetProjectGoalLocation(bProjectGoalLocation);
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAllowPartialPath(bAllowPartialPath);
	MoveRequest.SetReachTestIncludesAgentRadius(bIncludeAgentRadius);
	MoveRequest.SetCanStrafe(false);

	FNavPathSharedPtr DebugPath;

	const FPathFollowingRequestResult Result = CachedAIController->MoveTo(MoveRequest, &DebugPath);

	const TCHAR* ResultName = 
		Result.Code == EPathFollowingRequestResult::Failed ? TEXT("Failed")
		: Result.Code == EPathFollowingRequestResult::AlreadyAtGoal 
		         ? TEXT("AlreadyAtGoal")
		         : TEXT("RequestSuccessful");

	const FString PathEnd = DebugPath.IsValid() && DebugPath->GetPathPoints().Num() > 0
		? DebugPath->GetEndLocation().ToString()
		: TEXT("None");

	const TCHAR* PathState = 
		!DebugPath.IsValid() ? TEXT("None")
		: !DebugPath->IsValid() ? TEXT("Invalid")
		: DebugPath->IsPartial() ? TEXT("Partial")
		: TEXT("Complete");

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonNav] MoveToLocation | Owner=%s | RequestId=%s | ")
		TEXT("Result=%s | AutoProject=%s | ")
		TEXT("InputGoal=%s | MoveGoal=%s | PathState=%s | PathEnd=%s | ")
		TEXT("DistanceToInputGoal2D=%.2f | Radius=%.2f | Speed2D=%.2f"),
		*GetNameSafe(OwnerPawn),
		*CurrentNavigationRequest.RequestId.ToString(),
		ResultName,
		bProjectGoalLocation ? TEXT("true") : TEXT("false"),
		*GoalLocation.ToString(),
		*MoveRequest.GetGoalLocation().ToString(),
		PathState,
		*PathEnd,
		OwnerPawn
		? FVector::Dist2D(OwnerPawn->GetActorLocation(), GoalLocation)
		: -1.0,
		AcceptableRadius,
		OwnerPawn ? OwnerPawn->GetVelocity().Size2D() : 0.0);

	return Result.Code != EPathFollowingRequestResult::Failed;
}

bool UPokemonNavigationComponent::RequestMoveToActor(AActor* TargetActor, float AcceptableRadius, bool bCanStrafe)
{
	if (!CachedAIController || !TargetActor|| !OwnerPawn)
	{
		return false;
	}

	const float Distance = FVector::Dist(OwnerPawn->GetActorLocation(), TargetActor->GetActorLocation());

	if (Distance <= AcceptableRadius)
	{
		CachedAIController->StopMovement();
		return true;
	}

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalActor(TargetActor);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAllowPartialPath(true);

	// IMPORTANT
	MoveRequest.SetCanStrafe(bCanStrafe);

	const FPathFollowingRequestResult Result =	CachedAIController->MoveTo(MoveRequest);

	UE_LOG(LogTemp, Warning,
		TEXT("[PokemonNav] MoveToActor | Owner=%s | Target=%s | Distance=%.1f | Radius=%.1f | Result=%s"),
		*GetNameSafe(GetOwner()),
		*GetNameSafe(TargetActor),
		Distance,
		AcceptableRadius,
		*UEnum::GetValueAsString(Result.Code)
	);

	return Result.Code != EPathFollowingRequestResult::Failed;
}

bool UPokemonNavigationComponent::TryProjectNavigationGoal(const FVector& RawGoal, const FVector& ProjectionExtent, FVector& OutProjectedGoal) const
{
	OutProjectedGoal = FVector::ZeroVector;

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	if (!OwnerPawn || !NavSystem)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonNav] ProjectionUnavailable | ")
			TEXT("Owner=%s | HasPawn=%s | HasNavSystem=%s"),
			*GetNameSafe(GetOwner()),
			OwnerPawn ? TEXT("true") : TEXT("false"),
			NavSystem ? TEXT("true") : TEXT("false"));
		return false;
	}

	FNavLocation ProjectedLocation;

	const FNavAgentProperties& AgentProperties = OwnerPawn->GetNavAgentPropertiesRef();

	const bool bProjected = NavSystem->ProjectPointToNavigation(
		RawGoal,
		ProjectedLocation,
		ProjectionExtent,
		&AgentProperties
	);

	if (bProjected)
	{
		OutProjectedGoal = ProjectedLocation.Location;
	}

	const FString ProjectedGoalText = bProjected ? OutProjectedGoal.ToString() : TEXT("None");

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonNav] Projection | Owner=%s | RequestId=%s | ")
		TEXT("Result=%s | RawGoal=%s | NavGoal=%s | Extent=%s"),
		*GetNameSafe(OwnerPawn),
		*CurrentNavigationRequest.RequestId.ToString(),
		bProjected ? TEXT("ProjectionSucceeded") : TEXT("ProjectionFailed"),
		*RawGoal.ToString(),
		*ProjectedGoalText,
		*ProjectionExtent.ToString());

	return bProjected;
}

bool UPokemonNavigationComponent::GetTargetLocation(FVector& OutLocation) const
{
	AActor* TargetActor = CurrentNavigationRequest.TargetActor.Get();

    //
	// Actor + semantic body point
	//
	if (IsValid(TargetActor) && CurrentNavigationRequest.TargetPointTag.IsValid())
	{
		if(UTargetableComponent* Targetable=TargetActor->FindComponentByClass<UTargetableComponent>())
		{
			if (Targetable->GetTargetPointWorldLocation(CurrentNavigationRequest.TargetPointTag, OutLocation))
			{
				return true;
			}
		}
	}
	
	//
	// Explicit location or command-time fallback
	//
	if (!CurrentNavigationRequest.TargetLocation.IsNearlyZero())
	{
		OutLocation = CurrentNavigationRequest.TargetLocation;
		return true;
	}

	//
	// Actor fallback
	//
	if (IsValid(TargetActor))
	{
		OutLocation = TargetActor->GetActorLocation();
		return true;
	}

	return false;
}

void UPokemonNavigationComponent::DebugFollowTarget(AActor* TargetActor)
{
	if(!TargetActor)
	{
		return;
	}

	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Follow;
	Request.TargetActor = TargetActor;
	Request.DesiredDistance = FollowDistance;
	Request.AcceptableRadius = 150.f;

	SetNavigationIntent(Request);
}

void UPokemonNavigationComponent::DebugApproachTarget(AActor* TargetActor)
{
	if (!TargetActor)
	{
		return;
	}

	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Approach;
	Request.TargetActor = TargetActor;
	Request.AcceptableRadius = DefaultAcceptableRadius;

	SetNavigationIntent(Request);
}

void UPokemonNavigationComponent::DebugFleeFromTarget(AActor* TargetActor)
{
	if(!TargetActor)
	{
		return;
	}

	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Flee;
	Request.TargetActor = TargetActor;
	Request.DesiredDistance = FleeDistance;
	Request.AcceptableRadius = 150.f;

	SetNavigationIntent(Request);
}

FVector UPokemonNavigationComponent::GetFleeLocationFromTarget(const FVector& ThreatLocation) const
{
	const FVector OwnerLocation = OwnerPawn ? OwnerPawn->GetActorLocation() : FVector::ZeroVector;

	FVector AwayDirection = OwnerLocation - ThreatLocation;
	AwayDirection.Z = 0.f;

	if (AwayDirection.IsNearlyZero())
	{
		AwayDirection = OwnerPawn ? OwnerPawn->GetActorForwardVector() * -1.f : FVector::BackwardVector;
	}

	AwayDirection.Normalize();

	const float Distance = CurrentNavigationRequest.DesiredDistance > 0.f ? CurrentNavigationRequest.DesiredDistance : FleeDistance;

	return OwnerLocation + AwayDirection * Distance;
}

void UPokemonNavigationComponent::RetainPlayerMoveForTraversal(
	const FAgentNavigationRequest& Request, FName Trigger)
{
	if (!Request.bAllowSpecialTraversal)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[Traversal] EvaluationSkipped | RequestId=%s | ")
			TEXT("Reason=SpecialTraversalDisabled | Trigger=%s"),
			*Request.RequestId.ToString(),
			*Trigger.ToString());

		return; // Preserve the previously retained request.
	}

	SetNavigationIntent(Request);
	bPlayerMovePlanningOnly = true;

	// Retire the previous ground path, but do not interrupt a suspended owner.
	if (!bNavigationSuspended && CachedAIController)
	{
		CachedAIController->StopMovement();
	}

	UE_LOG(LogTemp, Display,
		TEXT("[Traversal] ParentRetained | RequestId=%s | Intent=%s | ")
		TEXT("PlanningOnly=true | Trigger=%s"),
		*CurrentNavigationRequest.RequestId.ToString(),
		*CurrentNavigationRequest.IntentTag.ToString(),
		*Trigger.ToString());

	EvaluateGroundTraversalFailure(Request.TargetLocation, Trigger);
}

bool UPokemonNavigationComponent::BuildTraversalRequirement(
	const FVector& DestinationFeet, FName Trigger,
	FPokemonTraversalRequirement& OutRequirement) const
{
	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());

	const UCapsuleComponent* Capsule =IsValid(Pokemon) ? Pokemon->GetCapsuleComponent() : nullptr;

	if (!bHasActiveRequest|| !CurrentNavigationRequest.RequestId.IsValid()|| !IsValid(Capsule))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[Traversal] RequirementBuildFailed | RequestId=%s | ")
			TEXT("Reason=MissingParentOrCharacterCapsule"),
			*CurrentNavigationRequest.RequestId.ToString());

		return false;
	}

	OutRequirement = FPokemonTraversalRequirement();
	OutRequirement.ParentRequestId = CurrentNavigationRequest.RequestId;
	OutRequirement.Trigger = Trigger;

	OutRequirement.StartFeetLocation = Pokemon->GetActorLocation()- FVector(0.f, 0.f, Capsule->GetScaledCapsuleHalfHeight());

	OutRequirement.DestinationFeetLocation = DestinationFeet;

	OutRequirement.bLandingRequired =CurrentNavigationRequest.bTraversalRequiresLanding;

	OutRequirement.bParentMayCompleteWhileAirborne =CurrentNavigationRequest.bParentMayCompleteWhileAirborne;

	const UCharacterMovementComponent* Movement =Pokemon->GetCharacterMovement();

	OutRequirement.bStartSupportKnown = Movement&& Movement->IsMovingOnGround()&& Movement->CurrentFloor.IsWalkableFloor();

	// Projection/path failure alone proves neither a circumstance nor landing support.
	// Circumstance remains Unclassified; destination support remains unknown.
	return true;
}

void UPokemonNavigationComponent::EvaluateGroundTraversalFailure(
	const FVector& DestinationFeet, FName Trigger)
{
	if (!CurrentNavigationRequest.bAllowSpecialTraversal)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[Traversal] EvaluationSkipped | RequestId=%s | ")
			TEXT("Reason=SpecialTraversalDisabled | Trigger=%s"),
			*CurrentNavigationRequest.RequestId.ToString(),
			*Trigger.ToString());

		return;
	}

	FPokemonTraversalRequirement Requirement;

	if (BuildTraversalRequirement(DestinationFeet, Trigger, Requirement))
	{
		EvaluateTraversalRequirement(Requirement);
	}
}

void UPokemonNavigationComponent::EvaluateTraversalRequirement(const FPokemonTraversalRequirement& Requirement)
{
	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());

	if (!IsValid(Pokemon)|| !bHasActiveRequest|| !CurrentNavigationRequest.bAllowSpecialTraversal|| Requirement.ParentRequestId != CurrentNavigationRequest.RequestId)
	{
		return;
	}

	LastTraversalRequirement = Requirement;

	const FPokemonTraversalCapabilities& Capabilities =Pokemon->GetTraversalCapabilities();

	LastTraversalCandidate =FPokemonTraversalEvaluator::Evaluate(Requirement, Capabilities);

	UE_LOG(LogTemp, Display,
		TEXT("[Traversal] RequirementBuilt | RequestId=%s | Intent=%s | ")
		TEXT("Circumstance=%s | Evidence=%s | Trigger=%s | ")
		TEXT("StartFeet=%s | DestinationFeet=%s | Horizontal=%.2f | Vertical=%.2f | ")
		TEXT("StartSupportKnown=%d | DestinationSupportKnown=%d | ")
		TEXT("LandingRequired=%d | AirborneParentCompletion=%d"),
		*Requirement.ParentRequestId.ToString(),
		*CurrentNavigationRequest.IntentTag.ToString(),
		*UEnum::GetValueAsString(Requirement.Circumstance),
		*UEnum::GetValueAsString(Requirement.Evidence),
		*Requirement.Trigger.ToString(),
		*Requirement.StartFeetLocation.ToString(),
		*Requirement.DestinationFeetLocation.ToString(),
		Requirement.HorizontalSeparation(),
		Requirement.VerticalSeparation(),
		Requirement.bStartSupportKnown,
		Requirement.bDestinationSupportKnown,
		Requirement.bLandingRequired,
		Requirement.bParentMayCompleteWhileAirborne);

	if (Requirement.Circumstance ==	EPokemonTraversalCircumstance::Unclassified)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[Traversal] RequirementUnclassified | RequestId=%s | Trigger=%s | ")
			TEXT("Missing=VerifiedCircumstanceAndDestinationSupport"),
			*Requirement.ParentRequestId.ToString(),
			*Requirement.Trigger.ToString());
	}

	const FPokemonTraversalCandidate& Result = LastTraversalCandidate;
	const FPokemonProvisionalJumpEnvelope& Envelope =	Capabilities.ProvisionalJump;

	const bool bValid = Result.IsValidForPlanning();

	UE_LOG(LogTemp, Display,
		TEXT("[Traversal] %s | RequestId=%s | Intent=%s | Solution=%s | ")
		TEXT("Result=%s | Reason=%s | CapabilityProfile=%s | ")
		TEXT("NaturalJump=%d | ModelEnabled=%d | ")
		TEXT("MaxHorizontal=%.2f | MaxRise=%.2f | MaxDrop=%.2f | ")
		TEXT("Validation=%s | Executable=false"),
		bValid ? TEXT("CandidateEvaluated") : TEXT("NoSolution"),
		*Result.ParentRequestId.ToString(),
		*CurrentNavigationRequest.IntentTag.ToString(),
		*UEnum::GetValueAsString(Result.Solution),
		bValid ? TEXT("Valid") : TEXT("Invalid"),
		*Result.FailureReason.ToString(),
		*Result.CapabilityProfileId.ToString(),
		Capabilities.bCanNaturallyJump,
		Envelope.bEnabled,
		Envelope.MaxHorizontalSpan,
		Envelope.MaxRise,
		Envelope.MaxDrop,
		bValid ? TEXT("ProvisionalEnvelopeOnly") : TEXT("NotValidated"));
}

bool UPokemonNavigationComponent::DebugEvaluateRetainedMoveTraversal(EPokemonTraversalCircumstance ConfirmedCircumstance,bool bDestinationSupportConfirmed)
{
	if (!GetOwner()|| !GetOwner()->HasAuthority()|| !bHasActiveRequest|| !bPlayerMovePlanningOnly|| !CurrentNavigationRequest.bAllowSpecialTraversal|| !CurrentNavigationRequest.IntentTag.MatchesTagExact(PokemonAITags::NavIntent_PlayerCommand_Move))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[Traversal] DebugEvaluationSkipped | ")
			TEXT("Reason=RequiresAuthorityAndRetainedPlanningOnlyMove"));

		return false;
	}

	FPokemonTraversalRequirement Requirement;

	if (!BuildTraversalRequirement(CurrentNavigationRequest.TargetLocation,FName(TEXT("DebugMeasuredFixture")),Requirement))
	{
		return false;
	}

	// These assertions come from the test fixture, not an automatic detector.
	Requirement.Circumstance = ConfirmedCircumstance;
	Requirement.Evidence = EPokemonTraversalEvidence::SuppliedMeasurement;
	Requirement.bDestinationSupportKnown = bDestinationSupportConfirmed;

	EvaluateTraversalRequirement(Requirement);

	// A valid candidate does not release the planning-only hold.
	return LastTraversalCandidate.IsValidForPlanning();
}