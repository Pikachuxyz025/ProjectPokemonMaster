// Fill out your copyright notice in the Description page of Project Settings.


#include "EQS/Generators/EnvQueryGenerator_ImpactPattern.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
#include "Kismet/KismetMathLibrary.h"

float UEnvQueryGenerator_ImpactPattern::GetNamedParamOr(const FEnvQueryInstance& Instance, FName Name, float Default)
{
	if (const float* FoundValue = Instance.NamedParams.Find(Name))
	{
		return *FoundValue;
	}
	return Default;
}


int32 UEnvQueryGenerator_ImpactPattern::GetNamedParamIntOr(const FEnvQueryInstance& Instance, FName Name, int32 Default)
{
	if (const float* FoundValue = Instance.NamedParams.Find(Name))
	{
		return int32(*FoundValue);
	}
	return Default;
}

UEnvQueryGenerator_ImpactPattern::UEnvQueryGenerator_ImpactPattern()
{
	ItemType = UEnvQueryItemType_Point::StaticClass();
}

static FORCEINLINE EEnvironmentLandingPattern ResolvePattern(const FEnvQueryInstance& Instance,EEnvironmentLandingPattern DefaultPattern,bool bAllowNamedOverride)
{
	if (!bAllowNamedOverride) return DefaultPattern;

	// Named Param: "LandingPattern" (float -> int -> enum)
	int32 PatternInt = UEnvQueryGenerator_ImpactPattern::GetNamedParamIntOr(Instance, TEXT("LandingPattern"), (int32)DefaultPattern);
	PatternInt = FMath::Clamp(PatternInt, 0, (int32)EEnvironmentLandingPattern::EELP_TargetedDrop /* or your last enum */);
	return static_cast<EEnvironmentLandingPattern>(PatternInt);
}

static FORCEINLINE float DegreesToRadians(float Degrees)
{
	return Degrees * (PI / 180.f);
}

void UEnvQueryGenerator_ImpactPattern::GenerateItems(FEnvQueryInstance& QueryInstance) const
{ 
	// Pull the center(s) from the selected context. We expect one center; if more, take first
	TArray<FVector> Centers;
	if (!QueryInstance.PrepareContext(CenterContext, Centers) || Centers.Num() == 0)
		return; // No Context -> no items

	const FVector Center = Centers[0];

	// Resolve radius: Named Param "AreaRadius" or default
	const float Radius = bUsedAreaRadiusNamedParam ? GetNamedParamOr(QueryInstance, TEXT("AreaRadius"), DefaultAreaRadius) : DefaultAreaRadius;
	const EEnvironmentLandingPattern UsePattern = ResolvePattern(QueryInstance, Pattern, bAllowNamedPatternOverride);

	TArray<FVector> Points;
	Points.Reserve(64);

	switch (UsePattern)
	{
	case EEnvironmentLandingPattern::EELP_None:
		break;
	case EEnvironmentLandingPattern::EELP_RandonInRadius:
		Gen_RandomScatter(Center, Radius, Points);
		break;
	case EEnvironmentLandingPattern::EELP_Grid:
		Gen_Grid(Center, Radius, Points);
		break;
	case EEnvironmentLandingPattern::EELP_Line:
		break;
	case EEnvironmentLandingPattern::EELP_Circle:
		Gen_Ring(Center, Radius, Points);
		break;
	case EEnvironmentLandingPattern::EELP_TargetedDrop:
		break;
	default:
		break;
	}

	if(Points.Num() > 0)
	{
		// Hand results back to EQS
		for (const FVector& Point : Points)
		{
			QueryInstance.AddItemData<UEnvQueryItemType_Point>(Point);
		}
	}
}
#if WITH_EDITOR
FText UEnvQueryGenerator_ImpactPattern::GetDescriptionTitle() const
{
	return FText::FromString(TEXT("Impact Pattern"));
}

