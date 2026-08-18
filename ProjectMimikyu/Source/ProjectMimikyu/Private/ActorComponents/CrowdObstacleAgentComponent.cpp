// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/CrowdObstacleAgentComponent.h"
#include "AIControllers/PokemonAITypes.h"
#include "Navigation/CrowdManager.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UCrowdObstacleAgentComponent::UCrowdObstacleAgentComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UCrowdObstacleAgentComponent::BeginPlay()
{
	Super::BeginPlay();

	if (UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this))
	{
		CrowdManager->RegisterAgent(this);

		UE_LOG(LogTemp, Log, TEXT("Registered Crowd Obstacle Agent: %s"), *GetOwner()->GetName());
	}
}

void UCrowdObstacleAgentComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this))
	{
		CrowdManager->UnregisterAgent(this);
		UE_LOG(LogTemp, Log, TEXT("Unregistered Crowd Obstacle Agent: %s"), *GetOwner()->GetName());
	}
	Super::EndPlay(EndPlayReason);
}

FVector UCrowdObstacleAgentComponent::GetCrowdAgentLocation() const
{
	const AActor* OwnerActor = GetOwner();

	return OwnerActor ? OwnerActor->GetActorLocation() : FVector::ZeroVector;
}

FVector UCrowdObstacleAgentComponent::GetCrowdAgentVelocity() const
{
	const ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
	return OwnerCharacter ? OwnerCharacter->GetVelocity() : FVector::ZeroVector;
}

void UCrowdObstacleAgentComponent::GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const
{
	CylinderRadius = 34.f + AvoidanceRadiusPadding;
	CylinderHalfHeight = 88.f;

	const ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());

	if (!CharacterOwner)
	{
		return;
	}

	const UCapsuleComponent* CapsuleComp = CharacterOwner->GetCapsuleComponent();
	if (!CapsuleComp)
	{
		return;
	}

	CylinderRadius = CapsuleComp->GetScaledCapsuleRadius() + AvoidanceRadiusPadding;
	CylinderHalfHeight = CapsuleComp->GetScaledCapsuleHalfHeight();

	return;
}

float UCrowdObstacleAgentComponent::GetCrowdAgentMaxSpeed() const
{
	const ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
	
	if (!OwnerCharacter)
	{
		return 0.f;
	}

	const UCharacterMovementComponent* MovementComp = OwnerCharacter->GetCharacterMovement();

	return MovementComp ? MovementComp->GetMaxSpeed() : 0.f;
}

int32 UCrowdObstacleAgentComponent::GetCrowdAgentAvoidanceGroup() const
{
	return PokemonCrowdGroups::Trainer;
}

int32 UCrowdObstacleAgentComponent::GetCrowdAgentGroupsToAvoid() const
{
	// The Trainer isn't being driven by Crowd navigation,
	// so it doesn't need Crowd to steer it around anything.
	return 0;
}

int32 UCrowdObstacleAgentComponent::GetCrowdAgentGroupsToIgnore() const
{
	return 0;
}