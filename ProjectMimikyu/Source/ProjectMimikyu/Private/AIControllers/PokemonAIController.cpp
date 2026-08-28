// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllers/PokemonAIController.h"
#include "GameplayBehaviorsBlueprintFunctionLibrary.h"
#include "Characters/Pokemon_Parent.h"
#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "ActorComponents/PokemonDecisionComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"

APokemonAIController::APokemonAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	PokemonDecisionComponent = CreateDefaultSubobject<UPokemonDecisionComponent>(TEXT("PokemonDecisionComponent"));
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

void APokemonAIController::ClearCombatTarget()
{
	CombatTarget = nullptr;

	if (UBlackboardComponent* BlackboardComp = GetBlackboardComponent())
	{
		BlackboardComp->ClearValue(CombatTargetKeyName);
	}

	ClearFocus(EAIFocusPriority::Default);
	ClearFocus(EAIFocusPriority::Move);
	ClearFocus(EAIFocusPriority::Gameplay);
}

void APokemonAIController::StopPokemonDecisionMaking(const FString& Reason)
{
	if (PokemonDecisionComponent)
	{
		PokemonDecisionComponent->StopDecisionMaking(Reason);
	}
}

void APokemonAIController::RestartPokemonDecisionMaking()
{
	if (PokemonDecisionComponent)
	{
		PokemonDecisionComponent->RestartDecisionMaking();
	}
}

void APokemonAIController::EndCombat()
{
	ClearCombatTarget();

	SetPokemonState(EPokemonState::EPS_Passive);
	SetBlackboardCurrentMove(nullptr);
	SetBlackboardDesiredCombatMode(FPokemonGameplayTags::Get().AI_Decision_Combat_Idle);

	StopMovement();

	ClearFocus(EAIFocusPriority::Default);
	ClearFocus(EAIFocusPriority::Move);
	ClearFocus(EAIFocusPriority::Gameplay);

	APokemon_Parent* Pokemon = ControlledPokemon ? ControlledPokemon : Cast<APokemon_Parent>(GetPawn());
	if (!Pokemon)
	{
		return;
	}

	Pokemon->ClearCommandTarget();
	Pokemon->ClearActiveCommandState();

	if (UPokemonNavigationComponent* NavComp = Pokemon->FindComponentByClass<UPokemonNavigationComponent>())
	{
		NavComp->ClearNavigationIntent();
	}

	Pokemon->bUseControllerRotationYaw = false;

	if (UCharacterMovementComponent* MoveComp = Pokemon->GetCharacterMovement())
	{
		MoveComp->bOrientRotationToMovement = true;
		MoveComp->bUseControllerDesiredRotation = false;
	}
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

	ControlledPokemon = Cast<APokemon_Parent>(InPawn);

	if (AIBehaviorTree)
	{
		RunBehaviorTree(AIBehaviorTree);
	}

	if (!ControlledPokemon)
	{
		UE_LOG(LogTemp, Error, TEXT("OnPossess failed: InPawn is not APokemon_Parent."));
		return;
	}

	ConfigureCrowdNavigation();

	UBlackboardComponent* BB = GetBlackboardComponent();
	if (!BB)
	{
		UE_LOG(LogTemp, Error, TEXT("APokemonAIController::OnPossess failed: BlackboardComponent is null."));
		return;
	}

	SetPokemonState(EPokemonState::EPS_Passive);
	BB->SetValueAsVector(SpawnLocationKeyName, ControlledPokemon->GetActorLocation());
	SetBlackboardASC();

	if (ControlledPokemon->SpawnPointTag.MatchesTagExact(FPokemonGameplayTags::Get().SpawnPoint_ComeOnOut))
	{
		SetTrainer(ControlledPokemon->GetCurrentTrainer());
		SetPokemonStatus(ControlledPokemon->GetPokemonStatus());
	}

	if (PokemonDecisionComponent)
	{
		PokemonDecisionComponent->InitializeDecisionComponent(this);
		PokemonDecisionComponent->SetDecisionConfig(CombatBrainConfig);
		PokemonDecisionComponent->StartDecisionMaking();
	}
}

