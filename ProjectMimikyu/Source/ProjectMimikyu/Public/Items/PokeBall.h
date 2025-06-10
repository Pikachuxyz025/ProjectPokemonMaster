// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Item.h"
#include "Items/Projectile.h"
#include "Characters/CharacterTypes.h"
#include "PokeBall.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API APokeBall : public AProjectile
{
	GENERATED_BODY()
	
public:
	APokeBall();

protected:


private:
	
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere)
	EPokeballType CurrentPokeball = EPokeballType::EPT_None;

	UPROPERTY(EditDefaultsOnly)
	float BaseModifier = 0;

	UPROPERTY(EditDefaultsOnly)
	float BoostedModifier = 0;
};
