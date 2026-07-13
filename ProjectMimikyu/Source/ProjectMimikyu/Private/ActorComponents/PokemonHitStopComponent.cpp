#include "ActorComponents/PokemonHitStopComponent.h"

#include "ActorComponents/PokemonCombatStateComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokemonHitStop, Log, All);

UPokemonHitStopComponent::UPokemonHitStopComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
}

void UPokemonHitStopComponent::ApplyHitStop(float Duration)
{
	AActor* OwnerActor = GetOwner();
	if(!OwnerActor||Duration<=0.f)
	{
		return;
	}

	if (!OwnerActor->HasAuthority())
	{
		return;
	}

	MulticastApplyHitStop(Duration);
}

void UPokemonHitStopComponent::ClearHitStop()
{
	AActor* OwnerActor = GetOwner();

	if (!OwnerActor||!OwnerActor->HasAuthority())
	{
		return;
	}
	MulticastClearHitStop();
}

void UPokemonHitStopComponent::MulticastApplyHitStop_Implementation(float Duration)
{
	ApplyHitStopLocal(Duration);
}

void UPokemonHitStopComponent::MulticastClearHitStop_Implementation()
{
	ClearHitStopLocal();
}

void UPokemonHitStopComponent::ApplyHitStopLocal(float Duration)
{
	AActor* OwnerActor = GetOwner();
	UWorld* World = GetWorld();

	if (!OwnerActor || !World || Duration <= 0.f)
	{
		return;
	}

	FTimerManager& TimerManager = World->GetTimerManager();

	const float ExistingRemaining = bHitStopActive && TimerManager.IsTimerActive(HitStopTimerHandle)
		? TimerManager.GetTimerRemaining(HitStopTimerHandle)
		: 0.f;

	// Extend only when the new request is longer
	if (bHitStopActive && ExistingRemaining >= Duration - KINDA_SMALL_NUMBER)
	{
		UE_LOG(
			LogPokemonHitStop,
			Verbose,
			TEXT("[PokemonHitStop] Existing hitstop is already longer. Actor=%s Existing=%.3f Requested=%.3f"),
			*GetNameSafe(OwnerActor),
			ExistingRemaining,
			Duration
		);

		return;
	}

	if (!bHitStopActive)
	{
		bHitStopActive = true;

		SavedCustomTimeDilation =
			OwnerActor->CustomTimeDilation;

		if (bPauseSkeletalAnimation)
		{
			CachedSkeletalMesh =
				OwnerActor->FindComponentByClass<
				USkeletalMeshComponent>();

			if (CachedSkeletalMesh.IsValid())
			{
				SavedGlobalAnimRateScale =
					CachedSkeletalMesh->GlobalAnimRateScale;

				CachedSkeletalMesh->GlobalAnimRateScale = 0.f;
			}
		}

		if (bPauseCombatStateTimers)
		{
			if (UPokemonCombatStateComponent* CombatStateComponent =
				OwnerActor->FindComponentByClass<
				UPokemonCombatStateComponent>())
			{
				CombatStateComponent->PauseCombatStateTimers();
			}
		}
	}

	OwnerActor->CustomTimeDilation =
		FMath::Clamp(HitStopTimeDilation, 0.001f, 1.f);

	TimerManager.ClearTimer(HitStopTimerHandle);

	TimerManager.SetTimer(
		HitStopTimerHandle,
		this,
		&UPokemonHitStopComponent::ClearHitStopLocal,
		Duration,
		false
	);

	OnHitStopChanged.Broadcast(true, Duration);

	UE_LOG(
		LogPokemonHitStop,
		Display,
		TEXT("[PokemonHitStop] Applied. Actor=%s Duration=%.3f PreviousRemaining=%.3f TimeDilation=%.3f"),
		*GetNameSafe(OwnerActor),
		Duration,
		ExistingRemaining,
		OwnerActor->CustomTimeDilation
	);
}

void UPokemonHitStopComponent::ClearHitStopLocal()
{
	if (!bHitStopActive)
	{
		return;
	}

	AActor* OwnerActor = GetOwner();

	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(HitStopTimerHandle);
	}

	if (OwnerActor)
	{
		OwnerActor->CustomTimeDilation = SavedCustomTimeDilation;

		if (CachedSkeletalMesh.IsValid())
		{
			CachedSkeletalMesh->GlobalAnimRateScale = SavedGlobalAnimRateScale;
					}
	
		if (bPauseCombatStateTimers)
		{
			if(UPokemonCombatStateComponent* CombatStateComponent = OwnerActor->FindComponentByClass<UPokemonCombatStateComponent>())
			{
				CombatStateComponent->ResumeCombatStateTimers();
			}
		}
	}

	bHitStopActive = false;
	CachedSkeletalMesh.Reset();

	OnHitStopChanged.Broadcast(false, 0.f);

	UE_LOG(
		LogPokemonHitStop,
		Display,
		TEXT("[PokemonHitStop] Cleared. Actor=%s TimeDilation=%.3f"),
		*GetNameSafe(OwnerActor),
		OwnerActor ? OwnerActor->CustomTimeDilation : 0.f
	);
}

float UPokemonHitStopComponent::GetHitStopRemainingTime() const
{
	if (!bHitStopActive)
	{
		return 0.f;
	}

	const UWorld* World = GetWorld();

	if (!World)
	{
		return 0.f;
	}

	return FMath::Max(
		0.f,
		World->GetTimerManager().GetTimerRemaining(
			HitStopTimerHandle)
	);
}

void UPokemonHitStopComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ClearHitStop();
	Super::EndPlay(EndPlayReason);
}
