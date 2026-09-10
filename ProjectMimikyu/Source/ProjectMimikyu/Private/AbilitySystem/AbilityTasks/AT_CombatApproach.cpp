// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AT_CombatApproach.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "GameplayTags/PokemonAITags.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Characters/Pokemon_Parent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
#include "AbilitySystem/Abilities/ProjectileAbility.h"


UAT_CombatApproach::UAT_CombatApproach()
{
	bTickingTask = true;
}

UAT_CombatApproach* UAT_CombatApproach::CreateCombatApproachTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* InTargetActor, float InDesiredRange, float InMoveSpeedMultiplier, float ReachBeforeThisTimeLimit, bool bInFaceTarget)
{
	UAT_CombatApproach* Task = NewAbilityTask<UAT_CombatApproach>(OwningAbility, TaskInstanceName);

	Task->TargetActor = InTargetActor;
	Task->DesiredRange = InDesiredRange;
	Task->MoveSpeedMultiplier = InMoveSpeedMultiplier;
	Task->Timeout = ReachBeforeThisTimeLimit;
	Task->bFaceTarget = bInFaceTarget;

	if (const UPokemonDamageGameplayAbilities* Move = Cast<UPokemonDamageGameplayAbilities>(OwningAbility))
	{
		Task->MeleeContact = Move->MeleeContact;
		Task->MeleeApproachProfile = Move->MeleeApproachProfile;
	}

	return Task;
}

void UAT_CombatApproach::Activate()
{
	Super::Activate();

	if (!Ability)
	{
		FinishFailure();
		return;
	}

	AvatarPawn = Cast<APawn>(GetAvatarActor());
	AvatarCharacter = Cast<ACharacter>(AvatarPawn.Get());
	AvatarPokemon = Cast<APokemon_Parent>(AvatarPawn.Get());

	NavigationComponent = AvatarPokemon ? AvatarPokemon->GetNavigationComponent() : nullptr;

	if (!IsValidSetup())
	{
		FinishFailure();
		return;
	}

	if (AvatarPokemon->JumpExecutionComponent)
	{
		JumpFinishedDelegateHandle = AvatarPokemon->JumpExecutionComponent->OnJumpFinished.AddUObject(this, &UAT_CombatApproach::HandleJumpFinished);
	}

	AvatarPokemon->SetMovementSpeed(EMovementSpeed::EMS_Engaging, MoveSpeedMultiplier);
	
	if (!SubmitNavigationRequest())
	{
		FinishFailure();
		return;
	}

	if (HasReachedDesiredRange())
	{
		FinishSuccess();
		return;
	}
}

void UAT_CombatApproach::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);

	if (!IsValidSetup())
	{
		FinishFailure();
		return;
	}

	const bool bTraversalBusy = IsOwnedTraversalBusy();
	
	// Execution reach gets first priority.
	//
	// While the owned traversal is busy,
	// HasReachedDesiredRange() deliberately returns false.
	//
	// Immediately after traversal completes, however,
	// we want the new execution position evaluated BEFORE
	// the watchdog is allowed to fail the approach.
	if (HasReachedDesiredRange())
	{
		UE_LOG(LogTemp,Log,TEXT(
				"[CombatApproach] ReachedDesiredRange | "
				"RequestId=%s | "
				"Elapsed=%.2f | "
				"Limit=%.2f"
			),
			*SubmitNavigationRequestId.ToString(),
			ElapsedTime,
			Timeout);

		FinishSuccess();
		return;
	}

	if (bTraversalBusy)
	{
		if (!bTimeoutPausedForTraversal)
		{
			bTimeoutPausedForTraversal = true;

			UE_LOG(LogTemp,Display,TEXT(
					"[CombatApproach] TimeoutPaused | "
					"RequestId=%s | "
					"Elapsed=%.2f | "
					"Limit=%.2f | "
					"Reason=TraversalExecuting"
				),
				*SubmitNavigationRequestId.ToString(),
				ElapsedTime,
				Timeout);
		}
	}
	else
	{
		if (bTimeoutPausedForTraversal)
		{
			bTimeoutPausedForTraversal = false;

			UE_LOG(LogTemp,Display,TEXT(
					"[CombatApproach] TimeoutResumed | "
					"RequestId=%s | "
					"Elapsed=%.2f | "
					"Limit=%.2f"
				),
				*SubmitNavigationRequestId.ToString(),
				ElapsedTime,
				Timeout);
		}

		if (bTraversalCompletedSinceLastTick)
		{
			//
			// The traversal completion callback has already
			// reset ElapsedTime.
			//
			// Give navigation/approach one full tick to observe
			// its new world state before consuming the watchdog
			// budget again.
			//
			bTraversalCompletedSinceLastTick = false;

			UE_LOG(LogTemp,Display,TEXT(
					"[CombatApproach] PostTraversalEvaluation | "
					"RequestId=%s | "
					"Elapsed=%.2f | "
					"Limit=%.2f"
				),
				*SubmitNavigationRequestId.ToString(),
				ElapsedTime,
				Timeout);
		}
		else
		{
			ElapsedTime += DeltaTime;

			if (ElapsedTime >= Timeout)
			{
				UE_LOG(LogTemp,Warning,TEXT(
						"[CombatApproach] Timeout | "
						"RequestId=%s | "
						"Elapsed=%.2f | "
						"Limit=%.2f"
					),
					*SubmitNavigationRequestId.ToString(),
					ElapsedTime,
					Timeout);

				FinishFailure();
				return;
			}
		}
	}

	if (bFaceTarget)
	{
		FaceTarget(DeltaTime);
	}
}

