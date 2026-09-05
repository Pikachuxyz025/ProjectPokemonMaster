


#include "Combat/PokemonMeleeContact.h"
#include "ActorComponents/PokemonCombatSocketComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"

bool UPokemonMeleeContactLibrary::ResolveMeleeContactSphere(AActor* Attacker,const FPokemonMeleeContactSettings& Settings,FVector& OutCenter,float& OutRadius,bool bDrawDebug)
{
	OutCenter = FVector::ZeroVector;
	OutRadius = 0.f;

	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(Attacker);

	USkeletalMeshComponent* Mesh = IsValid(Pokemon) ? Pokemon->GetMesh() : nullptr;

	UPokemonCombatSocketComponent* Sockets = IsValid(Pokemon) ? Pokemon->GetCombatSocketComponent() : nullptr;

	const FName SocketName = IsValid(Sockets) ? Sockets->GetSocketNameFromTag(Settings.SocketTag) : NAME_None;

	if (!IsValid(Mesh) || SocketName.IsNone() || !Mesh->DoesSocketExist(SocketName) || !FMath::IsFinite(Settings.Radius) || Settings.Radius <= 0.f || Settings.LocalOffset.ContainsNaN())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[MeleeContact] InvalidContact | Attacker=%s | ")
			TEXT("Tag=%s | Socket=%s | Radius=%.2f"),
			*GetNameSafe(Attacker),
			*Settings.SocketTag.ToString(),
			*SocketName.ToString(),
			Settings.Radius);
		return false;
	}

	const FTransform SocketTransform = Mesh->GetSocketTransform(SocketName, RTS_World);

	const FVector Center = SocketTransform.TransformPosition(Settings.LocalOffset);

	if (Center.ContainsNaN())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[MeleeContact] InvalidContact | Attacker=%s | ")
			TEXT("Tag=%s | Socket=%s | Radius=%.2f | Center=NaN"),
			*GetNameSafe(Attacker),
			*Settings.SocketTag.ToString(),
			*SocketName.ToString(),
			Settings.Radius);
		return false;
	}

	OutCenter = Center;
	OutRadius = Settings.Radius;

	if(bDrawDebug&&Attacker->GetWorld())
	{
		DrawDebugSphere(
			Attacker->GetWorld(),
			OutCenter,
			OutRadius,
			16,
			FColor::Green,
			false,
			1.5f,
			0,
			1.5f);

		UE_LOG(LogTemp, Display,
			TEXT("[MeleeContact] Sphere | Attacker=%s | Socket=%s | ")
			TEXT("Center=%s | Radius=%.2f"),
			*GetNameSafe(Attacker),
			*SocketName.ToString(),
			*OutCenter.ToString(),
			OutRadius);
	}

	return true;
}

bool UPokemonMeleeContactLibrary::BuildExecutionCandidate(AActor* Attacker, const FPokemonMeleeContactSettings& Settings, const FVector& TargetLocation, FPokemonMeleeExecutionCandidate& OutCandidate)
{
	OutCandidate = FPokemonMeleeExecutionCandidate();

	FVector Center;
	float Radius;

	if (TargetLocation.ContainsNaN()||!ResolveMeleeContactSphere(Attacker, Settings, Center, Radius))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[MeleeContact] InvalidCandidate | Attacker=%s | ")
			TEXT("Tag=%s | TargetLocation=NaN"),
			*GetNameSafe(Attacker),
			*Settings.SocketTag.ToString());
		return false;
	}

	// World-centimeter offset expressed in the actor's rotation frame.
	// Scale is already represented in the sampled socket position.
	const FVector ContactOffset = Attacker->GetActorQuat().UnrotateVector(Center - Attacker->GetActorLocation());

	FVector Direction = (TargetLocation - Attacker->GetActorLocation()).GetSafeNormal2D();

	if (Direction.IsNearlyZero())
	{
		Direction = Attacker->GetActorForwardVector().GetSafeNormal2D();
	}

	if(Direction.IsNearlyZero())
	{
		Direction = FVector::ForwardVector;
	}

	// Account for a contact point to one side, such as the right hand.
	const float ContactYaw = ContactOffset.SizeSquared2D() > KINDA_SMALL_NUMBER
		? ContactOffset.Rotation().Yaw
		: 0.f;

	OutCandidate.Facing = FRotator(0.f, FRotator::NormalizeAxis(Direction.Rotation().Yaw - ContactYaw), 0.f);

	OutCandidate.RootLocation = TargetLocation - OutCandidate.Facing.RotateVector(ContactOffset);

	OutCandidate.CurrentContactCenter = Center;
	OutCandidate.Radius = Radius;

	return true;
}