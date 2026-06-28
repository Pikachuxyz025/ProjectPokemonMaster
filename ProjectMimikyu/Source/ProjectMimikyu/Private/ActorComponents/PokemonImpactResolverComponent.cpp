#include "ActorComponents/PokemonImpactResolverComponent.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"

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

	UE_LOG(
		LogPokemonImpactResolver,
		Display,
		TEXT("Impact resolved. Attacker=%s Defender=%s ImpactScore=%.2f ResistanceScore=%.2f Delta=%.2f Result=%d"),
		*GetNameSafe(ContactContext.AttackingActor),
		*GetNameSafe(ContactContext.DefendingActor),
		ImpactScore,
		ResistanceScore,
		ScoreDelta,
		static_cast<int32>(Result)
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
		OutResolution.DefenderImpulse = SafeAttackDirection * ContactContext.KnockbackForce;
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
		OutResolution.DefenderImpulse = SafeAttackDirection * ContactContext.KnockbackForce * 1.35f;
		OutResolution.AttackerHitStop = 0.07f;
		OutResolution.DefenderHitStop = 0.1f;
		OutResolution.AttackerRecoveryTime = 0.25f;
		OutResolution.DefenderStunTime = 0.45f;
		OutResolution.DamageMultiplier = 1.15f;
		break;

	case EPokemonImpactResult::Launch:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_Launched;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_AttackerPlus;
		OutResolution.DefenderImpulse = (SafeAttackDirection + FVector::UpVector * 0.65f).GetSafeNormal() * ContactContext.KnockbackForce * 1.75f;
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
		OutResolution.DefenderImpulse = SafeAttackDirection * ContactContext.KnockbackForce * 0.35f;
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
		OutResolution.DefenderStunTime = 0.05f;
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
		OutResolution.AttackerRecoveryTime = 0.45f;
		OutResolution.DefenderStunTime = 0.05f;
		OutResolution.DamageMultiplier = 0.25f;
		OutResolution.bLeavesAttackerVulnerable = true;
		break;

	case EPokemonImpactResult::CounterHit:
		OutResolution.AttackerPostImpactState = CombatTags.Combat_State_Recovering;
		OutResolution.DefenderPostImpactState = CombatTags.Combat_State_HitStun;
		OutResolution.AdvantageTag = CombatTags.Combat_Advantage_AttackerPlus;
		OutResolution.DefenderImpulse = SafeAttackDirection * ContactContext.KnockbackForce * 1.5f;
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

