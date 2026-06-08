// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorComponents/PokemonCommandComponent.h"

#include "AIControllers/PokemonAIController.h"
#include "ActorComponents/MovesetComponent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Components/CapsuleComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "GameFramework/CharacterMovementComponent.h"

UPokemonCommandComponent::UPokemonCommandComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokemonCommandComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerPokemon = Cast<APokemon_Parent>(GetOwner());
}

APokemon_Parent* UPokemonCommandComponent::GetOwnerPokemon() const
{
	return OwnerPokemon ? OwnerPokemon.Get() : Cast<APokemon_Parent>(GetOwner());
}

void UPokemonCommandComponent::SetCommandTarget(const FPokemonCommandTarget& NewCommandTarget)
{
	CurrentCommandTarget = NewCommandTarget;
}

void UPokemonCommandComponent::ClearCommandTarget()
{
	CurrentCommandTarget.Clear();
}

FPokemonCommandTarget UPokemonCommandComponent::BuildCommandTargetFromHit(const FHitResult& Hit) const
{
	FPokemonCommandTarget Result;

	Result.bHasHitResult = Hit.bBlockingHit;
	Result.HitResult = Hit;
	Result.TargetLocation = Hit.ImpactPoint;
	Result.ImpactNormal = Hit.ImpactNormal;
	Result.TargetActor = Hit.GetActor();

	if (!Hit.bBlockingHit)
	{
		Result.TargetType = EPokemonCommandTargetType::None;
		return Result;
	}

	AActor* HitActor = Hit.GetActor();
	if (!HitActor)
	{
		Result.TargetType = EPokemonCommandTargetType::Location;
		return Result;
	}

	if (Cast<APokemon_Parent>(HitActor))
	{
		Result.TargetType = EPokemonCommandTargetType::EnemyPokemon;
		return Result;
	}

	Result.TargetType = EPokemonCommandTargetType::Environment;
	return Result;
}

void UPokemonCommandComponent::SetCommandTargetFromHit(const FHitResult& Hit)
{
	SetCommandTarget(BuildCommandTargetFromHit(Hit));
}

bool UPokemonCommandComponent::TryCallCommand(int32 MoveIndex)
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		UE_LOG(LogTemp, Error, TEXT("TryCallCommand failed: OwnerPokemon is null."));
		return false;
	}

	if (IsCommandActive())
	{
		UE_LOG(LogTemp, Verbose, TEXT("TryCallCommand ignored: command already active."));
		return false;
	}

	UMovesetComponent* MovesetComponent = Pokemon->GetMovesetComponent();

	if (!MovesetComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("TryCallCommand failed: MovesetComponent is null."));
		return false;
	}

	if (!MovesetComponent->CurrentPokemonMoves.IsValidIndex(MoveIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("TryCallCommand failed: Invalid move index %d."), MoveIndex);
		return false;
	}

	UPokemonMoveDataAsset* SelectedMove = MovesetComponent->CurrentPokemonMoves[MoveIndex];
	if (!SelectedMove)
	{
		UE_LOG(LogTemp, Warning, TEXT("TryCallCommand failed: Move at index %d is null."), MoveIndex);
		return false;
	}

	UPokemonAbilitySystemComponent* PASC = Pokemon->GetPokemonASC();
	if (!PASC)
	{
		UE_LOG(LogTemp, Error, TEXT("TryCallCommand failed: PokemonASC is null."));
		return false;
	}

	const FGameplayTag MoveCooldownTag = SelectedMove->CooldownTag;
	if (PASC->HasMatchingGameplayTag(MoveCooldownTag))
	{
		UE_LOG(LogTemp, Display, TEXT("Move '%s' is in cooldown."), *SelectedMove->MoveName.ToString());
		return false;
	}

	ActivePokemonMove = SelectedMove;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardCurrentMove(ActivePokemonMove);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TryCallCommand warning: PokemonController is null."));
	}

	return true;
}

void UPokemonCommandComponent::AttackEnded()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		return;
	}

	if (UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent())
	{
		if (Capsule->OnComponentHit.IsBound())
		{
			Capsule->OnComponentHit.Clear();
		}
	}

	if (bIsCharging)
	{
		bIsCharging = false;

		if (UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement())
		{
			Movement->StopMovementImmediately();
		}

		if (UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent())
		{
			Capsule->SetSimulatePhysics(false);
		}
	}

	ActivePokemonMove = nullptr;

	UE_LOG(LogTemp, Display, TEXT("Attack Ended"));

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardCurrentMove(nullptr);
	}

	Pokemon->SetMovementSpeed(EMovementSpeed::EMS_Running);
	Pokemon->OnAttackEnd.Broadcast();
}

void UPokemonCommandComponent::Dodge(const FVector& NewDodgeDirection)
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		return;
	}

	DodgeDirection = NewDodgeDirection;
	bIsDodging = true;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardActionState(EMoveAction::EMA_Dodging);
	}
}

void UPokemonCommandComponent::EndDodge()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		return;
	}

	bIsDodging = false;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardActionState(EMoveAction::EMA_None);
	}

	Pokemon->OnDodgeEnd.Broadcast();
}

void UPokemonCommandComponent::SelectRandomMove()
{
	const int32 RandomIndex = FMath::RandRange(0, 3);
	TryCallCommand(RandomIndex);
}

void UPokemonCommandComponent::ClearActiveMove()
{
	ActivePokemonMove = nullptr;
}