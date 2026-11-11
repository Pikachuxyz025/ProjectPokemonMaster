#include "ActorComponents/PokemonStaminaComponent.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameplayEffectTypes.h"
#include "TimerManager.h"

UPokemonStaminaComponent::UPokemonStaminaComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokemonStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

	AbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetOwner());

	if (!AbilitySystemComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("PokemonStaminaComponent: AbilitySystemComponent not found on %s"),
			*GetOwner()->GetName());
		return;
	}

	if (GetOwner() && GetOwner()->HasAuthority())
	{
		StaminaChangedHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
			UPokemonBaseAttributeSet::GetStaminaAttribute()).AddUObject(
				this, &UPokemonStaminaComponent::HandleStaminaChanged);
	}

	const UPokemonBaseAttributeSet* Attributes = GetStaminaAttributesSet();

	if (!Attributes)
	{
		UE_LOG(LogTemp, Warning, TEXT("PokemonStaminaComponent: attribute set not found on %s"),
			*GetNameSafe(GetOwner()));
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("[PokemonStamina] Initialized | Pokemon=%s | Stamina=%.2f/%.2f"),
		*GetNameSafe(GetOwner()),
		Attributes->GetStamina(),
		Attributes->GetMaxStamina());
}

const UPokemonBaseAttributeSet* UPokemonStaminaComponent::GetStaminaAttributesSet() const
{
	return AbilitySystemComponent ? AbilitySystemComponent->GetSet<UPokemonBaseAttributeSet>() : nullptr;
}

float UPokemonStaminaComponent::GetStamina() const 
{
	const UPokemonBaseAttributeSet* Attributes = GetStaminaAttributesSet();
	return Attributes ? Attributes->GetStamina() : 0.f;
}

float UPokemonStaminaComponent::GetMaxStamina() const
{
	const UPokemonBaseAttributeSet* Attributes = GetStaminaAttributesSet();
	return Attributes ? Attributes->GetMaxStamina() : 0.f;
}

bool UPokemonStaminaComponent::CanMutateStamina() const
{
	const AActor* Owner = GetOwner();

	return !bStaminaEndingPlay && IsValid(Owner)
		&& Owner->HasAuthority() && GetWorld() != nullptr;
}

bool UPokemonStaminaComponent::ReadStaminaValues(float& OutCurrent, float& OutMaximum) const
{
	OutCurrent = 0.f;
	OutMaximum = 0.f;

	const UPokemonBaseAttributeSet* Attributes = GetStaminaAttributesSet();
	if (!Attributes)
	{
		return false;
	}

	OutCurrent = Attributes->GetStamina();
	OutMaximum = Attributes->GetMaxStamina();

	return FMath::IsFinite(OutCurrent)
		&& FMath::IsFinite(OutMaximum)
		&& OutCurrent >= 0.f
		&& OutMaximum >= 0.f;
}

bool  UPokemonStaminaComponent::CanSpendStamina(float Cost) const
{
	
	if (!FMath::IsFinite(Cost) || Cost < 0.f)
	{
		return false;
	}
	
	// Preserve the existing zero/negligible-cost convention.
	// Sustained accounting must accumulate smaller amounts before
	// treating an interval as paid.
	if (Cost <= KINDA_SMALL_NUMBER)
	{
		return true;
	}

	float Current = 0.f;
	float Maximum = 0.f;

	return ReadStaminaValues(Current, Maximum)
		&& Maximum > 0.f
		&& Current >= Cost;
}

