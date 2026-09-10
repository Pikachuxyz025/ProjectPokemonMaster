// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "ActorComponents/TargetableComponent.h"
#include "AIControllers/PokemonAIController.h"
#include "ActorComponents/MovesetComponent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "Characters/Pokemon_Parent.h"
#include "Components/CapsuleComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HAL/IConsoleManager.h"
#include "TimerManager.h"

namespace
{
	TAutoConsoleVariable<int32> CVarPokemonCommandDebug(TEXT("pokemon.Command.Debug"), 0,
		TEXT("Log sequenced trainer command reservation, execution, contact and resolution."), ECVF_Cheat);
}

UPokemonCommandComponent::UPokemonCommandComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokemonCommandComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerPokemon = Cast<APokemon_Parent>(GetOwner());
}

APokemon_Parent* UPokemonCommandComponent::GetOwnerPokemon() const
{
	return OwnerPokemon ? OwnerPokemon.Get() : Cast<APokemon_Parent>(GetOwner());
}

void UPokemonCommandComponent::SetCommandTarget(const FPokemonCommandTarget& NewCommandTarget)
{
	CurrentCommandTarget = NewCommandTarget;
}

void UPokemonCommandComponent::ClearCommandTarget()
{
	CurrentCommandTarget.Clear();
}

bool UPokemonCommandComponent::ResolveCurrentCommandTargetLocation(FVector& OutTargetLocation) const
{
	OutTargetLocation = FVector::ZeroVector;

	if (!CurrentCommandTarget.IsValidTarget())
	{
		return false;
	}

	AActor* TargetActor = CurrentCommandTarget.TargetActor.Get();

	//
	// Actor + semantic target point:
	// preserve the point identity from command time,
	// but resolve it's CURRENT world transform
	//
	if (IsValid(TargetActor) && CurrentCommandTarget.TargetPointTag.IsValid())
	{
		if (UTargetableComponent* Targetable = TargetActor->FindComponentByClass<UTargetableComponent>())
		{
			FVector CurrentPointLocation;

			if (Targetable->GetTargetPointWorldLocation(CurrentCommandTarget.TargetPointTag, CurrentPointLocation))
			{
				OutTargetLocation = CurrentPointLocation;
				UE_LOG(LogTemp, Display, TEXT(
					"[PokemonCommandTarget] "
					"Dynamic point resolved | "
					"Target=%s | Point=%s | "
					"CommandLocation=%s | "
					"CurrentLocation=%s"
				),
					*GetNameSafe(TargetActor),
					*CurrentCommandTarget.TargetPointTag.ToString(),
					*CurrentCommandTarget.TargetLocation.ToString(),
					*OutTargetLocation.ToString()
				);
				return true;
			}
		}

		//
        // The point disappeared or became invalid.
        // Fall back to the command-time location rather
        // than invalidating the entire move.
        //

		if (CurrentCommandTarget.HasTargetLocation())
		{
			OutTargetLocation = CurrentCommandTarget.TargetLocation;
			return true;
		}
	}

	//
    // Location / Environment command:
    // world-space snapshot remains authoritative.
    //
	if (CurrentCommandTarget.HasTargetLocation())
	{
		OutTargetLocation =	CurrentCommandTarget.TargetLocation;
		return true;
	}

	//
	// Last actor-only fallback.
	//
	if (IsValid(TargetActor))
	{
		OutTargetLocation =	TargetActor->GetActorLocation();
		return true;
	}

	return false;
}

FPokemonCommandTarget UPokemonCommandComponent::BuildCommandTargetFromHit(const FHitResult& Hit) const
{
	FPokemonCommandTarget Result;

	Result.bHasHitResult = Hit.bBlockingHit;
	Result.HitResult = Hit;
	Result.TargetLocation = Hit.ImpactPoint;
	Result.ImpactNormal = Hit.ImpactNormal;
	Result.TargetActor = Hit.GetActor();

	if (!Hit.bBlockingHit)
	{
		Result.TargetType = EPokemonCommandTargetType::None;
		return Result;
	}

	AActor* HitActor = Hit.GetActor();
	if (!HitActor)
	{
		Result.TargetType = EPokemonCommandTargetType::Location;
		return Result;
	}

	if (Cast<APokemon_Parent>(HitActor))
	{
		Result.TargetType = EPokemonCommandTargetType::EnemyPokemon;
		return Result;
	}

	Result.TargetType = EPokemonCommandTargetType::Environment;
	return Result;
}

