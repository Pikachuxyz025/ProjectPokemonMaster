#include "Diagnostics/PokemonStep50Diagnostics.h"

#if WITH_EDITOR
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Engine/World.h"
#include "HAL/IConsoleManager.h"
#include "TimerManager.h"

namespace
{
	enum class EMode : uint8 { Off, Cancel, Hit, Miss };
	struct FCase
	{
		EMode Mode = EMode::Off;
		TWeakObjectPtr<UPokemonGameplayAbilities> Ability;
		TWeakObjectPtr<UPokemonCommandComponent> Command;
		TWeakObjectPtr<AActor> Target;
		FTimerHandle Timer;
		FTimerHandle LateTimer;
		int32 Resolutions = 0;
		bool Failed = false;
		bool CancelIssued = false;
		bool OldProbe = false;
		bool NextProbe = false;
		bool Queued = false;
		bool Entered = false;
		bool Completed = false;
		bool Released = false;
		double DispatchTime = 0.0;
		float RemainingStrikeSeconds = 0.f;
		FName Destination;
	};
	TWeakObjectPtr<UWorld> TestWorld;
	EMode ArmedMode = EMode::Off;
	float CancelDelay = 0.05f;
	FGuid CancelledId;
	TMap<FGuid, FCase> Cases;

	void Stop()
	{
		if (UWorld* World = TestWorld.Get())
		{
			for (auto& Pair : Cases)
			{
				World->GetTimerManager().ClearTimer(Pair.Value.Timer);
				World->GetTimerManager().ClearTimer(Pair.Value.LateTimer);
			}
		}
		ArmedMode = EMode::Off;
		CancelledId.Invalidate();
		Cases.Reset();
		TestWorld.Reset();
	}

	bool IsTestAbility(const UPokemonGameplayAbilities* Ability)
	{
		return IsValid(Ability) && TestWorld.IsValid() && Ability->GetWorld() == TestWorld.Get()
			&& Ability->GetClass()->GetFName() == FName(TEXT("GA_MachPunch_IT21_C"))
			&& Ability->bUseAuthoritativeCombatOutcomes && Ability->bEnablePresentationBranchTest;
	}

	UAnimInstance* GetAnimation(UPokemonGameplayAbilities* Ability)
	{
		const FGameplayAbilityActorInfo* Info = Ability->GetCurrentActorInfo();
		return Info ? Info->GetAnimInstance() : nullptr;
	}

	FAutoConsoleCommandWithWorldAndArgs DiagnosticCommand(
		TEXT("pokemon.Step50"),
		TEXT("PIE only: Cancel [delaySeconds], StrikeHit, StrikeMiss, Report, Stop. Arms next IT21 activation."),
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(&FStep50RegressionDiagnostics::Console),
		ECVF_Cheat);
}

void FStep50RegressionDiagnostics::Console(const TArray<FString>& Args, UWorld* World)
{
	if (Args.Num() == 0) return;
	if (Args[0].Equals(TEXT("Stop"), ESearchCase::IgnoreCase))
	{
		Stop();
		UE_LOG(LogTemp, Display, TEXT("[IT50Diag] Stopped. Hooks idle; active abilities are not cancelled."));
		return;
	}
	if (Args[0].Equals(TEXT("Report"), ESearchCase::IgnoreCase))
	{
		for (const auto& Pair : Cases)
		{
			const FCase& C = Pair.Value;
			UE_LOG(LogTemp, Display,
				TEXT("[IT50Diag] Report CommandId=%s Failed=%d ResolutionCount=%d Released=%d "
					"CancelIssued=%d OldCallbackSafe=%d NextCallbackRejected=%d Queued=%d Entered=%d Completed=%d"),
				*Pair.Key.ToString(), C.Failed, C.Resolutions, C.Released, C.CancelIssued,
				C.OldProbe, C.NextProbe, C.Queued, C.Entered, C.Completed);
		}
		return;
	}
	if (!World || World->WorldType != EWorldType::PIE || World->GetNetMode() == NM_Client)
	{
		UE_LOG(LogTemp, Warning, TEXT("[IT50Diag] NotExecuted: enter the command in the authoritative PIE console."));
		return;
	}
	EMode Mode = EMode::Off;
	if (Args[0].Equals(TEXT("Cancel"), ESearchCase::IgnoreCase)) Mode = EMode::Cancel;
	if (Args[0].Equals(TEXT("StrikeHit"), ESearchCase::IgnoreCase)) Mode = EMode::Hit;
	if (Args[0].Equals(TEXT("StrikeMiss"), ESearchCase::IgnoreCase)) Mode = EMode::Miss;
	if (Mode == EMode::Off) return;
	if (TestWorld.Get() != World) Stop();
	if (ArmedMode != EMode::Off)
	{
		UE_LOG(LogTemp, Warning, TEXT("[IT50Diag] NotExecuted: a test is already armed. Use Stop to disarm."));
		return;
	}
	for (const auto& Pair : Cases)
	{
		if (Pair.Value.Resolutions == 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("[IT50Diag] NotExecuted: prior test has not retired. Use Report."));
			return;
		}
	}
	CancelDelay = Args.Num() > 1 ? FMath::Clamp(FCString::Atof(*Args[1]), 0.01f, 5.f) : 0.05f;
	TestWorld = World;
	ArmedMode = Mode;
	UE_LOG(LogTemp, Display, TEXT("[IT50Diag] Armed Mode=%s Delay=%.3f NextAbility=GA_MachPunch_IT21_C"),
		*Args[0], CancelDelay);
}

