// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIControllers/PokemonAITypes.h"
#include "GameplayTagContainer.h"
#include "PokemonNavigationComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UPokemonNavigationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPokemonNavigationComponent();

virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Navigation")
	void SetNavigationIntent(const FAgentNavigationRequest& NewRequest);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Navigation")
	void ClearNavigationIntent();

	UFUNCTION(BlueprintPure, Category = "Pokemon|AI|Navigation")
	bool HasActiveNavigationRequest() const;

	UFUNCTION(BlueprintPure, Category = "Pokemon|AI|Navigation")
	const FAgentNavigationRequest& GetCurrentNavigationIntent() const;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	FAgentNavigationRequest CurrentNavigationRequest;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	bool bHasActiveRequest = false;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	float NavigationThinkInterval = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	float DefaultAcceptableRadius = 150.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	float FleeDistance = 900.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	float FollowDistance = 350.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	float CombatKeepDistance = 700.f;

private:
	UPROPERTY()
	TObjectPtr<APawn> OwnerPawn;

	UPROPERTY()
	TObjectPtr<AAIController> CachedAIController;
	
	float TimeSinceLastNavigationThink = 0.f;

	void TickNavigation(float DeltaTime);

	void ProcessNavigationRequest();

	bool ProcessWander();
	bool ProcessFollow();
	bool ProcessChase();
	bool ProcessApproach();
	bool ProcessFlee();
	bool ProcessReturnToTrainer();
	bool ProcessCombatKeepDistance();
	bool ProcessCombatReposition();

	bool RequestMoveToLocation(const FVector& GoalLocation, float AcceptableRadius);
	bool RequestMoveToActor(AActor* TargetActor, float AcceptableRadius);

	bool GetTargetLocation(FVector& OutLocation) const;
	FVector GetFleeLocationFromTarget(const FVector& ThreatLocation) const;

public:
	UFUNCTION(BlueprintCallable)
	void DebugFollowTarget(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	void DebugApproachTarget(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	void DebugFleeFromTarget(AActor* TargetActor);
};
