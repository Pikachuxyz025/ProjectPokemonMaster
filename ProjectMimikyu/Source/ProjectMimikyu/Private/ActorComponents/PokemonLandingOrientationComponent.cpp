


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
	return false;
}

void UPokemonLandingOrientationComponent::ReleaseAfterAirborneRecovery(FGuid CommandId)
{
	if (CommandId.IsValid() && CommandId == SourceCommandId)
	{
		bAirborneOwnsYaw = false;
		TryBeginGroundedPivot();
	}
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


// Called every frame
void UPokemonLandingOrientationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	APokemon_Parent* Pokemon = PokemonOwner.Get();

	if (!Pokemon)
	{
		return;
	}

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

}