bool UPokemonStaminaComponent::TrySpendStamina(float Cost)
{
	if (!CanMutateStamina() || !FMath::IsFinite(Cost) || Cost < 0.f)
	{
		return false;
	}

	if (Cost <= KINDA_SMALL_NUMBER)
	{
		return  true;
	}

	if (!AbilitySystemComponent || !CanSpendStamina(Cost))
	{
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonStamina] Spend rejected | ")
			TEXT("Pokemon=%s | Cost=%.4f | Current=%.4f"),
			*GetNameSafe(GetOwner()),
			Cost,
			GetStamina());

		return false;
	}
	{
		// Our attribute-change callback must not schedule regeneration
		// halfway through this operation. External decreases use that 
		// callback; this spend schedules its delay after the GAS write.
		TGuardValue<bool> ApplyingSpend(bApplyingLocalSpend, true);

		AbilitySystemComponent->ApplyModToAttribute(
			UPokemonBaseAttributeSet::GetStaminaAttribute(),
			EGameplayModOp::Additive, -Cost);
	}

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonStamina] Spend accepted | ")
		TEXT("Pokemon=%s | Cost=%.4f | Current=%.4f"),
		*GetNameSafe(GetOwner()),
		Cost,
		GetStamina());

	// GAS listeners may have ended this component during the write.
	// RestartRegenerationDelay performs its own authority/lifetime check.
	RestartRegenerationDelay();

	return true;
}

void UPokemonStaminaComponent::HandleStaminaChanged(
	const FOnAttributeChangeData& Data)
{
	if (!CanMutateStamina() || bApplyingLocalSpend
		|| !FMath::IsFinite(Data.OldValue)
		|| !FMath::IsFinite(Data.NewValue))
	{
		return;
	}

	if (Data.NewValue < Data.OldValue)
	{
		// Other abilities and Gameplay Effects share the same delay
		// and the same two timer handles.
		RestartRegenerationDelay();
	}
}

bool UPokemonStaminaComponent::HasSustainedSpender() const
{
	return SustainedSpendToken.IsValid()
		&& SustainedSpendRequester.IsValid();
}

FGuid UPokemonStaminaComponent::BeginSustainedSpending(UObject* Requester)
{
	if (!CanMutateStamina() || !IsValid(Requester)
		||!AbilitySystemComponent||!GetStaminaAttributesSet())
	{
		return FGuid();
	}

	if (HasSustainedSpender())
	{
		return SustainedSpendRequester.Get() == Requester
			? SustainedSpendToken
			: FGuid();
	}

	SustainedSpendRequester = Requester;
	SustainedSpendToken = FGuid::NewGuid();

	// Preserve RegenerationAllowedAt while suppressing both timers.
	ClearRegenerationTimers();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonStamina] Sustained begin | ")
		TEXT("Pokemon=%s | Requester=%s | Token=%s"),
		*GetNameSafe(GetOwner()),
		*GetNameSafe(Requester),
		*SustainedSpendToken.ToString());

	return SustainedSpendToken;
}

void UPokemonStaminaComponent::EndSustainedSpending(FGuid Token)
{
	if (!CanMutateStamina() || !Token.IsValid() || SustainedSpendToken != Token)
	{
		return;
	}

	// Retire the token before regeneration can invoke GAS callbacks.
	SustainedSpendToken.Invalidate();
	SustainedSpendRequester.Reset();
	ClearRegenerationTimers();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonStamina] Sustained end | ")
		TEXT("Pokemon=%s | Token=%s"),
		*GetNameSafe(GetOwner()),
		*Token.ToString());

	const uint64 ExpectedGeneration = RegenerationGeneration;

	// Retiring an intent must synchronously invoke GAS listeners
	// through an immediate regeneration step.
	// 
	// BeginRegeneration still honors RegenerationAllowedAt. This
	// deferral does not restart the configured regeneration delay.
	RegenDelayTimerHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(
		FTimerDelegate::CreateWeakLambda(this, [this, ExpectedGeneration]()
			{
				if (!CanMutateStamina() || RegenerationGeneration != ExpectedGeneration
					|| HasSustainedSpender())
				{
					return;
				}

				BeginRegeneration();
			}));
}

bool UPokemonStaminaComponent::IsSustainedSpending(FGuid Token) const
{
	return Token.IsValid()
		&& Token == SustainedSpendToken
		&& HasSustainedSpender();
}