bool UAT_CombatApproach::IsValidSetup() const
{
	if (!Ability || !AvatarPawn || !AvatarPokemon || !NavigationComponent)
	{
		return false;
	}

	// Before submission, capture validates the contact configuration.
	// Afterwards, validate the snapshot and request ownership.
	if (bSubmittedNavigationRequest && (!IsCurrentNavigationRequestOwnedByTask() || (MeleeContact.SocketTag.IsValid() && !MeleeApproach.IsValid())))
	{
		return false;
	}

	FVector TargetLocation;
	return ResolveApproachTargetLocation(TargetLocation) && !TargetLocation.ContainsNaN();
}

bool UAT_CombatApproach::HasReachedDesiredRange() const
{
	// Retain task ownership through preparation/flight; live attack contact is unchanged.
	if (IsOwnedTraversalBusy())
	{
		return false;
	}

	if (!AvatarPawn)
	{
		return false;
	}

	FVector TargetLocation;

	if (!ResolveApproachTargetLocation(TargetLocation))
	{
		return false;
	}

	if (MeleeContact.SocketTag.IsValid())
	{
		FPokemonMeleeExecutionCandidate Candidate;

		if (!UPokemonMeleeContactLibrary::BuildExecutionCandidate(	AvatarPawn.Get(), MeleeApproach, TargetLocation, Candidate))
		{
			return false;
		}

		const double Distance = FVector::Dist(Candidate.PlannedContactCenter, TargetLocation);

		if (Distance <= Candidate.Radius)
		{
			UE_LOG(LogTemp, Display,
				TEXT("[CombatApproach] MeleeExecutionReached | RequestId=%s | ")
				TEXT("Target=%s | PlannedCenter=%s | Distance3D=%.2f | Radius=%.2f | ")
				TEXT("Source=%s | Profile=%s"),
				*SubmitNavigationRequestId.ToString(),
				*TargetLocation.ToString(),
				*Candidate.PlannedContactCenter.ToString(),
				Distance,
				Candidate.Radius,
				*UEnum::GetValueAsString(MeleeApproach.Source),
				*MeleeApproach.ProfileId.ToString());

			return true;
		}

		return false;
	}

	const float DistanceToTarget = FVector::Dist2D(AvatarPawn->GetActorLocation(), TargetLocation);

	UE_LOG(LogTemp, Warning, TEXT("Distance to target %f, Desired Range %f"), DistanceToTarget, DesiredRange);
	
	return DistanceToTarget <= DesiredRange;
}

void UAT_CombatApproach::FinishSuccess()
{
	ClearOwnedNavigationRequest();

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnReachedRange.Broadcast();
	}

	EndTask();
}

void UAT_CombatApproach::FinishFailure()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnFailed.Broadcast();
	}
	EndTask();
}

bool UAT_CombatApproach::IsOwnedTraversalBusy() const
{
	if(!AvatarPokemon||!AvatarPokemon->JumpExecutionComponent||!SubmitNavigationRequestId.IsValid())
	{
		return false;
	}

	const UPokemonJumpExecutionComponent* JumpExecution = AvatarPokemon->JumpExecutionComponent;

	return JumpExecution->IsBusy() && JumpExecution->GetParentRequestId() == SubmitNavigationRequestId;
}