void UPokemonCommandComponent::SetCommandTargetFromHit(const FHitResult& Hit)
{
	SetCommandTarget(BuildCommandTargetFromHit(Hit));
}

FPokemonCommandTarget UPokemonCommandComponent::BuildCommandTargetFromAimData(const FAimData& AimData) const
{
	FPokemonCommandTarget Result;

	Result.TargetActor = AimData.TargetActor.Get();
	Result.TargetLocation = AimData.AimWorldLocation;
	Result.TargetPointTag = AimData.TargetPointTag;

	Result.bHasHitResult = AimData.bHasAimHitResult;

	Result.HitResult = AimData.AimHitResult;

	Result.ImpactNormal = AimData.bHasAimHitResult ? AimData.AimHitResult.ImpactNormal.GetSafeNormal() : FVector::UpVector;

	AActor* TargetActor = Result.TargetActor.Get();

	if (IsValid(TargetActor))
	{
		if (Cast<APokemon_Parent>(TargetActor))
		{
			Result.TargetType = EPokemonCommandTargetType::EnemyPokemon;
			return Result;
		}

		Result.TargetType = EPokemonCommandTargetType::Environment;
		return Result;
	}

	if (!AimData.AimWorldLocation.IsNearlyZero())
	{
		Result.TargetType = EPokemonCommandTargetType::Location;
		return Result;
	}

	Result.TargetType = EPokemonCommandTargetType::None;
	

	return Result;
}

void UPokemonCommandComponent::SetCommandTargetFromAimData(const FAimData& AimData)
{
	SetCommandTarget(BuildCommandTargetFromAimData(AimData));
}

bool UPokemonCommandComponent::IsSupportedSequencedMove(const UPokemonMoveDataAsset* Move)
{
	const UPokemonDamageGameplayAbilities* CDO = Move && Move->Ability
		? Cast<UPokemonDamageGameplayAbilities>(Move->Ability->GetDefaultObject()) : nullptr;
	return CDO && CDO->MoveActionTag.MatchesTagExact(FPokemonGameplayTags::Get().PokemonMoves_MoveAction_Melee);
}

void UPokemonCommandComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	bCommandEndingPlay = true;
	CancelSequencedCommand(ActiveTrainerCommandId, TEXT("OwnerEndPlay"));
	Super::EndPlay(EndPlayReason);
}

UPokemonMoveDataAsset* UPokemonCommandComponent::ResolveMoveAtIndex(int32 MoveIndex, FName& OutReason) const
{
	const APokemon_Parent* Pokemon = GetOwnerPokemon();
	const UMovesetComponent* Moveset = Pokemon ? Pokemon->GetMovesetComponent() : nullptr;
	if (!Moveset || !Moveset->CurrentPokemonMoves.IsValidIndex(MoveIndex))
	{
		OutReason = TEXT("InvalidMoveIndex");
		return nullptr;
	}
	UPokemonMoveDataAsset* Move = Moveset->CurrentPokemonMoves[MoveIndex];
	OutReason = Move ? NAME_None : FName(TEXT("MoveUnavailable"));
	return Move;
}

FName UPokemonCommandComponent::ValidateMoveReservation(UPokemonMoveDataAsset* Move, FGuid ReplacedOwnedCommandId) const
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon || bCommandEndingPlay || IsSequencedExecutionEnding()) return TEXT("CommandUnavailable");
	if (!Pokemon->CanAct()) return TEXT("OwnerCannotAct");
	if (IsCommandActive() && !IsSequencedCommand(ReplacedOwnedCommandId)) return TEXT("CommandAlreadyActive");
	if (!Move) return TEXT("MoveUnavailable");
	const UMovesetComponent* Moveset = Pokemon->GetMovesetComponent();
	if (!Moveset || !Moveset->CanUseMove(Move)) return TEXT("MoveResourceUnavailable");
	UPokemonAbilitySystemComponent* ASC = Pokemon->GetPokemonASC();
	if (!ASC) return TEXT("AbilitySystemUnavailable");
	const FGameplayTag* Cooldown = FPokemonGameplayTags::Get().InputsToCooldowns.Find(Move->InputTag);
	if (Cooldown && ASC->HasMatchingGameplayTag(*Cooldown)) return TEXT("MoveOnCooldown");
	return NAME_None;
}

