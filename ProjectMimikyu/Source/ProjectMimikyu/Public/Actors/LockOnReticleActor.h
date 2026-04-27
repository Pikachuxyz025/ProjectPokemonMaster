// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LockOnReticleActor.generated.h"

class UWidgetComponent;
UCLASS()
class PROJECTMIMIKYU_API ALockOnReticleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ALockOnReticleActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UWidgetComponent> ReticleWidgetComponent;

	void LookAtCamera();
public:	

	virtual void Tick(float DeltaTime) override;

	void LockOnTarget(AActor* TargetActor);
	void UnlockTarget();
};
