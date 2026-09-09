#include "Tests/PokemonAttackAutomationFixture.h"

#include "Abilities/Tasks/AbilityTask_WaitDelay.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonIntentSequenceComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Characters/Pokemon_Parent.h"

void UPokemonAttackAutomationProbe::LegacyEnded() { ++LegacyEnds; }

void UPokemonAttackAutomationProbe::ImpactResolved(FPokemonMoveContactContext Context, FPokemonImpactResolution Resolution)
{
	if (bEndOnImpact && IsValid(Ability)) Ability->Finish();
}

UPokemonAttackAutomationAbility::UPokemonAttackAutomationAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerExecution;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
	// CDOs can be constructed before the project's AssetManager registers tags;
	// the fixture refreshes their tags, while runtime instances resolve them here.
	MoveActionTag = FGameplayTag::RequestGameplayTag(TEXT("PokemonMoves.MoveAction.Melee"), false);
	DamageEffectClass = UGameplayEffect::StaticClass();
}

void UPokemonAttackAutomationAbility::ActivateAbility(FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	UPokemonAttackAutomationProbe* Probe = ActorInfo->AvatarActor->FindComponentByClass<UPokemonAttackAutomationProbe>();
	if (!Probe) { Finish(); return; }
	++Probe->Activations;
	Probe->Ability = this;
	const auto* Intent = ActorInfo->AvatarActor->FindComponentByClass<UPokemonIntentSequenceComponent>();
	const auto& Sequence = Intent->GetCurrentSequence();
	Probe->bOwnedBeforeActivation = Sequence.State == EPokemonIntentSequenceState::Running
		&& Sequence.Actions.Num() == 1 && Sequence.Actions[0].State == EPokemonIntentActionState::Running
		&& GetSequencedCommandId().IsValid() && Sequence.Actions[0].ExecutorRequestId == GetSequencedCommandId();
	Probe->Task = UAbilityTask_WaitDelay::WaitDelay(this, 100.f);
	Probe->Task->ReadyForActivation();
	// Simulate the inspected GA_Base OnEndAbility -> AttackEnded callback from
	// inside Super::EndAbility, before GAS has destroyed its tasks.
	OnGameplayAbilityEnded.AddWeakLambda(Probe, [Probe](UGameplayAbility*)
	{
		Probe->GetOwner()->FindComponentByClass<UPokemonCommandComponent>()->AttackEnded();
	});
	if (Probe->Mode == EPokemonAttackTestMode::RejectCommit)
	{
		ActorInfo->AbilitySystemComponent->SetNumericAttributeBase(UPokemonBaseAttributeSet::GetStaminaAttribute(), 0.f);
		Probe->bCommitSucceeded = CommitPokemonMove();
		Finish();
	}
	else if (Probe->Mode == EPokemonAttackTestMode::CommitAndHold) Probe->bCommitSucceeded = CommitPokemonMove();
	else if (Probe->Mode == EPokemonAttackTestMode::SynchronousMiss) Finish();
}

void UPokemonAttackAutomationAbility::Finish(bool bCancelled)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, bCancelled);
}

FPokemonImpactResolution UPokemonAttackAutomationAbility::Contact(AActor* Target)
{
	FPokemonImpactResolution Result;
	FDamageEffectParams Params;
	Params.SourceAbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	Params.TargetAbilitySystemComponent = Cast<APokemon_Parent>(Target)->GetAbilitySystemComponent();
	Params.BasedDamage = 20.f;
	ResolveImpactAndModifyDamageParams(Target, Params, Result);
	return Result;
}

void UPokemonAttackAutomationAbility::WithAbilityScopeLock(TFunctionRef<void()> Callback)
{
	IncrementListLock();
	Callback();
	DecrementListLock();
}

UPokemonRangedAutomationAbility::UPokemonRangedAutomationAbility()
{
	MoveActionTag = FGameplayTag::RequestGameplayTag(TEXT("PokemonMoves.MoveAction.Projectile"), false);
}