FName UPokemonCommandComponent::ValidateSequencedCommand(UPokemonMoveDataAsset* Move,
	const FPokemonCommandTarget& Target, FGuid ReplacedOwnedCommandId) const
{
	const APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon || !Pokemon->HasAuthority()) return TEXT("AuthorityRequired");
	if (!IsSupportedSequencedMove(Move)) return TEXT("UnsupportedAttackAction");
	if (!Target.IsValidTarget() || Target.TargetLocation.ContainsNaN() || Target.ImpactNormal.ContainsNaN()
		|| (!Target.HasTargetActor() && !Target.HasTargetLocation())) return TEXT("InvalidCommandTarget");
	if (!Move->InputTag.IsValid()) return TEXT("InvalidMoveInputTag");
	const auto Policy = Move->Ability->GetDefaultObject<UPokemonGameplayAbilities>()->GetInstancingPolicy();
	if (Policy != EGameplayAbilityInstancingPolicy::InstancedPerActor
		&& Policy != EGameplayAbilityInstancingPolicy::InstancedPerExecution) return TEXT("AttackAbilityMustBeInstanced");
	return ValidateMoveReservation(Move, ReplacedOwnedCommandId);
}

void UPokemonCommandComponent::InstallCommand(UPokemonMoveDataAsset* Move, const FPokemonCommandTarget& Target, FGuid IntentId)
{
	ActivePokemonMove = Move;
	CurrentCommandTarget = Target;
	ActiveTrainerCommandId = FGuid::NewGuid();
	ParentIntentId = IntentId;
	bSequenceManaged = IntentId.IsValid();
	bAttackJumpConsumed = false;
	AuthorizedTraversalMomentum = FVector::ZeroVector;
	bSequencedAttackConnected = false;
	bSequencedExecutionRequested = false;
	bSequencedCancellationRequested = false;
	SequencedCancellationReason = NAME_None;
	ReservedInputTag = Move->InputTag;
	SequencedAbilityHandle = FGameplayAbilitySpecHandle();
	SequencedAbility.Reset();
}

bool UPokemonCommandComponent::TryCallCommand(int32 MoveIndex)
{
	FName Reason;
	UPokemonMoveDataAsset* Move = ResolveMoveAtIndex(MoveIndex, Reason);
	if (Move) Reason = ValidateMoveReservation(Move);
	if (!Reason.IsNone())
	{
		UE_LOG(LogTemp, Display, TEXT("[PokemonCommand] Legacy rejected MoveIndex=%d Reason=%s"), MoveIndex, *Reason.ToString());
		return false;
	}
	InstallCommand(Move, CurrentCommandTarget, FGuid());
	// Legacy AI/trainer ranged path still publishes to BT, and does not activate GAS here.
	if (APokemonAIController* Controller = GetOwnerPokemon()->GetPokemonController())
	{
		Controller->SetBlackboardCurrentMove(ActivePokemonMove);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TryCallCommand warning: PokemonController is null."));
	}
	return true;
}

FPokemonTrainerCommandSubmission UPokemonCommandComponent::ReserveSequencedCommand(
	UPokemonMoveDataAsset* Move, const FPokemonCommandTarget& Target, FGuid IntentId)
{
	FPokemonTrainerCommandSubmission Submission;
	Submission.Reason = IntentId.IsValid() ? ValidateSequencedCommand(Move, Target) : FName(TEXT("InvalidParentIntent"));
	if (!Submission.Reason.IsNone()) return Submission;
	InstallCommand(Move, Target, IntentId);
	Submission.CommandId = ActiveTrainerCommandId;
	LogCommandEvent(TEXT("Reserved"), Submission.CommandId, IntentId);
	return Submission;
}

bool UPokemonCommandComponent::IsSequencedCommand(FGuid CommandId) const
{
	return bSequenceManaged && IsCommandActive() && CommandId.IsValid() && CommandId == ActiveTrainerCommandId;
}

