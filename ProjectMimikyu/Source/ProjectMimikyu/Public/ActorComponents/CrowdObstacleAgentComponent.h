// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Navigation/CrowdAgentInterface.h"
#include "CrowdObstacleAgentComponent.generated.h"


UCLASS( ClassGroup=(AI), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UCrowdObstacleAgentComponent : public UActorComponent, public ICrowdAgentInterface
{
	GENERATED_BODY()

public:	
	UCrowdObstacleAgentComponent();

protected:
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	

	// ICrowdAgentInterface implementation
	virtual FVector GetCrowdAgentLocation() const override;

	virtual FVector GetCrowdAgentVelocity() const override;

	virtual void GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const override;

	virtual float GetCrowdAgentMaxSpeed() const override;

	virtual int32 GetCrowdAgentAvoidanceGroup() const override;

	virtual int32 GetCrowdAgentGroupsToAvoid() const override;

	virtual int32 GetCrowdAgentGroupsToIgnore() const override;

protected:

	/*
	 * Extra virtual space around the actor.
	 *
	 * This does NOT increase physical collision.
	 * It merely causes Crowd agents to begin steering
	 * around this actor sooner.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crowd")
	float AvoidanceRadiusPadding = 75.f;
};
