


#include "ActorComponents/PokemonStaminaComponent.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
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
		UE_LOG(LogTemp, Warning, TEXT("PokemonStaminaComponent: AbilitySystemComponent not found on %s"), *GetOwner()->GetName());
		return;
	}

	const UPokemonBaseAttributeSet* AttributesSet = GetStaminaAttributesSet();

	if (!AttributesSet)
	{
		UE_LOG(LogTemp, Warning, TEXT("PokemonStaminaComponent: PokemonBaseAttributeSet not found on %s"), *GetOwner()->GetName());
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("PokemonStaminaComponent: Initialized | Pokemon=%s | Stamina=%.1f/%.1f"), *GetOwner()->GetName(), AttributesSet->GetStamina(), AttributesSet->GetMaxStamina());
}

const UPokemonBaseAttributeSet* UPokemonStaminaComponent::GetStaminaAttributesSet() const
{
	if (!AbilitySystemComponent)
	{
		return nullptr;
	}
	return AbilitySystemComponent->GetSet<UPokemonBaseAttributeSet>();
}

float UPokemonStaminaComponent::GetStamina() const 
{
	const UPokemonBaseAttributeSet* AttributesSet = GetStaminaAttributesSet();
	return AttributesSet ? AttributesSet->GetStamina() : 0.f;
}

float UPokemonStaminaComponent::GetMaxStamina() const
{
	const UPokemonBaseAttributeSet* AttributesSet = GetStaminaAttributesSet();
	return AttributesSet ? AttributesSet->GetMaxStamina() : 0.f;
}

bool  UPokemonStaminaComponent::CanSpendStamina(float Cost) const
{
	const float SafeCost = FMath::Max(0.f, Cost);
	
	if (SafeCost <= KINDA_SMALL_NUMBER)
	{
		return true;
	}

	const UPokemonBaseAttributeSet* AttributesSet = GetStaminaAttributesSet();

	if (!AttributesSet)
	{
		return false;
	}

	return AttributesSet->GetStamina() >= SafeCost;
}

bool UPokemonStaminaComponent::TrySpendStamina(float Cost)
{
	AActor* Owner = GetOwner();

	if (!Owner || !Owner->HasAuthority())
	{
		return  false;
	}

	const float SafeCost = FMath::Max(0.f, Cost);

	if (SafeCost <= KINDA_SMALL_NUMBER)
	{
		return true;
	}

	if (!AbilitySystemComponent || !CanSpendStamina(SafeCost))
	{
		UE_LOG(LogTemp, Display,
			TEXT(
				"[PokemonStamina] Spend rejected | "
				"Pokemon=%s | Cost=%.1f | Current=%.1f"
			),
			*GetNameSafe(Owner),
			SafeCost,
			GetStamina()
		);
		return false;
	}

	AbilitySystemComponent->ApplyModToAttribute(UPokemonBaseAttributeSet::GetStaminaAttribute(), EGameplayModOp::Additive, -SafeCost);

	UE_LOG(LogTemp, Display, TEXT("[PokemonStamina] Spend accepted | Pokemon=%s | Cost=%.1f | Current=%.1f"), *GetNameSafe(Owner), SafeCost, GetStamina());

	RestartRegenerationDelay();
	return true;
}

void UPokemonStaminaComponent::RestartRegenerationDelay()
{
	if (!GetWorld())
	{
		return;
	}

	FTimerManager& TimerManager = GetWorld()->GetTimerManager();

	TimerManager.ClearTimer(RegenDelayTimerHandle);
	TimerManager.ClearTimer(RegenTickTimerHandle);

	if (StaminaRegenDelay <= KINDA_SMALL_NUMBER)
	{
		BeginRegeneration();
		return;
	}

	TimerManager.SetTimer(RegenDelayTimerHandle, this, &UPokemonStaminaComponent::BeginRegeneration, StaminaRegenDelay, false);
}

void UPokemonStaminaComponent::BeginRegeneration()
{
	if (!GetWorld()||!GetOwner()->HasAuthority())
	{
		return;
	}

	if (GetStamina() >= GetMaxStamina())
	{
		return;
	}

	if (StaminaRegenRate <= 0.f)
	{
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("[PokemonStamina] Regeneration started | Pokemon=%s | Current=%.1f | Max=%.1f"), *GetNameSafe(GetOwner()), GetStamina(), GetMaxStamina());

	// Give the first regeneration step immediately after the regeration delay expires
	RegenerateStamina();

	if (!GetWorld())
	{
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(RegenTickTimerHandle, this, &UPokemonStaminaComponent::RegenerateStamina, FMath::Max(0.01f, StaminaRegenTickInterval), true);
}

void UPokemonStaminaComponent::RegenerateStamina()
{
	if (!GetOwner() || !GetOwner()->HasAuthority())
	{
		StopRegeneration();
		return;
	}

	if (!AbilitySystemComponent)
	{
		StopRegeneration();
		return;
	}

	const float CurrentStamina = GetStamina();
	const float MaxStamina = GetMaxStamina();

	if (CurrentStamina >= MaxStamina - KINDA_SMALL_NUMBER)
	{
		StopRegeneration();
		return;
	}

	const float TickInterval = FMath::Max(0.01f, StaminaRegenTickInterval);

	const float RegenAmount = StaminaRegenRate * TickInterval;

	// Don't overshoot MaxStamina
	const float ActualRegenAmount = FMath::Min(RegenAmount, MaxStamina - CurrentStamina);

	AbilitySystemComponent->ApplyModToAttribute(UPokemonBaseAttributeSet::GetStaminaAttribute(), EGameplayModOp::Additive, ActualRegenAmount);

	if (GetStamina() >= GetMaxStamina() - KINDA_SMALL_NUMBER)
	{
		StopRegeneration();
	}
}

void UPokemonStaminaComponent::StopRegeneration()
{
	if (!GetWorld())
	{
		return;
	}

	if (GetWorld()->GetTimerManager().IsTimerActive(RegenTickTimerHandle))
	{
		UE_LOG(LogTemp, Display, TEXT(
			"[PokemonStamina] Regeneration complete | "
			"Pokemon=%s | Stamina=%.1f/%.1f"
		),
			*GetNameSafe(GetOwner()),
			GetStamina(),
			GetMaxStamina()
		);
	}
	GetWorld()->GetTimerManager().ClearTimer(RegenTickTimerHandle);
}

void UPokemonStaminaComponent::RefreshRegenerationState()
{
	const UPokemonBaseAttributeSet* AttributeSet = GetStaminaAttributesSet();

	if (!AbilitySystemComponent || !AttributeSet)
	{
		return;
	}

	const float CurrentStamina = AttributeSet->GetStamina();
	const float MaxStamina = AttributeSet->GetMaxStamina();

	if (MaxStamina <= 0.0f)
	{
		return;
	}

	if (CurrentStamina >= MaxStamina)
	{
		StopRegeneration();
		return;
	}
	BeginRegeneration();
}

bool UPokemonStaminaComponent::IsRegenerating() const
{
	return GetWorld() && GetWorld()->GetTimerManager().IsTimerActive(RegenTickTimerHandle);
}

void UPokemonStaminaComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(RegenDelayTimerHandle);

		GetWorld()->GetTimerManager().ClearTimer(RegenTickTimerHandle);
	}

	Super::EndPlay(EndPlayReason);
}