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
	virtual void Tick(float DeltaTime) override;

	void LockOnTarget(AActor* TargetActor);
	void UnlockTarget();
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UWidgetComponent> ReticleWidgetComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneComponent> RootSceneComponent;

	UPROPERTY()
	TObjectPtr<AActor> LockedTarget;

	UPROPERTY(EditAnywhere, Category = "LockOn")
	float ReticleForwardOffset = 45.f;

	void LookAtCamera();

private:
	FVector GetReticleDisplayLocation(AActor* TargetActor) const;

};
