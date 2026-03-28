// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/PokemonIncapacitationComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "AIControllers/PokemonAIController.h"
#include "BrainComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"
#include "GameFramework/CharacterMovementComponent.h"

UPokemonIncapacitationComponent::UPokemonIncapacitationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPokemonIncapacitationComponent::BeginPlay()
{
	Super::BeginPlay();
 
	InitializePokemonOwner(Cast<APokemon_Parent>(GetOwner()));

	if(bAutoBindMeshHitEvent)
	{
		if (USkeletalMeshComponent* MeshComp = GetPokemonMesh())
		{
			MeshComp->OnComponentHit.AddDynamic(this, &UPokemonIncapacitationComponent::OnMeshPhysicsHit);
		}
	}
}

void UPokemonIncapacitationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IncapacitationState == EPokemonIncapacitationState::EIS_ControlledRagdoll)
	{
		if (HasSettled())
		{
			TransitionRagdollToProne();
		}
	}
}

void UPokemonIncapacitationComponent::InitializePokemonOwner(APokemon_Parent* InOwnerPokemon)
{
	PokemonOwner = InOwnerPokemon;
}

void UPokemonIncapacitationComponent::ApplyKnockback(const FVector& KnockbackVelocity, bool bCanCauseFaint, bool bForceRagdoll)
{
	APokemon_Parent* OwnerPokemon = GetPokemonOwner();
	if (!OwnerPokemon)
	{
		return;
	}

	if (IncapacitationState == EPokemonIncapacitationState::EIS_BeingReturned)
	{
		return;
	}

	ActiveKnockbackState.InitialVelocity = KnockbackVelocity;
	ActiveKnockbackState.bCanCauseFaint = bCanCauseFaint;
	ActiveKnockbackState.bForceRagdoll = bForceRagdoll;
	ActiveKnockbackState.bPendingFaintOnSettle = bCanCauseFaint;
	ActiveKnockbackState.RemainingBounces = KnockbackTuning.MaxBounceCount;

	StopCombatAndMovement();

	IncapacitationState = EPokemonIncapacitationState::EIS_Launched;

	const float KnockbackStrength = KnockbackVelocity.Size();
	const bool bShouldRagdoll = KnockbackStrength >= KnockbackTuning.RagdollThreshold || bForceRagdoll;

	if (bShouldRagdoll)
	{
		EnterControlledRagdoll(KnockbackVelocity);
	}
	else
	{
		if (UCharacterMovementComponent* MoveComp = GetPokemonMovement())
		{
			MoveComp->SetMovementMode(MOVE_Falling);
			MoveComp->Velocity = KnockbackVelocity;
		}
	}
}

void UPokemonIncapacitationComponent::EnterCollapsedFaint()
{
	StopCombatAndMovement();
	EnterProneState();
	EnterFaintedProneState();
}

