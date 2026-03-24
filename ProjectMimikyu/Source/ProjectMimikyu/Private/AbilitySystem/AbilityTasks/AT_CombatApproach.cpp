// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AT_CombatApproach.h"
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
	AvatarController = AvatarPawn ? AvatarPawn->GetController() : nullptr;

	if (!IsValidSetup())
	{
		FinishFailure();
		return;
	}

	if (AvatarCharacter)
	{
		APokemon_Parent* AvatarPokemon = Cast<APokemon_Parent>(AvatarCharacter);
		AvatarPokemon->SetMovementSpeed(EMovementSpeed::EMS_Engaging, MoveSpeedMultiplier);
			//CachedOriginalMaxWalkSpeed = AvatarCharacter->GetCharacterMovement()->MaxWalkSpeed;
		//AvatarCharacter->GetCharacterMovement()->MaxWalkSpeed *= MoveSpeedMultiplier;
		//bCachedWalkSpeed = true;
	}

	if (HasReachedDesiredRange())
	{
		FinishSuccess();
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

	MoveTowardsTarget(DeltaTime);
}

bool UAT_CombatApproach::IsValidSetup() const
{
	return Ability && AvatarPawn && TargetActor && !TargetActor->IsPendingKillPending();
}

bool UAT_CombatApproach::HasReachedDesiredRange() const
{
	if (!AvatarPawn || !TargetActor)
	{
		return false;
	}

	const float DistanceToTarget = FVector::Dist(AvatarPawn->GetActorLocation(), TargetActor->GetActorLocation());
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

void UAT_CombatApproach::MoveTowardsTarget(float DeltaTime)
{
	if (!AvatarPawn || !TargetActor)
	{
		return;
	}
	const FVector ToTarget = (TargetActor->GetActorLocation() - AvatarPawn->GetActorLocation()).GetSafeNormal2D();

	// Character movement-friendly input
	if (AvatarCharacter)
	{
		AvatarCharacter->AddMovementInput(ToTarget, 1.f);

	}
	else
	{
		// Generic Fallback for non-character pawns
		const FVector NewLocation = AvatarPawn->GetActorLocation() + (ToTarget * 300.f * MoveSpeedMultiplier * DeltaTime);
		AvatarPawn->SetActorLocation(NewLocation, true);
	}
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
		APokemon_Parent* AvatarPokemon = Cast<APokemon_Parent>(AvatarCharacter);
		AvatarPokemon->SetMovementSpeed(EMovementSpeed::EMS_Running, MoveSpeedMultiplier);
	}
	Super::OnDestroy(bInOwnerFinished);
}
