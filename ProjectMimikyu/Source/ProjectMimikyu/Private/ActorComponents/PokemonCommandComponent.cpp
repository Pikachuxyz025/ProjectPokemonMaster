// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
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

FPokemonCommandTarget UPokemonCommandComponent::BuildCommandTargetFromAimData(const FAimData& AimData) const
{
	FPokemonCommandTarget Result;

	Result.TargetActor = AimData.TargetActor.Get();
	Result.TargetLocation = AimData.AimWorldLocation;
	Result.ImpactNormal = FVector::UpVector;

	AActor* TargetActor = Result.TargetActor.Get();

	if (IsValid(TargetActor))
	{
		if (Cast<APokemon_Parent>(TargetActor))
		{
			Result.TargetType = EPokemonCommandTargetType::EnemyPokemon;
			return Result;
		}

		Result.TargetType = EPokemonCommandTargetType::Environment;
		return Result;
	}

	if (!AimData.AimWorldLocation.IsNearlyZero())
	{
		Result.TargetType = EPokemonCommandTargetType::Location;
		return Result;
	}

	Result.TargetType = EPokemonCommandTargetType::None;
	Result.TargetPointTag = AimData.TargetPointTag;

	return Result;
}

void UPokemonCommandComponent::SetCommandTargetFromAimData(const FAimData& AimData)
{
	SetCommandTarget(BuildCommandTargetFromAimData(AimData));
}

bool UPokemonCommandComponent::TryCallCommand(int32 MoveIndex)
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		UE_LOG(LogTemp, Error, TEXT("TryCallCommand failed: OwnerPokemon is null."));
		return false;
	}

	if (!Pokemon->CanAct())
	{
		UE_LOG(LogTemp, Display,
			TEXT("TryCallCommand rejected: Pokemon cannot act. Pokemon=%s MoveIndex=%d"),
			*GetNameSafe(Pokemon),
			MoveIndex);

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

	if (!MovesetComponent->CanUseMove(SelectedMove))
	{
		UE_LOG(LogTemp, Display, TEXT("TryCallCommand rejected: Move '%s' cannot be used."), *SelectedMove->MoveName.ToString());
		return false;
	}

	UPokemonAbilitySystemComponent* PASC = Pokemon->GetPokemonASC();
	if (!PASC)
	{
		UE_LOG(LogTemp, Error, TEXT("TryCallCommand failed: PokemonASC is null."));
		return false;
	}

	const FGameplayTag MoveCooldownTag = FPokemonGameplayTags::Get().InputsToCooldowns[SelectedMove->InputTag];

	if (PASC->HasMatchingGameplayTag(MoveCooldownTag))
	{
		UE_LOG(LogTemp, Display, TEXT("Move '%s' is in cooldown."), *SelectedMove->MoveName.ToString());
		return false;
	}

	ActivePokemonMove = SelectedMove;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		UE_LOG(LogTemp, Display, TEXT("TryCallCommand: Setting current move in PokemonController's blackboard. Move='%s'"), *SelectedMove->MoveName.ToString());
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

	ClearCommandTarget();

	UE_LOG(LogTemp, Display, TEXT("[PokemonCommand] Attack ended | Pokemon=%s | Command target cleared"), *GetNameSafe(Pokemon));

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardCurrentMove(nullptr);
	}

	Pokemon->SetMovementSpeed(EMovementSpeed::EMS_Running);
	Pokemon->OnAttackEnd.Broadcast();
}

bool UPokemonCommandComponent::ResolveDodgeDirection(FGameplayTag DirectionTag, const FVector& ReferenceForward, FVector& OutWorldDirection) const
{
	OutWorldDirection = FVector::ZeroVector;

	FVector Forward = ReferenceForward;	
	Forward.Z = 0.f;

	if (!Forward.Normalize())
	{
		UE_LOG(LogTemp, Warning, TEXT("ResolveDodgeDirection failed: ReferenceForward is zero vector."));
		return false;
	}

	const FVector Right = FVector::CrossProduct(FVector::UpVector, Forward).GetSafeNormal();

	const FPokemonGameplayTags& Tags = FPokemonGameplayTags::Get();

	if (DirectionTag == Tags.InputTag_Dodge_Left)
	{
		OutWorldDirection = -Right;
	}
	else if (DirectionTag == Tags.InputTag_Dodge_Right)
	{
		OutWorldDirection = Right;
	}
	else if (DirectionTag == Tags.InputTag_Dodge_Forward)
	{
		OutWorldDirection = Forward;
	}
	else if (DirectionTag == Tags.InputTag_Dodge_Backward)
	{
		OutWorldDirection = -Forward;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ResolveDodgeDirection failed: Unrecognized dodge direction tag '%s'."), *DirectionTag.ToString());
		return false;
	}

	return OutWorldDirection.Normalize();
}

