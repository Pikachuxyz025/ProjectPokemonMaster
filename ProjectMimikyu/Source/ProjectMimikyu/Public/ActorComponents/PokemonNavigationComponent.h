// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIControllers/PokemonAITypes.h"
#include "Navigation/PokemonTraversalTypes.h"
#include "GameplayTagContainer.h"
#include "PokemonNavigationComponent.generated.h"

class AAIController;
class APawn;

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
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

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Navigation")
	bool RequestPlayerMoveToLocation(const FVector& RawTargetLocation, bool bAllowSpecialTraversal = true);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Pokemon|AI|Traversal|Debug",meta = (DevelopmentOnly))
	bool DebugEvaluateRetainedMoveTraversal(EPokemonTraversalCircumstance ConfirmedCircumstance, bool bDestinationSupportConfirmed);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Navigation")
	void SuspendNavigation();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Navigation")
	void ResumeNavigation();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Navigation")
	bool IsNavigationSuspended() const { return bNavigationSuspended; }

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	FAgentNavigationRequest CurrentNavigationRequest;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation")
	bool bHasActiveRequest = false;

	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadOnly, Category = "Pokemon|AI|Traversal")
	bool bPlayerMovePlanningOnly = false;

	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadOnly, Category = "Pokemon|AI|Traversal")
	FPokemonTraversalRequirement LastTraversalRequirement;

	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadOnly, Category = "Pokemon|AI|Traversal")
	FPokemonTraversalCandidate LastTraversalCandidate;

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


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation|Player Command")
	FVector PlayerCommandProjectionExtent = FVector(250.f, 250.f, 500.f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation|Player Command")
	float PlayerCommandAcceptableRadius = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation|Approach", meta = (ClampMin = "0.0"))
	FVector ApproachProjectionExtent = FVector(250.f, 250.f, 500.f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|AI|Navigation|Approach", meta = (ClampMin = "0.0"))
	float ApproachArrivalMargin = 5.f;

private:
	UPROPERTY()
	TObjectPtr<APawn> OwnerPawn;

	UPROPERTY()
	TObjectPtr<AAIController> CachedAIController;
	
	float TimeSinceLastNavigationThink = 0.f;

	bool bNavigationSuspended = false;

	void TickNavigation(float DeltaTime);

	void ProcessNavigationRequest();

	bool ProcessWander();
	bool ProcessFollow();
	bool ProcessChase();
	bool ProcessApproach();
	bool ProcessMeleeApproach(const FVector& TargetLocation);
	bool ProcessFlee();
	bool ProcessReturnToTrainer();
	bool ProcessCombatKeepDistance();
	bool ProcessCombatReposition();
	bool ProcessPlayerCommandMove();

	bool RequestMoveToLocation(const FVector& GoalLocation, float AcceptableRadius, bool bAllowPartialPath = true, bool bIncludeAgentRadius = true, bool bProjectGoalLocation = true);
	bool RequestMoveToActor(AActor* TargetActor, float AcceptableRadius, bool bCanStrafe = false);

	bool TryProjectNavigationGoal(const FVector& RawGoal, const FVector& ProjectionExtent, FVector& OutProjectedGoal) const;

	bool GetTargetLocation(FVector& OutLocation) const;
	FVector GetFleeLocationFromTarget(const FVector& ThreatLocation) const;

	void RetainPlayerMoveForTraversal(const FAgentNavigationRequest& Request, FName Trigger);

	bool BuildTraversalRequirement(const FVector& DestinationFeet, FName Trigger, FPokemonTraversalRequirement& OutRequirement) const;

	void EvaluateGroundTraversalFailure(const FVector& DestinationFeet,FName Trigger);

	void EvaluateTraversalRequirement(const FPokemonTraversalRequirement& Requirement);

public:
	UFUNCTION(BlueprintCallable)
	void DebugFollowTarget(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	void DebugApproachTarget(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	void DebugFleeFromTarget(AActor* TargetActor);
};