bool FStep50RegressionDiagnostics::BeginActivation(UPokemonGameplayAbilities* Ability)
{
	if (ArmedMode == EMode::Off || !IsTestAbility(Ability)
		|| !Ability->IsAuthoritativeOutcomeContextValid(Ability->GetSequencedCommandId())) return false;

	UPokemonDamageGameplayAbilities* DamageAbility = Cast<UPokemonDamageGameplayAbilities>(Ability);
	UPokemonCommandComponent* Command = Ability->GetAvatarActorFromActorInfo()->FindComponentByClass<UPokemonCommandComponent>();
	const FGuid Id = Ability->GetSequencedCommandId();
	FCase C;
	C.Mode = ArmedMode;
	C.Ability = Ability;
	C.Command = Command;
	C.Target = Command->GetCommandTarget().TargetActor.Get();
	Cases.Add(Id, C);
	ArmedMode = EMode::Off;
	UE_LOG(LogTemp, Display, TEXT("[IT50Diag] Captured CommandId=%s Ability=%s Synthetic=%d"),
		*Id.ToString(), *GetNameSafe(Ability), C.Mode != EMode::Cancel);
	if (C.Mode == EMode::Cancel) return false;

	// Synthetic test: spend the normal cost, but create no Blueprint approach,
	// overlap, damage, or recovery tasks. Native montage/GAS retirement is retained.
	Ability->bAuthoritativeContactEvaluationClosed = true;
	if (!DamageAbility || !DamageAbility->CommitPokemonMove())
	{
		Cases.FindChecked(Id).Failed = true;
		Ability->RecordSequencedActivationFailure(TEXT("Step50DiagnosticCommitFailed"));
		Ability->EndSequencedExecution(Id, false);
	}
	return true;
}