bool UPokemonCommandComponent::IsSequencedExecutionEnding() const
{
	const UPokemonGameplayAbilities* Ability = SequencedAbility.Get();
	return bCommandCleanupInProgress || bSequencedCancellationRequested || SequencedAbilityEndDepth > 0
		|| (Ability && !Ability->CanEndSequencedExecutionImmediately());
}

bool UPokemonCommandComponent::ExecuteSequencedCommand(FGuid CommandId)
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon || !Pokemon->HasAuthority() || !IsSequencedCommand(CommandId) || bSequencedExecutionRequested) return false;
	bSequencedExecutionRequested = true;
	UPokemonAbilitySystemComponent* ASC = Pokemon->GetPokemonASC();
	// Match exactly the first tag match used by ActivateAbilityByTag, and verify the
	// reserved move/class/source before allowing that method to activate anything.
	if (ASC)
	{
		for (const FGameplayAbilitySpec& Spec : ASC->GetActivatableAbilities())
		{
			if (!Spec.GetDynamicSpecSourceTags().HasTagExact(ReservedInputTag)) continue;
			if (Spec.Ability && Spec.Ability->GetClass() == ActivePokemonMove->Ability
				&& Spec.SourceObject.Get() == ActivePokemonMove && !Spec.IsActive())
			{
				SequencedAbilityHandle = Spec.Handle;
			}
			break;
		}
	}
	if (!SequencedAbilityHandle.IsValid())
	{
		FinishCommand(CommandId, EPokemonAttackExecutionOutcome::ActivationFailed, TEXT("ReservedAbilityUnavailable"));
		return false;
	}
	LogCommandEvent(TEXT("Execute"), CommandId, ParentIntentId);
	const bool bActivated = ASC->ActivateAbilityByTag(ReservedInputTag);
	// Activation may synchronously end and start a different action/command.
	if (!bActivated && IsSequencedCommand(CommandId))
	{
		FinishCommand(CommandId, EPokemonAttackExecutionOutcome::ActivationFailed, TEXT("AbilityActivationRejected"));
	}
	return bActivated;
}

FGuid UPokemonCommandComponent::BindSequencedAbility(UPokemonGameplayAbilities* Ability, FGameplayAbilitySpecHandle Handle)
{
	if (!IsSequencedCommand(ActiveTrainerCommandId) || !bSequencedExecutionRequested
		|| Handle != SequencedAbilityHandle || !Ability || Ability->GetClass() != ActivePokemonMove->Ability)
	{
		return FGuid();
	}
	SequencedAbility = Ability;
	return ActiveTrainerCommandId;
}

void UPokemonCommandComponent::NotifySequencedContact(UPokemonGameplayAbilities* Ability, FGuid CommandId)
{
	if (!GetOwner()->HasAuthority() || !IsSequencedCommand(CommandId) || SequencedAbility.Get() != Ability
		|| !Ability || !Ability->IsActive() || bSequencedAttackConnected || bSequencedCancellationRequested) return;
	bSequencedAttackConnected = true;
	LogCommandEvent(TEXT("Contact"), CommandId, ParentIntentId, EPokemonAttackExecutionOutcome::Connected);
}

void UPokemonCommandComponent::NotifySequencedAbilityEnded(UPokemonGameplayAbilities* Ability, FGuid CommandId,
	bool bWasCancelled, FName ActivationFailure)
{
	// GAS marks InstancedPerExecution abilities as garbage before EndAbility
	// returns. Compare identity without dereferencing the retired weak object.
	if (!IsSequencedCommand(CommandId) || !Ability
		|| !SequencedAbility.HasSameIndexAndSerialNumber(TWeakObjectPtr<UPokemonGameplayAbilities>(Ability))) return;
	const EPokemonAttackExecutionOutcome Outcome = (bWasCancelled || bSequencedCancellationRequested) ? EPokemonAttackExecutionOutcome::Interrupted
		: !ActivationFailure.IsNone() ? EPokemonAttackExecutionOutcome::ActivationFailed
		: bSequencedAttackConnected ? EPokemonAttackExecutionOutcome::Connected : EPokemonAttackExecutionOutcome::Missed;
	FinishCommand(CommandId, Outcome, bSequencedCancellationRequested ? SequencedCancellationReason
		: bWasCancelled ? FName(TEXT("AbilityCancelled")) : ActivationFailure);
}