void UAT_CombatApproach::HandleJumpFinished(FGuid RequestId, bool bReachedDestination, FName Reason)
{
	if (!bSubmittedNavigationRequest || RequestId != SubmitNavigationRequestId)
	{
		return;
	}

	if (!bReachedDestination)
	{
		return;
	}

	const float PreviousElapsedTime = ElapsedTime;

	ElapsedTime = 0.f;
	bTraversalCompletedSinceLastTick = true;

	UE_LOG(LogTemp, Display, TEXT(
		"[CombatApproach] ProgressReset | "
		"RequestId=%s | "
		"PreviousElapsed=%.2f | "
		"NewElapsed=%.2f | "
		"Reason=TraversalCompleted"
	),
		*RequestId.ToString(),
		PreviousElapsedTime,
		ElapsedTime);
}

bool UAT_CombatApproach::ResolveApproachTargetLocation(FVector& OutTargetLocation) const
{
	OutTargetLocation = FVector::ZeroVector;

	//
	// Player-command path:
	// use dynamic TargetPointTag resolution too
	//
	if (AvatarPokemon)
	{
		if (AvatarPokemon->ResolveCurrrentCommandTargetLocation(OutTargetLocation))
		{
			return true;
		}
	}

	//
	// AI / legacy actor fallback.
	//
	if (IsValid(TargetActor))
	{
		OutTargetLocation = TargetActor->GetActorLocation();
		return true;
	}

	return false;
}

bool UAT_CombatApproach::SubmitNavigationRequest()
{
	if (!AvatarPokemon || !NavigationComponent)
	{
		return false;
	}

	FAgentNavigationRequest Request;

	Request.IntentTag = PokemonAITags::NavIntent_Approach;

	Request.DesiredDistance = DesiredRange;

	Request.AcceptableRadius = DesiredRange;

	Request.RequestId = FGuid::NewGuid();
	Request.bIsAttackTraversal = true;
	Request.JumpTrajectoryPreference = Cast<UProjectileAbility>(Ability)
		? EPokemonJumpTrajectoryPreference::Projectile : EPokemonJumpTrajectoryPreference::Direct;
	if (const UPokemonCommandComponent* Command = AvatarPokemon->FindComponentByClass<UPokemonCommandComponent>())
	{
		Request.ParentAttackCommandId = Command->GetActiveTrainerCommandId();
	}

	Request.MeleeContact = MeleeContact;

	Request.Urgency = 0.5f;

	Request.bAllowSpecialTraversal = true;
	Request.bAllowGASMovementAbilities = true;

	const FPokemonCommandTarget& CommandTarget = AvatarPokemon->GetCommandTarget();

	if (CommandTarget.IsValidTarget())
	{
		Request.TargetActor = CommandTarget.TargetActor;
		Request.TargetPointTag = CommandTarget.TargetPointTag;
		Request.TargetLocation = CommandTarget.TargetLocation;
	}
	else if (IsValid(TargetActor))
	{
		Request.TargetActor = TargetActor;
	}
	else 
	{
		return false;
	}

	MeleeApproach = FPokemonMeleeApproachSnapshot();

	if (MeleeContact.SocketTag.IsValid())
	{
		FName CaptureFailure;

		if (!UPokemonMeleeContactLibrary::CaptureMeleeApproachSnapshot(AvatarPokemon.Get(),MeleeContact,MeleeApproachProfile,MeleeApproach,CaptureFailure))
		{
			UE_LOG(LogTemp, Warning,
				TEXT("[CombatApproach] MeleePlanCaptureFailed | RequestId=%s | ")
				TEXT("Move=%s | Source=%s | Profile=%s | Reason=%s"),
				*Request.RequestId.ToString(),
				*GetNameSafe(Ability),
				*UEnum::GetValueAsString(MeleeApproachProfile.Source),
				*MeleeApproachProfile.ProfileId.ToString(),
				*CaptureFailure.ToString());

			return false;
		}

		Request.MeleeApproach = MeleeApproach;

		UE_LOG(LogTemp, Display,
			TEXT("[CombatApproach] MeleePlanCaptured | RequestId=%s | ")
			TEXT("Move=%s | Source=%s | Profile=%s | Tag=%s | ")
			TEXT("PlanOffset=%s | Radius=%.2f | Units=WorldCm | Space=ActorRotationFrame"),
			*Request.RequestId.ToString(),
			*GetNameSafe(Ability),
			*UEnum::GetValueAsString(MeleeApproach.Source),
			*MeleeApproach.ProfileId.ToString(),
			*MeleeContact.SocketTag.ToString(),
			*MeleeApproach.RootSpaceContactOffset.ToString(),
			MeleeApproach.Radius);
	}

	SubmittedTargetActor = Request.TargetActor;

	SubmittedTargetPointTag = Request.TargetPointTag;

	SubmittedTargetLocation = Request.TargetLocation;

	SubmitNavigationRequestId = Request.RequestId;

	NavigationComponent->SetNavigationIntent(Request);

	bSubmittedNavigationRequest = true;

	const bool bRawHit = CommandTarget.bHasHitResult && CommandTarget.HitResult.bBlockingHit;

	UE_LOG(
		LogTemp,
		Display,
		TEXT(
			"[CombatApproach] Submitted | "
			"Pokemon=%s | "
			"RequestId=%s | "
			"CommandId=%s | "
			"Target=%s | "
			"Point=%s | "
			"Location=%s | "
			"Range=%.1f | "
			"RawHit=%d | "
			"RawActor=%s | "
			"RawComponent=%s | "
			"RawImpact=%s | "
			"RawNormal=%s"
		),
		*GetNameSafe(AvatarPokemon),
		*SubmitNavigationRequestId.ToString(),
		*Request.ParentAttackCommandId.ToString(),
		*GetNameSafe(Request.TargetActor.Get()),
		*Request.TargetPointTag.ToString(),
		*Request.TargetLocation.ToString(),
		DesiredRange,

		bRawHit,

		*GetNameSafe(
			CommandTarget.HitResult.GetActor()),

		*GetNameSafe(
			CommandTarget.HitResult.GetComponent()),

		*CommandTarget.HitResult
		.ImpactPoint.ToString(),

		*CommandTarget.HitResult
		.ImpactNormal.ToString()
	);


	return true;
}