bool UPokemonStaminaComponent::HasValidRegenerationConfiguration() const
{
	return FMath::IsFinite(StaminaRegenRate) && StaminaRegenRate >= 0.f
		&& FMath::IsFinite(StaminaRegenDelay) && StaminaRegenDelay >= 0.f
		&& FMath::IsFinite(StaminaRegenTickInterval) && StaminaRegenTickInterval > 0.f;
}


float UPokemonStaminaComponent::GetRegenerationInterval() const
{
	return FMath::Max(0.01f, StaminaRegenTickInterval);
}

void UPokemonStaminaComponent::ClearRegenerationTimers()
{
	++RegenerationGeneration;

	if (UWorld* World = GetWorld())
	{
		FTimerManager& Timers = World->GetTimerManager();

		Timers.ClearTimer(RegenDelayTimerHandle);
		Timers.ClearTimer(RegenTickTimerHandle);
	}
}

void UPokemonStaminaComponent::RestartRegenerationDelay()
{
	if (!CanMutateStamina())
	{
		return;
	}
	ClearRegenerationTimers();

	if (!HasValidRegenerationConfiguration())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonStamina] Invalid regeneration configuration | ")
			TEXT("Pokemon=%s"),
			*GetNameSafe(GetOwner()));

		return;
	}

	RegenerationAllowedAt =
		static_cast<double>(GetWorld()->GetTimeSeconds())
		+ static_cast<double>(StaminaRegenDelay);

	if (!HasSustainedSpender())
	{
		RefreshRegenerationState();
	}
}

void UPokemonStaminaComponent::RefreshRegenerationState()
{
	if (!CanMutateStamina())
	{
		return;
	}

	float Current = 0.f;
	float Maximum = 0.f;

	if (!AbilitySystemComponent
		|| !ReadStaminaValues(Current, Maximum)
		|| Maximum <= 0.f
		|| Current >= Maximum - KINDA_SMALL_NUMBER
		|| !HasValidRegenerationConfiguration()
		|| StaminaRegenRate <= 0.f
		|| HasSustainedSpender())
	{
		ClearRegenerationTimers();
		return;
	}

	FTimerManager& Timers = GetWorld()->GetTimerManager();

	// Repeated refreshes must not bypass the delay or grant extra
	// immediate regeneration steps.
	if (Timers.IsTimerActive(RegenDelayTimerHandle)
		|| Timers.IsTimerActive(RegenTickTimerHandle))
	{
		return;
	}

	const double Remaining =RegenerationAllowedAt- static_cast<double>(GetWorld()->GetTimeSeconds());

	if (Remaining > static_cast<double>(KINDA_SMALL_NUMBER))
	{
		Timers.SetTimer(
			RegenDelayTimerHandle,
			this,
			&ThisClass::BeginRegeneration,
			static_cast<float>(Remaining),
			false);

		return;
	}

	BeginRegeneration();
}

