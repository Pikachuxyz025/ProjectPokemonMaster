#include "ActorComponents/PokemonImpactResolverComponent.h"
#include "ActorComponents/PokemonCombatStateComponent.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/PrimitiveComponent.h"
#include <GameplayTags/PokemonGameplayTags.h>
#include <ActorComponents/PokemonHitStopComponent.h>

DEFINE_LOG_CATEGORY_STATIC(LogPokemonImpactResolver, Log, All);

UPokemonImpactResolverComponent::UPokemonImpactResolverComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

FPokemonImpactResolution UPokemonImpactResolverComponent::ResolveImpact(const FPokemonMoveContactContext& ContactContext) const
{
	FPokemonImpactResolution Resolution;

	if (!ContactContext.AttackingActor || !ContactContext.DefendingActor)
	{
		UE_LOG(LogPokemonImpactResolver, Warning, TEXT("[PokemonImpactResolverComponent] ResolveImpact Failed: called with null actors."));
		return Resolution;
	}

	const float ImpactScore = CalculateImpactScore(ContactContext);
	const float ResistanceScore = CalculateResistanceScore(ContactContext);
	const float ScoreDelta = ImpactScore - ResistanceScore;

	EPokemonImpactResult Result = EPokemonImpactResult::None;

	if (ContactContext.bWasCounterHit)
	{
		Result = EPokemonImpactResult::CounterHit;
	}
	else if (FMath::Abs(ScoreDelta) <= ClashWindow)
	{
		Result = EPokemonImpactResult::Clash;
	}
	else if (ScoreDelta >= LaunchThreshold)
	{
		Result = EPokemonImpactResult::Launch;
	}
	else if (ScoreDelta >= HeavyHitThreshold)
	{
		Result = EPokemonImpactResult::HeavyHit;
	}
	else if (ScoreDelta >= CleanHitThreshold)
	{
		Result = EPokemonImpactResult::CleanHit;
	}
	else if (ScoreDelta <= NoSellThreshold)
	{
		Result = EPokemonImpactResult::NoSell;
	}
	else if (ScoreDelta <= BounceOffThreshold)
	{
		Result = EPokemonImpactResult::BounceOff;
	}
	else
	{
		Result = EPokemonImpactResult::GlancingHit;
	}

	ConfigureResolutionForResult(Resolution, ContactContext, Result, ScoreDelta);

	const FString ResultName = StaticEnum<EPokemonImpactResult>()
		? StaticEnum<EPokemonImpactResult>()->GetNameStringByValue(static_cast<int64>(Result))
		: TEXT("Unknown");

	UE_LOG(
		LogPokemonImpactResolver,
		Display,
		TEXT("Impact resolved. Attacker=%s Defender=%s ImpactScore=%.2f ResistanceScore=%.2f Delta=%.2f Result=%s"),
		*GetNameSafe(ContactContext.AttackingActor),
		*GetNameSafe(ContactContext.DefendingActor),
		ImpactScore,
		ResistanceScore,
		ScoreDelta,
		*ResultName
	);

	return Resolution;
}

FPokemonImpactResolution UPokemonImpactResolverComponent::ResolveAndApplyImpact(const FPokemonMoveContactContext& ContactContext)
{
	const FPokemonImpactResolution Resolution = ResolveImpact(ContactContext);
	ApplyImpactResolution(ContactContext, Resolution);
	return Resolution;
}

void UPokemonImpactResolverComponent::ApplyImpactResolution(const FPokemonMoveContactContext& ContactContext, const FPokemonImpactResolution& ImpactResolution)
{
	ApplyImpactImpulseToActor(
		ContactContext.AttackingActor,
		ImpactResolution.AttackerImpulse,
		TEXT("Attacker")
	);

	ApplyImpactImpulseToActor(
		ContactContext.DefendingActor,
		ImpactResolution.DefenderImpulse,
		TEXT("Defender")
	);
	
	ApplyImpactStateConsequences(ContactContext, ImpactResolution);

	// Apply after states so all newly created state timers
	// are paused for the complete hitstop.
	ApplyImpactHitStop(ContactContext, ImpactResolution);

	OnImpactResolved.Broadcast(ContactContext, ImpactResolution);
}

float UPokemonImpactResolverComponent::CalculateImpactScore(const FPokemonMoveContactContext& ContactContext) const
{
	const float SpeedScore = ContactContext.AttackerSpeed * SpeedToImpactScale;
	const float WeightScore = ContactContext.AttackerWeight * WeightToImpactScale;
	const float KnockbackScore = ContactContext.KnockbackForce * KnockbackToImpactScale;

	return ContactContext.ImpactForce + SpeedScore + WeightScore + KnockbackScore;
}

