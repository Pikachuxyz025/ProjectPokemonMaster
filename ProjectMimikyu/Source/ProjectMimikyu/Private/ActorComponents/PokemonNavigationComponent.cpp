// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/PokemonNavigationComponent.h"
#include "GameplayTags/PokemonAITags.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/Pawn.h"
#include "Kismet/KismetMathLibrary.h"

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

	TimeSinceLastNavigationThink = NavigationThinkInterval;
}

void UPokemonNavigationComponent::ClearNavigationIntent()
{
	CurrentNavigationRequest = FAgentNavigationRequest();
	bHasActiveRequest = false;

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

void UPokemonNavigationComponent::TickNavigation(float DeltaTime)
{
	if (!bHasActiveRequest || !CachedAIController)
	{
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

	return RequestMoveToActor(FollowTarget, DesiredDistance);
}

bool UPokemonNavigationComponent::ProcessChase()
{
	AActor* TargetActor = CurrentNavigationRequest.TargetActor.Get();

	if(!TargetActor)
	{
		return false;
	}

	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f ? CurrentNavigationRequest.AcceptableRadius : 100.f;

	return RequestMoveToActor(TargetActor, Radius);
}

bool UPokemonNavigationComponent::ProcessApproach()
{
	AActor* TargetActor = CurrentNavigationRequest.TargetActor.Get();

	if (!TargetActor)
	{
		return false;
	}

	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f ? CurrentNavigationRequest.AcceptableRadius : DefaultAcceptableRadius;

	return RequestMoveToActor(TargetActor, Radius);
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

	const float Radius = CurrentNavigationRequest.AcceptableRadius > 0.f ? CurrentNavigationRequest.AcceptableRadius : 150.f;

	return RequestMoveToActor(TrainerActor, Radius);
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

bool UPokemonNavigationComponent::RequestMoveToLocation(const FVector& GoalLocation, float AcceptableRadius)
{
	if (!CachedAIController)
	{
		return false;
	}

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalLocation(GoalLocation);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAllowPartialPath(true);

	const FPathFollowingRequestResult Result =
		CachedAIController->MoveTo(MoveRequest);

	return Result.Code != EPathFollowingRequestResult::Failed;
}

bool UPokemonNavigationComponent::RequestMoveToActor(AActor* TargetActor, float AcceptableRadius)
{
	if (!CachedAIController || !TargetActor)
	{
		return false;
	}

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalActor(TargetActor);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAllowPartialPath(true);

	const FPathFollowingRequestResult Result =
		CachedAIController->MoveTo(MoveRequest);

	return Result.Code != EPathFollowingRequestResult::Failed;
}

bool UPokemonNavigationComponent::GetTargetLocation(FVector& OutLocation) const
{
	if (AActor* TargetActor = CurrentNavigationRequest.TargetActor.Get())
	{
		OutLocation = TargetActor->GetActorLocation();
		return true;
	}

	if (!CurrentNavigationRequest.TargetLocation.IsNearlyZero())
	{
		OutLocation = CurrentNavigationRequest.TargetLocation;
		return true;
	}

	return false;
}

void UPokemonNavigationComponent::DebugFollowTarget(AActor* TargetActor)
{
	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Follow;
	Request.TargetActor = TargetActor;
	Request.DesiredDistance = FollowDistance;
	Request.AcceptableRadius = 150.f;

	RequestMoveToActor(TargetActor, Request.DesiredDistance);
}

void UPokemonNavigationComponent::DebugApproachTarget(AActor* TargetActor)
{
}

void UPokemonNavigationComponent::DebugFleeFromTarget(AActor* TargetActor)
{
	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Flee;
	Request.TargetActor = TargetActor;
	Request.DesiredDistance = FleeDistance;
	Request.AcceptableRadius = 150.f;

	RequestMoveToLocation(GetFleeLocationFromTarget(TargetActor->GetActorLocation()), Request.AcceptableRadius);
}

FVector UPokemonNavigationComponent::GetFleeLocationFromTarget(const FVector& ThreatLocation) const
{
	const FVector OwnerLocation = OwnerPawn ? OwnerPawn->GetActorLocation() : FVector::ZeroVector;

	FVector AwayDirection = OwnerLocation - ThreatLocation;
	AwayDirection.Z = 0.f;

	if (AwayDirection.IsNearlyZero())
	{
		AwayDirection = OwnerPawn->GetActorForwardVector() * -1.f;
	}

	AwayDirection.Normalize();

	const float Distance = CurrentNavigationRequest.DesiredDistance > 0.f ? CurrentNavigationRequest.DesiredDistance : FleeDistance;

	return OwnerLocation + AwayDirection * Distance;
}
