// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllers/PokemonAIController.h"
#include "GameplayBehaviorsBlueprintFunctionLibrary.h"
#include "Characters/Pokemon_Parent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "PokemonGameplayTags.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"

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
	GetBlackboardComponent()->SetValueAsEnum(PokemonStateKeyName, (uint8)NewPokemonState);
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

	RunBehaviorTree(AIBehaviorTree);
	SetPokemonState(EPokemonState::EPS_Passive);
	GetBlackboardComponent()->SetValueAsVector(SpawnLocationKeyName, ControlledPokemon->GetActorLocation());
	SetBlackboardASC();

	if (ControlledPokemon->SpawnPointTag.MatchesTagExact(FPokemonGameplayTags::Get().SpawnPoint_ComeOnOut))
	{
		SetTrainer(ControlledPokemon->CurrentTrainer);
		SetPokemonStatus(ControlledPokemon->PokemonStatus);
	}
}

void APokemonAIController::SetBlackboardCurrentMove(UPokemonMoveDataAsset* MoveData)
{
	if (!MoveData|| !MoveData->Ability)
	{
		GetBlackboardComponent()->SetValueAsObject(PokemonCurrentMoveKeyName, nullptr);
		return;
	}

	UPokemonGameplayAbilities* Ability = NewObject<UPokemonGameplayAbilities>(this, MoveData->Ability);
	Ability->InputTag = MoveData->InputTag;
	GetBlackboardComponent()->SetValueAsObject(PokemonCurrentMoveKeyName, Ability);

	FGameplayTagContainer TagContainer;
	TagContainer.AddTag(Ability->MoveActionTag);

	UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(GetBlackboardComponent(), PokemonActionStateKeyName, TagContainer);
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

void APokemonAIController::SetTree(UBehaviorTree* NewBehaviorTree, APokemon_Parent* NewPokemon)
{
	AIBehaviorTree = NewBehaviorTree;
	ControlledPokemon = NewPokemon;
}

EPokemonState APokemonAIController::GetPokemonState() const
{
	return static_cast<EPokemonState>(GetBlackboardComponent()->GetValueAsEnum(PokemonStateKeyName));
}
