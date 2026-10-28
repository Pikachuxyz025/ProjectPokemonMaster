// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "AbilitySystemComponent.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "ActorComponents/PokemonAirborneRecoveryTelemetryComponent.h"
#include "DataAssets/PokemonDataAsset.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "DataAssets/PokemonMoveAnimationSet.h"
#include "ActorComponents/PokemonCombatStateComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "Animation/AnimMontage.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"
#include "Characters/Pokemon_Parent.h"

bool UPokemonGameplayAbilities::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	if (!ActorInfo || !ActorInfo->AvatarActor.IsValid())
	{
		return false;
	}

	const APokemon_Parent* AvatarPokemon = Cast<APokemon_Parent>(ActorInfo->AvatarActor.Get());
	if (!AvatarPokemon)
	{
		return true;
	}

	if (!AvatarPokemon->CanAct())
	{
		UE_LOG(LogTemp, Display,
			TEXT("CanActivateAbility rejected: Pokemon cannot act. Pokemon=%s Ability=%s"),
			*GetNameSafe(AvatarPokemon),
			*GetNameSafe(GetClass()));

		return false;
	}

	return true;
}

void UPokemonGameplayAbilities::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	SequencedCommandId.Invalidate();

	SequencedActivationFailure = NAME_None;

	if (APokemon_Parent* Pokemon = ActorInfo ? Cast<APokemon_Parent>(ActorInfo->AvatarActor.Get()) : nullptr)
	{
		if (UPokemonCommandComponent* Command = Pokemon->FindComponentByClass<UPokemonCommandComponent>())
		{
			SequencedCommandId = Command->BindSequencedAbility(this, Handle);
		}
	}
	const FGuid ActivatingCommandId = SequencedCommandId;

	bPresentationMontageFinished = false;

	AuthoritativeCombatOutcome = EAttackOutcome::Unresolved;

	bAuthoritativeCombatOutcomePresented = false;
	bAuthoritativeCombatOutcomeDispatching = false;
	bAuthoritativeCombatOutcomeRetiring = false;
	bAuthoritativeContactEvaluationClosed = false;

	if (bUseAuthoritativeCombatOutcomes
		&& (!bEnablePresentationBranchTest || !ActivatingCommandId.IsValid()))
	{
		RecordSequencedActivationFailure(TEXT("AuthoritativeOutcomeConfigurationInvalid"));

		EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
		return;
	}

	// Run the Blueprint Event ActivateAbility first.
	// This gives the Blueprint a chance to CommitPokemonMove().
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	// CommitPokemonMove may have failed and the Blueprint may
	// have called EndAbility().
	if (!IsActive() || (ActivatingCommandId.IsValid() && SequencedCommandId != ActivatingCommandId))
	{
		UE_LOG(LogTemp, Display, TEXT("[PokemonGameplayAbilities] Activation ended during Blueprint activation. Ability=%s"), *GetNameSafe(this));

		return;
	}

	ResetAbilityWindowRuntimeState();

	ApplyAbilityCombatStateLock();

	if (bListenForAbilityWindowEvents)
	{
		ListenForAbilityWindowEvents();
	}

	if (bListenForAbilityAnimEvent)
	{
		ListenForAbilityAnimEvent();
	}

	if (bPlayMontageOnActivate)
	{
		PlayAbilityMontage();
	}

	if (IsActive() && SequencedCommandId == ActivatingCommandId)
	{
		TryPresentAuthoritativeCombatOutcome();
	}
}

UAbilityTask_WaitGameplayEvent* UPokemonGameplayAbilities::ListenForAbilityAnimEvent()
{
	if (!AbilityAnimEventTag.IsValid())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] Cannot listen for anim event. Ability=%s EventTag=None"),
			*GetNameSafe(this));

		return nullptr;
	}

	UAbilityTask_WaitGameplayEvent* EventTask =
		UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
			this,
			AbilityAnimEventTag,
			nullptr,
			bOnlyTriggerAnimEventOnce,
			true
		);

	if (!EventTask)
	{
		return nullptr;
	}

	EventTask->EventReceived.AddDynamic(
		this,
		&UPokemonGameplayAbilities::HandleAbilityAnimEventReceived
	);

	EventTask->ReadyForActivation();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Listening for ability anim event. Ability=%s EventTag=%s"),
		*GetNameSafe(this),
		*AbilityAnimEventTag.ToString());

	return EventTask;
}

void UPokemonGameplayAbilities::OnAbilityWindowBegin_Implementation(FGameplayTag AbilityWindowTag, FGameplayEventData Payload)
{
	// Base ability does nothing by default.
	// Child abilities can override this in Blueprint or C++.
}

