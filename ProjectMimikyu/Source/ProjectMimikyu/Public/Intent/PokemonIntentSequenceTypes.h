#pragma once

#include "CoreMinimal.h"
#include "PokemonIntentSequenceTypes.generated.h"

UENUM(BlueprintType)
enum class EPokemonIntentActionType : uint8
{
	NavigateToLocation
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
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonIntentActionRecord
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid ActionId;
	// The subsystem's request ID, not an IntentId or an ActionId.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid ExecutorRequestId;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FPokemonIntentActionSpec Spec;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EPokemonIntentActionState State = EPokemonIntentActionState::Pending;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FName Reason = NAME_None;
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonIntentSequence
{
	GENERATED_BODY()

	// Whole MoveTo intent. ActiveTrainerCommandId remains separately owned by Command.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid IntentId;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FPokemonIntentActionRecord> Actions;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 ActiveActionIndex = INDEX_NONE;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EPokemonIntentSequenceState State = EPokemonIntentSequenceState::Idle;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FName Reason = NAME_None;
};

// Snapshot remains the resolved intent even if a listener submits a replacement.
DECLARE_MULTICAST_DELEGATE_OneParam(FPokemonIntentResolvedSignature, const FPokemonIntentSequence&);
