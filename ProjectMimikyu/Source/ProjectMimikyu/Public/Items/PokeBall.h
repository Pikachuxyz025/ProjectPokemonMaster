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

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnPokeballStop(const FHitResult& ImpactResult);

	UPROPERTY(EditDefaultsOnly, Category = "Pokeball")
	float DestroyAfterStopDelay = 3.f;

	FTimerHandle DestroyAfterStopTimerHandle;

	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;
	
	UFUNCTION()
	void DestroyPokeball();

	void HandlePokemonContact(AActor* OtherActor);

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
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
