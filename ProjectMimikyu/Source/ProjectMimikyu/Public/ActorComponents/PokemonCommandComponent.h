

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Command/PokemonCommandTypes.h"
#include "PokemonCommandComponent.generated.h"

class APokemon_Parent;
class UPokemonMoveDataAsset;

UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonCommandComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    void Initialize(APokemon_Parent* InOwnerPokemon);

    bool TryCallCommand(int32 MoveIndex);
    void AttackEnded();

    void SetCommandTarget(const FPokemonCommandTarget& NewTarget);
    void ClearCommandTarget();
    const FPokemonCommandTarget& GetCommandTarget() const;

    FPokemonCommandTarget BuildCommandTargetFromHit(const FHitResult& Hit) const;
    void SetCommandTargetFromHit(const FHitResult& Hit);

    void Dodge(const FVector& NewDodgeDirection);
    void EndDodge();

    UPokemonMoveDataAsset* GetActiveMove() const { return ActivePokemonMove; }
    bool IsCommandActive() const { return ActivePokemonMove != nullptr; }
    bool IsDodging() const { return bIsDodging; }
    bool IsUsingMove() const { return bIsUsingMove; }
    FVector GetDodgeDirection() const { return DodgeDirection; }

private:
    UPROPERTY()
    TObjectPtr<APokemon_Parent> OwnerPokemon;

    UPROPERTY(VisibleAnywhere, Category = "Pokemon|Command")
    TObjectPtr<UPokemonMoveDataAsset> ActivePokemonMove = nullptr;

    UPROPERTY(VisibleAnywhere, Category = "Pokemon|Command")
    FPokemonCommandTarget CurrentCommandTarget;

    bool bIsCharging = false;
    bool bIsDodging = false;
    bool bIsUsingMove = false;

    FVector DodgeDirection = FVector::ZeroVector;
};