void UPokemonGameplayAbilities::OnAbilityWindowEnd_Implementation(FGameplayTag AbilityWindowTag, FGameplayEventData Payload)
{
	// Base ability does nothing by default.
	// Child abilities can override this in Blueprint or C++.
}

void UPokemonGameplayAbilities::HandleAbilityAnimEventReceived(FGameplayEventData Payload)
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Received ability anim event. Ability=%s EventTag=%s"),
		*GetNameSafe(this),
		*Payload.EventTag.ToString());

	OnAbilityAnimEventReceived(Payload);
}

void UPokemonGameplayAbilities::PreviewConfirmedOutcome(EAttackOutcome Outcome)
{
	if (bUseAuthoritativeCombatOutcomes)
	{
		return;
	}

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] PreviewConfirmedOutcome called. Ability=%s Outcome=%d"),
		*GetNameSafe(this),
		static_cast<int32>(Outcome));

	if (!bEnablePresentationBranchTest || !IsActive())
	{
		return;
	}

	if (Outcome == EAttackOutcome::Unresolved)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] PreviewConfirmedOutcome: Unresolved outcome. No transition will be applied. Ability=%s Outcome=%d"),
			*GetNameSafe(this),
			static_cast<int32>(Outcome));
		return;
	}

	SetPresentationPhaseBasedOnOutcome(Outcome);
}

void UPokemonGameplayAbilities::OnAbilityAnimEventReceived_Implementation(FGameplayEventData Payload)
{
	// Base ability does nothing by default.
	// Child abilities can override this in C++ or Blueprint.
}

FSectionTransition UPokemonGameplayAbilities::DetermineNextPresentationAction(const EAttackPresentationPhase CurrentPhase, const EAttackOutcome InputedOutcome)
{
	FSectionTransition Transition;

	switch (CurrentPhase)
	{
	case EAttackPresentationPhase::Strike:

		if (InputedOutcome == EAttackOutcome::Hit)
		{
			Transition.NextSectionName = FName("HitContact");
			Transition.TransitionType = ESectionTransitionType::WaitForEndOfSection;
		}
		else if (InputedOutcome == EAttackOutcome::Miss)
		{
			Transition.NextSectionName = FName("WhiffFollowThrough");
			Transition.TransitionType = ESectionTransitionType::WaitForEndOfSection;
		}
		else if (InputedOutcome == EAttackOutcome::Unresolved)
		{
			UE_LOG(LogTemp, Display,
				TEXT("[PokemonGameplayAbilities] DetermineNextPresentationAction: Unresolved outcome during Strike phase. Leave to default transition. Next will automatically pending. Ability=%s Outcome=%d"),
				*GetNameSafe(this),
				static_cast<int32>(InputedOutcome));
		}
		break;

	case EAttackPresentationPhase::Pending:

		if (InputedOutcome == EAttackOutcome::Hit)
		{
			Transition.NextSectionName = FName("HitContact");
			Transition.TransitionType = ESectionTransitionType::JumpImmediately;
		}
		else if (InputedOutcome == EAttackOutcome::Miss)
		{
			Transition.NextSectionName = FName("WhiffFollowThrough");
			Transition.TransitionType = ESectionTransitionType::JumpImmediately;
		}
		else if (InputedOutcome == EAttackOutcome::Unresolved)
		{
			UE_LOG(LogTemp, Display,
				TEXT("[PokemonGameplayAbilities] DetermineNextPresentationAction: Unresolved outcome during Pending phase. Return none. Remain in Pending. Ability=%s Outcome=%d"),
				*GetNameSafe(this),
				static_cast<int32>(InputedOutcome));
		}
		
		break;
	default:
		break;
	}

	return Transition;
}

