#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "Intent/PokemonHeldDefenseTypes.h"
#include "Intent/PokemonIntentSequenceTypes.h"
#include "Navigation/PokemonNavigationResult.h"
#include "Command/PokemonAttackExecution.h"
#include "PokemonIntentSequenceComponent.generated.h"

class UPokemonNavigationComponent;
class UPokemonCommandComponent;
class ACharacter;
class UPokemonJumpExecutionComponent;
class UPokemonStaminaComponent;

// Owns ordered high-level actions; navigation continues to own all walk/jump segments.
UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonIntentSequenceComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPokemonIntentSequenceComponent();

	// Returns the created intent's ID, including when executor submission fails immediately.
	// Invalid means no intent was installed (invalid caller/input or reentrant supersession).
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Pokemon|Intent")
	FGuid SubmitMoveToIntent(const FVector& Destination, bool bAllowSpecialTraversal = true);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Pokemon|Intent")
	FGuid SubmitAttackIntent(int32 MoveIndex, const FPokemonCommandTarget& CommandTarget);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Pokemon|Intent")
	bool CancelIntent(FGuid OwnedIntentId, FName Reason);

	UFUNCTION(BlueprintPure, Category = "Pokemon|Intent")
	const FPokemonIntentSequence& GetCurrentSequence() const { return CurrentSequence; }

	FPokemonIntentResolvedSignature OnIntentResolved;

	bool IsRunningAttackExecutionForCommand(FGuid CommandId) const;

	// Development-only input authorization for the current NavigateToLocation action.
	static bool IsHeldDefensePrototypeEnabled();

	static bool IsHeldDefenseStaminaPrototypeEnabled();

	bool HasRunningMoveToAction() const;
	bool BeginHeldDefense(AActor* Trainer, int32 Activation, int32 Revision, FName& OutReason);
	bool ReleaseHeldDefense(AActor* Trainer, int32 Activation, int32 Revision, FName Reason);
	void RevokeHeldDefense(FName Reason);
	void RefreshHeldDefense();
	const FPokemonHeldDefenseSession& GetHeldDefenseSession() const { return HeldDefense; }

	// Increment 3 records paid diagnostic intervals, but implements no steering.
	// This hook deliberately returns false until a future implementation can
	// consume resource authorization together with the actual service operation.
	bool TryGetHeldDefenseServiceContext(FPokemonHeldDefenseSession& OutContext) const;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	friend struct FPokemonIntentSequenceTestAccess;

	// Provisional diagnostic values, not approved gameplay balance.
	UPROPERTY(EditDefaultsOnly,Category = "Pokemon|Intent|HeldDefense|Development",meta = (ClampMin = "0.001"))
	float HeldDefenseStaminaPerSecond = 10.f;

	UPROPERTY(EditDefaultsOnly, Category = "Pokemon|Intent|HeldDefense|Development", meta = (ClampMin = "0.001", ClampMax = "1.0"))
	float HeldDefenseReentryFraction = 0.25f;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = "Pokemon|Intent|Development")
	FPokemonHeldDefenseSession HeldDefense;

	TWeakObjectPtr<AActor> LastDefenseInputTrainer;
	int32 LastDefenseActivation = 0;

	// The charging gate is captured at press time.Changing the gate
	// retires that binding instead of silently enabling charging.
	bool bHeldDefenseChargingRequested = false;

	// These survive release/revocation. Recovery alone cannot rearm defense.
	bool bHeldDefenseRecoveryRequired = false;
	bool bHeldDefenseReleaseRequired = false;

	bool bHeldDefenseSpendInProgress = false;

	// Binding serial changes only when a new input binding is installed.
	// Resource serial changes whenever its accounting lease is retired.
	uint64 HeldDefenseBindingSerial = 0;
	uint64 HeldDefenseResourceSerial = 0;

	double HeldDefenseLastAccountingTime = -1.0;

	// Unbilling fractional cost only; GAS remains the resource balance.
	double HeldDefensePendingCost = 0.0;

	TWeakObjectPtr<UPokemonStaminaComponent> HeldDefenseStamina;
	FGuid HeldDefenseSustainedToken;

	FDelegateHandle HeldDefenseObservationHandle;
	FDelegateHandle HeldDefenseJumpTakeoffHandle;
	FDelegateHandle HeldDefenseJumpFinishedHandle;

	TWeakObjectPtr<APokemon_Parent> HeldDefenseObservedPokemon;
	TWeakObjectPtr<UPokemonJumpExecutionComponent> HeldDefenseObservedJump;

	bool ValidateHeldDefenseBinding(FName& OutReason) const;
	bool HasValidHeldDefenseResourceConfiguration() const;

	void StartHeldDefenseObservation();
	void StopHeldDefenseObservation();
	void StopHeldDefenseResourceAccounting();

	void AccountHeldDefenseElapsed(double ServerTime);
	void ExhaustHeldDefense(FName Reason);
	void InvalidateHeldDefenseMovementSample();

	UFUNCTION()
	void HandleHeldDefenseMovementModeChanged(ACharacter* Character, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);

	void SetHeldDefenseState(EPokemonHeldDefenseState State, FName Reason, bool bLastIntervalFunded = false);

	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadOnly, Category = "Pokemon|Intent", meta = (AllowPrivateAccess = "true"))
	FPokemonIntentSequence CurrentSequence;

	TWeakObjectPtr<UPokemonNavigationComponent> Navigation;
	TWeakObjectPtr<UPokemonCommandComponent> Command;

	FDelegateHandle NavigationResultHandle;
	FDelegateHandle CommandResultHandle;

	uint64 IntentMutationSerial = 0;
	bool bEndingPlay = false;

	FTimerHandle HeldDefenseObservationTimer;

	FGuid SubmitSequence(const TArray<FPokemonIntentActionSpec>& Specs, EPokemonIntentType Type = EPokemonIntentType::MoveTo);
	void StartActiveAction();
	void StartCombatApproachAction();
	void StartNavigateAction();
	void StartAttackAction();
	void CancelExecutor(EPokemonIntentActionType Type, FGuid RequestId, FName Reason);
	void HandleNavigationResolved(FGuid ExpectedIntentId, FGuid ExpectedActionId, EPokemonIntentActionType ExpectedType, FGuid RequestId, EPokemonNavigationResolution Result, FName Reason);
	void HandleCommandResolved(FGuid ExpectedIntentId, FGuid ExpectedActionId, FGuid CommandId, EPokemonAttackExecutionOutcome Outcome, FName Reason);
	bool OwnsRunningAction(FGuid IntentId, FGuid ActionId, FGuid ExecutorId, EPokemonIntentActionType Type) const;
	void ApplyActionResult(EPokemonIntentActionState Result, FName Reason, FName Outcome = NAME_None);
	void FinishSequence(EPokemonIntentSequenceState Result, FName Reason);
	void UnbindExecutor();
	void LogEvent(const TCHAR* Event) const;
};