float UPokemonImpactResolverComponent::CalculateResistanceScore(const FPokemonMoveContactContext& ContactContext) const
{
	const float WeightScore = ContactContext.DefenderWeight * WeightToResistanceScale;
	const float BracedBonus = ContactContext.bDefenderBraced ? BracedResistanceBonus : 0.f;

	return WeightScore + ContactContext.DefenderDefense + ContactContext.DefenderPoise + BracedBonus;
}

FVector UPokemonImpactResolverComponent::GetSafeImpactDirection(const FPokemonMoveContactContext& ContactContext) const
{
	if (!ContactContext.AttackDirection.IsNearlyZero())
	{
		return ContactContext.AttackDirection.GetSafeNormal();
	}

	if (ContactContext.AttackingActor && ContactContext.DefendingActor)
	{
		const FVector ToDefender 
			=
			ContactContext.DefendingActor->GetActorLocation() - ContactContext.AttackingActor->GetActorLocation();
		if (!ToDefender.IsNearlyZero())
		{
			return ToDefender.GetSafeNormal();
		}
	}
	return FVector::ForwardVector;
}

FVector UPokemonImpactResolverComponent::GetSafeHorizontalImpactDirection(const FPokemonMoveContactContext& ContactContext, const FVector& RawImpactDirection) const
{
	FVector HorizontalDirection = FVector(RawImpactDirection.X, RawImpactDirection.Y, 0.f);

	if (!HorizontalDirection.IsNearlyZero())
	{
		return HorizontalDirection.GetSafeNormal();
	}

	if (ContactContext.AttackingActor && ContactContext.DefendingActor)
	{
		 FVector ToDefender
			=
			ContactContext.DefendingActor->GetActorLocation() - ContactContext.AttackingActor->GetActorLocation();
		HorizontalDirection = FVector(ToDefender.X, ToDefender.Y, 0.f);

		ToDefender.Z = 0.f;

		if (!ToDefender.IsNearlyZero())
		{
			return ToDefender.GetSafeNormal();
		}
	}

	return FVector::ForwardVector;
}

FVector UPokemonImpactResolverComponent::BuildDefenderImpactImpulse(const FPokemonMoveContactContext& ContactContext, EPokemonImpactResult Result, float MagnitudeScale) const
{
	const float BaseMagnitude = ContactContext.KnockbackForce * MagnitudeScale;
	if (BaseMagnitude <= 0.f)
	{
		return FVector::ZeroVector;
	}
	const FVector RawImpactDirection = GetSafeImpactDirection(ContactContext);
	const FVector HorizontalImpactDirection = GetSafeHorizontalImpactDirection(ContactContext, RawImpactDirection);

	const bool bDownwardImpact = RawImpactDirection.Z <= -VerticalImpactThreshold;
	const bool bUpwardImpact = RawImpactDirection.Z >= VerticalImpactThreshold;

	FVector FinalDirection = HorizontalImpactDirection;
	float FinalMagnitude = BaseMagnitude;

	if (bDownwardImpact)
	{
		if (ContactContext.bDefenderAirborne)
		{
			// Airborne target hit from above: spike downward instead of launching upward
			FinalDirection =
				(HorizontalImpactDirection * AirSpikeHorizontalInfluence)
				+ (-FVector::UpVector * AirSpikeDownInfluence);

			FinalDirection = FinalDirection.GetSafeNormal();
		}
		else
		{
			// Grounded target hit from above: do not pop them upward.
			// This becomes the early version of a crumple/slam/pin reaction
			FinalDirection = HorizontalImpactDirection;
			FinalMagnitude *= GroundedDownwardImpactScale;

			// Highlight this spot. We'll likely use this to trigger a crumple animation or a slam reaction in the future.
		}
	}
	else if (Result == EPokemonImpactResult::Launch)
	{
		if (bUpwardImpact)
		{
			// Uppercut/rising impact.
			FinalDirection =
				(HorizontalImpactDirection * UpwardLaunchHorizontalInfluence)
				+ (FVector::UpVector * HorizontalLaunchUpBias);

			FinalDirection = FinalDirection.GetSafeNormal();
		}
		else
		{
			// Side launch: small lift, not a big automatic arc.
			FinalDirection = HorizontalImpactDirection
				+ FVector::UpVector * HorizontalLaunchUpBias;

			FinalDirection = FinalDirection.GetSafeNormal();
		}
	}
	else if (ContactContext.bDefenderAirborne && FMath::Abs(RawImpactDirection.Z) > KINDA_SMALL_NUMBER)
	{
		// Non-launch airborne hits can still preserve some vertial incoming direction.
		FinalDirection = RawImpactDirection;
	}
	else
	{
		// Grounded normal hit: keep it mostly horizontal.
		FinalDirection = HorizontalImpactDirection;
	}

	const FVector FinalImpulse = FinalDirection * FinalMagnitude;

	UE_LOG(
		LogPokemonImpactResolver,
		Display,
		TEXT("[PokemonImpactResolver] Built defender impact impulse. Result=%s AttackingActor=%s DefendingActor=%s RawDirection=%s FinalDirection=%s Magnitude=%.2f FinalImpulse=%s DefenderAirborne=%s"),
		*StaticEnum<EPokemonImpactResult>()->GetNameStringByValue(static_cast<int64>(Result)),
		ContactContext.AttackingActor ? *ContactContext.AttackingActor->GetName() : TEXT("None"),
		ContactContext.DefendingActor ? *ContactContext.DefendingActor->GetName() : TEXT("None"),
		*RawImpactDirection.ToString(),
		*FinalDirection.ToString(),
		FinalMagnitude,
		*FinalImpulse.ToString(),
		ContactContext.bDefenderAirborne ? TEXT("True") : TEXT("False")
	);

	return FinalImpulse;
}

