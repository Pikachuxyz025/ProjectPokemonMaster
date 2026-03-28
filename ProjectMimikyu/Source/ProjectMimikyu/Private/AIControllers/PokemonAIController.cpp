// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllers/PokemonAIController.h"
#include "GameplayBehaviorsBlueprintFunctionLibrary.h"
#include "Characters/Pokemon_Parent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "PokemonGameplayTags.h"
#include "DataAssets/PokemonAICombatBrainConfig.h"
#include "ActorComponents/PokemonBrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"

APokemonAIController::APokemonAIController()
{
	PokemonBrainComponent = CreateDefaultSubobject<UPokemonBrainComponent>(TEXT("PokemonBrainComponent"));
}

void APokemonAIController::BeginPlay()
{
	Super::BeginPlay();
	//ControlledPokemon = Cast<APokemon_Parent>(GetPawn());
	//AIBehaviorTree = ControlledPokemon->GetBehaviorTree();

/*	if (ControlledPokemon && AIBehaviorTree && !ControlledPokemon->SpawnPointTag.MatchesTagExact(FPokemonGameplayTags::Get().SpawnPoint_ComeOnOut))
	{
		RunBehaviorTree(AIBehaviorTree);
		SetPokemonState(EPokemonState::EPS_Passive);
		GetBlackboardComponent()->SetValueAsVector(SpawnLocationKeyName, ControlledPokemon->GetActorLocation());
		SetBlackboardASC();
	}*/
}

void APokemonAIController::SetPokemonState(EPokemonState NewPokemonState)
{
	UBlackboardComponent* BB = GetBlackboardComponent();
	if (!BB)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("SetPokemonState skipped: BlackboardComponent is null. State=%d"),
			static_cast<int32>(NewPokemonState));
		return;
	}

	BB->SetValueAsEnum(PokemonStateKeyName, static_cast<uint8>(NewPokemonState));

	if (NewPokemonState == EPokemonState::EPS_Fainted)
	{
		SetBlackboardAttackTarget();
		SetBlackboardCurrentMove(nullptr);
		SetBlackboardActionState(EMoveAction::EMA_None);
	}
}

void APokemonAIController::SetPokemonStatus(EPokemonStatus NewPokemonStatus)
{
	//if (!Blackboard)
	//{
	//	UE_LOG(LogTemp, Display, TEXT("No blackboard"));
	//	return;
	//}
	GetBlackboardComponent()->SetValueAsEnum(PokemonStatusKeyName, (uint8)NewPokemonStatus);
}

void APokemonAIController::SetBlackboardTrainer()
{
	//if (!Blackboard)
	//{
	//	UE_LOG(LogTemp, Display, TEXT("No blackboard"));
	//	return;
	//}
	GetBlackboardComponent()->SetValueAsObject(PokemonTrainerKeyName, TrainerToFollow);
}

void APokemonAIController::SetBlackboardASC()
{
	GetBlackboardComponent()->SetValueAsObject(PokemonASCKeyName, GetASC());
}


void APokemonAIController::SetBlackboardAttackTarget()
{
	GetBlackboardComponent()->SetValueAsObject(CombatTargetKeyName, CombatTarget);
}

void APokemonAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	UE_LOG(LogTemp, Warning, TEXT("APokemonAIController::OnPossess called for %s"), *GetNameSafe(InPawn));

	ControlledPokemon = Cast<APokemon_Parent>(InPawn);
	if (!ControlledPokemon)
	{
		UE_LOG(LogTemp, Error, TEXT("OnPossess failed: InPawn is not APokemon_Parent."));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("OnPossess: ControlledPokemon=%s"), *GetNameSafe(ControlledPokemon));

	// TEMP: do not initialize BT, blackboard, trainer, status, or brain here.
}

void APokemonAIController::OnUnPossess()
{
	Super::OnUnPossess();
	if (PokemonBrainComponent)
	{
		PokemonBrainComponent->StopLogic(TEXT("UnPossess"));
	}
}

