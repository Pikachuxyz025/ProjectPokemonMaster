#include "ActorComponents/PokemonPresentationComponent.h"
#include "ActorComponents/PokemonCombatStateComponent.h"
#include "ActorComponents/PokemonHitStopComponent.h"
#include "AIControllers/PokemonAIController.h"
#include "Animation/AnimClassInterface.h"
#include "Animation/AnimSequence.h"
#include "Animation/BlendProfile.h"
#include "Animation/PokemonAnimInstance.h"
#include "Animation/Skeleton.h"
#include "Characters/Pokemon_Parent.h"
#include "Components/SkeletalMeshComponent.h"
#include "DataAssets/PokemonPresentationProfile.h"
#include "Engine/SkeletalMesh.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"
#include "Interfaces/TargetableInterface.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokemonPresentation, Log, All);

UPokemonPresentationComponent::UPokemonPresentationComponent()
{
	// Evaluation is driven by the main AnimInstance, avoiding a second tick order.
	PrimaryComponentTick.bCanEverTick = false;
}

// Summary: Initializes the presentation component with a new profile, 
// setting up references to the owning Pokemon, its mesh, and validating the profile's compatibility
// with the mesh and animation class. It also prepares the head tracking and blinking features based on the profile's configuration.

void UPokemonPresentationComponent::InitializePresentation(UPokemonPresentationProfile* NewProfile)
{
	Profile = NewProfile;
	Pokemon = Cast<APokemon_Parent>(GetOwner());
	Mesh = Pokemon.IsValid() ? Pokemon->GetMesh() : nullptr;
	InitializedMesh = Mesh.IsValid() ? Mesh->GetSkeletalMeshAsset() : nullptr;
	State = FPokemonPresentationState();
	bInitialized = bHeadReady = bHasWorldPoint = false;
	CurrentYaw = CurrentPitch = 0.f;
	ResetBlink();

	if (!Profile || !Pokemon.IsValid() || !InitializedMesh.IsValid())
	{
		return; // No profile means the character hasn't opted in.
	}

	USkeleton* Skeleton = InitializedMesh->GetSkeleton();
	const IAnimClassInterface* AnimClass = Profile->AnimationClass
		? IAnimClassInterface::GetFromClass(Profile->AnimationClass.Get())
		: nullptr;

	// Skeletal Validation Check: Ensure the profile's expected skeleton matches the initialized mesh and animation class.
	if (!Profile->ExpectedSkeleton || Skeleton != Profile->ExpectedSkeleton.Get()
		|| !AnimClass || AnimClass->GetTargetSkeleton() != Skeleton)
	{
		UE_LOG(LogPokemonPresentation, Warning,
			TEXT("%s: profile mesh/skeleton/AnimBP mismatch; presentation disabled."),
			*GetNameSafe(GetOwner()));
		return;
	}

	bHeadReady = !Profile->HeadBone.IsNone() && Mesh->GetBoneIndex(Profile->HeadBone) != INDEX_NONE
		&& !Profile->HeadAimAxisLS.ContainsNaN() && !Profile->HeadAimAxisLS.IsNearlyZero();

	if (!Profile->HeadBone.IsNone() && !bHeadReady)
	{
		UE_LOG(LogPokemonPresentation, Warning,
			TEXT("%s: profile head bone '%s' not found in mesh '%s'; head tracking disabled."),
			*GetNameSafe(GetOwner()), *Profile->HeadBone.ToString(), *GetNameSafe(InitializedMesh.Get()));
	}

	UBlendProfile* Mask = Profile->BlinkMaskName.IsNone()
		? nullptr : Skeleton->GetBlendProfile(Profile->BlinkMaskName);
	bBlinkReady = Profile->BlinkSequence
		&& Profile->BlinkSequence->GetSkeleton() == Skeleton
		&& Profile->BlinkSequence->GetAdditiveAnimType() == AAT_None
		&& Profile->BlinkSequence->GetPlayLength() > KINDA_SMALL_NUMBER
		&& Mask && Mask->GetMode() == EBlendProfileMode::BlendMask;

	if (Profile->BlinkSequence && !bBlinkReady)
	{
		UE_LOG(LogPokemonPresentation, Warning,
			TEXT("%s: blink clip/skeleton/mask invalid; blinking disabled."),
			*GetNameSafe(GetOwner()));
	}

	State.HeadBone = bHeadReady ? Profile->HeadBone : NAME_None;
	State.HeadAimAxisLS = Profile->HeadAimAxisLS.GetSafeNormal();
	State.LookDirectionCS = Profile->LookFrameCS.Vector();
	State.BlinkSequence = bBlinkReady ? Profile->BlinkSequence.Get() : nullptr;
	TimeUntilBlink = ChooseBlinkInterval();
	bInitialized = true;

	// Startup/explicit reinitialization only: never change AnimClass in UpdatePresentation.
	if (!Mesh->GetAnimInstance()
		|| Mesh->GetAnimInstance()->GetClass() != Profile->AnimationClass.Get())
	{
		Mesh->SetAnimInstanceClass(Profile->AnimationClass.Get());
	}
}

