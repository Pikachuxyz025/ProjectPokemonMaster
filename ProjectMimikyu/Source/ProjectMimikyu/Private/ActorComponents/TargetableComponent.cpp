#include "ActorComponents/TargetableComponent.h"
#include "Components/SkeletalMeshComponent.h"

UTargetableComponent::UTargetableComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UTargetableComponent::BeginPlay()
{
	Super::BeginPlay();

	TargetMesh = GetOwner() ? GetOwner()->FindComponentByClass<USkeletalMeshComponent>() : nullptr;

	if (!TargetMesh)
	{
		UE_LOG(LogTemp, Warning, TEXT("TargetableComponent: No SkeletalMeshComponent found on %s"), *GetOwner()->GetName());
	}

	DebugDrawTargetPoints(5.f);
}

bool UTargetableComponent::ResolveDefinitionLocation(const FPokemonTargetPointDefinition& Definition, FVector& OutWorldLocation) const
{
	OutWorldLocation = FVector::ZeroVector;

	if (!TargetMesh || !Definition.bEnabled || !Definition.PointTag.IsValid() || Definition.SocketOrBoneName.IsNone())
	{
		return false;
	}

	const bool bHasSocket = TargetMesh->DoesSocketExist(Definition.SocketOrBoneName);

	const bool bHasBone = TargetMesh->GetBoneIndex(Definition.SocketOrBoneName) != INDEX_NONE;

	if (!bHasSocket && !bHasBone)
	{
		UE_LOG(LogTemp, Warning, TEXT("TargetableComponent: Socket or Bone '%s' does not exist on %s"), *Definition.SocketOrBoneName.ToString(), *GetOwner()->GetName());
		return false;
	}
		
	const FTransform PointTransform = TargetMesh->GetSocketTransform(Definition.SocketOrBoneName, RTS_World);

	OutWorldLocation = PointTransform.TransformPosition(Definition.LocalOffset);

	return true;
}

bool UTargetableComponent::ResolveNearestTargetPoint(const FVector& RawAimLocation, FResolvedPokemonTargetPoint& OutResolvedPoint) const
{
	OutResolvedPoint = FResolvedPokemonTargetPoint();

	float BestDistanceSquared = TNumericLimits<float>::Max();

	for (const FPokemonTargetPointDefinition& Point : TargetPoints)
	{
		FVector PointLocation;

		if (!ResolveDefinitionLocation(Point, PointLocation))
		{
			continue;
		}

		const float DistanceSquared = FVector::DistSquared(RawAimLocation, PointLocation);

		if (Point.SelectionRadius > 0.f || DistanceSquared > FMath::Square(Point.SelectionRadius))
		{
			continue;
		}


		if (DistanceSquared >= BestDistanceSquared)
		{
			continue;
		}

		BestDistanceSquared = DistanceSquared;

		OutResolvedPoint.PointTag = Point.PointTag;

		OutResolvedPoint.SocketOrBoneName = Point.SocketOrBoneName;

		OutResolvedPoint.WorldLocation = PointLocation;

		OutResolvedPoint.bResolved = true;
	}

	return OutResolvedPoint.bResolved;
}

bool UTargetableComponent::GetTargetPointWorldLocation(const FGameplayTag& PointTag, FVector& OutWorldLocation) const
{
	OutWorldLocation = FVector::ZeroVector;

	for (const FPokemonTargetPointDefinition& Point : TargetPoints)
	{
		if (Point.PointTag != PointTag)
		{
			continue;
		}

		return ResolveDefinitionLocation(Point, OutWorldLocation);
	}

	return false;
}

void UTargetableComponent::DebugDrawTargetPoints(float Duration) const
{
	if(!GetWorld())
	{
		return;
	}

	for (const FPokemonTargetPointDefinition& Point : TargetPoints)
	{
		FVector WorldLocation;
		if (!ResolveDefinitionLocation(Point, WorldLocation))
		{
			continue;
		}
		const FColor DrawColor = Point.bEnabled ? FColor::Green : FColor::Red;

		DrawDebugSphere(GetWorld(), WorldLocation, 10.f, 12, DrawColor, false, Duration);

		DrawDebugString(GetWorld(), WorldLocation + FVector(0.f, 0.f, 20.f), Point.PointTag.ToString(), nullptr, FColor::White, Duration, false, 1.f);
	}
}
