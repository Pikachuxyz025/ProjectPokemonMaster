

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PokemonAITypes.generated.h"

USTRUCT(BlueprintType)
struct FAgentNavigationRequest
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag IntentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag PreferredMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> TargetActor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesiredDistance = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AcceptableRadius = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Urgency = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowSpecialTraversal = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowGASMovementAbilities = true;

	bool HasValidIntent() const
	{
		return IntentTag.IsValid();
	}

	bool HasTargetActor() const
	{
		return TargetActor != nullptr;
	}
};