bool UPokemonGameplayAbilities::SetPresentationPhaseBasedOnOutcome(const EAttackOutcome AttackOutcome)
{
	if (AttackOutcome == EAttackOutcome::Unresolved)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: Unresolved outcome. No transition will be applied. Ability=%s Outcome=%d"),
			*GetNameSafe(this),
			static_cast<int32>(AttackOutcome));
		return false;
	}

	const FGameplayAbilityActorInfo* ActorInfo = GetCurrentActorInfo();

	if (!ActorInfo)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: No ActorInfo found. Ability=%s"),
			*GetNameSafe(this));
		return false;
	}

	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();

	if (!ASC)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: No ASC found. Ability=%s"),
			*GetNameSafe(this));
		return false;
	}

	UAnimMontage* PresentationMontage = ResolveAbilityMontage();

	if (!PresentationMontage || ASC->GetCurrentMontage() != PresentationMontage)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: No valid montage found or current "
				"montage is not the presentation montage.Ability = % s Montage = % s"),
			*GetNameSafe(this),
			*GetNameSafe(PresentationMontage));
		return false;
	}

	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
	UGameplayAbility* AnimatingAbility = ASC->GetAnimatingAbility();

	if (!AnimInstance || AnimatingAbility != this)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: No anim instance found or animating ability "
				"is not this ability.Ability = % s"),
			*GetNameSafe(this));
		return false;
	}

	const FName CurrentSection = AnimInstance->Montage_GetCurrentSection(PresentationMontage);

	const bool bIsSectionGoodForTransition = (CurrentSection == FName(TEXT("Strike")) || CurrentSection == FName(TEXT("Pending")));
	
	if (CurrentSection == NAME_None || !bIsSectionGoodForTransition)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: Current section is not valid for transition. Ability=%s CurrentSection=%s"),
			*GetNameSafe(this),
			*CurrentSection.ToString());
		return false;
	}

	FSectionTransition Transition = DetermineNextPresentationAction(
		CurrentSection == FName(TEXT("Strike")) ? EAttackPresentationPhase::Strike : EAttackPresentationPhase::Pending,
		AttackOutcome
	);

	if (Transition.NextSectionName == NAME_None || Transition.TransitionType == ESectionTransitionType::None)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: No valid transition determined. Ability=%s CurrentSection=%s Outcome=%d"),
			*GetNameSafe(this),
			*CurrentSection.ToString(),
			static_cast<int32>(AttackOutcome));
		return false;
	}

	int32 NextSectionIndex = PresentationMontage->GetSectionIndex(Transition.NextSectionName);

	if (NextSectionIndex == INDEX_NONE)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: Next section name not found in montage. Ability=%s NextSection=%s"),
			*GetNameSafe(this),
			*Transition.NextSectionName.ToString());
		return false;
	}

	bool bIsMontagePlaying = AnimInstance->Montage_IsPlaying(PresentationMontage);
	if (!bIsMontagePlaying)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: Montage is not playing. Ability=%s Montage=%s"),
			*GetNameSafe(this),
			*GetNameSafe(PresentationMontage));
		return false;
	}

	switch (Transition.TransitionType)
	{
	case ESectionTransitionType::JumpImmediately:
		ASC->CurrentMontageJumpToSection(Transition.NextSectionName);
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: Jumping to section immediately. Ability=%s CurrentSection=%s NextSection=%s"),
			*GetNameSafe(this),
			*CurrentSection.ToString(),
			*Transition.NextSectionName.ToString());
		return true;

	case ESectionTransitionType::WaitForEndOfSection:

		ASC->CurrentMontageSetNextSectionName(CurrentSection, Transition.NextSectionName);
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonGameplayAbilities] SetPresentationPhaseBasedOnOutcome: Will wait for end of section to transition. Ability=%s CurrentSection=%s NextSection=%s"),
			*GetNameSafe(this),
			*CurrentSection.ToString(),
			*Transition.NextSectionName.ToString());
		return true;

	default:
		return false;
	}
}

void UPokemonGameplayAbilities::ListenForAbilityWindowEvents()
{ 
	const FPokemonGameplayTags& PokemonTags = FPokemonGameplayTags::Get();

	UAbilityTask_WaitGameplayEvent* BeginTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
		this,
		PokemonTags.Event_Ability_Window_Begin,
		nullptr,
		false,
		true
	);

	if (BeginTask)
	{
		BeginTask->EventReceived.AddDynamic(
			this,
			&UPokemonGameplayAbilities::HandleAbilityWindowBeginEvent
		);

		BeginTask->ReadyForActivation();

		UE_LOG(LogTemp, Display,
			TEXT("[PokemonGameplayAbilities] Listening for ability window begin events. Ability=%s EventTag=%s"),
			*GetNameSafe(this),
			*PokemonTags.Event_Ability_Window_Begin.ToString());
	}

	UAbilityTask_WaitGameplayEvent* EndTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
		this,
		PokemonTags.Event_Ability_Window_End,
		nullptr,
		false,
		true
	);

	if (EndTask)
	{
		EndTask->EventReceived.AddDynamic(
			this,
			&UPokemonGameplayAbilities::HandleAbilityWindowEndEvent
		);

		EndTask->ReadyForActivation();
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonGameplayAbilities] Listening for ability window end events. Ability=%s EventTag=%s"),
			*GetNameSafe(this),
			*PokemonTags.Event_Ability_Window_End.ToString());
	}
}

bool UPokemonGameplayAbilities::HasActiveAbilityWindow(FGameplayTag AbilityWindowTag) const
{
	return AbilityWindowTag.IsValid() && ActiveAbilityWindows.HasTagExact(AbilityWindowTag);
}

