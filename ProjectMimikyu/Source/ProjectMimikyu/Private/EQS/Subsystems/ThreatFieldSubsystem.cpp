// Fill out your copyright notice in the Description page of Project Settings.


#include "EQS/Subsystems/ThreatFieldSubsystem.h"
#include "AbilitySystemComponent.h"

void UThreatFieldSubsystem::RegisterAreaCenter(UAbilitySystemComponent* OwnerASC, int32 ActivationId, const FVector& AreaCenter, float AreaRadius, double TimeToLive)
{
	const double CurrentTime = GetWorld()->GetTimeSeconds();

	FEnvAreaCenterEntry NewEntry;
	NewEntry.OwnerASC = OwnerASC;
	NewEntry.ActivationId = ActivationId;
	NewEntry.AreaCenter = AreaCenter;
	NewEntry.AreaRadius = AreaRadius;
	NewEntry.CreationTime = CurrentTime;
	NewEntry.LastUpdatedAt = CurrentTime;
	NewEntry.ExpiresAt = (TimeToLive > 0.f) ? (CurrentTime + TimeToLive) : 0.f;

	AreaCenters.FindOrAdd(OwnerASC).Add(ActivationId,NewEntry);
}

bool UThreatFieldSubsystem::GetAreaCenter(UAbilitySystemComponent* OwnerASC, int32 ActivationId, FVector& OutAreaCenter, float& OutAreaRadius) const
{
	if (const TMap<int32, FEnvAreaCenterEntry>* FoundMap = AreaCenters.Find(OwnerASC))
	{
		if (const FEnvAreaCenterEntry* FoundEntry = FoundMap->Find(ActivationId))
		{
			if(FoundEntry->ExpiresAt == 0.f || FoundEntry->ExpiresAt > GetWorld()->GetTimeSeconds())
			{
				OutAreaCenter = FoundEntry->AreaCenter;
				OutAreaRadius = FoundEntry->AreaRadius;
				return true;
			}
		}
	}
	return false;
}

void UThreatFieldSubsystem::UpdateAreaCenter(UAbilitySystemComponent* OwnerASC, int32 ActivationId, const FVector& NewAreaCenter)
{
	if (TMap<int32, FEnvAreaCenterEntry>* FoundMap = AreaCenters.Find(OwnerASC))
	{
		if (FEnvAreaCenterEntry* FoundEntry = FoundMap->Find(ActivationId))
		{
			FoundEntry->AreaCenter = NewAreaCenter;
			FoundEntry->LastUpdatedAt = GetWorld()->GetTimeSeconds();
		}
	}
}

void UThreatFieldSubsystem::ClearCenterByActivationId(UAbilitySystemComponent* OwnerASC, int32 ActivationId)
{
	if (TMap<int32, FEnvAreaCenterEntry>* FoundMap = AreaCenters.Find(OwnerASC))
	{
		FoundMap->Remove(ActivationId);
	}
}

void UThreatFieldSubsystem::RegisterThreat(UAbilitySystemComponent* OwnerASC, int32 ActivationId, const FVector& Location, float ImpactRadius, double TelegraphedAt, double ETA, double EndAt, AActor* Instigator)
{
	FThreatEntry NewThreat;

	NewThreat.OwnerASC = OwnerASC;
	NewThreat.ActivationId = ActivationId;
	NewThreat.Location = Location;
	NewThreat.ImpactRadius = ImpactRadius;
	NewThreat.TelegraphAt = TelegraphedAt;
	NewThreat.ETA = ETA;
	NewThreat.ExpiresAt = EndAt;
	NewThreat.Instigator = Instigator;

	Threats.FindOrAdd(OwnerASC).Add(ActivationId, NewThreat);
}

void UThreatFieldSubsystem::QueryThreats(const FVector& Near, float MaxRadius, double TimeHorizon, TArray<FThreatEntry>& OutThreats) const
{
	const double CurrentTime = GetWorld()->GetTimeSeconds();
	const double CancelPoint = CurrentTime + TimeHorizon;

	for (const auto& OwnerPair : Threats)
	{
		for (const auto& ThreatPair : OwnerPair.Value)
		{
			const FThreatEntry& Threat = ThreatPair.Value;
			// Check if threat is relevant within the TimeHorizon
			if (Threat.ETA <= CancelPoint && (Threat.ExpiresAt == 0.f || Threat.ExpiresAt >= CurrentTime))
			{
				// Check if threat is within MaxRadius
				if (FVector::DistSquared(Near, Threat.Location) <= FMath::Square(MaxRadius))
				{
					OutThreats.Add(Threat);
				}
			}
		}
	}
}

void UThreatFieldSubsystem::ClearThreatsByActivationId(UAbilitySystemComponent* OwnerASC, int32 ActivationId)
{
	if (TMultiMap<int32, FThreatEntry>* FoundMap = Threats.Find(OwnerASC))
	{
		FoundMap->Remove(ActivationId);
	}
}

void UThreatFieldSubsystem::Tick(float DeltaTime)
{
	const double CurrentTime = GetWorld()->GetTimeSeconds();

	// Clean up expired area centers
	for (auto OwnerPair : AreaCenters)
	{
		for (auto It = OwnerPair.Value.CreateIterator(); It; ++It)
		{
			const FEnvAreaCenterEntry& Entry = It.Value();
			if (Entry.ExpiresAt > 0.f && Entry.ExpiresAt <= CurrentTime)
			{
				It.RemoveCurrent();
			}
		}
	}

	// Prune ended threats
	for (auto& OwnerPair : Threats)
	{
		for(auto It =OwnerPair.Value.CreateIterator(); It; ++It)
		{
			const FThreatEntry& Entry = It.Value();
			if (Entry.ExpiresAt > 0.f && Entry.ExpiresAt <= CurrentTime)
			{
				It.RemoveCurrent();
			}
		}
	}
	
}

TStatId UThreatFieldSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UThreatFieldSubsystem, STATGROUP_Tickables);
}
