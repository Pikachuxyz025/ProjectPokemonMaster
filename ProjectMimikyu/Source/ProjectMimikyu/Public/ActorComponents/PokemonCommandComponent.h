// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Command/PokemonCommandTypes.h"
#include "Command/PokemonAttackExecution.h"
#include "GameplayAbilitySpecHandle.h"
#include "ActorComponents/TargetingType.h"
#include "PokemonCommandComponent.generated.h"

class APokemon_Parent;
class UPokemonMoveDataAsset;
class UPokemonGameplayAbilities;

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonCommandComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonCommandComponent();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	bool TryCallCommand(int32 MoveIndex);

	// Classification is independent of validation. Rejected melee never falls back to BT.
	static bool IsSupportedSequencedMove(const UPokemonMoveDataAsset* Move);
	UPokemonMoveDataAsset* ResolveMoveAtIndex(int32 MoveIndex, FName& OutReason) const;
	FName ValidateSequencedCommand(UPokemonMoveDataAsset* Move, const FPokemonCommandTarget& Target,
		FGuid ReplacedOwnedCommandId = FGuid()) const;
	FPokemonTrainerCommandSubmission ReserveSequencedCommand(UPokemonMoveDataAsset* Move,
		const FPokemonCommandTarget& Target, FGuid ParentIntentId);
	bool ExecuteSequencedCommand(FGuid CommandId);
	bool CancelSequencedCommand(FGuid OwnedCommandId, FName Reason);
	bool IsSequencedCommand(FGuid CommandId) const;
	bool IsSequencedExecutionEnding() const;
	FGuid GetParentIntentId() const { return ParentIntentId; }
	FPokemonTrainerCommandResolvedSignature OnTrainerCommandResolved;

	// Native ability bridge: source instance and command identity must both match.
	FGuid BindSequencedAbility(UPokemonGameplayAbilities* Ability, FGameplayAbilitySpecHandle Handle);
	void NotifySequencedAbilityEnded(UPokemonGameplayAbilities* Ability, FGuid CommandId,
		bool bWasCancelled, FName ActivationFailure);
	void NotifySequencedContact(UPokemonGameplayAbilities* Ability, FGuid CommandId);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void AttackEnded();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void SetCommandTarget(const FPokemonCommandTarget& NewCommandTarget);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void ClearCommandTarget();

	const FPokemonCommandTarget& GetCommandTarget() const { return CurrentCommandTarget; }

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	bool ResolveCurrentCommandTargetLocation(FVector& OutTargetLocation) const;

	FPokemonCommandTarget BuildCommandTargetFromHit(const FHitResult& Hit) const;
	void SetCommandTargetFromHit(const FHitResult& Hit);

	bool ResolveDodgeDirection(FGameplayTag DirectionTag, const FVector& ReferenceForward, FVector& OutWorldDirection) const;

	FPokemonCommandTarget BuildCommandTargetFromAimData(const FAimData& AimData) const;
	void SetCommandTargetFromAimData(const FAimData& AimData);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void Dodge(FGameplayTag NewDodgeDirectionTag,const FVector& ReferenceForward);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void EndDodge();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void SelectRandomMove();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void ClearActiveMove();

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	UPokemonMoveDataAsset* GetActiveMove() const { return ActivePokemonMove; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	bool IsCommandActive() const { return ActivePokemonMove != nullptr; }

	FGuid GetActiveTrainerCommandId() const { return ActiveTrainerCommandId; }
	bool HasConsumedAttackJump(FGuid CommandId) const;
	void ConsumeAttackJump(FGuid CommandId);
	FVector GetAuthorizedTraversalMomentum(FGuid CommandId) const;

	// The executing trainer-commanded action reports its existing momentum, never a desired boost.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Pokemon|Command|Traversal")
	bool AuthorizeTraversalMomentum(FGuid CommandId, FVector ExistingMoveMomentum);

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command|Traversal")
	FGuid GetTrainerCommandIdForTraversal() const { return ActiveTrainerCommandId; }

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Command")
	void SetIsDodging(bool bNewDodging) { bIsDodging = bNewDodging; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	bool IsDodging() const { return bIsDodging; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	bool IsUsingMove() const { return bIsUsingMove; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	FVector GetDodgeDirection() const { return DodgeDirection; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FGameplayTag GetDodgeDirectionTag() const { return DodgeDirectionTag; }

private:
	friend class UPokemonGameplayAbilities;
	APokemon_Parent* GetOwnerPokemon() const;
	FName ValidateMoveReservation(UPokemonMoveDataAsset* Move, FGuid ReplacedOwnedCommandId = FGuid()) const;
	void InstallCommand(UPokemonMoveDataAsset* Move, const FPokemonCommandTarget& Target, FGuid IntentId);
	bool FinishCommand(FGuid CommandId, EPokemonAttackExecutionOutcome Outcome, FName Reason);
	void CleanupCommand(APokemon_Parent* Pokemon);
	void LogCommandEvent(const TCHAR* Event, FGuid CommandId, FGuid IntentId,
		EPokemonAttackExecutionOutcome Outcome = EPokemonAttackExecutionOutcome::None, FName Reason = NAME_None) const;

private:
	UPROPERTY()
	TObjectPtr<APokemon_Parent> OwnerPokemon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPokemonMoveDataAsset> ActivePokemonMove = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	FPokemonCommandTarget CurrentCommandTarget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	bool bIsCharging = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	bool bIsDodging = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	bool bIsUsingMove = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	FVector DodgeDirection = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Command", meta = (AllowPrivateAccess = "true"))
	FGameplayTag DodgeDirectionTag;

	FTimerHandle ChargeTimer;

	FGuid ActiveTrainerCommandId;
	bool bAttackJumpConsumed = false;
	FVector AuthorizedTraversalMomentum = FVector::ZeroVector;
	FGuid ParentIntentId;
	FGameplayTag ReservedInputTag;
	FGameplayAbilitySpecHandle SequencedAbilityHandle;
	TWeakObjectPtr<UPokemonGameplayAbilities> SequencedAbility;
	bool bSequenceManaged = false;
	bool bSequencedAttackConnected = false;
	bool bSequencedExecutionRequested = false;
	bool bSequencedCancellationRequested = false;
	FName SequencedCancellationReason = NAME_None;
	bool bCommandCleanupInProgress = false;
	bool bCommandEndingPlay = false;
	// Suppresses identity-free Blueprint AttackEnded during an identified native EndAbility.
	int32 SequencedAbilityEndDepth = 0;
};