bool UAT_CombatApproach::IsCurrentNavigationRequestOwnedByTask() const
{
	if (!NavigationComponent || !bSubmittedNavigationRequest || !SubmitNavigationRequestId.IsValid())
	{
		return false;
	}

	if (!NavigationComponent->HasActiveNavigationRequest())
	{
		return false;
	}

	const FAgentNavigationRequest& CurrentRequest = NavigationComponent->GetCurrentNavigationIntent();

	return CurrentRequest.RequestId == SubmitNavigationRequestId;
}

void UAT_CombatApproach::ClearOwnedNavigationRequest()
{
	if (!NavigationComponent || !bSubmittedNavigationRequest)
	{
		return;
	}

	if (IsCurrentNavigationRequestOwnedByTask())
	{
		UE_LOG(LogTemp, Display, TEXT("[CombatApproach] Clearing navigation request | Pokemon=%s | Target=%s | Point=%s | Location=%s | Range=%.1f"),
			*GetNameSafe(AvatarPokemon),
			*GetNameSafe(SubmittedTargetActor.Get()),
			*SubmittedTargetPointTag.ToString(),
			*SubmittedTargetLocation.ToString(),
			DesiredRange
		);

		NavigationComponent->ClearNavigationIntent();
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("[CombatApproach] Not clearing navigation request because it is no longer owned by this task | Pokemon=%s | Target=%s | Point=%s | Location=%s | Range=%.1f"),
			*GetNameSafe(AvatarPokemon),
			*GetNameSafe(SubmittedTargetActor.Get()),
			*SubmittedTargetPointTag.ToString(),
			*SubmittedTargetLocation.ToString(),
			DesiredRange
		);
	}

	bSubmittedNavigationRequest = false;
	SubmitNavigationRequestId.Invalidate();
}

void UAT_CombatApproach::FaceTarget(float DeltaTime) const
{
	if(!AvatarPawn)
	{
		return;
	}

	FVector TargetLocation;

	if (!ResolveApproachTargetLocation(TargetLocation))
	{
		return;
	}

	const FRotator CurrentRotation = AvatarPawn->GetActorRotation();
	 FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(AvatarPawn->GetActorLocation(), TargetLocation);
	
	if (MeleeContact.SocketTag.IsValid())
	{
		FPokemonMeleeExecutionCandidate Candidate;

		if (!UPokemonMeleeContactLibrary::BuildExecutionCandidate(AvatarPokemon.Get(), MeleeApproach, TargetLocation, Candidate))
		{
			return;
		}
		TargetRotation = Candidate.Facing;
	}

	const FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, 10.f);
	AvatarPawn->SetActorRotation(FRotator(0.f, NewRotation.Yaw, 0.f));
}

void UAT_CombatApproach::OnDestroy(bool bInOwnerFinished)
{
	if (AvatarPokemon && AvatarPokemon->JumpExecutionComponent && JumpFinishedDelegateHandle.IsValid())
	{
		AvatarPokemon->JumpExecutionComponent->OnJumpFinished.Remove(JumpFinishedDelegateHandle);
		JumpFinishedDelegateHandle.Reset();
	}

	ClearOwnedNavigationRequest();

	if (AvatarPokemon)
	{
		AvatarPokemon->SetMovementSpeed(EMovementSpeed::EMS_Running);
	}

	Super::OnDestroy(bInOwnerFinished);
}
