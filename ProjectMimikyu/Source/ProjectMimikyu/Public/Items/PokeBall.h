// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Item.h"
#include "Items/Projectile.h"
#include "Characters/CharacterTypes.h"
#include "PokeBall.generated.h"

class UPokeballCaptureComponent;
class UPokeballSummonComponent;
class UProjectileMovementComponent;

UCLASS()
class PROJECTMIMIKYU_API APokeBall : public AProjectile
{
	GENERATED_BODY()
	
public:
	APokeBall();

	UFUNCTION(BlueprintCallable,Category="Pokeball")
	void InitializeForCapture(AActor* InSourceActor);

	UFUNCTION(BlueprintCallable, Category = "Pokeball")
	void InitializeForSummon(AActor* InSourceActor, const FVector& InTargetLocation, int32 InPartySlotIndex);

	UProjectileMovementComponent* GetProjectileMovementComponent() const { return ProjectileMovementComponent; }

	void HideAfterOpening();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokeball|Components")
	TObjectPtr<UPokeballCaptureComponent> CaptureComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokeball|Components")
	TObjectPtr<UPokeballSummonComponent> SummonComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokeball|Mode")
	EPokeballUseMode ActiveUseMode = EPokeballUseMode::None;

	UFUNCTION()
	void OnPokeballStop(const FHitResult& ImpactResult);

	UPROPERTY(EditDefaultsOnly, Category = "Pokeball")
	float DestroyAfterStopDelay = 3.f;

	FTimerHandle DestroyAfterStopTimerHandle;

	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;
	
	UFUNCTION()
	void DestroyPokeball();

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

public:

	UFUNCTION(BlueprintCallable,Category = "Pokeball")
	void SetPokeballType(EPokeballType NewPokeballType) { CurrentPokeball = NewPokeballType; }

	UFUNCTION(BlueprintCallable, Category = "Pokeball")
	EPokeballType GetPokeballType() const { return CurrentPokeball; }

	UPokeballSummonComponent* GetSummonComponent() const { return SummonComponent; }
	UPokeballCaptureComponent* GetCaptureComponent() const { return CaptureComponent; }
};