void UPokemonIncapacitationComponent::EnterProneState()
{
	ForceStopMotion();
	ExitControlledRagdoll();

	bIsProne = true;
	bCanBeReturned = true;
	IncapacitationState = EPokemonIncapacitationState::EIS_Prone;

	if (UCapsuleComponent* CapsuleComp = GetPokemonCapsule())
	{
		CapsuleComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	OnProneEntered.Broadcast();
}

void UPokemonIncapacitationComponent::EnterFaintedProneState()
{
	StopCombatAndMovement();
	ForceStopMotion();

	bIsProne = true;
	bIsFaintedProne = true;
	bCanBeReturned = true;
	IncapacitationState = EPokemonIncapacitationState::EIS_FaintedProne;

	OnFaintedProneEntered.Broadcast();
}

void UPokemonIncapacitationComponent::BeginManualReturn()
{
	APokemon_Parent* OwnerPokemon = GetPokemonOwner();
	if(!OwnerPokemon)
	{
		return;
	}

	if(!bCanBeReturned)
	{
		return;
	}

	StopCombatAndMovement();
	ForceStopMotion();

	IncapacitationState = EPokemonIncapacitationState::EIS_BeingReturned;

	OnManualReturnStarted.Broadcast();

	OwnerPokemon->PrepareForFieldRemoval();
	OwnerPokemon->Return();
}

void UPokemonIncapacitationComponent::StopCombatAndMovement()
{
	APokemon_Parent* OwnerPokemon = GetPokemonOwner();
	if(!OwnerPokemon)
	{
		return;
	}

	if (UCharacterMovementComponent* MoveComp = GetPokemonMovement())
	{
		MoveComp->StopMovementImmediately();
		MoveComp->DisableMovement();
	}

	if (APokemonAIController* PokemonController = Cast<APokemonAIController>(OwnerPokemon->GetController()))
	{
		PokemonController->StopMovement();

		if (UBrainComponent* BrainComp = PokemonController->GetBrainComponent())
		{
			BrainComp->StopLogic(TEXT("Pokemon incapacitated"));
		}
	}
}

void UPokemonIncapacitationComponent::EnterControlledRagdoll(const FVector& InitialVelocity)
{
	USkeletalMeshComponent* MeshComp = GetPokemonMesh();
	if (!MeshComp)
	{
		return;
	}

	IncapacitationState = EPokemonIncapacitationState::EIS_ControlledRagdoll;

	if (UCapsuleComponent* CapsuleComp = GetPokemonCapsule())
	{
		CapsuleComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	MeshComp->SetCollisionProfileName(TEXT("Ragdoll"));
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetEnableGravity(true);

	MeshComp->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
	MeshComp->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector);

	//MeshComp->AddImpulse(InitialVelocity, NAME_None, true);
	MeshComp->SetPhysicsLinearVelocity(InitialVelocity, false, NAME_None);
	StartRagdollSafetyTimer();
	OnControlledRagdollStarted.Broadcast();
}

void UPokemonIncapacitationComponent::ExitControlledRagdoll()
{
	if (IncapacitationState != EPokemonIncapacitationState::EIS_ControlledRagdoll)
	{
		return;
	}

	if (USkeletalMeshComponent* MeshComp = GetPokemonMesh())
	{
		MeshComp->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
		MeshComp->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
		MeshComp->SetSimulatePhysics(false);
		MeshComp->SetEnableGravity(false);


		StopRagdollSafetyTimer();
	}
}

void UPokemonIncapacitationComponent::TransitionRagdollToProne()
{
	const bool bShouldEnterFaintProne = ActiveKnockbackState.bPendingFaintOnSettle;

	EnterProneState();

	if(bShouldEnterFaintProne)
	{
		EnterFaintedProneState();
	}
}

void UPokemonIncapacitationComponent::HandleImpact(const FHitResult& HitResult, const FVector& CurrentVelocity)
{
	if (IncapacitationState != EPokemonIncapacitationState::EIS_ControlledRagdoll)
	{
		return;
	}
	if (TryBounceFromImpact(HitResult,CurrentVelocity))
	{
		return;
	}
	if (IsGroundImpact(HitResult) || IsWallImpact(HitResult))
	{
		TransitionRagdollToProne();
	}
}

bool UPokemonIncapacitationComponent::TryBounceFromImpact(const FHitResult& HitResult, const FVector& CurrentVelocity)
{
	if (ActiveKnockbackState.RemainingBounces <= 0)
	{
		return false;
	}

	const float ImpactSpeed = CurrentVelocity.Size();
	if(ImpactSpeed<KnockbackTuning.BounceThreshold)
	{
		return false;
	}

	const bool bGroundHit = IsGroundImpact(HitResult);
	const bool bWallHit = IsWallImpact(HitResult);

	if (!bGroundHit && !bWallHit)
	{
		return false;
	}

	const FVector ReflectedVelocity = FMath::GetReflectionVector(CurrentVelocity, HitResult.ImpactNormal) * KnockbackTuning.BounceVelocityMultiplier;

	if(USkeletalMeshComponent*MeshComp=GetPokemonMesh())
	{
		MeshComp->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
		MeshComp->AddImpulse(ReflectedVelocity, NAME_None, true);
	}

	ActiveKnockbackState.RemainingBounces--;
	return true;
}

bool UPokemonIncapacitationComponent::HasSettled() const
{
 USkeletalMeshComponent* MeshComp = GetPokemonMesh();
	if (!MeshComp)
	{
		return true;
	}

	const FVector LinearVelocity = MeshComp->GetPhysicsLinearVelocity();
	const FVector AngularVelocity = MeshComp->GetPhysicsAngularVelocityInDegrees();

	return LinearVelocity.Size() <= KnockbackTuning.SettleLinearSpeedThreshold &&
		AngularVelocity.Size() <= KnockbackTuning.SettleAngularSpeedThreshold;
}

void UPokemonIncapacitationComponent::ForceStopMotion()
{
	if (UCharacterMovementComponent* MoveComp = GetPokemonMovement())
	{
		MoveComp->StopMovementImmediately();
	}
	if (USkeletalMeshComponent* MeshComp = GetPokemonMesh())
	{
		MeshComp->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
		MeshComp->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	}
}

void UPokemonIncapacitationComponent::OnMeshPhysicsHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (IncapacitationState != EPokemonIncapacitationState::EIS_ControlledRagdoll)
	{
		return;
	}

	USkeletalMeshComponent* MeshComp = GetPokemonMesh();
	if(!MeshComp)
	{
		return;
	}

	const FVector CurrentVelocity = MeshComp->GetPhysicsLinearVelocity();
	HandleImpact(Hit, CurrentVelocity);
}

