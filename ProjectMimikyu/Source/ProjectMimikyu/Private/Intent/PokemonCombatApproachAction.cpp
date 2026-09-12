


#include "Intent/PokemonCombatApproachAction.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Combat/PokemonMeleeContact.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "GameplayTags/PokemonAITags.h"

FPokemonNavigationSubmission FPokemonCombatApproachAction::Start(APokemon_Parent* Pokemon, UPokemonNavigationComponent* Navigation, const FPokemonIntentActionSpec& Spec, FGuid ParentAttackCommandId)
{
	FPokemonNavigationSubmission Submission;

	if (!IsValid(Pokemon) || !IsValid(Navigation))
	{
		Submission.Reason = TEXT("CombatApproachUnavailable");
		return Submission;
	}

	if (!Spec.AttackMove || !Spec.AttackMove->Ability)
	{
		Submission.Reason = TEXT("CombatApproachUnavailable");
		return Submission;
	}

	const UPokemonDamageGameplayAbilities* MoveCDO = Cast<UPokemonDamageGameplayAbilities>(Spec.AttackMove->Ability->GetDefaultObject());

	if (!MoveCDO)
	{
		Submission.Reason = TEXT("CombatApproachUnavailable");
		return Submission;
	}

	if (!ParentAttackCommandId.IsValid())
	{
		Submission.Reason = TEXT("CombatApproachUnavailable");
		return Submission;
	}

	FAgentNavigationRequest Request;

	Request.RequestId = FGuid::NewGuid();

	Request.IntentTag = PokemonAITags::NavIntent_Approach;

	Request.TargetPointTag = Spec.CommandTarget.TargetPointTag;

	Request.TargetActor = Spec.CommandTarget.TargetActor.Get();

	Request.TargetLocation = Spec.CommandTarget.TargetLocation;

	Request.DesiredDistance = MoveCDO->IdealRange;

	Request.MeleeContact = MoveCDO->MeleeContact;

	Request.bIsAttackTraversal = true;

	Request.JumpTrajectoryPreference = EPokemonJumpTrajectoryPreference::Direct;

	Request.Urgency = 0.5f;

	Request.bAllowSpecialTraversal = true;
	Request.bAllowGASMovementAbilities = true;

	Request.ApproachTimeout = MoveCDO->ApproachTimeout;

	Request.ApproachMoveSpeedMultiplier = MoveCDO->SpeedMultiplier;

	Request.AcceptableRadius = MoveCDO->IdealRange;

	Request.ParentAttackCommandId = ParentAttackCommandId;

	Request.bResolveApproachAsAction = true;

	Request.bFaceTargetDuringApproach = MoveCDO->bFaceTargetDuringApproach;

	if (Request.MeleeContact.SocketTag.IsValid())
	{
		FName CaptureFailure;

		if (!UPokemonMeleeContactLibrary::CaptureMeleeApproachSnapshot(Pokemon, MoveCDO->MeleeContact, MoveCDO->MeleeApproachProfile, Request.MeleeApproach, CaptureFailure))
		{
			Submission.Reason = CaptureFailure.IsNone() ? FName(TEXT("MeleeApproachCaptureFailed")) : CaptureFailure;

			UE_LOG(LogTemp, Warning, TEXT(
				"[CombatApproachAction] "
				"MeleePlanCaptureFailed | "
				"RequestId=%s | "
				"Move=%s | "
				"Reason=%s"
			),
				*Request.RequestId.ToString(),
				*GetNameSafe(Spec.AttackMove),
				*Submission.Reason.ToString());

			return Submission;
		}
	}

	Navigation->SetNavigationIntent(Request);

	if (!Navigation->HasActiveNavigationRequest() || Navigation->GetCurrentNavigationIntent().RequestId != Request.RequestId)
	{
		Submission.Reason =
			TEXT("CombatApproachSubmissionSuperseded");

		return Submission;
	}

	Submission.RequestId = Request.RequestId;

	UE_LOG(LogTemp, Display, TEXT(
		"[CombatApproachAction] Submitted | "
		"Pokemon=%s | "
		"RequestId=%s | "
		"CommandId=%s | "
		"Target=%s | "
		"Point=%s | "
		"Location=%s | "
		"Range=%.1f | "
		"Timeout=%.2f"
	),
		*GetNameSafe(Pokemon),
		*Request.RequestId.ToString(),
		*ParentAttackCommandId.ToString(),
		*GetNameSafe(Request.TargetActor.Get()),
		*Request.TargetPointTag.ToString(),
		*Request.TargetLocation.ToString(),
		Request.AcceptableRadius,
		Request.ApproachTimeout);

	return Submission;
}

void FPokemonCombatApproachAction::Cancel(UPokemonNavigationComponent* Navigation, FGuid RequestId, FName Reason)
{
	if (!IsValid(Navigation))
	{
		return;
	}

	Navigation->CancelNavigationRequest(RequestId, Reason.IsNone() ? FName(TEXT("CombatApproachCancelled")) : Reason);
}