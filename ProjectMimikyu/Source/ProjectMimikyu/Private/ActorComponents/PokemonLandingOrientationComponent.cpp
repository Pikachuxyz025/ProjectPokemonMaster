


#include "ActorComponents/PokemonLandingOrientationComponent.h"
#include "ActorComponents/TargetableComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "GameFramework/CharacterMovementComponent.h"

UPokemonLandingOrientationComponent::UPokemonLandingOrientationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickGroup = TG_PostPhysics;
}

bool UPokemonLandingOrientationComponent::ArmWhiffFacing(FGuid CommandId, const FPokemonCommandTarget& Target)
{
	FacingTargetActor = Target.TargetActor.Get();
	FacingTargetPointTag = Target.TargetPointTag;

	bHasFixedTarget =Target.IsWorldTarget() && Target.HasTargetLocation();

	FixedTargetLocation = Target.TargetLocation;

	SourceCommandId = CommandId;

	bArmed = true;
	bAirborneOwnsYaw = true;
	bLandingObserved = false;
	bPivotActive = false;

	ArmedWorldTime = GetWorld()->GetTimeSeconds();
	SetComponentTickEnabled(true);
	return true;
}

void UPokemonLandingOrientationComponent::ReleaseAfterAirborneRecovery(FGuid CommandId)
{
	if (CommandId.IsValid() && CommandId == SourceCommandId)
	{
		bAirborneOwnsYaw = false;
		TryBeginGroundedPivot();
	}
}

//
// Custom summary:
// The cancel landing facing function clears the component's state
// and restores the Pokemon's rotation ownership if it was previously acquired.
// It'll also disable ticking to prevent further updates until a new command is issued.
//
void UPokemonLandingOrientationComponent::CancelLandingFacing(FGuid ExpectedCommandId)
{
	// 1. If the caller is expecting a specific command, ignore if it doesn't match
	// Only cancel the intended command.
	if (ExpectedCommandId.IsValid() && ExpectedCommandId != SourceCommandId)
	{
		return;
	}

	// 2. Restore rotation owneship if we aquired it
	if (bPivotActive)
	{
		if (APokemon_Parent* Pokemon = PokemonOwner.Get())
		{
			Pokemon->bUseControllerRotationYaw = bSavedControllerYaw;
			if (UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement())
			{
				Movement->bOrientRotationToMovement = bSavedOrientToMovement;
				Movement->bUseControllerDesiredRotation = bSavedDesiredRotation;
			}
		}
	}

	// 3. Clear our runtime state
	bPivotActive = false;
	bArmed = false;
	bAirborneOwnsYaw = false;
	bLandingObserved = false;
	bHasFixedTarget = false;

	FacingTargetActor.Reset();
	FacingTargetPointTag = FGameplayTag();
	FixedTargetLocation = FVector::ZeroVector;

	SourceCommandId.Invalidate();

	PivotElapsedTime = 0.f;
	ArmedWorldTime = 0.f;

	// 4. Disable ticking. No further updates are needed
	SetComponentTickEnabled(false);
}


// Called when the game starts
void UPokemonLandingOrientationComponent::BeginPlay()
{
	Super::BeginPlay();

	PokemonOwner = Cast<APokemon_Parent>(GetOwner());

	if (APokemon_Parent* Pokemon = PokemonOwner.Get())
	{
		if (Pokemon->HasAuthority())
		{
			Pokemon->LandedDelegate.AddDynamic(this, &UPokemonLandingOrientationComponent::HandleLanded);
			Pokemon->MovementModeChangedDelegate.AddDynamic(this, &UPokemonLandingOrientationComponent::HandleMovementModeChanged);
		}
	}
}

void UPokemonLandingOrientationComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (APokemon_Parent* Pokemon = PokemonOwner.Get())
	{
		Pokemon->LandedDelegate.RemoveDynamic(this, &UPokemonLandingOrientationComponent::HandleLanded);
		Pokemon->MovementModeChangedDelegate.RemoveDynamic(this, &UPokemonLandingOrientationComponent::HandleMovementModeChanged);
	}
	CancelLandingFacing();
	Super::EndPlay(EndPlayReason);
}