UAnimMontage* UPokemonGameplayAbilities::ResolveAbilityMontage() const
{
	if (bUseAbilityMontageOverride && AbilityMontage)
	{
		return AbilityMontage;
	}

	const UPokemonMoveDataAsset* Move = Cast<UPokemonMoveDataAsset>(GetSourceObject(
		GetCurrentAbilitySpecHandle(), GetCurrentActorInfo()));

	const APokemon_Parent* Pokemon = GetAvatarPokemon();

	const UPokemonDataAsset* PokemonData = Pokemon ? Pokemon->PokemonDataAsset : nullptr;

	const UPokemonMoveAnimationSet* AnimationSet = PokemonData ? PokemonData->MoveAnimationSet.Get() : nullptr;

	if (AnimationSet && Move)
	{
		if (UAnimMontage* SpeciesMontage = AnimationSet->FindMontageForMove(Move))
		{
			return SpeciesMontage;
		}
	}

	return AbilityMontage;
}

UAbilityTask_PlayMontageAndWait* UPokemonGameplayAbilities::PlayAbilityMontage()
{
	UAnimMontage* SelectedMontage = ResolveAbilityMontage();

	if (!SelectedMontage)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] No montage resolved. Ability=%s"),
			*GetNameSafe(this));

		if (bEnablePresentationBranchTest && IsActive())
		{
			RecordSequencedActivationFailure(TEXT("PresentationMontageUnavailable"));

			EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
		}

		return nullptr;
	}

	UAbilityTask_PlayMontageAndWait* MontageTask =
		UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(
			this,
			NAME_None,
			SelectedMontage,
			MontagePlayRate,
			MontageStartSection,
			true,									// StopWhenAbilityEnds
			1.0f,									// Root-Motion translation scale
			0.0f,                                   // Start time.
			bEnablePresentationBranchTest		    // Interrupt after blend-out.
		);

	if (!MontageTask)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] Failed to create montage task. Ability=%s Montage=%s"),
			*GetNameSafe(this),
			*GetNameSafe(SelectedMontage));

		if (bEnablePresentationBranchTest && IsActive())
		{
			RecordSequencedActivationFailure(TEXT("PresentationMontageTaskUnavailable"));

			EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
		}

		return nullptr;
	}

	MontageTask->OnCompleted.AddDynamic(
		this, &UPokemonGameplayAbilities::OnAbilityMontageCompleted);

	MontageTask->OnBlendOut.AddDynamic(
		this, &UPokemonGameplayAbilities::OnAbilityMontageBlendOut);

	MontageTask->OnInterrupted.AddDynamic(
		this, &UPokemonGameplayAbilities::OnAbilityMontageInterrupted);

	MontageTask->OnCancelled.AddDynamic(
		this, &UPokemonGameplayAbilities::OnAbilityMontageCancelled);

	MontageTask->ReadyForActivation();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Playing montage. Ability=%s Montage=%s Source=%s PlayRate=%.2f StartSection=%s"),
		*GetNameSafe(this),
		*GetNameSafe(SelectedMontage),
		SelectedMontage == AbilityMontage
		? TEXT("AbilityDefault")
		: TEXT("SpeciesMoveAnimationSet"),
		MontagePlayRate,
		*MontageStartSection.ToString());

	return MontageTask;
}

void UPokemonGameplayAbilities::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (bEnablePresentationBranchTest)
	{
		UAnimMontage* ExpectedMontage = ResolveAbilityMontage();

		UAnimInstance* AnimInstance =
			ActorInfo ? ActorInfo->GetAnimInstance() : nullptr;

		const FName CurrentSection =
			(AnimInstance && ExpectedMontage)
			? AnimInstance->Montage_GetCurrentSection(ExpectedMontage)
			: NAME_None;

		const bool bMontagePlaying =
			AnimInstance && ExpectedMontage &&
			AnimInstance->Montage_IsPlaying(ExpectedMontage);

		UE_LOG(LogTemp, Warning,
			TEXT("[IT21Lifecycle] EndAbility | Ability=%s "
				"Cancelled=%d Section=%s MontagePlaying=%d"),
			*GetNameSafe(this),
			bWasCancelled ? 1 : 0,
			*CurrentSection.ToString(),
			bMontagePlaying ? 1 : 0);
	}

	const FGuid EndingCommandId = SequencedCommandId;
	TWeakObjectPtr<UPokemonCommandComponent> Command;

	if (EndingCommandId.IsValid())
	{
		if (bSequencedEndInProgress || !IsEndAbilityValid(Handle, ActorInfo)) return;

		bAuthoritativeCombatOutcomeRetiring = true;

		if (ScopeLockCount > 0)
		{
			// Preserve the identified override when GAS defers an end until a scope unlocks.
			WaitingToExecute.Add(FPostLockDelegate::CreateUObject(this, &ThisClass::EndAbility,
				Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled));
			return;
		}
		if (APokemon_Parent* Pokemon = GetAvatarPokemon()) Command = Pokemon->FindComponentByClass<UPokemonCommandComponent>();
		bSequencedEndInProgress = true;
		if (Command.IsValid()) ++Command->SequencedAbilityEndDepth;
	}

	ClearAbilityCombatStateLock(bWasCancelled);

	ResetAbilityWindowRuntimeState();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	if (EndingCommandId.IsValid())
	{
		bSequencedEndInProgress = false;
		const FName Failure = SequencedActivationFailure;
		if (Command.IsValid())
		{
			--Command->SequencedAbilityEndDepth;
			// GAS has now retired the ability and destroyed AT_CombatApproach. No
			// old ability/task state is mutated after the command's terminal callback.
			Command->NotifySequencedAbilityEnded(this, EndingCommandId, bWasCancelled, Failure);
		}
	}
}

