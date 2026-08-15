// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/PokemonDecisionComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "Debugging/PokemonDebugLibrary.h"
#include "GameplayTags/PokemonDebugTags.h"
#include "GameplayTags/PokemonAITags.h"
#include "DataAssets/PokemonAICombatBrainConfig.h"
#include "AIControllers/PokemonAIController.h"
#include "ActorComponents/PokemonNavigationComponent.h"

static FString PokemonStateToString(EPokemonState State)
{
	switch (State)
	{
	case EPokemonState::EPS_NoState:
		return TEXT("NoState");

	case EPokemonState::EPS_Passive:
		return TEXT("Passive");

	case EPokemonState::EPS_Training:
		return TEXT("Training");

	case EPokemonState::EPS_Resting:
		return TEXT("Resting");

	case EPokemonState::EPS_Docile:
		return TEXT("Docile");

	case EPokemonState::EPS_Combative:
		return TEXT("Combative");

	case EPokemonState::EPS_Investigative:
		return TEXT("Investigative");

	case EPokemonState::EPS_Fainted:
		return TEXT("Fainted");

	default:
		return TEXT("Unknown");
	}
}

UPokemonDecisionComponent::UPokemonDecisionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPokemonDecisionComponent::StartDecisionMaking()
{
	if (!DecisionConfig)
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT(
				"[Decision] StartDecisionMaking | "
				"No Decision Config set for Controller=%s | Pawn=%s"
			),
			*GetNameSafe(OwningPokemonController),
			*GetNameSafe(ControlledPokemon)
		);

		return;
	}

	CacheReferences();

	if (!OwningPokemonController || !ControlledPokemon)
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT(
				"[Decision] StartDecisionMaking | "
				"Missing references for Controller=%s | Pawn=%s"
			),
			*GetNameSafe(OwningPokemonController),
			*GetNameSafe(ControlledPokemon)
		);

		return;
	}

	bDecisionActive = true;

	const float Now = GetCurrentWorldTime();

	NextThinkTime =
		Now + GetRandomThinkInterval();

	CommitUntilTime = Now;
}

void UPokemonDecisionComponent::StopDecisionMaking(const FString& Reason)
{
	bDecisionActive = false;

	UE_LOG(
		LogTemp,
		Verbose,
		TEXT(
			"[Decision] StopDecisionMaking | "
			"Controller=%s | Pawn=%s | Reason=%s"
		),
		*GetNameSafe(OwningPokemonController),
		*GetNameSafe(ControlledPokemon),
		*Reason
	);
}

void UPokemonDecisionComponent::RestartDecisionMaking()
{
	StopDecisionMaking("RestartDecisionMaking called");
	StartDecisionMaking();
}

void UPokemonDecisionComponent::InitializeDecisionComponent(APokemonAIController* InPokemonController)
{
	OwningPokemonController = InPokemonController;
	CacheReferences();

	UPokemonDebugLibrary::SetCategoryEnabled(ControlledPokemon, PokemonDebugTags::AI, false);
	UPokemonDebugLibrary::PrintMessage(
		ControlledPokemon,
		PokemonDebugTags::AI,
		FString::Printf(TEXT("Brain initialized with Controller=%s"),
			*GetNameSafe(OwningPokemonController)),
		EPokemonDebugOutputMode::LogAndScreen);
}

void UPokemonDecisionComponent::SetDecisionConfig(UPokemonAICombatBrainConfig* NewConfig)
{
	DecisionConfig = NewConfig;

	UE_LOG(LogTemp, Warning, TEXT("[Decision] SetDecisionConfig | Controller=%s | Pawn=%s | Config=%s"),
		*GetNameSafe(OwningPokemonController),
		*GetNameSafe(ControlledPokemon),
		*GetNameSafe(NewConfig));
}

void UPokemonDecisionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bDecisionActive)
	{
		return;
	}

	const float Now = GetCurrentWorldTime();

	if (!ShouldThinkNow(Now))
	{
		return;
	}

	//UE_LOG(LogTemp, Warning, TEXT("[Decision] TickComponent | Thinking now | Controller=%s | Pawn=%s"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon));
	RunThink();
}

bool UPokemonDecisionComponent::CanThink() const
{
	return bDecisionActive && DecisionConfig && ControlledPokemon;
}

bool UPokemonDecisionComponent::ShouldThinkNow(float CurrentTime) const
{
	if (!CanThink())
	{
		return false;
	}

	if (CurrentTime < NextThinkTime)
	{
		return false;
	}

	if (CurrentTime < CommitUntilTime && !HasUrgentInterrupt())
	{
		return false;
	}

	return true;
}

