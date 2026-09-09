#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Intent/PokemonIntentSequenceTypes.h"
#include "Navigation/PokemonNavigationResult.h"
#include "Command/PokemonAttackExecution.h"
#include "PokemonIntentSequenceComponent.generated.h"

class UPokemonNavigationComponent;
class UPokemonCommandComponent;

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

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	friend struct FPokemonIntentSequenceTestAccess;
	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadOnly, Category = "Pokemon|Intent", meta = (AllowPrivateAccess = "true"))
	FPokemonIntentSequence CurrentSequence;
	TWeakObjectPtr<UPokemonNavigationComponent> Navigation;
	TWeakObjectPtr<UPokemonCommandComponent> Command;
	FDelegateHandle NavigationResultHandle;
	FDelegateHandle CommandResultHandle;
	uint64 IntentMutationSerial = 0;
	bool bEndingPlay = false;

	FGuid SubmitSequence(const TArray<FPokemonIntentActionSpec>& Specs, EPokemonIntentType Type = EPokemonIntentType::MoveTo);
	void StartActiveAction();
	void StartNavigateAction();
	void StartAttackAction();
	void CancelExecutor(EPokemonIntentActionType Type, FGuid RequestId, FName Reason);
	void HandleNavigationResolved(FGuid ExpectedIntentId, FGuid ExpectedActionId,
		FGuid RequestId, EPokemonNavigationResolution Result, FName Reason);
	void HandleCommandResolved(FGuid ExpectedIntentId, FGuid ExpectedActionId,
		FGuid CommandId, EPokemonAttackExecutionOutcome Outcome, FName Reason);
	bool OwnsRunningAction(FGuid IntentId, FGuid ActionId, FGuid ExecutorId, EPokemonIntentActionType Type) const;
	void ApplyActionResult(EPokemonIntentActionState Result, FName Reason, FName Outcome = NAME_None);
	void FinishSequence(EPokemonIntentSequenceState Result, FName Reason);
	void UnbindExecutor();
	void LogEvent(const TCHAR* Event) const;
};