void UPokemonGameplayAbilities::EndSequencedExecution(FGuid OwnedCommandId, bool bWasCancelled)
{
	if (!OwnedCommandId.IsValid() || OwnedCommandId != SequencedCommandId || !IsActive()) return;
	if (bWasCancelled)
	{
		CancelAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true);
		// Explicit owner retirement also ends an ability that opted out of GAS cancellation.
		if (!IsActive()) return;
	}
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, bWasCancelled);
}

void UPokemonGameplayAbilities::RecordSequencedActivationFailure(FName Reason)
{
	if (SequencedCommandId.IsValid()) SequencedActivationFailure = Reason;
}

bool UPokemonGameplayAbilities::IsAuthoritativeOutcomeContextValid(FGuid ExpectedCommandId) const
{
	UE_LOG(LogTemp, Warning,
		TEXT("[IT50Context] [IsAuthoritativeOutcomeContextValid] Ability=%s Expected=%s Current=%s "
			"Active=%d AuthorityMode=%d BranchTest=%d"),
		*GetNameSafe(this),
		*ExpectedCommandId.ToString(),
		*GetSequencedCommandId().ToString(),
		IsActive() ? 1 : 0,
		bUseAuthoritativeCombatOutcomes ? 1 : 0,
		bEnablePresentationBranchTest ? 1 : 0);

	if (!bUseAuthoritativeCombatOutcomes
		|| !bEnablePresentationBranchTest
		|| !IsActive() || bAuthoritativeCombatOutcomeRetiring
		|| !ExpectedCommandId.IsValid() || ExpectedCommandId != GetSequencedCommandId())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[IT50Context] Invalid context for authoritative outcome. Ability=%s Expected=%s Current=%s "
				"Active=%d AuthorityMode=%d BranchTest=%d"),
			*GetNameSafe(this),
			*ExpectedCommandId.ToString(),
			*GetSequencedCommandId().ToString(),
			IsActive() ? 1 : 0,
			bUseAuthoritativeCombatOutcomes ? 1 : 0,
			bEnablePresentationBranchTest ? 1 : 0);
		return false;
	}

	APokemon_Parent* Pokemon = GetAvatarPokemon();
	UPokemonCommandComponent* Command = Pokemon ? Pokemon->GetCommandComponent() : nullptr;

	return Pokemon && Pokemon->HasAuthority()
		&& Command && Command->OwnsActiveSequencedAbility(this, ExpectedCommandId);
}