void UPokemonCommandComponent::Dodge(const FGameplayTag NewDodgeDirectionTag, const FVector& ReferenceForward)
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();
	if (!Pokemon)
	{
		return;
	}

	if (!Pokemon->CanAct())
	{
		UE_LOG(LogTemp, Display, TEXT("Dodge rejected: Pokemon cannot act. Pokemon=%s"), *GetNameSafe(Pokemon));

		return;
	}

	if (bIsDodging)
	{
		UE_LOG(LogTemp, Verbose, TEXT("Dodge ignored: already dodging."));
		return;
	}

	FVector SafeDirection;

	if (!ResolveDodgeDirection(NewDodgeDirectionTag, ReferenceForward, SafeDirection))
	{
		UE_LOG(LogTemp, Warning, TEXT("Dodge rejected: Failed To Resolve. Direction | Pokemon=%s | Tag=%s"), *GetNameSafe(Pokemon), *NewDodgeDirectionTag.ToString());
		return;
	}

	DrawDebugDirectionalArrow(
		GetWorld(),
		Pokemon->GetActorLocation()
		+ FVector(0.f, 0.f, 100.f),

		Pokemon->GetActorLocation()
		+ FVector(0.f, 0.f, 100.f)
		+ SafeDirection * 350.f,

		60.f,
		FColor::Cyan,
		false,
		1.5f,
		0,
		5.f
	);

	UE_LOG(LogTemp, Display, TEXT(
		"[PokemonDodge] Dodge requested | "
		"Pokemon=%s | "
		"Direction=(%.2f %.2f %.2f) | "
		"Tag=%s"
	),
		*GetNameSafe(Pokemon),
		SafeDirection.X,
		SafeDirection.Y,
		SafeDirection.Z,
		*NewDodgeDirectionTag.ToString()
	);

	UPokemonAbilitySystemComponent* PASC = Pokemon->GetPokemonASC();

	if (!PASC)
	{
		UE_LOG(LogTemp, Error, TEXT("Dodge failed: PokemonASC is null."));
		return;
	}

	// The ability reads this during ActivateAbility().
	DodgeDirection = SafeDirection;

	DodgeDirectionTag = NewDodgeDirectionTag;

	// Mark the requested state before TryActivateAbility() so that ability cleanup can safely unwind it if CommitAbility fails.
	bIsDodging = true;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardActionState(EMoveAction::EMA_Dodging);
	}

	const bool bActivated = PASC->ActivateAbilityByTag(FPokemonGameplayTags::Get().InputTag_Dodge);

	if(!bActivated)
	{
		UE_LOG(LogTemp, Warning, TEXT("Dodge ability activation failed."));
		bIsDodging = false;
		DodgeDirection = FVector::ZeroVector;
		DodgeDirectionTag = FGameplayTag::EmptyTag;

		if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
		{
			PokemonController->SetBlackboardActionState(EMoveAction::EMA_None);
		}
		return;
	}

	// Don't destroy a valid Move Here request unless the dodge actually activated.
	if (!bIsDodging)
	{
		// Ability started but immediately terminated during activation/commit.
		return;
	}

	if (UPokemonNavigationComponent* NavComp = Pokemon->GetNavigationComponent())
	{
		NavComp->SuspendNavigation();
	}

	UE_LOG(
		LogTemp,
		Display,
		TEXT(
			"[PokemonDodge] Command accepted | "
			"Pokemon=%s | "
			"Direction=(%.2f %.2f %.2f)"
		),
		*GetNameSafe(Pokemon),
		SafeDirection.X,
		SafeDirection.Y,
		SafeDirection.Z
	);
}

void UPokemonCommandComponent::EndDodge()
{
	APokemon_Parent* Pokemon = GetOwnerPokemon();

	if (!Pokemon)
	{
		return;
	}

	// Avoid broadcasting the end event multiple times if cancellation and task completion happen close together.
	if (!bIsDodging)
	{
		DodgeDirection = FVector::ZeroVector;
		return;
	}																

	bIsDodging = false;
	DodgeDirection = FVector::ZeroVector;

	if (APokemonAIController* PokemonController = Pokemon->GetPokemonController())
	{
		PokemonController->SetBlackboardActionState(EMoveAction::EMA_None);
	}

	// Temporary action is finished.
	// The old high-level navigation intent may continue
	if (UPokemonNavigationComponent* NavComp = Pokemon->GetNavigationComponent())
	{
		NavComp->ResumeNavigation();
	}

	UE_LOG(LogTemp, Display, TEXT("[PokemonDodge] Dodge ended | Pokemon=%s"), *GetNameSafe(Pokemon));
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