void UPokemonImpactResolverComponent::ConfigureResolutionForResult(FPokemonImpactResolution& OutResolution, const FPokemonMoveContactContext& ContactContext, EPokemonImpactResult Result, float ScoreDelta) const
{
	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	OutResolution.ImpactResult = Result;
	OutResolution.ImpactResultTag = CombatTags.ImpactResultToTag.FindRef(Result);

	const FVector SafeAttackDirection = ContactContext.AttackDirection.IsNearlyZero()
		? FVector::ForwardVector
		: ContactContext.AttackDirection.GetSafeNormal();

	switch (Result)
	{
	case EPokemonImpactResult::CleanHit:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_HitStun;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_AttackerPlus;
		OutResolution.DefenderImpulse = BuildDefenderImpactImpulse(ContactContext, Result, 1.f);
		OutResolution.AttackerHitStop = 0.05f;
		OutResolution.DefenderHitStop = 0.07f;
		OutResolution.AttackerRecoveryTime = 0.2f;
		OutResolution.DefenderStunTime = 0.3f;
		OutResolution.DamageMultiplier = 1.f;
		break;

	case EPokemonImpactResult::HeavyHit:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_HitStun;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_AttackerPlus;
		OutResolution.DefenderImpulse = BuildDefenderImpactImpulse(ContactContext, Result, 1.35f);
		OutResolution.AttackerHitStop = 0.07f;
		OutResolution.DefenderHitStop = 0.1f;
		OutResolution.AttackerRecoveryTime = .3f;
		OutResolution.DefenderStunTime = .55f;
		OutResolution.DamageMultiplier = 1.15f;
		break;

	case EPokemonImpactResult::Launch:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_Launched;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_AttackerPlus;
		OutResolution.DefenderImpulse = BuildDefenderImpactImpulse(ContactContext, Result, 1.75f);
		OutResolution.AttackerHitStop = 0.08f;
		OutResolution.DefenderHitStop = 0.12f;
		OutResolution.AttackerRecoveryTime = 0.25f;
		OutResolution.DefenderStunTime = 0.6f;
		OutResolution.DamageMultiplier = 1.25f;
		break;

	case EPokemonImpactResult::GlancingHit:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_Neutral;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_NeutralReset;
		OutResolution.DefenderImpulse = BuildDefenderImpactImpulse(ContactContext, Result, 0.35f);
		OutResolution.AttackerHitStop = 0.03f;
		OutResolution.DefenderHitStop = 0.03f;
		OutResolution.AttackerRecoveryTime = 0.25f;
		OutResolution.DefenderStunTime = 0.1f;
		OutResolution.DamageMultiplier = 0.5f;
		break;

	case EPokemonImpactResult::Clash:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Clashing;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_Clashing;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_ClashReset;
		OutResolution.AttackerImpulse = -SafeAttackDirection * ContactContext.KnockbackForce * 0.4f;
		OutResolution.DefenderImpulse = SafeAttackDirection * ContactContext.KnockbackForce * 0.4f;
		OutResolution.AttackerHitStop = 0.1f;
		OutResolution.DefenderHitStop = 0.1f;
		OutResolution.AttackerRecoveryTime = 0.2f;
		OutResolution.DefenderStunTime = 0.2f;
		OutResolution.DamageMultiplier = 0.25f;
		break;

	case EPokemonImpactResult::NoSell:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Vulnerable;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_Braced;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_DefenderPlus;
		OutResolution.AttackerImpulse = -SafeAttackDirection * ContactContext.KnockbackForce * 0.45f;
		OutResolution.AttackerHitStop = 0.06f;
		OutResolution.DefenderHitStop = 0.02f;
		OutResolution.AttackerRecoveryTime = 0.55f;
		OutResolution.DefenderStunTime = 0.0f;
		OutResolution.DamageMultiplier = 0.15f;
		OutResolution.bLeavesAttackerVulnerable = true;
		break;

	case EPokemonImpactResult::BounceOff:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_Neutral;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_DefenderPlus;
		OutResolution.AttackerImpulse = -SafeAttackDirection * ContactContext.KnockbackForce * 0.75f;
		OutResolution.AttackerHitStop = 0.05f;
		OutResolution.DefenderHitStop = 0.03f;
		OutResolution.AttackerRecoveryTime = .55f;
		OutResolution.DefenderStunTime = 0.0f;
		OutResolution.DamageMultiplier = 0.25f;
		OutResolution.bLeavesAttackerVulnerable = true;
		break;

	case EPokemonImpactResult::CounterHit:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_HitStun;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_AttackerPlus;
		OutResolution.DefenderImpulse = BuildDefenderImpactImpulse(ContactContext, Result, 1.5f);
		OutResolution.AttackerHitStop = 0.06f;
		OutResolution.DefenderHitStop = 0.11f;
		OutResolution.AttackerRecoveryTime = 0.2f;
		OutResolution.DefenderStunTime = 0.55f;
		OutResolution.DamageMultiplier = 1.25f;
		break;

	default:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Neutral;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_Neutral;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_NeutralReset;
		break;
	}
}