void UPokemonGameplayAbilities::AcceptAuthoritativeCombatOutcome(FGuid ExpectedCommandId, EAttackOutcome Outcome)
{
	if(!IsAuthoritativeOutcomeContextValid(ExpectedCommandId)
		|| (Outcome != EAttackOutcome::Hit && Outcome != EAttackOutcome::Miss))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[IT50Outcome] [AcceptAuthoritativeCombatOutcome] Invalid context for authoritative outcome. Ability=%s Expected=%s Current=%s "
				"Active=%d AuthorityMode=%d BranchTest=%d Outcome=%d"),
			*GetNameSafe(this),
			*ExpectedCommandId.ToString(),
			*GetSequencedCommandId().ToString(),
			IsActive() ? 1 : 0,
			bUseAuthoritativeCombatOutcomes ? 1 : 0,
			bEnablePresentationBranchTest ? 1 : 0,
			static_cast<int32>(Outcome));
		return;
	}

	if (AuthoritativeCombatOutcome != EAttackOutcome::Unresolved)
	{
		if (AuthoritativeCombatOutcome != Outcome)
		{
			UE_LOG(LogTemp, Warning,
				TEXT("[IT50Outcome] Conflicting outcome ignored. "
					"Ability=%s CommandId=%s Existing=%d Incoming=%d"),
				*GetNameSafe(this),
				*ExpectedCommandId.ToString(),
				static_cast<int32>(AuthoritativeCombatOutcome),
				static_cast<int32>(Outcome));
		}
		return;
	}

	AuthoritativeCombatOutcome = Outcome;

	if (APokemon_Parent* Pokemon = GetAvatarPokemon())
	{
		if (UPokemonAirborneRecoveryTelemetryComponent* Telemetry =
			Pokemon->AirborneRecoveryTelemetryComponent.Get())
		{
			Telemetry->NotifyCombatOutcome(
				ExpectedCommandId,
				Outcome == EAttackOutcome::Hit);
		}
	}

	UE_LOG(LogTemp, Display,
		TEXT("[IT50Outcome] [AcceptAuthoritativeCombatOutcome] Confirmed %s. Ability=%s CommandId=%s"),
		Outcome == EAttackOutcome::Hit ? TEXT("Hit") : TEXT("Miss"),
		*GetNameSafe(this),
		*ExpectedCommandId.ToString());

	TryPresentAuthoritativeCombatOutcome();
}


void UPokemonGameplayAbilities::TryPresentAuthoritativeCombatOutcome()
{
	const FGuid ExpectedCommandId = GetSequencedCommandId();

	if (!IsAuthoritativeOutcomeContextValid(ExpectedCommandId)
		|| AuthoritativeCombatOutcome == EAttackOutcome::Unresolved
		|| bAuthoritativeCombatOutcomeDispatching
		|| bAuthoritativeCombatOutcomePresented
		)
	{
		return;
	}
	
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC || AuthoritativeCombatOutcome == EAttackOutcome::Unresolved)
	{
		return;
	}
	
	// Blueprint activation can resolve an outcome before native activation
	// has started the montage. Retain that outcome for the activation retry.
	if (!ASC || ASC->GetAnimatingAbility() != this
		|| ASC->GetCurrentMontage() != ResolveAbilityMontage())
	{
		return;
	}

	bAuthoritativeCombatOutcomeDispatching = true;

	const bool bPresented = SetPresentationPhaseBasedOnOutcome(AuthoritativeCombatOutcome);

	bAuthoritativeCombatOutcomeDispatching = false;
	bAuthoritativeCombatOutcomePresented = bPresented;

	if (bPresented)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[IT50Outcome] Presented. Ability=%s CommandId=%s"),
			*GetNameSafe(this),
			*ExpectedCommandId.ToString());
	}
}

void UPokemonGameplayAbilities::TryFinishPresentationDrivenExecution()
{
	if (!bEnablePresentationBranchTest || !IsActive()) 
	{
		return;
	}

	if (!bPresentationMontageFinished)
	{
		return;

	}

	if (HasPendingPresentationGameplayRecovery())
	{
		UE_LOG(LogTemp, Display,
			TEXT("[IT21Lifecycle] Waiting for gameplay recovery. Ability=%s"),
			*GetNameSafe(this));
		return;
	}

	UE_LOG(LogTemp, Display,
		TEXT("[IT21Lifecycle] Presentation and gameplay ready. Ending ability=%s"),
		*GetNameSafe(this));


	EndAbilityFromMontage(false);
}

void UPokemonGameplayAbilities::ApplyAbilityCombatStateLock()
{
	if (!bUseAbilityCombatStateLock)
	{
		return;
	}

	APokemon_Parent* AvatarPokemon = GetAvatarPokemon();
	if (!AvatarPokemon || !AvatarPokemon->HasAuthority())
	{
		return;
	}

	UPokemonCombatStateComponent* CombatStateComponent = AvatarPokemon->GetCombatStateComponent();
	if (!CombatStateComponent)
	{
		return;
	}

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Applying combat state lock. Ability=%s Duration=%.2f"),
		*GetNameSafe(this),
		GetAbilityCombatLockDuration());

	CombatStateComponent->SetCombatState(CombatTags.Combat_State_Attacking, GetAbilityCombatLockDuration(), ECombatStateApplyPolicy::Override);
}