bool FStep50RegressionDiagnostics::Probe(TWeakObjectPtr<UPokemonGameplayAbilities> WeakAbility,
	FGuid StaleId, TWeakObjectPtr<AActor> Target, const TCHAR* Label)
{
	UPokemonGameplayAbilities* Ability = WeakAbility.Get();
	if (!Ability)
	{
		UE_LOG(LogTemp, Display, TEXT("[IT50Diag] LateCallback Kind=%s OldCommandId=%s Result=SuppressedLifetime ValidatorExecuted=0"),
			Label, *StaleId.ToString());
		return true;
	}
	const FGuid CurrentId = Ability->GetSequencedCommandId();
	if (Ability->IsAuthoritativeOutcomeContextValid(StaleId))
	{
		UE_LOG(LogTemp, Error, TEXT("[IT50Diag] LateCallback Kind=%s OldCommandId=%s CurrentCommandId=%s Result=Failed ContextAccepted=1"),
			Label, *StaleId.ToString(), *CurrentId.ToString());
		return false; // Never intentionally apply damage if the validator is broken.
	}
	UPokemonDamageGameplayAbilities* DamageAbility = Cast<UPokemonDamageGameplayAbilities>(Ability);
	UAbilitySystemComponent* TargetASC = Target.IsValid()
		? UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Target.Get()) : nullptr;
	if (!DamageAbility || !TargetASC)
	{
		UE_LOG(LogTemp, Warning, TEXT("[IT50Diag] LateCallback Kind=%s OldCommandId=%s Result=NotExecuted MissingDamageAbilityOrTargetASC=1"),
			Label, *StaleId.ToString());
		return false;
	}
	UAnimInstance* Animation = GetAnimation(Ability);
	UAnimMontage* Montage = Ability->ResolveAbilityMontage();
	auto Snapshot = [&]()
	{
		// Called only after checking the weak ability; synchronous tests do not tick time.
		const FName Section = Animation && Montage ? Animation->Montage_GetCurrentSection(Montage) : NAME_None;
		const int32 Index = Montage ? Montage->GetSectionIndex(Section) : INDEX_NONE;
		return FString::Printf(TEXT("%d/%d/%d/%d/%s/%d/%.6f/%.6f"),
			static_cast<int32>(Ability->AuthoritativeCombatOutcome), Ability->bAuthoritativeCombatOutcomePresented,
			Ability->bAuthoritativeContactEvaluationClosed, Ability->IsActive(), *Section.ToString(),
			Animation && Index != INDEX_NONE ? Animation->Montage_GetNextSectionID(Montage, Index) : INDEX_NONE,
			Animation && Montage ? Animation->Montage_GetPosition(Montage) : 0.f,
			TargetASC->GetNumericAttribute(UPokemonBaseAttributeSet::GetHealthAttribute()));
	};
	const FString Before = Snapshot();
	const TWeakObjectPtr<UAbilitySystemComponent> WeakTargetASC = TargetASC;
	int32 Effects = 0;
	const FDelegateHandle EffectHandle = TargetASC->OnGameplayEffectAppliedDelegateToSelf.AddLambda(
		[&Effects](UAbilitySystemComponent*, const FGameplayEffectSpec&, FActiveGameplayEffectHandle) { ++Effects; });
	// Exercise all three actual entry points, not just the validator.
	DamageAbility->ApplyAuthoritativeMeleeContact(Target.Get(), StaleId);
	if (WeakAbility.IsValid()) DamageAbility->FinalizeAuthoritativeMeleeContactEvaluation(StaleId);
	if (WeakAbility.IsValid()) Ability->AcceptAuthoritativeCombatOutcome(StaleId, EAttackOutcome::Hit);
	if (WeakAbility.IsValid()) Ability->AcceptAuthoritativeCombatOutcome(StaleId, EAttackOutcome::Miss);
	if (WeakTargetASC.IsValid()) TargetASC->OnGameplayEffectAppliedDelegateToSelf.Remove(EffectHandle);
	const bool bUnchanged = WeakAbility.IsValid() && WeakTargetASC.IsValid() && Before == Snapshot();
	const bool bPass = bUnchanged && Effects == 0;
	UE_LOG(LogTemp, Display,
		TEXT("[IT50Diag] LateCallback Kind=%s OldCommandId=%s CurrentCommandId=%s Result=%s ValidatorExecuted=1 Effects=%d StateUnchanged=%d"),
		Label, *StaleId.ToString(), *CurrentId.ToString(), bPass ? TEXT("RejectedContext") : TEXT("Failed"), Effects, bUnchanged);
	return bPass;
}