void APokemonAIController::SetBlackboardCurrentMove(UPokemonMoveDataAsset* MoveData)
{
	UBlackboardComponent* BB = GetBlackboardComponent();
	if (!BB)
	{
		UE_LOG(LogTemp, Error, TEXT("SetBlackboardCurrentMove failed: BlackboardComponent is null."));
		return;
	}

	if (!MoveData|| !MoveData->Ability)
	{
		BB->SetValueAsObject(PokemonCurrentMoveKeyName, nullptr);

		FGameplayTagContainer EmptyTagContainer;
		UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(
			BB, 
			PokemonActionStateKeyName, 
			EmptyTagContainer
		);
		return;
	}

	const UPokemonDamageGameplayAbilities* AbilityCDO = Cast<UPokemonDamageGameplayAbilities>(MoveData->Ability->GetDefaultObject());
	if(!AbilityCDO)
	{
		UE_LOG(LogTemp, Error, TEXT("SetBlackboardCurrentMove failed: Could not get ability CDO."));
		BB->SetValueAsObject(PokemonCurrentMoveKeyName, nullptr);

		FGameplayTagContainer EmptyTagContainer;
		UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(
			BB,
			PokemonActionStateKeyName,
			EmptyTagContainer
		);
		return;
	}

	BB->SetValueAsObject(PokemonCurrentMoveKeyName, MoveData);

	FGameplayTagContainer TagContainer;
	if (AbilityCDO->MoveActionTag.IsValid())
	{
		TagContainer.AddTag(AbilityCDO->MoveActionTag);
	}

	UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(
		BB, 
		PokemonActionStateKeyName,
		TagContainer
	);
}

void APokemonAIController::ActivateAbilityByTag(FGameplayTag InputTag)
{
	if (GetASC())
		GetASC()->ActivateAbilityByTag(InputTag);
}

UPokemonAbilitySystemComponent* APokemonAIController::GetASC()
{
	if (!PokemonAbilitySystemComponent)
	{
		PokemonAbilitySystemComponent = Cast<UPokemonAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return PokemonAbilitySystemComponent;
}

void APokemonAIController::SetBlackboardActionState(EMoveAction DamageAction)
{
	GetBlackboardComponent()->SetValueAsEnum(PokemonActionStateKeyName, (uint8)DamageAction);
}

void APokemonAIController::SetBlackboardDesiredCombatMode(FGameplayTag NewCombatModeTag)
{
	FGameplayTagContainer TagContainer;
	TagContainer.AddTag(NewCombatModeTag);

	UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(
		GetBlackboardComponent(),
		DesiredCombatModeKeyName,
		TagContainer
	);
}

void APokemonAIController::HandleSenseDamage(AActor* Actor)
{
	if (GetPokemonState() == EPokemonState::EPS_Passive)
	{
		CombatTarget = Actor;
		SetBlackboardAttackTarget();
	}
}




void APokemonAIController::SetTrainer(AActor* NewTrainer)
{
	TrainerToFollow = NewTrainer;
	SetBlackboardTrainer();
}

void APokemonAIController::SetCombatTarget(AActor* NewTarget)
{
	CombatTarget = NewTarget;

	if(CombatTarget)
	{
		if (AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CombatTarget))
		{
			return;
		}
		if (APokemon_Parent* Target = Cast<APokemon_Parent>(CombatTarget))
		{
			if (Target == ControlledPokemon)
				return;
		}
		SetPokemonState(EPokemonState::EPS_Combative);
	}
	else
	{
		SetPokemonState(EPokemonState::EPS_Passive);
	}
	SetBlackboardAttackTarget();
}

void APokemonAIController::SetTree(UBehaviorTree* NewBehaviorTree, APokemon_Parent* NewPokemon)
{
	AIBehaviorTree = NewBehaviorTree;
	ControlledPokemon = NewPokemon;
}

EPokemonState APokemonAIController::GetPokemonState() const
{
	return static_cast<EPokemonState>(GetBlackboardComponent()->GetValueAsEnum(PokemonStateKeyName));
}
