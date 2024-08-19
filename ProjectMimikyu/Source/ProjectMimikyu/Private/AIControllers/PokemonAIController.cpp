// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"

void APokemonAIController::BeginPlay()
{
	Super::BeginPlay();
	ControlledPokemon = Cast<APokemon_Parent>(GetPawn());
	AIBehaviorTree = ControlledPokemon->GetBehaviorTree();

	if (ControlledPokemon && AIBehaviorTree)
	{
		RunBehaviorTree(AIBehaviorTree);
		SetPokemonState(EPokemonState::EPS_Passive);
		GetBlackboardComponent()->SetValueAsVector(SpawnLocationKeyName, ControlledPokemon->GetActorLocation());
	}
}

void APokemonAIController::SetPokemonState(EPokemonState NewPokemonState)
{
	GetBlackboardComponent()->SetValueAsEnum(PokemonStateKeyName, (uint8)NewPokemonState);
}

void APokemonAIController::SetPokemonStatus(EPokemonStatus NewPokemonStatus)
{
	GetBlackboardComponent()->SetValueAsEnum(PokemonStatusKeyName, (uint8)NewPokemonStatus);
}

void APokemonAIController::SetBlackboardTrainer()
{
	GetBlackboardComponent()->SetValueAsObject(PokemonTrainerKeyName, TrainerToFollow);
}


void APokemonAIController::SetBlackboardAttackTarget()
{
	GetBlackboardComponent()->SetValueAsObject(CombatTargetKeyName, CombatTarget);
}

void APokemonAIController::SetBlackboardCurrentMove(UPokemonMoveDataAsset* MoveData)
{

	GetBlackboardComponent()->SetValueAsObject(PokemonCurrentMoveKeyName, MoveData);
	if (!MoveData)return;
	SetBlackboardActionState(MoveData->MoveAction);
}

void APokemonAIController::SetBlackboardActionState(EMoveAction DamageAction)
{
	GetBlackboardComponent()->SetValueAsEnum(PokemonActionStateKeyName, (uint8)DamageAction);
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
		SetPokemonState(EPokemonState::EPS_Combative);

		if (AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CombatTarget))
		{

		}
	}

	SetBlackboardAttackTarget();
}

EPokemonState APokemonAIController::GetPokemonState() const
{
	return static_cast<EPokemonState>(GetBlackboardComponent()->GetValueAsEnum(PokemonStateKeyName));
}