void FStep50RegressionDiagnostics::MontageStarted(UPokemonGameplayAbilities* Ability)
{
	if (!IsTestAbility(Ability)) return;
	const FGuid Id = Ability->GetSequencedCommandId();
	if (FCase* Old = Cases.Find(CancelledId); Old && Old->CancelIssued && !Old->NextProbe && Id != CancelledId
		&& Old->Command.IsValid() && Ability->GetAvatarActorFromActorInfo() == Old->Command->GetOwner())
	{
		const bool bValidNew = Ability->IsAuthoritativeOutcomeContextValid(Id);
		Old->NextProbe = bValidNew && Probe(Ability, CancelledId, Old->Target, TEXT("NextInstance"));
		Old->Failed |= !Old->NextProbe;
		UE_LOG(LogTemp, Display, TEXT("[IT50Diag] SubsequentActivation OldCommandId=%s NewCommandId=%s Result=%s"),
			*CancelledId.ToString(), *Id.ToString(), Old->NextProbe ? TEXT("Passed") : TEXT("Failed"));
	}
	FCase* C = Cases.Find(Id);
	if (!C) return;
	UWorld* World = TestWorld.Get();
	if (C->Mode == EMode::Cancel)
	{
		World->GetTimerManager().SetTimer(C->Timer, FTimerDelegate::CreateLambda([Id]()
		{
			FCase* Case = Cases.Find(Id);
			if (!Case || !TestWorld.IsValid()) return;
			UPokemonGameplayAbilities* Live = Case->Ability.Get();
			UPokemonCommandComponent* Command = Case->Command.Get();
			UAnimInstance* Anim = Live ? GetAnimation(Live) : nullptr;
			UAnimMontage* Montage = Live ? Live->ResolveAbilityMontage() : nullptr;
			if (!Live || !Command || !Command->OwnsActiveSequencedAbility(Live, Id)
				|| !Anim || !Montage || !Anim->Montage_IsPlaying(Montage))
			{
				Case->Failed = true;
				UE_LOG(LogTemp, Warning, TEXT("[IT50Diag] CancelRequest CommandId=%s Result=NotExecuted NoActiveMontage=1"), *Id.ToString());
				return;
			}
			Case->CancelIssued = true;
			CancelledId = Id;
			UE_LOG(LogTemp, Display, TEXT("[IT50Diag] CancelRequest CommandId=%s Playing=1 Section=%s"),
				*Id.ToString(), *Anim->Montage_GetCurrentSection(Montage).ToString());
			const bool bRequested = Command->CancelSequencedCommand(Id, TEXT("Step50DiagnosticCancel"));
			// Cancellation may mark an InstancedPerExecution object as garbage. No Live access below.
			Case = Cases.Find(Id);
			if (!Case) return;
			Case->Failed |= !bRequested;
			TestWorld->GetTimerManager().SetTimer(Case->LateTimer, FTimerDelegate::CreateLambda([Id]()
			{
				FCase* Late = Cases.Find(Id);
				if (!Late) return;
				if (Late->Resolutions != 1)
				{
					Late->Failed = true;
					UE_LOG(LogTemp, Warning, TEXT("[IT50Diag] LateCallback OldCommandId=%s Result=NotExecuted CancellationNotResolved=1"), *Id.ToString());
					return;
				}
				Late->OldProbe = Probe(Late->Ability, Id, Late->Target, TEXT("OriginalInstance"));
				Late->Failed |= !Late->OldProbe;
			}), 0.15f, false);
		}), CancelDelay, false);
		return;
	}

	UAnimInstance* Animation = GetAnimation(Ability);
	UAnimMontage* Montage = Ability->ResolveAbilityMontage();
	if (!Animation || !Montage || !Animation->Montage_IsPlaying(Montage)
		|| Animation->Montage_GetCurrentSection(Montage) != FName(TEXT("Strike"))
		|| !Ability->IsAuthoritativeOutcomeContextValid(Id))
	{
		C->Failed = true;
		UE_LOG(LogTemp, Error, TEXT("[IT50Diag] Strike CommandId=%s Result=NotExecuted NotPlayingStrike=1"), *Id.ToString());
		Ability->EndSequencedExecution(Id, true);
		return;
	}
	const EAttackOutcome Outcome = C->Mode == EMode::Hit ? EAttackOutcome::Hit : EAttackOutcome::Miss;
	C->Destination = Outcome == EAttackOutcome::Hit ? TEXT("HitContact") : TEXT("WhiffFollowThrough");
	const int32 StrikeIndex = Montage->GetSectionIndex(TEXT("Strike"));
	const float Position = Animation->Montage_GetPosition(Montage);
	float Start = 0.f, End = 0.f;
	Montage->GetSectionStartAndEndTime(StrikeIndex, Start, End);
	const float Rate = Animation->Montage_GetPlayRate(Montage) * Montage->RateScale
		* Ability->GetAvatarActorFromActorInfo()->CustomTimeDilation;
	C->RemainingStrikeSeconds = (End - Position) / FMath::Max(Rate, KINDA_SMALL_NUMBER);
	C->DispatchTime = World->GetTimeSeconds();
	UE_LOG(LogTemp, Display, TEXT("[IT50Diag] SyntheticDispatch CommandId=%s Outcome=%s Section=Strike Position=%.4f NoCombatQueries=1"),
		*Id.ToString(), Outcome == EAttackOutcome::Hit ? TEXT("Hit") : TEXT("Miss"), Position);
	Ability->AcceptAuthoritativeCombatOutcome(Id, Outcome);
	if (!C->Ability.IsValid()) { C->Failed = true; return; }
	const int32 NextIndex = Animation->Montage_GetNextSectionID(Montage, StrikeIndex);
	C->Queued = Ability->bAuthoritativeCombatOutcomePresented
		&& Animation->Montage_GetCurrentSection(Montage) == FName(TEXT("Strike"))
		&& FMath::IsNearlyEqual(Position, Animation->Montage_GetPosition(Montage))
		&& NextIndex == Montage->GetSectionIndex(C->Destination);
	C->Failed |= !C->Queued;
	UE_LOG(LogTemp, Display, TEXT("[IT50Diag] StrikeQueued CommandId=%s Destination=%s StillStrike=%d Result=%s"),
		*Id.ToString(), *C->Destination.ToString(), C->Queued, C->Queued ? TEXT("Passed") : TEXT("Failed"));
	World->GetTimerManager().SetTimer(C->Timer, FTimerDelegate::CreateLambda([Id]() { ObserveStrike(Id); }), 0.005f, true);
}

