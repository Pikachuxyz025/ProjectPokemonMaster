// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AT_CombatApproach.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "GameplayTags/PokemonAITags.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Characters/Pokemon_Parent.h"


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

	AvatarPokemon->SetMovementSpeed(EMovementSpeed::EMS_Engaging, MoveSpeedMultiplier);

	if (HasReachedDesiredRange())
	{
		FinishSuccess();
		return;
	}

	if (!SubmitNavigationRequest())
	{
		FinishFailure();
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

	ElapsedTime += DeltaTime;
	if (ElapsedTime >= Timeout)
	{
		FinishFailure();
		UE_LOG(LogTemp, Warning, TEXT("Combat Approach Task failed due to timeout."));
		return;
	}
	if (HasReachedDesiredRange())
	{
		FinishSuccess();
		UE_LOG(LogTemp, Log, TEXT("Combat Approach Task succeeded by reaching desired range."));
		return;
	}

	if (bFaceTarget)
	{
		FaceTarget(DeltaTime);
	}

}

bool UAT_CombatApproach::IsValidSetup() const
{
	if (!Ability || !AvatarPawn || !TargetActor || !NavigationComponent)
	{
		return false;
	}

	FVector TargetLocation;

	return ResolveApproahTargetLocation(TargetLocation);
}

bool UAT_CombatApproach::HasReachedDesiredRange() const
{
	if (!AvatarPawn)
	{
		return false;
	}

	FVector TargetLocation;

	if (!ResolveApproahTargetLocation(TargetLocation))
	{
		return false;
	}

	const float DistanceToTarget = FVector::Dist2D(AvatarPawn->GetActorLocation(), TargetLocation);

	UE_LOG(LogTemp, Warning, TEXT("Distance to target %f, Desired Range %f"), DistanceToTarget, DesiredRange);
	
	return DistanceToTarget <= DesiredRange;
}

void UAT_CombatApproach::FinishSuccess()
{
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

bool UAT_CombatApproach::ResolveApproahTargetLocation(FVector& OutTargetLocation) const
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

	SubmittedTargetActor = Request.TargetActor;

	SubmittedTargetPointTag = Request.TargetPointTag;

	SubmittedTargetLocation = Request.TargetLocation;

	NavigationComponent->SetNavigationIntent(Request);

	bSubmittedNavigationRequest = true;

	UE_LOG(LogTemp,Display,TEXT("[CombatApproach] Submitted | Pokemon=%s | Target=%s | Point=%s | Location=%s | Range=%.1f"),
		*GetNameSafe(AvatarPokemon),
		*GetNameSafe(Request.TargetActor.Get()),
		*Request.TargetPointTag.ToString(),
		*Request.TargetLocation.ToString(),
		DesiredRange
	);


	return true;
}

void UAT_CombatApproach::FaceTarget(float DeltaTime) const
{
	if(!AvatarPawn||!TargetActor)
	{
		return;
	}

	const FRotator CurrentRotation = AvatarPawn->GetActorRotation();
	const FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(AvatarPawn->GetActorLocation(), TargetActor->GetActorLocation());
	const FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, 10.f);
	AvatarPawn->SetActorRotation(FRotator(0.f, NewRotation.Yaw, 0.f));

}

void UAT_CombatApproach::OnDestroy(bool bInOwnerFinished)
{
	if (AvatarCharacter)
	{
		AvatarPokemon = Cast<APokemon_Parent>(AvatarCharacter);
		AvatarPokemon->SetMovementSpeed(EMovementSpeed::EMS_Running, MoveSpeedMultiplier);
	}
	Super::OnDestroy(bInOwnerFinished);
}