void UPokemonGameplayAbilities::ClearAbilityCombatStateLock(bool bWasCancelled)
{
	if (!bUseAbilityCombatStateLock)
	{
		return;
	}

	APokemon_Parent* AvatarPokemon = GetAvatarPokemon();
	if (!AvatarPokemon || !AvatarPokemon->HasAuthority())
	{
		return;
	}

	UPokemonCombatStateComponent* CombatStateComponent = AvatarPokemon->GetCombatStateComponent();
	if (!CombatStateComponent)
	{
		return;
	}

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	CombatStateComponent->ClearCombatState(CombatTags.Combat_State_Attacking);

	// If the montage has an authored Ability.Window.Recovery window :
	// do not apply extra recovery at montage end.

	// If the montage has no authored recovery window :
	// use MoveTimingSequence.RecoveryDuration as fallback.

	const bool bShouldSuppressEndRecovery =
		bSuppressEndRecoveryWhenRecoveryWindowAuthored &&
		bSawRecoveryWindowThisActivation;

	if (!bWasCancelled &&
		bApplyRecoveryStateOnEnd &&
		MoveTimingSequence.RecoveryDuration > 0.f &&
		!bShouldSuppressEndRecovery)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonGameplayAbilities] Applying fallback recovery state. Ability=%s RecoveryDuration=%.2f"),
			*GetNameSafe(this),
			MoveTimingSequence.RecoveryDuration);

		CombatStateComponent->SetCombatState(
			CombatTags.Combat_State_Recovering,
			MoveTimingSequence.RecoveryDuration,
			ECombatStateApplyPolicy::ExtendIfLonger
		);
	}
	else if (bShouldSuppressEndRecovery)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonGameplayAbilities] Skipping fallback recovery. Authored recovery window was detected. Ability=%s"),
			*GetNameSafe(this));
	}
}

float UPokemonGameplayAbilities::GetAbilityCombatLockDuration() const
{
	float Duration =
		MoveTimingSequence.AnticipationDuration +
		MoveTimingSequence.ActiveDuration;

	if (const UAnimMontage* SelectedMontage = ResolveAbilityMontage())
	{
		const float SafePlayRate = FMath::Max(MontagePlayRate, 0.01f);
		Duration = FMath::Max(Duration, SelectedMontage->GetPlayLength() / SafePlayRate);
	}

	return FMath::Max(Duration, MinimumAttackStateDuration);
}

APokemon_Parent* UPokemonGameplayAbilities::GetAvatarPokemon() const
{
	return Cast<APokemon_Parent>(GetAvatarActorFromActorInfo());
}

void UPokemonGameplayAbilities::OnAbilityMontageCompleted()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage completed. Ability=%s"),
		*GetNameSafe(this));

	if (bEnablePresentationBranchTest)
	{
		bPresentationMontageFinished = true;
		TryFinishPresentationDrivenExecution();
		return;
	}

	EndAbilityFromMontage(false);
}

void UPokemonGameplayAbilities::OnAbilityMontageBlendOut()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage blend out. Ability=%s"),
		*GetNameSafe(this));
}

void UPokemonGameplayAbilities::OnAbilityMontageInterrupted()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage interrupted. Ability=%s"),
		*GetNameSafe(this));

	EndAbilityFromMontage(true);
}

void UPokemonGameplayAbilities::OnAbilityMontageCancelled()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage cancelled. Ability=%s"),
		*GetNameSafe(this));

	EndAbilityFromMontage(true);
}

void UPokemonGameplayAbilities::EndAbilityFromMontage(bool bWasCancelled)
{
	if (!bEndAbilityWhenMontageEnds)
	{
		return;
	}

	if (!IsActive())
	{
		return;
	}

	EndAbility(
		CurrentSpecHandle,
		CurrentActorInfo,
		CurrentActivationInfo,
		true,
		bWasCancelled
	);
}

void UPokemonGameplayAbilities::HandleAbilityWindowBeginEvent(FGameplayEventData Payload)
{
	FGameplayTag AbilityWindowTag;

	if (!TryGetAbilityWindowTagFromPayload(Payload, AbilityWindowTag))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] Received ability window begin event but could not extract ability window tag. Ability=%s EventTag=%s"),
			*GetNameSafe(this),
			*Payload.EventTag.ToString());
		return;
	}

	ActiveAbilityWindows.AddTag(AbilityWindowTag);

	const FPokemonGameplayTags& PokemonTags = FPokemonGameplayTags::Get();

	if (AbilityWindowTag.MatchesTagExact(PokemonTags.Ability_Window_Recovery))
	{
		bSawRecoveryWindowThisActivation = true;
	}

	ApplyAbilityWindowCombatState(
		AbilityWindowTag,
		Payload.EventMagnitude
	);

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Ability window begin. Ability=%s WindowTag=%s Duration=%.2f ActiveWindows=%s"),
		*GetNameSafe(this),
		*AbilityWindowTag.ToString(),
		Payload.EventMagnitude,
		*ActiveAbilityWindows.ToStringSimple());

	OnAbilityWindowBegin(AbilityWindowTag, Payload);
}