void FStep50RegressionDiagnostics::ObserveStrike(FGuid Id)
{
	FCase* C = Cases.Find(Id);
	UWorld* World = TestWorld.Get();
	if (!C || !World) return;
	UPokemonGameplayAbilities* Ability = C->Ability.Get();
	UAnimInstance* Animation = Ability ? GetAnimation(Ability) : nullptr;
	UAnimMontage* Montage = Ability ? Ability->ResolveAbilityMontage() : nullptr;
	if (!Ability || !Animation || !Montage || !Ability->IsActive())
	{
		World->GetTimerManager().ClearTimer(C->Timer);
		return;
	}
	const FName Section = Animation->Montage_GetCurrentSection(Montage);
	if (Section == FName(TEXT("Strike"))) return;
	const float Elapsed = World->GetTimeSeconds() - C->DispatchTime;
	C->Entered = Section == C->Destination
		&& Elapsed + World->GetDeltaSeconds() >= C->RemainingStrikeSeconds;
	C->Failed |= !C->Entered;
	UE_LOG(LogTemp, Display, TEXT("[IT50Diag] StrikeDestination CommandId=%s Section=%s Elapsed=%.4f Minimum=%.4f Result=%s"),
		*Id.ToString(), *Section.ToString(), Elapsed, C->RemainingStrikeSeconds,
		C->Entered ? TEXT("Passed") : TEXT("Failed"));
	World->GetTimerManager().ClearTimer(C->Timer);
}

void FStep50RegressionDiagnostics::MontageCompleted(UPokemonGameplayAbilities* Ability)
{
	if (FCase* C = Cases.Find(Ability->GetSequencedCommandId())) C->Completed = true;
}

void FStep50RegressionDiagnostics::CommandResolved(UPokemonCommandComponent* Command, FGuid Id,
	EPokemonAttackExecutionOutcome Outcome, FName Reason)
{
	FCase* C = Cases.Find(Id);
	if (!C || C->Command.Get() != Command) return;
	++C->Resolutions;
	C->Released = !Command->IsCommandActive() && !Command->GetActiveTrainerCommandId().IsValid()
		&& !Command->GetCommandTarget().IsValidTarget();
	const bool bExpected = C->Mode == EMode::Cancel
		? C->CancelIssued && Outcome == EPokemonAttackExecutionOutcome::Interrupted && Reason == TEXT("Step50DiagnosticCancel")
		: Outcome == EPokemonAttackExecutionOutcome::Missed && C->Queued && C->Entered && C->Completed;
	C->Failed |= !bExpected || C->Resolutions != 1 || !C->Released;
	UE_LOG(LogTemp, Display,
		TEXT("[IT50Diag] Terminal CommandId=%s Outcome=%s Reason=%s Count=%d Released=%d Synthetic=%d Result=%s"),
		*Id.ToString(), *PokemonAttackOutcomeName(Outcome).ToString(), *Reason.ToString(),
		C->Resolutions, C->Released, C->Mode != EMode::Cancel, C->Failed ? TEXT("Failed") : TEXT("Passed"));
}
#endif