bool UPokemonDecisionComponent::HasUrgentInterrupt() const
{
	return bUrgentInterruptedRequested;
}

void UPokemonDecisionComponent::ClearUrgentInterrupt()
{
	bUrgentInterruptedRequested = false;
}

void UPokemonDecisionComponent::CacheReferences()
{
	if (!OwningPokemonController) return;

	ControlledPokemon = Cast<APokemon_Parent>(OwningPokemonController->GetPawn());

	if (ControlledPokemon)
	{
		CachedPokemonASC = ControlledPokemon->GetPokemonASC();
		CachedNavigationComponent = ControlledPokemon->GetNavigationComponent();
	}
}

// First-pass RunThink without full context struct
// The goal is to prove:
//the component is alive
//it can read the pawn / controller
//it can branch on simple combat info
//it uses the config values 
void UPokemonDecisionComponent::RunThink()
{
	if (!OwningPokemonController || !ControlledPokemon || !DecisionConfig)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Decision] RunThink aborted: missing refs"));
		return;
	}

	const float Now = GetCurrentWorldTime();

	if (!ControlledPokemon->CanAct())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[Decision] RunThink paused | Owner=%s cannot act | IsFainted=%s"),
			*GetNameSafe(ControlledPokemon),
			ControlledPokemon->IsFainted() ? TEXT("True") : TEXT("False"));

		if (CachedNavigationComponent)
		{
			CachedNavigationComponent->ClearNavigationIntent();
		}

		CommitUntilTime = Now;
		NextThinkTime = Now + 0.15f;
		ClearUrgentInterrupt();

		return;
	}

	float DeltaSinceLast = 0.f;
	if (LastDecisionTime > 0.f)
	{
		DeltaSinceLast = Now - LastDecisionTime;
	}

	const float HPPercent = GetHPPercent();
	const bool bHasTarget = HasCombatTarget();

	const FGameplayTag NewDesiredCombatMode = DetermineDesiredCombatMode(HPPercent, bHasTarget);
	SetDesiredCombatMode(NewDesiredCombatMode);

	if(bEnableNavigationIntentOutput)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[Decision] RunThink | Owner=%s | DesiredCombatMode=%s | HPPercent=%.2f | CanAct=%s | IsFainted=%s | HasTarget=%s | DeltaSinceLast=%.2f"),
			*GetNameSafe(ControlledPokemon),
			*NewDesiredCombatMode.ToString(),
			HPPercent,
			ControlledPokemon && ControlledPokemon->CanAct() ? TEXT("True") : TEXT("False"),
			ControlledPokemon && ControlledPokemon->IsFainted() ? TEXT("True") : TEXT("False"),
			bHasTarget ? TEXT("True") : TEXT("False"),
			DeltaSinceLast);
		UpdateNavigationIntent();
	}

	const EPokemonState CurrentState = OwningPokemonController->GetPokemonState();
	const FString PokemonStateString = PokemonStateToString(CurrentState);

	const AActor* CurrentTarget = OwningPokemonController->GetCombatTarget();


	LastDecisionTime = Now;
	CommitUntilTime = Now + GetRandomCommitTime();
	NextThinkTime = Now + GetRandomThinkInterval();
	ClearUrgentInterrupt();

	UPokemonDebugLibrary::PrintMessage(ControlledPokemon, PokemonDebugTags::AI, TEXT("AI thinking. This should only be seen it there is no observer object or if this is the observer object"),EPokemonDebugOutputMode::LogAndScreen);
}

void UPokemonDecisionComponent::DebugLogState() const
{
}

float UPokemonDecisionComponent::GetCurrentWorldTime() const
{
	const UWorld* World = GetWorld();
	return World ? World->GetTimeSeconds() : 0.0f;
}

float UPokemonDecisionComponent::GetRandomThinkInterval() const
{
	if (!DecisionConfig)
		return 1.f;

	return FMath::RandRange(DecisionConfig->ThinkIntervalMin, DecisionConfig->ThinkIntervalMax);
}

float UPokemonDecisionComponent::GetRandomCommitTime() const
{
	if (!DecisionConfig)
		return .5f;

	return FMath::RandRange(DecisionConfig->CommitTimeMin, DecisionConfig->CommitTimeMax);
}

float UPokemonDecisionComponent::GetHPPercent() const
{
	if (!ControlledPokemon)
		return 1.f;

	return ControlledPokemon->GetPokemonUIInfo(false).PokemonHPPercent;
}

