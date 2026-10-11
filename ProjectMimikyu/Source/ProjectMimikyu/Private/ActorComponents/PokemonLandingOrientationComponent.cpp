


#include "ActorComponents/PokemonLandingOrientationComponent.h"
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

void UPokemonLandingOrientationComponent::CancelLandingFacing(FGuid ExpectedCommandId)
{
	// verify the expected command ID,
	// release the pending target,
	// restore rotation settings if a pivot owns them,
	// and disable component ticking
	if (ExpectedCommandId.IsValid() && ExpectedCommandId != SourceCommandId)
	{
		return;
	}

	ReleaseAfterAirborneRecovery(SourceCommandId);


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
}


// Called every frame
void UPokemonLandingOrientationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	APokemon_Parent* Pokemon = PokemonOwner.Get();

	if (!Pokemon||!bArmed)
	{
		return;
	}

	// The airborne Gameplay Ability still controls orientation,
	// or the grounded pivot has not yet begun
	if (bAirborneOwnsYaw || !bPivotActive)
	{
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

	if (ResolveFacingTarget(TargetLocation))
	{
		FVector Direction = TargetLocation - Pokemon->GetActorLocation();

		Direction.Z = 0.f;

		if (!Direction.IsNearlyZero())
		{
			FRotator Current = Pokemon->GetActorRotation();

			const float DesiredYaw = Direction.Rotation().Yaw;

			Current.Yaw = FMath::FixedTurn(
				Current.Yaw,
				DesiredYaw,
				PrototypePivotYawSpeed * DeltaTime);

			Pokemon->SetActorRotation(Current);
		}
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

void UPokemonLandingOrientationComponent::TryBeginGroundedPivot()
{
	if (!bArmed || !bLandingObserved || bAirborneOwnsYaw || bPivotActive)
	{
		return;
	}
}

bool UPokemonLandingOrientationComponent::ResolveFacingTarget(FVector& OutLocation) const
{
	return false;
}