//
// Custom summary:
// The tick component function is current being used to pivot the Pokemon's rotation to face a target after landing.
// Once the pivot is complete, or if the pivot times out, the component will release control back to the character movement component.
//
void UPokemonLandingOrientationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	APokemon_Parent* Pokemon = PokemonOwner.Get();

	if (!Pokemon || !bArmed)
	{
		return;
	}

	// The airborne Gameplay Ability still controls orientation,
	// or the grounded pivot has not yet begun
	if (bAirborneOwnsYaw || !bPivotActive)
	{
		const UWorld* World = GetWorld();

		if (World && PendingFacingTimeout > 0.f)
		{
			const float TimeWaiting = World->GetTimeSeconds() - ArmedWorldTime;

			if (TimeWaiting >= PendingFacingTimeout)
			{
				UE_LOG(LogTemp, Display, TEXT("[LandingOrientation] PendingTimeout | CommandId=%s"),
					*SourceCommandId.ToString());

				CancelLandingFacing(SourceCommandId);
			}
		}

		return;
	}

	UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement();

	if (!Movement || !Movement->IsMovingOnGround())
	{
		CancelLandingFacing(SourceCommandId);
		return;
	}

	PivotElapsedTime += FMath::Max(0.f, DeltaTime);

	FVector TargetLocation;

	if (!ResolveFacingTarget(TargetLocation))
	{
		UE_LOG(LogTemp, Display,
			TEXT("[LandingOrientation] PivotCancelled | Reason=TargetLost"));

		CancelLandingFacing(SourceCommandId);
		return;
	}



	FVector Direction = TargetLocation - Pokemon->GetActorLocation();

	Direction.Z = 0.f;

	if (Direction.IsNearlyZero())
	{
		UE_LOG(LogTemp, Display,
			TEXT("[LandingOrientation] PivotFinished | Reason=NoPlanarDirection"));

		CancelLandingFacing(SourceCommandId);
		return;
	}

	FRotator Current = Pokemon->GetActorRotation();

	const float DesiredYaw = Direction.Rotation().Yaw;

	UE_LOG(LogTemp, Display,
		TEXT("[LandingOrientation] Pivoting | CommandId=%s | CurrentYaw=%.2f | DesiredYaw=%.2f | DeltaTime=%.3f"),
		*SourceCommandId.ToString(),
		Current.Yaw,
		DesiredYaw,
		DeltaTime);

	Current.Yaw = FMath::FixedTurn(
		Current.Yaw,
		DesiredYaw,
		PrototypePivotYawSpeed * DeltaTime);

	Pokemon->SetActorRotation(Current);

	const float RemainingYaw = FMath::Abs(FMath::FindDeltaAngleDegrees(Current.Yaw, DesiredYaw));


	UE_LOG(LogTemp, Display,
		TEXT("[LandingOrientation] Pivoting | RemainingYaw=%.2f | ElapsedTime=%.3f"),
		RemainingYaw,
		PivotElapsedTime);

	if (RemainingYaw <= PivotAlignmentTolerance)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[LandingOrientation] PivotFinished | Reason=Aligned"));

		CancelLandingFacing(SourceCommandId);
		return;
	}


	if (PivotElapsedTime >= PrototypePivotDuration)
	{
		UE_LOG(LogTemp, Display, TEXT("[LandingOrientation] PivotFinished | Reason=Timeout"));

		CancelLandingFacing(SourceCommandId);
	}
}

void UPokemonLandingOrientationComponent::HandleLanded(const FHitResult& Hit)
{
	if (!bArmed)
	{
		return;
	}

	bLandingObserved = true;

	UE_LOG(LogTemp, Display,TEXT("[LandingOrientation] Landed | CommandId=%s"),*SourceCommandId.ToString());
}

void UPokemonLandingOrientationComponent::HandleMovementModeChanged(ACharacter* Character, EMovementMode PrevioustMode, uint8 PreviousCustomMode)
{
	APokemon_Parent* Pokemon = PokemonOwner.Get();

	if (!bArmed || Character != Pokemon)
	{
		return;
	}

	if (Pokemon->GetCharacterMovement()->IsMovingOnGround())
	{
		TryBeginGroundedPivot();
	}
}

// The trybegin grounded pivot function is called when the Pokemon has landed
	// and the airborne ability has released orientation control.
	// The pokemon will set its rotation to face the target over a short duration, 
	// then release control back to the character movement component.

void UPokemonLandingOrientationComponent::TryBeginGroundedPivot()
{
	// The facing intention must be ready for grounded handoff
	if (!bArmed || !bLandingObserved || bAirborneOwnsYaw || bPivotActive)
	{
		return;
	}

	
	APokemon_Parent* Pokemon = PokemonOwner.Get();

	if (!Pokemon||!Pokemon->HasAuthority())
	{
		return;
	}

	UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement();

	// LandedDelegate may fire before movement mode changes.
	if (!Movement || !Movement->IsMovingOnGround())
	{
		return;
	}

	// if there's a target location, begin pivoting to face it
	FVector TargetLocation;

	if (!ResolveFacingTarget(TargetLocation))
	{
		CancelLandingFacing(SourceCommandId);
		return;
	}

	// Save the character's existing rotation configuration.
	bSavedControllerYaw = Pokemon->bUseControllerRotationYaw;

	bSavedOrientToMovement = Movement->bOrientRotationToMovement;

	bSavedDesiredRotation = Movement->bUseControllerDesiredRotation;

	// The landing component now owns actor yaw
	Pokemon->bUseControllerRotationYaw = false;
	Movement->bOrientRotationToMovement = false;
	Movement->bUseControllerDesiredRotation = false;

	PivotElapsedTime = 0.f;
	bPivotActive = true;

	SetComponentTickEnabled(true);

	UE_LOG(LogTemp, Display, TEXT("[LandingOrientation] Begin Pivot | CommandId=%s"), *SourceCommandId.ToString());
}

//
// Custom summary:
// The resolve facing target function determines the appropriate
// location for the Pokemon to face with a living target as its priority.
// If a living target isn't available, it will fall back to a fixed world location if one was provided.
//
bool UPokemonLandingOrientationComponent::ResolveFacingTarget(FVector& OutLocation) const
{
	OutLocation = FVector::ZeroVector;

	// No active facing intention
	if (!bArmed)
	{
		return false;
	}

	// Prefer the current position of a living target actor
	if (AActor* TargetActor = FacingTargetActor.Get())
	{
		if (IsValid(TargetActor))
		{
			// Try the specific target point selected
			// when the original command was issued.
			if (UTargetableComponent* Targetable = TargetActor->FindComponentByClass<UTargetableComponent>())
			{
				FVector PointLocation;
				if (Targetable->GetTargetPointWorldLocation(FacingTargetPointTag, PointLocation)
					&& !PointLocation.ContainsNaN())
				{
					OutLocation = PointLocation;
					return true;
				}
			}

			// The actor exists, but its target point
			// could not be resolved. Use the actor's current location instead.
			OutLocation = TargetActor->GetActorLocation();
			return true;
		}
	}

	// Static world-location command do not require
	// an actor to remain alive
	if (bHasFixedTarget && !FixedTargetLocation.ContainsNaN())
	{
		OutLocation = FixedTargetLocation;
		return true;
	}

	// No valid facing target remains
	return false;
}