void UPokemonGameplayAbilities::HandleAbilityWindowEndEvent(FGameplayEventData Payload)
{
	FGameplayTag AbilityWindowTag;

	if (!TryGetAbilityWindowTagFromPayload(Payload, AbilityWindowTag))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] Received ability window end event but could not extract ability window tag. Ability=%s EventTag=%s"),
			*GetNameSafe(this),
			*Payload.EventTag.ToString());
		return;
	}

	ActiveAbilityWindows.RemoveTag(AbilityWindowTag);
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Ability window end. Ability=%s WindowTag=%s ActiveWindows=%s"),
		*GetNameSafe(this),
		*AbilityWindowTag.ToString(),
		*ActiveAbilityWindows.ToStringSimple());

	OnAbilityWindowEnd(AbilityWindowTag, Payload);
}

bool UPokemonGameplayAbilities::TryGetAbilityWindowTagFromPayload(const FGameplayEventData& Payload, FGameplayTag& OutAbilityWindowTag) const
{
	const FPokemonGameplayTags& PokemonTags = FPokemonGameplayTags::Get();

	TArray<FGameplayTag> CandidateTags;
	Payload.InstigatorTags.GetGameplayTagArray(CandidateTags);

	TArray<FGameplayTag> TargetTags;
	Payload.TargetTags.GetGameplayTagArray(TargetTags);
	CandidateTags.Append(TargetTags);

	for (const FGameplayTag& Tag : CandidateTags)
	{
		if (Tag == PokemonTags.Ability_Window)
		{
			continue;
		}

		if (Tag.MatchesTag(PokemonTags.Ability_Window))
		{
			OutAbilityWindowTag = Tag;
			return true;
		}
	}
	return false;
}

void UPokemonGameplayAbilities::ResetAbilityWindowRuntimeState()
{
	ActiveAbilityWindows.Reset();
	bSawRecoveryWindowThisActivation = false;
}

void UPokemonGameplayAbilities::ApplyAbilityWindowCombatState(FGameplayTag AbilityWindowTag, float WindowDuration)
{
	if(!bApplyRecoveryStateFromAuthoredWindow||WindowDuration<=0.f)
	{
		return;
	}

	const FPokemonGameplayTags& PokemonTags = FPokemonGameplayTags::Get();

	if (!AbilityWindowTag.MatchesTagExact(PokemonTags.Ability_Window_Recovery))
	{
		return;
	}

	APokemon_Parent* AvatarPokemon = GetAvatarPokemon();
	if (!AvatarPokemon || !AvatarPokemon->HasAuthority())
	{
		return;
	}

	UPokemonCombatStateComponent* CombatStateComponent = AvatarPokemon->GetCombatStateComponent();
	if (!CombatStateComponent)
	{
		return;
	}

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	CombatStateComponent->SetCombatState(
		CombatTags.Combat_State_Recovering,
		WindowDuration,
		ECombatStateApplyPolicy::ExtendIfLonger
	);

	UE_LOG(
		LogTemp,
		Display,
		TEXT("[PokemonGameplayAbilities] Applied authored recovery window. Ability=%s WindowDuration=%.2f RemainingRecovery=%.2f"),
		*GetNameSafe(this),
		WindowDuration,
		CombatStateComponent->GetCombatStateRemainingTime(
			CombatTags.Combat_State_Recovering)
	);
}

EAttackPresentationPhase UPokemonGameplayAbilities::GetCurrentPresentationPhase(const UAnimMontage* AnimMontage) const
{

	if (!AnimMontage)
	{
		return EAttackPresentationPhase();
	}

	FName CurrentSection;

	if (UAnimInstance* AnimInstance = GetCurrentActorInfo()->GetAnimInstance())
	{
		if (AnimInstance->Montage_IsPlaying(AnimMontage))
		{
			// Get the current section name of the montage
			CurrentSection = AnimInstance->Montage_GetCurrentSection(AnimMontage);
		}
	}

	if (CurrentSection == NAME_None)
	{
		return EAttackPresentationPhase();
	}

	const UEnum* EnumPtr = StaticEnum<EAttackPresentationPhase>();
	if (!EnumPtr)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] Failed to find EAttackPresentationPhase enum. Ability=%s"),
			*GetNameSafe(this));
		return EAttackPresentationPhase();
	}

	int64 EnumValue = EnumPtr->GetValueByName(CurrentSection);

	if (EnumValue != INDEX_NONE)
	{
		EAttackPresentationPhase AttackPresentation = static_cast<EAttackPresentationPhase>(EnumValue);
		return AttackPresentation;
	}

	return EAttackPresentationPhase();
}
