#include "Animation/PokemonAnimInstance.h"

#include "ActorComponents/PokemonCombatStateComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"

void UPokemonAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	CachePokemonReferences();
}

void UPokemonAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!OwningPokemon)
	{
		CachePokemonReferences();
	}

	if (!OwningPokemon)
	{
		return;
	}

	UpdateMovementData(DeltaSeconds);
	UpdateCombatStateData();
}

void UPokemonAnimInstance::CachePokemonReferences()
{
	APawn* OwningPawn = TryGetPawnOwner();
	OwningPokemon = Cast<APokemon_Parent>(OwningPawn);

	if (!OwningPokemon)
	{
		return;
	}

	CharacterMovementComponent = OwningPokemon->FindComponentByClass<UCharacterMovementComponent>();
	CombatStateComponent = OwningPokemon->GetCombatStateComponent();
}

void UPokemonAnimInstance::UpdateMovementData(float DeltaSeconds)
{
	if (!OwningPokemon)
	{
		return;
	}

	WorldVelocity = OwningPokemon->GetVelocity();

	const FVector HorizontalVelocity(WorldVelocity.X, WorldVelocity.Y, 0.f);
	GroundSpeed = HorizontalVelocity.Size();
	VerticalSpeed = WorldVelocity.Z;

	const FTransform ActorTransform = OwningPokemon->GetActorTransform();
	LocalVelocity = ActorTransform.InverseTransformVectorNoScale(WorldVelocity);

	bIsMoving = GroundSpeed > 3.f;

	if (CharacterMovementComponent)
	{
		bIsFalling = CharacterMovementComponent->IsFalling();
		bIsAccelerating = CharacterMovementComponent->GetCurrentAcceleration().SizeSquared() > 0.f;
	}
	else
	{
		bIsFalling = false;
		bIsAccelerating = false;
	}

	Direction = CalculateDirection(WorldVelocity, OwningPokemon->GetActorRotation());
}

void UPokemonAnimInstance::UpdateCombatStateData()
{
	if (!OwningPokemon)
	{
		return;
	}

	bCanAct = OwningPokemon->CanAct();
	bIsFainted = OwningPokemon->IsFainted();

	ActiveCombatStates.Reset();

	bIsRecovering = false;
	bIsHitStunned = false;
	bIsBlockStunned = false;
	bIsClashing = false;
	bIsLaunched = false;
	bIsVulnerable = false;

	if (!CombatStateComponent)
	{
		CombatStateComponent = OwningPokemon->GetCombatStateComponent();
	}

	if (!CombatStateComponent)
	{
		return;
	}

	ActiveCombatStates = CombatStateComponent->GetActiveCombatStates();

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	bIsRecovering = ActiveCombatStates.HasTagExact(CombatTags.Combat_State_Recovering);
	bIsHitStunned = ActiveCombatStates.HasTagExact(CombatTags.Combat_State_HitStun);
	bIsBlockStunned = ActiveCombatStates.HasTagExact(CombatTags.Combat_State_BlockStun);
	bIsClashing = ActiveCombatStates.HasTagExact(CombatTags.Combat_State_Clashing);
	bIsLaunched = ActiveCombatStates.HasTagExact(CombatTags.Combat_State_Launched);
	bIsVulnerable = ActiveCombatStates.HasTagExact(CombatTags.Combat_State_Vulnerable);
}