void APokemonAIController::OnUnPossess()
{
	Super::OnUnPossess();
	if (PokemonDecisionComponent)
	{
		PokemonDecisionComponent->StopDecisionMaking(TEXT("UnPossess"));
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
	APokemon_Parent* TargetPokemon = Cast<APokemon_Parent>(NewTarget);

	if (!ControlledPokemon)
	{
		ClearCombatTarget();
		return;
	}

	if (ControlledPokemon->IsFainted() || !ControlledPokemon->CanBeCombatTargeted())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[AI] SetCombatTarget rejected because controlled Pokemon is not targetable | Owner=%s | Target=%s"),
			*GetNameSafe(ControlledPokemon),
			*GetNameSafe(NewTarget));

		EndCombat();
		return;
	}

	if (!TargetPokemon || TargetPokemon == ControlledPokemon || !TargetPokemon->CanBeCombatTargeted())
	{
		EndCombat();
		return;
	}

	CombatTarget = TargetPokemon;
	SetPokemonState(EPokemonState::EPS_Combative);
	SetBlackboardAttackTarget();
}

void APokemonAIController::SetTree(UBehaviorTree* NewBehaviorTree, APokemon_Parent* NewPokemon)
{
	AIBehaviorTree = NewBehaviorTree;
	ControlledPokemon = NewPokemon;
}

void APokemonAIController::ConfigureCrowdNavigation()
{
	UCrowdFollowingComponent* CrowdComp = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent());

	if (!CrowdComp || !ControlledPokemon)
	{
		UE_LOG(LogTemp, Warning, TEXT("ConfigureCrowdNavigation skipped: CrowdFollowingComponent or ControlledPokemon is null."));
		return;
	}

	const bool bUsesGroundCrowd = ControlledPokemon->UsesGroundCrowdNavigation();

	// All Pokemon should face the velocity generated by path following
	CrowdComp->SetCrowdRotateToVelocity(true);

	if (bUsesGroundCrowd)
	{
		// Ground Pokemon participate in avoidance
		CrowdComp->SetAvoidanceGroup(PokemonCrowdGroups::GroundPokemon, false);

		CrowdComp->SetGroupsToAvoid(PokemonCrowdGroups::GroundAvoidance, false);

		CrowdComp->SetGroupsToIgnore(0, false);
	
		CrowdComp->SetCrowdObstacleAvoidance(true, false);

	CrowdComp->SetCrowdAnticipateTurns(true, false);

	CrowdComp->SetCrowdSeparation(true, false);


		CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High, false);

		CrowdComp->SetCrowdCollisionQueryRange(500.f, false);

		CrowdComp->SetCrowdSeparationWeight(2.f, false);
	}
	else
	{
		// Flying / hovering / etc. are still allowed
		// to use ordinary NavMesh path following,
		// but aren't part of ground crowd avoidance.

		CrowdComp->SetAvoidanceGroup(0,false);

		CrowdComp->SetGroupsToAvoid(0,false);

		CrowdComp->SetGroupsToIgnore(PokemonCrowdGroups::GroundAvoidance,false);

		CrowdComp->SetCrowdObstacleAvoidance(false,false);

		CrowdComp->SetCrowdAnticipateTurns(false,false);

		CrowdComp->SetCrowdSeparation(false,false);
	}
	CrowdComp->UpdateCrowdAgentParams();

	UE_LOG(LogTemp,Warning,TEXT(
			"[PokemonCrowd] Owner=%s | "
			"Mode=%s | GroundCrowd=%s"
		),
		*GetNameSafe(ControlledPokemon),
		*ControlledPokemon->GetNavigationMovementMode().ToString(),
		bUsesGroundCrowd? TEXT("True"): TEXT("False")
	);
}

EPokemonState APokemonAIController::GetPokemonState() const
{
	return static_cast<EPokemonState>(GetBlackboardComponent()->GetValueAsEnum(PokemonStateKeyName));
}