void UPokemonPresentationComponent::SetLookTarget(AActor* Target)
{
	ExplicitTarget = Target;
	bHasWorldPoint = false;
}

void UPokemonPresentationComponent::SetLookLocation(FVector WorldLocation)
{
	ExplicitTarget.Reset();
	ExplicitWorldPoint = WorldLocation;
	bHasWorldPoint = !WorldLocation.ContainsNaN();
}

void UPokemonPresentationComponent::ClearLookTarget()
{
	ExplicitTarget.Reset();
	bHasWorldPoint = false;
}

bool UPokemonPresentationComponent::ResolveLookPoint(FVector& OutWorldPoint) const
{
	if (bHasWorldPoint)
	{
		OutWorldPoint = ExplicitWorldPoint;
		return true;
	}

	AActor* Target = ExplicitTarget.Get();
	if (!Target && bUseCombatTarget && Pokemon.IsValid())
	{
		// Use the actual controller, avoiding a stale cached controller or null dereference.
		if (APokemonAIController* AI = Cast<APokemonAIController>(Pokemon->GetController()))
		{
			Target = AI->GetCombatTarget();
		}
	}

	if (!IsValid(Target) || Target == GetOwner())
	{
		return false;
	}

	OutWorldPoint = Target->Implements<UTargetableInterface>()
		? ITargetableInterface::Execute_GetTargetAimPoint(Target)
		: Target->GetActorLocation();

	return !OutWorldPoint.ContainsNaN();
}

bool UPokemonPresentationComponent::ShouldSuppressPresentation() const
{
	if (!Pokemon.IsValid() || Pokemon->IsIncapacitated() || Pokemon->IsFainted())
	{
		return true;
	}

	if (UPokemonCombatStateComponent* Combat = Pokemon->GetCombatStateComponent())
	{
		const FGameplayTagContainer Tags = Combat->GetActiveCombatStates();
		const FPokemonCombatGameplayTags& Names = FPokemonCombatGameplayTags::Get();
		return Tags.HasTagExact(Names.Combat_State_HitStun)
			|| (Profile && Profile->bSuppressDuringAttacks
				&& Tags.HasTagExact(Names.Combat_State_Attacking));
	}
	return false;
}

bool UPokemonPresentationComponent::IsHitStopActive() const
{
	UPokemonHitStopComponent* HitStop = Pokemon.IsValid()
		? Pokemon->GetHitStopComponent() : nullptr;
	return HitStop && HitStop->IsHitStopActive();
}

float UPokemonPresentationComponent::ChooseBlinkInterval() const
{
	if (!Profile) return 1.f;
	const float Min = FMath::Max(0.1f, Profile->BlinkIntervalMin);
	return FMath::FRandRange(Min, FMath::Max(Min, Profile->BlinkIntervalMax));
}

void UPokemonPresentationComponent::ResetBlink()
{
	bBlinking = false;
	BlinkElapsed = State.BlinkTime = State.BlinkAlpha = 0.f;
}

bool UPokemonPresentationComponent::RequestBlink()
{
	if (!bInitialized || !bBlinkReady || bBlinking
		|| ShouldSuppressPresentation() || IsHitStopActive())
	{
		return false;
	}
	ResetBlink();
	bBlinking = true;
	return true;
}

