

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PokemonMoveAnimationSet.generated.h"

class UPokemonMoveDataAsset;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FPokemonMoveMontageEntry
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	TObjectPtr<UPokemonMoveDataAsset> Move = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	TObjectPtr<UAnimMontage> Montage = nullptr;

};

UCLASS(BlueprintType)
class PROJECTMIMIKYU_API UPokemonMoveAnimationSet : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	TArray<FPokemonMoveMontageEntry> MoveMontages;

	UFUNCTION(BlueprintPure,Category="Pokemon|Animation")
	UAnimMontage* FindMontageForMove(const UPokemonMoveDataAsset* Move) const;
};
