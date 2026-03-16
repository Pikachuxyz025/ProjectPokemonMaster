// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/PokemonBrainComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "DataAssets/PokemonAICombatBrainConfig.h"
#include "AIControllers/PokemonAIController.h"

UPokemonBrainComponent::UPokemonBrainComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPokemonBrainComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPokemonBrainComponent::StartLogic()
{
	Super::StartLogic();

	// The StartLogic function is responsible for initializing the brain's thinking process. It checks if the BrainConfig is set, caches necessary references, and sets up the initial timing for thinking.
	//validate config
	// set active
	// schedule first think
	// emit debug log

	if (!BrainConfig)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Brain] StartLogic | No Brain Config set for Controller=%s | Pawn=%s"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon));
		return;
	}
	CacheReferences();

	if (!OwningPokemonController || !ControlledPokemon)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Brain] StartLogic | Missing references for Controller=%s | Pawn=%s"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon));
		return;
	}

	bBrainActive= true;

	const float Now = GetCurrentWorldTime();
	NextThinkTime = Now + GetRandomThinkInterval();
	CommitUntilTime = Now;

	UE_LOG(LogTemp, Warning, TEXT("[Brain] StartLogic | Controller=%s | Pawn=%s | Config=%s | NextThinkTime=%.2f"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon), *GetNameSafe(BrainConfig), NextThinkTime);
}

void UPokemonBrainComponent::StopLogic(const FString& Reason)
{
	Super::StopLogic(Reason);

	bBrainActive = false;

	UE_LOG(LogTemp, Warning, TEXT("[Brain] StopLogic | Controller=%s | Pawn=%s | Reason=%s"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon), *Reason);
}

void UPokemonBrainComponent::RestartLogic()
{
	Super::RestartLogic();

	UE_LOG(LogTemp, Warning, TEXT("[Brain] RestartLogic | Controller=%s | Pawn=%s"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon));
	StopLogic("RestartLogic called");
	StartLogic();
}

void UPokemonBrainComponent::InitializeBrain(APokemonAIController* InPokemonController)
{
	OwningPokemonController = InPokemonController;
	CacheReferences();

	UE_LOG(LogTemp, Warning, TEXT("[Brain] InitializeBrain | Controller=%s | Pawn=%s | Config=%s"),
		*GetNameSafe(OwningPokemonController),
		*GetNameSafe(ControlledPokemon),
		*GetNameSafe(BrainConfig));
}

void UPokemonBrainComponent::SetBrainConfig(UPokemonAICombatBrainConfig* NewConfig)
{
	BrainConfig = NewConfig;

	UE_LOG(LogTemp, Warning, TEXT("[Brain] SetBrainConfig | Controller=%s | Pawn=%s | Config=%s"),
		*GetNameSafe(OwningPokemonController),
		*GetNameSafe(ControlledPokemon),
		*GetNameSafe(BrainConfig));
}

void UPokemonBrainComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bBrainActive)return;

	const float Now = GetCurrentWorldTime();

	if (!ShouldThinkNow(Now))
	{
		return;
	}

	RunThink();
}

bool UPokemonBrainComponent::CanThink() const
{
	return false;
}

bool UPokemonBrainComponent::ShouldThinkNow(float CurrentTime) const
{
	if(!bBrainActive||!BrainConfig)
		return false;

	if (CurrentTime < NextThinkTime)
		return false;

	if (CurrentTime < CommitUntilTime && !HasUrgentInterrupt())
		return false;
	return true;
}

bool UPokemonBrainComponent::HasUrgentInterrupt() const
{
	return bUrgentInterruptedRequested;
}

void UPokemonBrainComponent::ClearUrgentInterrupt()
{
	bUrgentInterruptedRequested = false;
}

void UPokemonBrainComponent::CacheReferences()
{
	if (!OwningPokemonController) return;

	ControlledPokemon = Cast<APokemon_Parent>(OwningPokemonController->GetPawn());

	if (ControlledPokemon)
	{
		CachedPokemonASC = ControlledPokemon->GetPokemonASC();
	}
}

// First-pass RunThink without full context struct
// The goal is to prove:
//the component is alive
//it can read the pawn / controller
//it can branch on simple combat info
//it uses the config values 
void UPokemonBrainComponent::RunThink()
{
	if (!OwningPokemonController || !ControlledPokemon || !BrainConfig)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Brain] RunThink | Missing references for Controller=%s | Pawn=%s"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon));
		return;
	}
	// Example decision logic based on HP and combat target
	const float HPPercent = GetHPPercent();
	const bool bHasTarget = HasCombatTarget();
	const float Now = GetCurrentWorldTime();

	float DeltaSinceLast = 0.f;

	if (LastDecisionTime > 0.f)
	{
		DeltaSinceLast = Now - LastDecisionTime;

		UE_LOG(LogTemp, Warning,
			TEXT("[Brain] Think | Time=%.2f | DeltaSinceLast=%.2f | NextThink=%.2f | CommitUntil=%.2f"),
			Now,
			DeltaSinceLast,
			NextThinkTime,
			CommitUntilTime);
	}
	if (bHasTarget && HPPercent > 0.5f)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Brain] RunThink | Decision: Attack | Controller=%s | Pawn=%s | HP=%.2f%%"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon), HPPercent * 100.f);
	}
	else if (bHasTarget && HPPercent <= 0.5f)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Brain] RunThink | Decision: Defend | Controller=%s | Pawn=%s | HP=%.2f%%"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon), HPPercent * 100.f);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[Brain] RunThink | Decision: Idle | Controller=%s | Pawn=%s | HP=%.2f%%"), *GetNameSafe(OwningPokemonController), *GetNameSafe(ControlledPokemon), HPPercent * 100.f);
	}
	LastDecisionTime = GetCurrentWorldTime();
}

void UPokemonBrainComponent::DebugLogState() const
{
}

float UPokemonBrainComponent::GetCurrentWorldTime() const
{
	const UWorld* World = GetWorld();
	return World ? World->GetTimeSeconds() : 0.0f;
}

float UPokemonBrainComponent::GetRandomThinkInterval() const
{
	if (!BrainConfig)
		return 1.f;

	return FMath::RandRange(BrainConfig->ThinkIntervalMin, BrainConfig->ThinkIntervalMax);
}

float UPokemonBrainComponent::GetRandomCommitTime() const
{
	if (!BrainConfig)
		return .5f;

	return FMath::RandRange(BrainConfig->CommitTimeMin, BrainConfig->CommitTimeMax);
}

float UPokemonBrainComponent::GetHPPercent() const
{
	if (!ControlledPokemon)
		return 1.f;

	return ControlledPokemon->GetPokemonUIInfo(false).PokemonHPPercent;
}

bool UPokemonBrainComponent::HasCombatTarget() const
{
	return OwningPokemonController && OwningPokemonController->GetCombatTarget() != nullptr;
}