void UPokemonIncapacitationComponent::StartRagdollSafetyTimer()
{
	if (!GetWorld())
	{
		return;
	}
	GetWorld()->GetTimerManager().SetTimer(RagdollSafetyTimerHandle, this, &UPokemonIncapacitationComponent::OnRagdollSafetyTimeout, KnockbackTuning.MaxRagdollDuration, false);
}

void UPokemonIncapacitationComponent::StopRagdollSafetyTimer()
{
	if (!GetWorld())
	{
		return;
	}
	GetWorld()->GetTimerManager().ClearTimer(RagdollSafetyTimerHandle);
}

void UPokemonIncapacitationComponent::OnRagdollSafetyTimeout()
{
	if (IncapacitationState == EPokemonIncapacitationState::EIS_ControlledRagdoll)
	{
		TransitionRagdollToProne();
	}
}

bool UPokemonIncapacitationComponent::IsGroundImpact(const FHitResult& Hit) const
{
	return FVector::DotProduct(Hit.ImpactNormal, FVector::UpVector) >= .5f;
}

bool UPokemonIncapacitationComponent::IsWallImpact(const FHitResult& Hit) const
{
	return FMath::Abs(FVector::DotProduct(Hit.ImpactNormal, FVector::UpVector)) < 0.3f;
}

USkeletalMeshComponent* UPokemonIncapacitationComponent::GetPokemonMesh() const
{
	APokemon_Parent* OwnerPokemon=GetPokemonOwner();
	return OwnerPokemon ? OwnerPokemon->GetMesh() : nullptr;
}

UCharacterMovementComponent* UPokemonIncapacitationComponent::GetPokemonMovement() const
{
	APokemon_Parent* OwnerPokemon = GetPokemonOwner();
	return OwnerPokemon ? OwnerPokemon->GetCharacterMovement() : nullptr;
}

UCapsuleComponent* UPokemonIncapacitationComponent::GetPokemonCapsule() const
{
	APokemon_Parent* OwnerPokemon = GetPokemonOwner();
	return OwnerPokemon ? OwnerPokemon->GetCapsuleComponent() : nullptr;
}