void UPokemonImpactResolverComponent::ApplyImpactImpulseToActor(AActor* TargetActor, const FVector& Impulse, const TCHAR* RoleLabel) const
{
	if (!IsValid(TargetActor))
	{
		return;
	}

	if (Impulse.SizeSquared() <= FMath::Square(MinImpulseToApply))
	{
		return;
	}

	AActor* OwnerActor = GetOwner();
	if (OwnerActor && !OwnerActor->HasAuthority())
	{
		return;
	}

	if (ACharacter* Character = Cast<ACharacter>(TargetActor))
	{
		UCharacterMovementComponent* MoveComp = Character->GetCharacterMovement();

		if (!MoveComp || MoveComp->MovementMode == MOVE_None)
		{
			return;
		}

		Character->LaunchCharacter(Impulse, true, true);

		UE_LOG(
			LogPokemonImpactResolver,
			Display,
			TEXT("Applied impact impulse. Role=%s Actor=%s Impulse=%s"),
			RoleLabel,
			*GetNameSafe(TargetActor),
			*Impulse.ToString()
		);

		return;
	}

	if (UPrimitiveComponent* RootPrimitive = Cast<UPrimitiveComponent>(TargetActor->GetRootComponent()))
	{
		if (RootPrimitive->IsSimulatingPhysics())
		{
			RootPrimitive->AddImpulse(Impulse, NAME_None, true);

			UE_LOG(
				LogPokemonImpactResolver,
				Display,
				TEXT("Applied physics impact impulse. Role=%s Actor=%s Impulse=%s"),
				RoleLabel,
				*GetNameSafe(TargetActor),
				*Impulse.ToString()
			);
		}
	}

}

void UPokemonImpactResolverComponent::ApplyImpactStateConsequences(const FPokemonMoveContactContext& ContactContext,	const FPokemonImpactResolution& ImpactResolution) const
{
	UE_LOG(
		LogPokemonImpactResolver,
		Display,
		TEXT("[PokemonImpactResolver] Apply Impact State Consequence: Result=%s AttackerState=%s DefenderState=%s Advantage=%s AttackerRecovery=%.2f DefenderStun=%.2f"),
		*StaticEnum<EPokemonImpactResult>()->GetNameStringByValue(static_cast<int64>(ImpactResolution.ImpactResult)),
		*ImpactResolution.AttackerPostImpactState.ToString(),
		*ImpactResolution.DefenderPostImpactState.ToString(),
		*ImpactResolution.AdvantageTag.ToString(),
		ImpactResolution.AttackerRecoveryTime,
		ImpactResolution.DefenderStunTime
	);

	ApplyTimedCombatStateToActor(
		ContactContext.AttackingActor,
		ImpactResolution.AttackerPostImpactState,
		ImpactResolution.AttackerRecoveryTime,
		TEXT("Attacker")
	);
	

	ApplyTimedCombatStateToActor(
		ContactContext.DefendingActor,
		ImpactResolution.DefenderPostImpactState,
		ImpactResolution.DefenderStunTime,
		TEXT("Defender")
	);
}

