#pragma once

#include "CoreMinimal.h"
#include "Command/PokemonCommandTypes.h"
#include "PokemonIntentSequenceTypes.generated.h"

UENUM(BlueprintType)
enum class EPokemonIntentActionType : uint8
{
	NavigateToLocation,
	AttackExecution,
	CombatApproach
};

UENUM(BlueprintType)
enum class EPokemonIntentType : uint8
{
	MoveTo,
	Attack
};

UENUM(BlueprintType)
enum class EPokemonIntentActionState : uint8
{
	Pending,
	Running,
	Succeeded,
	Failed,
	Interrupted
};

UENUM(BlueprintType)
enum class EPokemonIntentSequenceState : uint8
{
	Idle,
	Running,
	Succeeded,
	Failed,
	Interrupted
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonIntentActionSpec
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EPokemonIntentActionType Type = EPokemonIntentActionType::NavigateToLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Destination = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bAllowSpecialTraversal = true;

	// Resolved at intent acceptance; changing moveset slots cannot change this action.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<class UPokemonMoveDataAsset> AttackMove = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FPokemonCommandTarget CommandTarget;
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonIntentActionRecord
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid ActionId;

	/*
     * Identity shorthand used by coordinator docs/debugging:
     *
     * I = IntentId
     * A = ActionId
     * C = AttackCommandId / trainer-command reservation
     * N = FAgentNavigationRequest::RequestId
     *
     * A1 / A2 mean Action 1 / Action 2 for that particular sequence.
     * They are ordinals, NOT permanent action-type aliases.
     *
     * Attack 0.3:
     *
     *   Intent I
     *   ├── A1 CombatApproach
     *   │      ExecutorRequestId = N
     *   └── A2 AttackExecution
     *          ExecutorRequestId = C
     */

	 // ID owned by the subsystem executing THIS action.
     // NavigateToLocation / CombatApproach -> Navigation RequestId (N).
     // AttackExecution                    -> AttackCommandId (C).
     // Never an IntentId (I) or ActionId (A).
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid ExecutorRequestId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FPokemonIntentActionSpec Spec;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EPokemonIntentActionState State = EPokemonIntentActionState::Pending;

	// Optional executor-specific outcome (Connected/Missed/etc.), independent of State.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FName Outcome = NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FName Reason = NAME_None;
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonIntentSequence
{
	GENERATED_BODY()

	// Whole intent. An attack's command ID remains a distinct executor-owned GUID.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid IntentId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EPokemonIntentType Type = EPokemonIntentType::MoveTo;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FPokemonIntentActionRecord> Actions;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 ActiveActionIndex = INDEX_NONE;

	// Parent-scoped trainer-command reservation (C).
    // Reserved once for an Attack intent before CombatApproach begins.
    // A1 traversal and A2 GAS execution refer to this same command identity.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid AttackCommandId = FGuid();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EPokemonIntentSequenceState State = EPokemonIntentSequenceState::Idle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FName Outcome = NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FName Reason = NAME_None;
};

// Snapshot remains the resolved intent even if a listener submits a replacement.
DECLARE_MULTICAST_DELEGATE_OneParam(FPokemonIntentResolvedSignature, const FPokemonIntentSequence&);