bool UPokemonCommandComponent::CancelSequencedCommand(FGuid OwnedCommandId, FName Reason)
{
	if (!GetOwner()->HasAuthority() || !IsSequencedCommand(OwnedCommandId) || bSequencedCancellationRequested) return false;
	bSequencedCancellationRequested = true;
	SequencedCancellationReason = Reason.IsNone() ? FName(TEXT("IntentCancelled")) : Reason;
	if (UPokemonGameplayAbilities* Ability = SequencedAbility.Get(); Ability && Ability->IsActive())
	{
		Ability->EndSequencedExecution(OwnedCommandId, true);
		// A scope lock may defer GAS/task cleanup. Keep replacement barred until
		// the identified native EndAbility callback finalizes this cancellation.
		if (!IsSequencedCommand(OwnedCommandId) || Ability->IsActive()) return true;
	}
	return FinishCommand(OwnedCommandId, EPokemonAttackExecutionOutcome::Interrupted, SequencedCancellationReason);
}

void UPokemonCommandComponent::AttackEnded()
{
	// GA_Base calls this without an identity from Blueprint OnEndAbility. The native
	// identified EndAbility resolves AFTER GAS has destroyed its old tasks.
	if (bCommandCleanupInProgress || SequencedAbilityEndDepth > 0) return;
	if (bSequenceManaged)
	{
		if (UPokemonGameplayAbilities* Ability = SequencedAbility.Get(); Ability && Ability->IsActive())
		{
			Ability->EndSequencedExecution(ActiveTrainerCommandId, false);
			return;
		}
		FinishCommand(ActiveTrainerCommandId, bSequencedAttackConnected
			? EPokemonAttackExecutionOutcome::Connected : EPokemonAttackExecutionOutcome::Missed, NAME_None);
		return;
	}
	FinishCommand(ActiveTrainerCommandId, EPokemonAttackExecutionOutcome::None, NAME_None);
}

bool UPokemonCommandComponent::FinishCommand(FGuid CommandId, EPokemonAttackExecutionOutcome Outcome, FName Reason)
{
	if (bCommandCleanupInProgress || !CommandId.IsValid() || CommandId != ActiveTrainerCommandId) return false;
	const bool bReportSequence = bSequenceManaged;
	const FGuid IntentId = ParentIntentId;
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	// No new reservation may enter while old GAS/BT cleanup can still call back.
	bCommandCleanupInProgress = true;
	ActiveTrainerCommandId.Invalidate();
	ParentIntentId.Invalidate();
	ActivePokemonMove = nullptr;
	bSequenceManaged = false;
	bSequencedExecutionRequested = false;
	bSequencedCancellationRequested = false;
	SequencedCancellationReason = NAME_None;
	bSequencedAttackConnected = false;
	bAttackJumpConsumed = false;
	AuthorizedTraversalMomentum = FVector::ZeroVector;
	ReservedInputTag = FGameplayTag();
	SequencedAbilityHandle = FGameplayAbilitySpecHandle();
	SequencedAbility.Reset();
	ClearCommandTarget();
	CleanupCommand(Pokemon);
	bCommandCleanupInProgress = false;
	if (bReportSequence) LogCommandEvent(TEXT("Resolved"), CommandId, IntentId, Outcome, Reason);
	if (Pokemon) Pokemon->OnAttackEnd.Broadcast();
	// Nothing mutates command ownership after either result bus; listeners may submit.
	if (bReportSequence) OnTrainerCommandResolved.Broadcast(CommandId, Outcome, Reason);
	return true;
}

void UPokemonCommandComponent::CleanupCommand(APokemon_Parent* Pokemon)
{
	if (!Pokemon) return;
	if (UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent()) Capsule->OnComponentHit.Clear();
	if (bIsCharging)
	{
		bIsCharging = false;
		GetWorld()->GetTimerManager().ClearTimer(ChargeTimer);
		if (UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement()) Movement->StopMovementImmediately();
		if (UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent()) Capsule->SetSimulatePhysics(false);
	}
	if (APokemonAIController* Controller = Pokemon->GetPokemonController()) Controller->SetBlackboardCurrentMove(nullptr);
	Pokemon->SetMovementSpeed(EMovementSpeed::EMS_Running);
	UE_LOG(LogTemp, Display, TEXT("[PokemonCommand] Attack ended | Pokemon=%s | Command target cleared"), *GetNameSafe(Pokemon));
}

