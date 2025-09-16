// Fill out your copyright notice in the Description page of Project Settings.

#include "EQS/Context/EnvQueryContext_AreaCenter.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include <EQS/Subsystems/ThreatFieldSubsystem.h>
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

void UEnvQueryContext_AreaCenter::ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const
{
	AActor* Querier = Cast<AActor>(QueryInstance.Owner.Get());
	if (!Querier) return;

	UAbilitySystemComponent* OwnerASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Querier);
	float IdFloat = *QueryInstance.NamedParams.Find(TEXT("ActivationId"));
	const int32 ActivationId = int32(IdFloat);
	FVector OutCenter = FVector::ZeroVector;
	float OutRadius = 0.f;

	UThreatFieldSubsystem* ThreatField = OwnerASC->GetWorld()->GetSubsystem<UThreatFieldSubsystem>();
	const bool bFound = ThreatField->GetAreaCenter(OwnerASC, ActivationId, OutCenter, OutRadius);

	if(bFound)
		UEnvQueryItemType_Point::SetContextHelper(ContextData, OutCenter);

}

int32 UEnvQueryContext_AreaCenter::GetIntNamedParam(const FEnvQueryInstance& QueryInstance, FName ParamName, int32 DefaultValue)
{
	if(const float* FoundValue = QueryInstance.NamedParams.Find(ParamName))
	{
		return int32(*FoundValue);
	}
	return DefaultValue;
}