FText UEnvQueryGenerator_ImpactPattern::GetDescriptionDetails() const
{
	switch (Pattern)
	{
	case EEnvironmentLandingPattern::EELP_Circle:
		return FText::FromString(FString::Printf(TEXT("Ring: %d pts, Jitter %.1f, Yaw %.1f"), RingPointCount, RingJitter, PatternYawDeg));
	case EEnvironmentLandingPattern::EELP_RandonInRadius:
		return FText::FromString(FString::Printf(TEXT("Scatter: %d Poits, Minimal Separation %.1f"), ScatterCount, MinSeparation));
	case EEnvironmentLandingPattern::EELP_Grid:
		return FText::FromString(FString::Printf(TEXT("Grid: %dx%d, Cell %.1f, Yaw %.1f"), GridX, GridY, CellSize, PatternYawDeg));
	default:
		return FText::FromString(TEXT("Unknown"));
	}
}
#endif

void UEnvQueryGenerator_ImpactPattern::Gen_Ring(const FVector& Center, float Radius, TArray<FVector>& Out) const
{
	const float BaseYawRad = DegreesToRadians(PatternYawDeg);
	const float AngleStep = (RingPointCount > 0) ? (2.f * PI / float(RingPointCount)) : 2.f * PI;

	for (int32 i = 0; i < RingPointCount; i++)
	{
		const float Angle = BaseYawRad + AngleStep * i;
		float UseRadius = Radius;

		if (RingJitter > 0.f)
		{
			UseRadius += FMath::FRandRange(-RingJitter, RingJitter);
			UseRadius = FMath::Max(10.f, UseRadius);
		}

		const FVector Offset(UseRadius * FMath::Cos(Angle), UseRadius * FMath::Sin(Angle), 0.f);
		Out.Add(Center + Offset);
	}

}

void UEnvQueryGenerator_ImpactPattern::Gen_RandomScatter(const FVector& Center, float Radius, TArray<FVector>& Out) const
{
	Out.Reserve(ScatterCount);
	const float SquaredRadius = Radius * Radius;
	const float MinSeparationSquared = MinSeparation > 0.f ? MinSeparation * MinSeparation : 0.f;

	int32 Attempts = ScatterCount * 8; // simple rejection cap
	while (Out.Num() < ScatterCount && Attempts-- > 0)
	{
		// Unitform in circle (use sqrt for uniform radius)
		const float r = Radius * FMath::Sqrt(FMath::FRand());
		const float theta = FMath::FRandRange(0.f, 2.f * PI);
		const FVector Candidate = Center + FVector(r * FMath::Cos(theta), r * FMath::Sin(theta), 0.f);

		if (MinSeparationSquared > 0.f)
		{
			if (!AcceptWithMinSeparation(Out, Candidate, MinSeparationSquared))
				continue;
		}

		Out.Add(Candidate);

	}
}

void UEnvQueryGenerator_ImpactPattern::Gen_Grid(const FVector& Center, float Radius, TArray<FVector>& Out) const
{
	// Build a centered grid of GridX x GridY cells, rotated by PatternYawDeg, and clamp points to within Radius
	const float YawRad = DegreesToRadians(PatternYawDeg);
	const FRotator Rot(0.f, PatternYawDeg, 0.f);
	const FRotationMatrix RotMat(Rot);

	const float Width = (GridX - 1.f) * CellSize;
	const float Length = (GridY - 1.f) * CellSize;
	const FVector GridOrigin = Center - FVector(Width * 0.5f, Length * 0.5f, 0.f);

	Out.Reserve(GridX * GridY);

	const float SquaredRadius = Radius * Radius;
	for (int32  x = 0; x < GridX; x++)
	{
		for (int32 y = 0; y < GridY; y++)
		{
			FVector Point = GridOrigin + FVector(x * CellSize, y * CellSize, 0.f);
			const FVector Offset = Point - Center;
			const FVector RotatedOffset = RotMat.TransformVector(Offset);
			const FVector FinalPoint = Center + RotatedOffset;

			// Keep only points within circle radius
			if (Radius > 0.f && FVector::DistSquared(Center, FinalPoint) > SquaredRadius)
				continue;
			Out.Add(FinalPoint);
		}
	}
}

bool UEnvQueryGenerator_ImpactPattern::AcceptWithMinSeparation(const TArray<FVector>& Chosen, const FVector& Candidate, float MinSepSq) const
{
	for (const FVector& Point : Chosen)
	{
		if (FVector::DistSquared(Point, Candidate) < MinSepSq)
		{
			return false;
		}
	}
	return true;
}