void UPokemonCommandComponent::LogCommandEvent(const TCHAR* Event, FGuid CommandId, FGuid IntentId,
	EPokemonAttackExecutionOutcome Outcome, FName Reason) const
{
	if (CVarPokemonCommandDebug.GetValueOnGameThread() == 0) return;
	UE_LOG(LogTemp, Log, TEXT("[PokemonCommand] %s CommandId=%s ParentIntentId=%s Outcome=%s Reason=%s"),
		Event, *CommandId.ToString(), *IntentId.ToString(), *PokemonAttackOutcomeName(Outcome).ToString(), *Reason.ToString());
}

bool UPokemonCommandComponent::ResolveDodgeDirection(FGameplayTag DirectionTag, const FVector& ReferenceForward, FVector& OutWorldDirection) const
{
	OutWorldDirection = FVector::ZeroVector;

	FVector Forward = ReferenceForward;	
	Forward.Z = 0.f;

	if (!Forward.Normalize())
	{
		UE_LOG(LogTemp, Warning, TEXT("ResolveDodgeDirection failed: ReferenceForward is zero vector."));
		return false;
	}

	const FVector Right = FVector::CrossProduct(FVector::UpVector, Forward).GetSafeNormal();

	const FPokemonGameplayTags& Tags = FPokemonGameplayTags::Get();

	if (DirectionTag == Tags.InputTag_Dodge_Left)
	{
		OutWorldDirection = -Right;
	}
	else if (DirectionTag == Tags.InputTag_Dodge_Right)
	{
		OutWorldDirection = Right;
	}
	else if (DirectionTag == Tags.InputTag_Dodge_Forward)
	{
		OutWorldDirection = Forward;
	}
	else if (DirectionTag == Tags.InputTag_Dodge_Backward)
	{
		OutWorldDirection = -Forward;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ResolveDodgeDirection failed: Unrecognized dodge direction tag '%s'."), *DirectionTag.ToString());
		return false;
	}

	return OutWorldDirection.Normalize();
}

void UPokemonCommandComponent::Dodge(const FGameplayTag NewDodgeDirectionTag, const FVector& ReferenceForward)
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		return;
	}

	if (!Pokemon->CanAct())
	{
		UE_LOG(LogTemp, Display, TEXT("Dodge rejected: Pokemon cannot act. Pokemon=%s"), *GetNameSafe(Pokemon));

		return;
	}

	if (bIsDodging)
	{
		UE_LOG(LogTemp, Verbose, TEXT("Dodge ignored: already dodging."));
		return;
	}

	FVector SafeDirection;

	if (!ResolveDodgeDirection(NewDodgeDirectionTag, ReferenceForward, SafeDirection))
	{
		UE_LOG(LogTemp, Warning, TEXT("Dodge rejected: Failed To Resolve. Direction | Pokemon=%s | Tag=%s"), *GetNameSafe(Pokemon), *NewDodgeDirectionTag.ToString());
		return;
	}

	DrawDebugDirectionalArrow(
		GetWorld(),
		Pokemon->GetActorLocation()
		+ FVector(0.f, 0.f, 100.f),

		Pokemon->GetActorLocation()
		+ FVector(0.f, 0.f, 100.f)
		+ SafeDirection * 350.f,

		60.f,
		FColor::Cyan,
		false,
		1.5f,
		0,
		5.f
	);

	UE_LOG(LogTemp, Display, TEXT(
		"[PokemonDodge] Dodge requested | "
		"Pokemon=%s | "
		"Direction=(%.2f %.2f %.2f) | "
		"Tag=%s"
	),
		*GetNameSafe(Pokemon),
		SafeDirection.X,
		SafeDirection.Y,
		SafeDirection.Z,
		*NewDodgeDirectionTag.ToString()
	);

	UPokemonAbilitySystemComponent* PASC = Pokemon->GetPokemonASC();

	if (!PASC)
	{
		UE_LOG(LogTemp, Error, TEXT("Dodge failed: PokemonASC is null."));
		return;
	}

	// The ability reads this during ActivateAbility().
	DodgeDirection = SafeDirection;

	DodgeDirectionTag = NewDodgeDirectionTag;

	// Mark the requested state before TryActivateAbility() so that ability cleanup can safely unwind it if CommitAbility fails.
	bIsDodging = true;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardActionState(EMoveAction::EMA_Dodging);
	}

	const bool bActivated = PASC->ActivateAbilityByTag(FPokemonGameplayTags::Get().InputTag_Dodge);

	if(!bActivated)
	{
		UE_LOG(LogTemp, Warning, TEXT("Dodge ability activation failed."));
		bIsDodging = false;
		DodgeDirection = FVector::ZeroVector;
		DodgeDirectionTag = FGameplayTag::EmptyTag;

		if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
		{
			PokemonController->SetBlackboardActionState(EMoveAction::EMA_None);
		}
		return;
	}

	// Don't destroy a valid Move Here request unless the dodge actually activated.
	if (!bIsDodging)
	{
		// Ability started but immediately terminated during activation/commit.
		return;
	}

	if (UPokemonNavigationComponent* NavComp = Pokemon->GetNavigationComponent())
	{
		NavComp->SuspendNavigation();
	}

	UE_LOG(
		LogTemp,
		Display,
		TEXT(
			"[PokemonDodge] Command accepted | "
			"Pokemon=%s | "
			"Direction=(%.2f %.2f %.2f)"
		),
		*GetNameSafe(Pokemon),
		SafeDirection.X,
		SafeDirection.Y,
		SafeDirection.Z
	);
}

