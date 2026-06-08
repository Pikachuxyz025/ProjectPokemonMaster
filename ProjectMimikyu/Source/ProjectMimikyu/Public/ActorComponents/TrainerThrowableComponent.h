

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrainerThrowableComponent.generated.h"

class ATrainerCharacter;
class AProjectile;
struct FAimData;

UCLASS(ClassGroup = (Trainer), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UTrainerThrowableComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    void Initialize(ATrainerCharacter* InOwnerTrainer);

    void ThrowQuickSlotInput();
    void ThrowSelectedInventoryItemInput();

    UFUNCTION(Server, Reliable)
    void ServerThrowSelectedInventoryItem(FName ItemID, const FAimData& AimData);

private:
    void ThrowThrowableProjectile(TSubclassOf<AProjectile> ProjectileClass, const FAimData& AimData);

private:
    UPROPERTY()
    TObjectPtr<ATrainerCharacter> OwnerTrainer;

    UPROPERTY(EditAnywhere, Category = "Throwable")
    float ThrowSpeed = 1800.f;

    UPROPERTY(EditAnywhere, Category = "Throwable")
    float SpawnForwardOffset = 80.f;

    UPROPERTY(EditAnywhere, Category = "Throwable")
    float SpawnUpOffset = 40.f;

    UPROPERTY(EditAnywhere, Category = "Throwable")
    float CollisionRadius = 12.f;
};