bool UPokemonDecisionComponent::HasCombatTarget() const
{
	if (!OwningPokemonController || !ControlledPokemon || !ControlledPokemon->CanAct())
	{
		return false;
	}

	AActor* TargetActor = OwningPokemonController->GetCombatTarget();
	APokemon_Parent* TargetPokemon = Cast<APokemon_Parent>(TargetActor);

	if (!TargetPokemon)
	{
		return false;
	}

	return TargetPokemon->CanBeCombatTargeted();
}

void UPokemonDecisionComponent::UpdateNavigationIntent()
{
	if (!CachedNavigationComponent || !OwningPokemonController)
	{
		return;
	}

	if (CachedNavigationComponent->HasActiveNavigationRequest() && CachedNavigationComponent->GetCurrentNavigationIntent().IntentTag == PokemonAITags::NavIntent_PlayerCommand_Move)
	{
		return;
	}

	if (ControlledPokemon && ControlledPokemon->GetIsDodging())
	{
		return;
	}

	AActor* TargetActor = OwningPokemonController->GetCombatTarget();

	const FPokemonGameplayTags& OldTags = FPokemonGameplayTags::Get();

	UPokemonDebugLibrary::PrintMessage(
		ControlledPokemon,
		PokemonDebugTags::AI,
		FString::Printf(TEXT("Updating Navigation Intent | DesiredCombatMode=%s | TargetActor=%s"),
			*DesiredCombatMode.ToString(),
			*GetNameSafe(TargetActor)),
		EPokemonDebugOutputMode::Log
	);

	if (!TargetActor)
	{
		RequestIdleNavigation();
		return;
	}

	if (DesiredCombatMode == OldTags.AI_Decision_Combat_Engage)
	{
		RequestEngageNavigation(TargetActor);
		return;
	}

	if (DesiredCombatMode == OldTags.AI_Decision_Combat_Flee)
	{
		RequestFleeNavigation(TargetActor);
		return;
	}

	if (DesiredCombatMode == OldTags.AI_Decision_Combat_Defensive)
	{
		RequestDefensiveNavigation(TargetActor);
		return;
	}


	RequestIdleNavigation();
}

void UPokemonDecisionComponent::RequestIdleNavigation()
{
	if (!CachedNavigationComponent)
		return;

	CachedNavigationComponent->ClearNavigationIntent();
}

void UPokemonDecisionComponent::RequestEngageNavigation(AActor* TargetActor)
{
	if (!CachedNavigationComponent || !TargetActor)
	{
		return;
	}

	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Approach;
	Request.TargetActor = TargetActor;
	Request.DesiredDistance = 450.f;
	Request.AcceptableRadius = 250.f;
	Request.Urgency = 0.6f;

	CachedNavigationComponent->SetNavigationIntent(Request);
}

void UPokemonDecisionComponent::RequestDefensiveNavigation(AActor* TargetActor)
{
	if (!CachedNavigationComponent || !TargetActor)
	{
		return;
	}

	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Combat_KeepDistance;
	Request.TargetActor = TargetActor;
	Request.DesiredDistance = 800.f;
	Request.AcceptableRadius = 150.f;
	Request.Urgency = 0.5f;

	CachedNavigationComponent->SetNavigationIntent(Request);
}

void UPokemonDecisionComponent::RequestFleeNavigation(AActor* TargetActor)
{
	if (!CachedNavigationComponent || !TargetActor)
	{
		return;
	}

	FAgentNavigationRequest Request;
	Request.IntentTag = PokemonAITags::NavIntent_Flee;
	Request.TargetActor = TargetActor;
	Request.DesiredDistance = 1000.f;
	Request.AcceptableRadius = 150.f;
	Request.Urgency = 1.f;

	CachedNavigationComponent->SetNavigationIntent(Request);
}

FGameplayTag UPokemonDecisionComponent::DetermineDesiredCombatMode(float HPPercent, bool bHasTarget) const
{
	const FPokemonGameplayTags& Tags = FPokemonGameplayTags::Get();

	if (!bHasTarget)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Decision] DetermineDesiredCombatMode | No target | HPPercent=%.2f"), HPPercent);
		return Tags.AI_Decision_Combat_Idle;
	}

	if (HPPercent < .25f && DecisionConfig && DecisionConfig->RiskToTolerance < .4f)
		return Tags.AI_Decision_Combat_Flee;

	// Defensive can be added later with richer conditions
	return Tags.AI_Decision_Combat_Engage;
}

void UPokemonDecisionComponent::SetDesiredCombatMode(FGameplayTag NewCombatMode)
{
	DesiredCombatMode = NewCombatMode;

	if (OwningPokemonController)
	{
		OwningPokemonController->SetBlackboardDesiredCombatMode(NewCombatMode);
	}
}