void UPokemonCommandComponent::EndDodge()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();

	if (!Pokemon)
	{
		return;
	}

	// Avoid broadcasting the end event multiple times if cancellation and task completion happen close together.
	if (!bIsDodging)
	{
		DodgeDirection = FVector::ZeroVector;
		return;
	}																

	bIsDodging = false;
	DodgeDirection = FVector::ZeroVector;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardActionState(EMoveAction::EMA_None);
	}

	// Temporary action is finished.
	// The old high-level navigation intent may continue
	if (UPokemonNavigationComponent* NavComp = Pokemon->GetNavigationComponent())
	{
		NavComp->ResumeNavigation();
	}

	UE_LOG(LogTemp, Display, TEXT("[PokemonDodge] Dodge ended | Pokemon=%s"), *GetNameSafe(Pokemon));
	Pokemon->OnDodgeEnd.Broadcast();
}

void UPokemonCommandComponent::SelectRandomMove()
{
	const int32 RandomIndex = FMath::RandRange(0, 3);
	TryCallCommand(RandomIndex);
}

void UPokemonCommandComponent::ClearActiveMove()
{
	if (bSequenceManaged)
	{
		CancelSequencedCommand(ActiveTrainerCommandId, TEXT("CommandCleared"));
		return;
	}
	ActivePokemonMove = nullptr;
	ActiveTrainerCommandId.Invalidate();
	AuthorizedTraversalMomentum = FVector::ZeroVector;
}

bool UPokemonCommandComponent::HasConsumedAttackJump(FGuid CommandId) const
{
	return CommandId.IsValid() && CommandId == ActiveTrainerCommandId && bAttackJumpConsumed;
}

void UPokemonCommandComponent::ConsumeAttackJump(FGuid CommandId)
{
	if (CommandId.IsValid() && CommandId == ActiveTrainerCommandId)
	{
		bAttackJumpConsumed = true;
	}
}

FVector UPokemonCommandComponent::GetAuthorizedTraversalMomentum(FGuid CommandId) const
{
	return IsCommandActive() && CommandId.IsValid() && CommandId == ActiveTrainerCommandId
		? AuthorizedTraversalMomentum : FVector::ZeroVector;
}

bool UPokemonCommandComponent::AuthorizeTraversalMomentum(FGuid CommandId, FVector ExistingMoveMomentum)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !IsCommandActive()
		|| !CommandId.IsValid() || CommandId != ActiveTrainerCommandId || ExistingMoveMomentum.ContainsNaN())
	{
		return false;
	}
	ExistingMoveMomentum.Z = 0.f;
	AuthorizedTraversalMomentum = ExistingMoveMomentum;
	return true;
}