void UPokemonStaminaComponent::BeginRegeneration()
{
	if (!CanMutateStamina())
	{
		return;
	}

	float Current = 0.f;
	float Maximum = 0.f;

	if (!AbilitySystemComponent
		|| !ReadStaminaValues(Current, Maximum)
		|| Maximum <= 0.f
		|| Current >= Maximum - KINDA_SMALL_NUMBER
		|| !HasValidRegenerationConfiguration()
		|| StaminaRegenRate <= 0.f
		|| HasSustainedSpender())
	{
		ClearRegenerationTimers();
		return;
	}

	FTimerManager& Timers = GetWorld()->GetTimerManager();

	const double Remaining =RegenerationAllowedAt- static_cast<double>(GetWorld()->GetTimeSeconds());

	if (Remaining > static_cast<double>(KINDA_SMALL_NUMBER))
	{
		Timers.SetTimer(
			RegenDelayTimerHandle,
			this,
			&ThisClass::BeginRegeneration,
			static_cast<float>(Remaining),
			false);

		return;
	}

	if (Timers.IsTimerActive(RegenTickTimerHandle))
	{
		return;
	}

	Timers.ClearTimer(RegenDelayTimerHandle);

	UE_LOG(
		LogTemp,
		Display,
		TEXT("[PokemonStamina] Regeneration started | ")
		TEXT("Pokemon=%s | Current=%.2f | Max=%.2f"),
		*GetNameSafe(GetOwner()),
		Current,
		Maximum);

	const uint64 ExpectedGeneration = RegenerationGeneration;

	// Preserve the existing immediate first step after the delay.
	RegenerateStamina();

	// A GAS listener may spend again or acquire a sustained token
	// during that first step. Do not overwrite its new schedule.
	if (!CanMutateStamina()
		|| RegenerationGeneration != ExpectedGeneration
		|| HasSustainedSpender())
	{
		return;
	}

	if (!ReadStaminaValues(Current, Maximum)
		|| Maximum <= 0.f
		|| Current >= Maximum - KINDA_SMALL_NUMBER)
	{
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(
		RegenTickTimerHandle,
		this,
		&ThisClass::RegenerateStamina,
		GetRegenerationInterval(),
		true);
}

void UPokemonStaminaComponent::RegenerateStamina()
{
	if (!CanMutateStamina())
	{
		StopRegeneration();
		return;
	}

	float Current = GetStamina();
	float Maximum = GetMaxStamina();

	if (!AbilitySystemComponent
		|| !ReadStaminaValues(Current, Maximum)
		|| Maximum <= 0.f
		|| !HasValidRegenerationConfiguration()
		|| StaminaRegenRate <= 0.f
		|| HasSustainedSpender())
	{
		StopRegeneration();
		return;
	}

	if (static_cast<double>(GetWorld()->GetTimeSeconds())
		+ static_cast<double>(KINDA_SMALL_NUMBER)
		< RegenerationAllowedAt)
	{
		return;
	}

	if (Current >= Maximum - KINDA_SMALL_NUMBER)
	{
		StopRegeneration();
		return;
	}

	const double RequestedAmount = static_cast<double>(StaminaRegenRate)
		* static_cast<double>(GetRegenerationInterval());

	const float ActualAmount = static_cast<float>(
		FMath::Min(
			RequestedAmount,
			static_cast<double>(Maximum - Current)));

	if (!FMath::IsFinite(ActualAmount) || ActualAmount <= 0.f)
	{
		StopRegeneration();
		return;
	}

	const uint64 ExpectedGeneration = RegenerationGeneration;

	AbilitySystemComponent->ApplyModToAttribute(UPokemonBaseAttributeSet::GetStaminaAttribute(),
		EGameplayModOp::Additive,
		ActualAmount);

	if (!CanMutateStamina() || RegenerationGeneration != ExpectedGeneration)
	{
		return;
	}

	if (!ReadStaminaValues(Current, Maximum) || Maximum <= 0.f
		|| Current >= Maximum - KINDA_SMALL_NUMBER)
	{
		StopRegeneration();
	}
}

void UPokemonStaminaComponent::StopRegeneration()
{
	++RegenerationGeneration;

	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(RegenTickTimerHandle);
	}
}

bool UPokemonStaminaComponent::IsRegenerating() const
{
	return GetWorld() && GetWorld()->GetTimerManager().IsTimerActive(RegenTickTimerHandle);
}

void UPokemonStaminaComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	bStaminaEndingPlay = true;

	if (AbilitySystemComponent && StaminaChangedHandle.IsValid())
	{
		AbilitySystemComponent
			->GetGameplayAttributeValueChangeDelegate(
				UPokemonBaseAttributeSet::GetStaminaAttribute())
			.Remove(StaminaChangedHandle);
	}

	StaminaChangedHandle.Reset();

	// EndPlay must not resume regeneration while retiring the token.
	SustainedSpendToken.Invalidate();
	SustainedSpendRequester.Reset();

	ClearRegenerationTimers();

	Super::EndPlay(EndPlayReason);
}