// Summary: Updates the presentation state of the Pokemon, 
// including head tracking and blinking, based on the current game state, 
// target look point, and profile settings. 
// It interpolates the head orientation towards the desired yaw and pitch angles, 
// manages blink timing, and handles incapacitation or hit stop conditions.
void UPokemonPresentationComponent::UpdatePresentation(float DeltaTime)
{
	if (!bInitialized || !Profile || !Pokemon.IsValid() || !Mesh.IsValid())
	{
		State = FPokemonPresentationState();
		return;
	}

	if (Mesh->GetSkeletalMeshAsset() != InitializedMesh.Get())
	{
		bInitialized = false;
		State = FPokemonPresentationState();
		UE_LOG(LogPokemonPresentation, Warning,
			TEXT("%s: mesh changed; call InitializePresentation after configuring its profile."),
			*GetNameSafe(GetOwner()));
		return;
	}

	// Incapacitation takes ownership immediately, even during hitstop.
	if (Pokemon->IsIncapacitated() || Pokemon->IsFainted())
	{
		State.HeadAlpha = 0.f;
		ResetBlink();
		return;
	}
	if (IsHitStopActive()) return; // Hold cosmetic state during hitstop.

	const float CurrentDt = FMath::Max(0.f, DeltaTime);
	
	// Determine if head tracking should be suppressed based on the Pokemon's state and profile settings.
	const bool bSuppressed = ShouldSuppressPresentation();

	// Final result of gaze direction calculations, including yaw and pitch angles, and whether a valid gaze direction exists.
	bool bHasGaze = false;

	// Desired yaw angle for head orientation, initialized to zero.
	float DesiredYaw = 0.f;
	// Desired pitch angle for head orientation, initialized to zero.
	float DesiredPitch = 0.f;

	// WorldPoint will hold the resolved target point in world space that the Pokemon should look at.
	FVector WorldPoint;

	if (bHeadReady && !bSuppressed && ResolveLookPoint(WorldPoint))
	{
		// Current head position is only the origin. Limits use the configured
		// neutral frame, never the procedurally rotated head orientation.
		const FVector WorldDirection = WorldPoint - Mesh->GetSocketLocation(Profile->HeadBone);

		// Transform the world direction into the mesh's local space and normalize it to get a unit vector.
		const FVector DirectionCS = Mesh->GetComponentTransform()
			.InverseTransformVectorNoScale(WorldDirection).GetSafeNormal();

		// Unrotate the direction from component space to the look frame's coordinate system.
		const FVector DirectionInLookFrame = Profile->LookFrameCS.UnrotateVector(DirectionCS);

		// Convert the direction vector into yaw and pitch angles in the look frame.
		const FRotator Angles = DirectionInLookFrame.Rotation();

		// Determine if the gaze direction is valid based on the direction vector and yaw limits.
		bHasGaze = !DirectionCS.IsNearlyZero()
			&& FMath::Abs(Angles.Yaw) <= FMath::Clamp(Profile->LoseTargetYaw, 90.f, 170.f);

		if (bHasGaze)
		{
			// Clamp the desired yaw and pitch angles to the profile's maximum limits to ensure natural head movement.
			const float YawLimit = FMath::Clamp(Profile->MaxYaw, 0.f, 85.f);
			const float PitchLimit = FMath::Clamp(Profile->MaxPitch, 0.f, 85.f);

			DesiredYaw = FMath::Clamp(Angles.Yaw, -YawLimit, YawLimit);
			DesiredPitch = FMath::Clamp(Angles.Pitch, -PitchLimit, PitchLimit);
		}
	}

	const float Speed = FMath::Max(0.1f, Profile->InterpSpeed);

	CurrentYaw = FMath::FInterpTo(CurrentYaw, DesiredYaw, CurrentDt, Speed);
	CurrentPitch = FMath::FInterpTo(CurrentPitch, DesiredPitch, CurrentDt, Speed);

	// Update the look direction in component space based on the current yaw and pitch angles, 
	// using the profile's look frame rotation.
	State.LookDirectionCS = Profile->LookFrameCS.RotateVector(
		FRotator(CurrentPitch, CurrentYaw, 0.f).Vector());

	// Interpolate the head alpha value towards 1.0 if there is a valid gaze direction, 
	// or towards 0.0 if not, using the specified interpolation speed.
	State.HeadAlpha = FMath::FInterpTo(State.HeadAlpha, bHasGaze ? 1.f : 0.f, CurrentDt, Speed);

	if (!bBlinkReady || bSuppressed)
	{
		ResetBlink();
		return;
	}

	if (!bBlinking)
	{
		TimeUntilBlink -= CurrentDt;
		if (TimeUntilBlink > 0.f) return;
		RequestBlink();
	}

	const float Length = Profile->BlinkSequence->GetPlayLength();
	BlinkElapsed += CurrentDt;

	if (BlinkElapsed >= Length)
	{
		ResetBlink();
		TimeUntilBlink = ChooseBlinkInterval();
		return;
	}

	State.BlinkTime = BlinkElapsed;
	const float Edge = FMath::Clamp(Profile->BlinkEdgeBlendSeconds, 0.f, Length * 0.45f);

	State.BlinkAlpha = Edge > KINDA_SMALL_NUMBER
		? FMath::Clamp(FMath::Min(BlinkElapsed, Length - BlinkElapsed) / Edge, 0.f, 1.f)
		: 1.f;
}