void UPokemonImpactResolverComponent::ApplyTimedCombatStateToActor(
	AActor* TargetActor,
	const FGameplayTag& StateTag,
	float Duration,
	const TCHAR* RoleLabel
) const
{
	if (!IsValid(TargetActor) || !StateTag.IsValid() || Duration <= 0.f)
	{
		return;
	}

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	if (StateTag == CombatTags.Combat_State_Neutral)
	{
		return;
	}

	UPokemonCombatStateComponent* CombatStateComponent =	TargetActor->FindComponentByClass<UPokemonCombatStateComponent>();

	if (!CombatStateComponent)
	{
		UE_LOG(
			LogPokemonImpactResolver,
			Verbose,
			TEXT("[PokemonImpactResolver]  Applied Timed Combat State To Actor: No CombatStateComponent found. Role=%s Actor=%s State=%s Duration=%.2f"),
			RoleLabel,
			*GetNameSafe(TargetActor),
			*StateTag.ToString(),
			Duration
		);

		return;
	}

	CombatStateComponent->SetCombatState(StateTag, Duration,ECombatStateApplyPolicy::ExtendIfLonger);

	UE_LOG(
		LogPokemonImpactResolver,
		Display,
		TEXT("[PokemonImpactResolver] Applied Timed Combat State To Actor: Role=%s Actor=%s State=%s Duration=%.2f Policy=ExtendIfLonger"),
		RoleLabel,
		*GetNameSafe(TargetActor),
		*StateTag.ToString(),
		Duration
	);
}

void UPokemonImpactResolverComponent::ApplyImpactHitStop(const FPokemonMoveContactContext& ContactContext, const FPokemonImpactResolution& ImpactResolution) const
{
	if (!bApplyHitStop)
	{
		return;
	}

	const FPokemonGameplayTags& GameplayTags = FPokemonGameplayTags::Get();

	const bool bIsProjectileImpact = ContactContext.MoveActionTag.MatchesTag(GameplayTags.PokemonMoves_MoveAction_Projectile);

	if (!bIsProjectileImpact || bApplyAttackerHitStopOnProjectileImpact)
	{
		ApplyHitStopToActor(ContactContext.AttackingActor, ImpactResolution.AttackerHitStop, TEXT("Attacker"));
	}
	else
	{
		UE_LOG(
			LogPokemonImpactResolver,
			Verbose,
			TEXT("[PokemonImpactResolver] Skipping attacker hitstop for detached projectile impact. Attacker=%s Duration=%.3f"),
			*GetNameSafe(ContactContext.AttackingActor),
			ImpactResolution.AttackerHitStop
		);
	}

	ApplyHitStopToActor(ContactContext.DefendingActor, ImpactResolution.DefenderHitStop, TEXT("Defender"));
}

void UPokemonImpactResolverComponent::ApplyHitStopToActor(AActor* TargetActor, float Duration, const TCHAR* RoleLabel) const
{
	if (!IsValid(TargetActor) || Duration <= 0.f)
	{
		return;
	}

	UPokemonHitStopComponent* HitStopComponent = TargetActor->FindComponentByClass<		UPokemonHitStopComponent>();

	if (!HitStopComponent)
	{
		UE_LOG(
			LogPokemonImpactResolver,
			Verbose,
			TEXT("[PokemonImpactResolver] No HitStopComponent found. Role=%s Actor=%s Duration=%.3f"),
			RoleLabel,
			*GetNameSafe(TargetActor),
			Duration
		);

		return;
	}

	HitStopComponent->ApplyHitStop(Duration);

	UE_LOG(
		LogPokemonImpactResolver,
		Display,
		TEXT("[PokemonImpactResolver] Applied hitstop. Role=%s Actor=%s Duration=%.3f"),
		RoleLabel,
		*GetNameSafe(TargetActor),
		Duration
	);
}

