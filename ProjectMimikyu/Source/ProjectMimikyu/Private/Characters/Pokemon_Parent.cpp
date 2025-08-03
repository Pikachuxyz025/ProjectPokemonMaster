// Fill out your copyright notice in the Description page of Project Settings.

// TO DO: 
// Add FGameplaytags for spawn points, this determines how their stats spawn
// Activate their behavior tree with trainer set
//



#include "Characters/Pokemon_Parent.h"
#include "Components/BoxComponent.h"
#include "BrainComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "DataAssets/PokemonDataAsset.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "AIControllers/PokemonAIController.h"
#include "ActorComponents/DamageSystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/DamageInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "ActorComponents/MovesetComponent.h"
#include "Components/TimelineComponent.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "Net/UnrealNetwork.h"
#include "ProjectMimikyu/ProjectMimikyu.h"

// Sets default values
APokemon_Parent::APokemon_Parent()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (PokemonDataAsset && PokemonDataAsset->Model)
	{
		GetMesh()->SetSkeletalMeshAsset(PokemonDataAsset->Model);
	}
	//DamageSystem = CreateDefaultSubobject<UDamageSystemComponent>(TEXT("Damage System"));
	MovesetComponent = CreateDefaultSubobject<UMovesetComponent>(TEXT("Moveset Component"));

	//CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	//CollisionBox->SetupAttachment(GetRootComponent());

	//CollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//CollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	//CollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	//CollisionBox->SetCollisionResponseToChannel(ECC_Melee, ECollisionResponse::ECR_Overlap);

	//BoxTraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace Start"));
	//BoxTraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace End"));

	//BoxTraceStart->SetupAttachment(GetRootComponent());
	//BoxTraceEnd->SetupAttachment(GetRootComponent());

	//MeleeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Melee Timeline"));

	AbilitySystemComponent = CreateDefaultSubobject<UPokemonAbilitySystemComponent>("Ability System Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	AttributeSet = CreateDefaultSubobject<UPokemonBaseAttributeSet>("Attribute Set");

	GetMesh()->SetCollisionResponseToChannel(ECC_Melee,ECollisionResponse::ECR_Overlap);
}

void APokemon_Parent::PostEditChangeProperty(FPropertyChangedEvent& Event)
{
	Super::PostEditChangeProperty(Event);
	FName PropertyName = Event.Property ? Event.Property->GetFName() : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(APokemon_Parent, PokemonDataAsset))
	{
		if (PokemonDataAsset && PokemonDataAsset->Model)
		{
			GetMesh()->SetSkeletalMeshAsset(PokemonDataAsset->Model);
		}
	}
}

// Called when the game starts or when spawned
void APokemon_Parent::BeginPlay()
{
	Super::BeginPlay();
	//PokemonController = Cast<APokemonAIController>(GetController());
	//CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APokemon_Parent::OnBoxOverlap);

	//DamageSystem->SetupElementalType(PokemonDataAsset->FirstType, PokemonDataAsset->SecondType);

	if(!SpawnPointTag.MatchesTagExact(GameplayTags.SpawnPoint_ComeOnOut))
	{
		MovesetComponent->SpawnWithDataMoveSet(CurrentLevel, PokemonDataAsset);
		CurrentXP = UPokemonAbilitySystemLibrary::GetPokemonXPAtLevel(this, CurrentLevel, PokemonDataAsset->XpStyle);
		UE_LOG(LogTemp, Warning, TEXT("Changed CurrentXP on %s. XP %f"), *GetName(), (float)CurrentXP);
	}

	AddPokemonAbilities();

	//SetupMeleeTimeline();

	InitAbilityActorInfo();	
	GetPokemonUIInfo(true);
}

void APokemon_Parent::AddPokemonAbilities()
{
	if (HasAuthority())
	{
		GetPokemonASC()->AddCharacterAbilities(MovesetComponent->CurrentPokemonMoves);
	}
}

void APokemon_Parent::AddNewPokemonAbility(TSubclassOf<UPokemonGameplayAbilities> NewAbility,FGameplayTag AbilityInputTag)
{
	if (HasAuthority())
	{
		GetPokemonASC()->AddSingleAbility(NewAbility,AbilityInputTag);
	}
}

//void APokemon_Parent::SetupMeleeTimeline()
//{
//	//FOnTimelineEvent StartCollisionEvent;
//	//FOnTimelineEvent EndCollisionEvent;
//	FOnTimelineEvent StartBoxTraceEvent;
//	FOnTimelineEvent FinishedCollisionEvent;
//
//	//StartCollisionEvent.BindUFunction(this, FName("AddCollision"));
//	//EndCollisionEvent.BindUFunction(this, FName("RemoveCollision"));
//	//StartBoxTraceEvent.BindUFunction(this, FName("StartBoxTrace"));
//	FinishedCollisionEvent.BindUFunction(this, FName("StartBoxTrace"));
//
//	//MeleeTimeline->AddEvent(.3f, StartCollisionEvent);
//	//MeleeTimeline->AddEvent(1.5f, EndCollisionEvent);
//	//MeleeTimeline->AddEvent(.4f, StartBoxTraceEvent);
//	MeleeTimeline->SetTimelineFinishedFunc(FinishedCollisionEvent);
//	MeleeTimeline->SetTimelineLength(.5f);
//}

void APokemon_Parent::SetupPokemonUIInfo()
{
	PokemonUIInfo.PokemonLevel = CurrentLevel;
	PokemonUIInfo.PokemonName = PokemonDataAsset->Name;
	PokemonUIInfo.PokemonSpriteImage = PokemonDataAsset->SpriteImage;
	
	PokemonUIInfo.PokemonHPPercent = GetPokemonAS()->GetHealth() / GetPokemonAS()->GetMaxHealth();//DamageSystem->GetHealthPercent();
}

void APokemon_Parent::UpdatePokemonUIInfo()
{
	PokemonUIInfo.PokemonHPPercent = GetPokemonAS()->GetHealth() / GetPokemonAS()->GetMaxHealth();//DamageSystem->GetHealthPercent();
}

FPokemonInfo APokemon_Parent::GetPokemonInfo()
{
	PokemonInfo = SetupPokemonInfo();
	return PokemonInfo;
}

void APokemon_Parent::SetPokemonStartup(const FPokemonInfo SetupInfo)
{
	//XP = SetupInfo.XP;
	Gender = SetupInfo.Gender;
	Nature = SetupInfo.Nature;
	EffortLevelBaseMap = SetupInfo.StoredEffortLevelBaseMap;
	CurrentLevel = SetupInfo.StoredAttributeValue[GameplayTags.Attributes_Stats_Level];
	CurrentXP = SetupInfo.StoredAttributeValue[GameplayTags.Attributes_Stats_XP];
	MovesetComponent->SetupMoveset(SetupInfo.CurrentPokemonMoves);
	SpawnPointTag = GameplayTags.SpawnPoint_ComeOnOut;
}

FPokemonInfo APokemon_Parent::SetupPokemonInfo()
{
	FPokemonInfo NewInfo;
	NewInfo.CurrentPokemonMoves = MovesetComponent->CurrentPokemonMoves;
	NewInfo.CurrentUiInfo = GetPokemonUIInfo(true);
	NewInfo.StoredEffortLevelBaseMap = EffortLevelBaseMap;
	NewInfo.StoredAttributeValue = GetPokemonAS()->GetAttributeTagValues();
	NewInfo.Nature = Nature;
	NewInfo.Gender = Gender;
	NewInfo.StoredPokemonDataAsset = PokemonDataAsset;
	return NewInfo;
}

FPokemonUIInfo APokemon_Parent::GetPokemonUIInfo(bool bNeedsSetup)
{
	if (bNeedsSetup)
	{
		PokemonUIInfo.PokemonLevel = CurrentLevel;
		PokemonUIInfo.PokemonName = PokemonDataAsset->Name;
		PokemonUIInfo.PokemonSpriteImage = PokemonDataAsset->SpriteImage;
	}
	PokemonUIInfo.PokemonHPPercent = GetPokemonAS()->GetHealth() / GetPokemonAS()->GetMaxHealth();
	PokemonUIInfo.PokemonPPPercent = GetPokemonAS()->GetPowerPoints() / GetPokemonAS()->GetMaxPowerPoints();
	return PokemonUIInfo;
}

APokemonAIController* APokemon_Parent::GetPokemonController()
{
	if (!PokemonController)
		PokemonController = Cast<APokemonAIController>(Controller);
	return PokemonController;
}

void APokemon_Parent::PossessedBy(AController* NewController)
{
	//AActor* NewTrainer = nullptr;
	//if (SpawnPointTag.MatchesTagExact(GameplayTags.SpawnPoint_ComeOnOut))
	//NewTrainer = GetOwner();

	Super::PossessedBy(NewController);
	GetPokemonController()->SetTree(AIBehaviorTree, this);
	//if (NewTrainer)
		//SetPokemonTrainer(NewTrainer);
}

void APokemon_Parent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APokemon_Parent, CurrentTrainer);
	DOREPLIFETIME(APokemon_Parent, PokemonStatus);
	DOREPLIFETIME(APokemon_Parent, bIsCaught);

}

UAbilitySystemComponent* APokemon_Parent::GetAbilitySystemComponent() const
{
	return  AbilitySystemComponent;
}

FActiveGameplayEffectHandle APokemon_Parent::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level)
{
	check(IsValid(GetAbilitySystemComponent()));
	check(GameplayEffectClass);
	FGameplayEffectContextHandle EffectContext = GetAbilitySystemComponent()->MakeEffectContext();
	EffectContext.AddSourceObject(this);
	const FGameplayEffectSpecHandle SpecsHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, Level, EffectContext);

	if (GameplayEffectClass == DefaultStatAttributes&& SpecsHandle.IsValid())
	{
		SpecsHandle.Data->SetSetByCallerMagnitude(GameplayTags.Attributes_Stats_Level, (float)CurrentLevel);
		SpecsHandle.Data->SetSetByCallerMagnitude(GameplayTags.Attributes_Stats_XP, (float)CurrentXP);
	}
	FActiveGameplayEffectHandle ActiveEffectHandle = GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecsHandle.Data.Get(), GetAbilitySystemComponent());
	return ActiveEffectHandle;
}

void APokemon_Parent::InitializeDefaultAttributes()
{
	CurrentStatHandle = ApplyEffectToSelf(DefaultStatAttributes, 1.f);
	CurrentDependentStatHandle=ApplyEffectToSelf(DependentStatAttributes, 1.f);
}

void APokemon_Parent::ReinitializeDefaultAttributes()
{
	AbilitySystemComponent->RemoveActiveGameplayEffect(CurrentStatHandle);
	AbilitySystemComponent->RemoveActiveGameplayEffect(CurrentDependentStatHandle);
	InitializeDefaultAttributes();
}

void APokemon_Parent::InitAbilityActorInfo()
{
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	Cast<UPokemonAbilitySystemComponent>(AbilitySystemComponent)->AbilityActorInfoSet();
	if(HasAuthority())
	InitializeDefaultAttributes();
}

void APokemon_Parent::AttackEnded()
{
	if (GetCapsuleComponent()->OnComponentHit.IsBound())
		GetCapsuleComponent()->OnComponentHit.Clear();
	if (bIsCharging)
	{
		bIsCharging = false;
		GetCharacterMovement()->StopMovementImmediately();
		GetCapsuleComponent()->SetSimulatePhysics(false);
		
	}

	ActivePokemonMove = nullptr;
	UE_LOG(LogTemp, Display, TEXT("Attack Ended"));
	GetPokemonController()->SetBlackboardCurrentMove(ActivePokemonMove);
	SetMovementSpeed(EMovementSpeed::EMS_Running, 1.f);

	OnAttackEnd.Broadcast();
}

//void APokemon_Parent::OnBoxHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
//{
//	if (Hit.bBlockingHit)
//	{
//		FString ActorName = UKismetSystemLibrary::GetDisplayName(Hit.GetActor());
//		UE_LOG(LogTemp, Display, TEXT("Hit %s"), *ActorName);
//		UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, ChargeTimer);
//		DamageTarget(Hit.GetActor());
//
//		//AttackEnded();
//	}
//}

//void APokemon_Parent::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
	//FHitResult HitResult;
	//BoxTrace(HitResult);
	//UE_LOG(LogTemp, Display, TEXT("At Least Overlapping"));
//}


void APokemon_Parent::Fainted(const FVector& DeathImpulse)
{
	if (CurrentTrainer)
	{
		UE_LOG(LogTemp, Display, TEXT("Trainer's Pokemon Is Unable To Battle"));
		Return();
		return;
	}

	SetLifeSpan(5.f);
	if (PokemonController)
	{
		PokemonController->SetPokemonState(EPokemonState::EPS_Fainted);
		PokemonController->GetBrainComponent()->StopLogic(FString::Printf(TEXT("Fainted")));
	}
	GetMesh()->SetEnableGravity(true);
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APokemon_Parent::Return()
{
	if (PokemonController)
	{	
		PokemonController->SetPokemonState(EPokemonState::EPS_Fainted);
		PokemonController->GetBrainComponent()->StopLogic(FString::Printf(TEXT("Returned")));

		Dissolve();
	}
}

void APokemon_Parent::Dissolve()
{
	if (IsValid(ReturnMaterialInstance))
	{
		UMaterialInstanceDynamic* DynamicMatInst = UMaterialInstanceDynamic::Create(ReturnMaterialInstance, this);
		GetMesh()->SetMaterial(0, DynamicMatInst);
		StartDissolveTimeline(DynamicMatInst);
	}
}

void APokemon_Parent::SetupPokemonOnSpawn(UPokemonDataAsset* ResetAsset)
{
}


void APokemon_Parent::SetMovementSpeed(EMovementSpeed NewMovementSpeed, float MoveMultiplier)
{
	float NewSpeed = 0.0f;
	switch (NewMovementSpeed)
	{
	case EMovementSpeed::EMS_Idle:
		NewSpeed = 0.0f;
		break;
	case EMovementSpeed::EMS_Walking:
		NewSpeed = GetWalkingSpeed();
		break;
	case  EMovementSpeed::EMS_Running:
		NewSpeed = GetRunningSpeed();
		break;
	case EMovementSpeed::EMS_Engaging:
		if (ActivePokemonMove)
			NewSpeed = GetEngagedSpeed(MoveMultiplier);
		else
			NewSpeed = GetEngagedSpeed();
		break;
	case EMovementSpeed::EMS_DefaultMax:
		break;
	default:
		break;
	}
	GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
}

//void APokemon_Parent::ChargeIn()
//{
//}

//void APokemon_Parent::FireAt()
//{
//}

//float APokemon_Parent::GetCurrentHealth()
//{
	//return GetPokemonAS()->GetHealth();
//}

//float APokemon_Parent::GetMaxHealth()
//{
	//return GetPokemonAS()->GetMaxHealth();
//}

//void APokemon_Parent::RecieveHealth_Implementation(float AddHealthPercent)
//{
//}

/*
//void APokemon_Parent::RecieveDamage(FDamageInfo DamageInfo)
//{
		bool bWasDamaged = false;
	float Random = FMath::RandRange(85.f, 100.f) / 100.f;
	float Type = DamageSystem->TypeChartDamageMultiplier(DamageInfo.PokemonMove->MoveElementalType);
	DamageInfo.DamageAmount = ((DamageInfo.DamageAmount / (float)DamageSystem->DefenseCounter(DamageInfo.PokemonMove)) / 5.f) * Random * Type;
	DamageSystem->RecieveDamage(DamageInfo, bWasDamaged);
	if (bWasDamaged)
	{
		PokemonUIInfo.PokemonHPPercent = DamageSystem->GetHealthPercent();
		if (PokemonStatus == EPokemonStatus::EPS_PlayerTrainer)
		{
			AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CurrentTrainer);
			if (Trainer)
			{
				Trainer->UpdateCurrentPokemonHealth();
			}
		}
	}
//}*/

//bool APokemon_Parent::IsAttacking_Implementation()
//{
//	return false;
//}
//
//bool APokemon_Parent::HasFainted_Implementation()
//{
//	return bIsDead;
//}

#pragma region IPokemonCombatInterface

int32 APokemon_Parent::GetPokemonLevel()
{
	return CurrentLevel;
}

float APokemon_Parent::GetNatureMultiplier(const FGameplayTag& StatTagToBeModified)
{
	return NatureModifier(Nature, StatTagToBeModified);
}

AActor* APokemon_Parent::GetAvatar_Implementation()
{
	return this;
}

AActor* APokemon_Parent::GetCombatTarget_Implementation()
{
	return GetPokemonController()->GetCombatTarget();
}

int32 APokemon_Parent::GetELB(int32 BaseStat, const FGameplayTag& StatTag)
{
	return CalculateEffortLevelBase(BaseStat, CurrentLevel, StatTag);
}

int32 APokemon_Parent::GetELBValue(const FGameplayTag& StatTag)
{
	return EffortLevelBaseMap[StatTag];
}

FVector APokemon_Parent::GetCombatSocketLocation_Implementation(const FGameplayTag& MontageTag)
{
	FGameplayTagContainer CombatSocketTagContainer;
	CombatSocketTagContainer.AddTag(GameplayTags.CombatSocket_Melee);
	CombatSocketTagContainer.AddTag(GameplayTags.CombatSocket_Projectile);
	CombatSocketTagContainer.AddTag(GameplayTags.CombatSocket_Melee_RightHand);
	CombatSocketTagContainer.AddTag(GameplayTags.CombatSocket_Melee_LeftHand);
	CombatSocketTagContainer.AddTag(GameplayTags.CombatSocket_Melee_Tail);

	TMap<FGameplayTag, FName> CombatSocketTagToNames =
	{
		{GameplayTags.CombatSocket_Melee,MeleeSocketName},
		{GameplayTags.CombatSocket_Projectile,ProjectileSocketName},
		{GameplayTags.CombatSocket_Melee_RightHand,RightHandSocketName},
		{GameplayTags.CombatSocket_Melee_LeftHand,LeftHandSocketName},
		{GameplayTags.CombatSocket_Melee_Tail,TailSocketName}
	};

	if (CombatSocketTagContainer.HasTagExact(MontageTag))
		return GetMesh()->GetSocketLocation(CombatSocketTagToNames[MontageTag]);

	return FVector();
}

float APokemon_Parent::GetTypeMatchup(EElementalType ElementalType)
{
	return TypeChartDamageMultiplier(ElementalType);
}

FPokemonTypeInfo APokemon_Parent::GetPokemonElementalTypes()
{
	FPokemonTypeInfo NewTypeInfo;
	NewTypeInfo.FirstType = PokemonDataAsset->FirstType;
	NewTypeInfo.SecondType = PokemonDataAsset->SecondType;
	return NewTypeInfo;
}

UPokemonMoveDataAsset* APokemon_Parent::GetPokemonActiveMove()
{
	return ActivePokemonMove;
}

int32 APokemon_Parent::GetBaseStatFromTag(const FGameplayTag& StatTag)
{
	return PokemonDataAsset->GetStatFromTag(StatTag);
}
#pragma endregion



/*
//void APokemon_Parent::DamageTarget(AActor* Target)
//{
FDamageInfo NewDamageInfo;
	if (ActivePokemonMove)
		NewDamageInfo.PokemonMove = ActivePokemonMove;
	NewDamageInfo.DamageAmount = (float)DamageSystem->SendDamage(ActivePokemonMove, CurrentLevel);
	NewDamageInfo.DamageInsigator = PokemonController;
	NewDamageInfo.DamageCauser = this;

	IDamageInterface* DamageInterface = Cast<IDamageInterface>(Target);
	if (DamageInterface)
	{
		DamageInterface->RecieveDamage(NewDamageInfo);
	}	
//}*/

//void APokemon_Parent::AddCollision()
//{
//	UE_LOG(LogTemp, Display, TEXT("Collision On"));
//	SetBoxCollision(ECollisionEnabled::QueryAndPhysics);
//}
//
//void APokemon_Parent::RemoveCollision()
//{
//	UE_LOG(LogTemp, Display, TEXT("Collision Off"));
//	SetBoxCollision(ECollisionEnabled::NoCollision);
//}
//
//void APokemon_Parent::StartBoxTrace(FHitResult& HitResult)
//{
//	UE_LOG(LogTemp, Display, TEXT("Trace Started"));
//	;
//	BoxTrace(HitResult);
//
//	if (HitResult.GetActor())
//	{
//		FString ActorName = UKismetSystemLibrary::GetDisplayName(HitResult.GetActor());
//		UE_LOG(LogTemp, Display, TEXT("Hit %s"), *ActorName);
//		DamageTarget(HitResult.GetActor());
//	}
//}

//void APokemon_Parent::EnactMove()
//{
//	if (ActivePokemonMove)
//	{
//		EMoveAction ActiveMoveAction = EMoveAction::EMA_None;// ActivePokemonMove->MoveAction;
//		FTimerHandle Timer;
//
//		switch (ActiveMoveAction)
//		{
//		case EMoveAction::EMA_None:
//			break;
//		case EMoveAction::EMA_Melee:
//			if (MeleeTimeline)
//				MeleeTimeline->PlayFromStart();
//			//StartBoxTrace();
//			break;
//		case EMoveAction::EMA_Projectile:
//			GetWorldTimerManager().SetTimer(Timer, this, &APokemon_Parent::AttackEnded, 4.f, false);
//
//			break;
//		case EMoveAction::EMA_Charging:
//
//			bIsCharging = true;
//			if (!GetCapsuleComponent()->OnComponentHit.IsBound())
//				GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &APokemon_Parent::OnBoxHit);
//			break;
//		case EMoveAction::EMA_Environment:
//
//			GetWorldTimerManager().SetTimer(Timer, this, &APokemon_Parent::AttackEnded, 4.f, false);
//			break;
//		}
//	}
//}

void APokemon_Parent::CombatReady(AActor* Target)
{
	APokemon_Parent* PokemonTarget = Cast<APokemon_Parent>(Target);
	PokemonController->SetCombatTarget(Target);
}

//bool APokemon_Parent::WithinCloseRangeOfTarget()
//{
//	if (PokemonController && PokemonController->GetCombatTarget())
//	{
//		float CurrentDistanceToTarget = (GetActorLocation() - PokemonController->GetCombatTarget()->GetActorLocation()).Size();
//		if (CurrentDistanceToTarget < 5)
//			return true;
//	}
//	return false;
//}
//
//void APokemon_Parent::Charge()
//{
//	FVector ToTarget = UKismetMathLibrary::GetDirectionUnitVector(GetActorLocation(), PokemonController->GetCombatTarget()->GetActorLocation());
//	LaunchCharacter(ToTarget * 10000.f,false,false);
//	OnCharging.Broadcast();
//	UE_LOG(LogTemp, Display, TEXT("Character Launched"));
//}


void APokemon_Parent::GetReadyForCombat(AActor* Target)
{
	APokemon_Parent* PokemonTarget = Cast<APokemon_Parent>(Target);
	PokemonController->SetCombatTarget(Target);
	ApplyEffectToSelf(StaminaRecoveryEffect, 1.f);
	if (PokemonTarget)
	{
		PokemonTarget->CombatReady(this);
	}
}

void APokemon_Parent::DisengageFromCombat()
{
	PokemonController->SetCombatTarget(nullptr);
	//GetAbilitySystemComponent()->RemoveActiveGameplayEffect(ActiveEffectHandle);
}

void APokemon_Parent::AdjustXP(int32 NewXP)
{
	CurrentXP = NewXP;
}

void APokemon_Parent::AdjustLevel(int32 NewLevel)
{
	CurrentLevel = NewLevel;
}

int32 APokemon_Parent::GetXPBaseReward()
{
	return PokemonDataAsset->BaseXPReward;
}

int32 APokemon_Parent::GetExperienceNeededAtLevel(int32 Level)
{
	return UPokemonAbilitySystemLibrary::GetPokemonXPAtLevel(this, Level, PokemonDataAsset->XpStyle);	
}

void APokemon_Parent::Dodge(const FVector NewDodgeDirection)
{
	DodgeDirection = NewDodgeDirection;
	PokemonController->SetBlackboardActionState(EMoveAction::EMA_Dodging);
}

void APokemon_Parent::EndDodge()
{
	PokemonController->SetBlackboardActionState(EMoveAction::EMA_None);
	OnDodgeEnd.Broadcast();
}

void APokemon_Parent::SelectRandomMove()
{
	int32 RandonIndex = FMath::RandRange(0, 3);
	CallCommand(RandonIndex);
}

//void APokemon_Parent::SetBoxCollision(ECollisionEnabled::Type CollisionEnabled)
//{
//	if (CollisionBox)
//	{
//		CollisionBox->SetCollisionEnabled(CollisionEnabled);
//		IgnoreActors.Empty();
//	}
//}
//
//void APokemon_Parent::BoxTrace(FHitResult& BoxHit)
//{
//	const FVector End = BoxTraceStart->GetComponentLocation();
//	const FVector Start = BoxTraceEnd->GetComponentLocation();
//	TArray<AActor*>ActorsToIgnore;
//	ActorsToIgnore.Add(this);
//	ActorsToIgnore.Add(GetOwner());
//
//	for (AActor* Actor : IgnoreActors)
//	{
//		ActorsToIgnore.AddUnique(Actor);
//	}
//	UKismetSystemLibrary::BoxTraceSingle(
//		this,
//		Start,
//		End,
//		CollisionBox->GetUnscaledBoxExtent(),
//		BoxTraceStart->GetComponentRotation(),
//		ETraceTypeQuery::TraceTypeQuery1,
//		false,
//		ActorsToIgnore,
//		bShowBoxDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
//		BoxHit,
//		true
//	);
//	DrawDebugSphere(GetWorld(), BoxHit.ImpactPoint, 1, 12, FColor::Blue);
//	IgnoreActors.AddUnique(BoxHit.GetActor());
//}

UPokemonAbilitySystemComponent* APokemon_Parent::GetPokemonASC()
{
	if (!PokemonASC)
		PokemonASC = CastChecked<UPokemonAbilitySystemComponent>(AbilitySystemComponent);
	return PokemonASC;
}

UPokemonBaseAttributeSet* APokemon_Parent::GetPokemonAS()
{
	if (!PokemonAS)
		PokemonAS = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);
	return PokemonAS;
}

void APokemon_Parent::SetPokemonTrainer(AActor* NewTrainer)
{
	CurrentTrainer = NewTrainer;

	//PokemonController = PokemonController ? PokemonController : Cast<APokemonAIController>(GetController());
	//PokemonController->SetTrainer(CurrentTrainer);

	AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CurrentTrainer);
	if (Trainer)
	{
		Trainer->OnTargetRegistered.AddDynamic(this, &APokemon_Parent::GetReadyForCombat);
		PokemonStatus = EPokemonStatus::EPS_PlayerTrainer;
		//PokemonController->SetPokemonStatus(PokemonStatus);
	}
	UE_LOG(LogTemp, Display, TEXT("Call to server test"));
}

void APokemon_Parent::ServerSetTrainer_Implementation(AActor* NewTrainer)
{
	PokemonController = PokemonController ? PokemonController : Cast<APokemonAIController>(GetController());
	PokemonController->SetTrainer(CurrentTrainer);

	AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CurrentTrainer);
	if (Trainer)
	{
		Trainer->OnTargetRegistered.AddDynamic(this, &APokemon_Parent::GetReadyForCombat);
		PokemonStatus = EPokemonStatus::EPS_PlayerTrainer;
		PokemonController->SetPokemonStatus(PokemonStatus);
	}
}

void APokemon_Parent::CallCommand(int32 Direction)
{
	ActivePokemonMove = MovesetComponent->CurrentPokemonMoves[Direction];

	// Can we use this move?
	FGameplayTag MoveCooldowntag = ActivePokemonMove->CooldownTag;
	if (GetPokemonASC()->HasMatchingGameplayTag(MoveCooldowntag))
	{
		UE_LOG(LogTemp, Display, TEXT("Move is in cooldown"));
		ActivePokemonMove = nullptr;
		return;
	}

	PokemonController->SetBlackboardCurrentMove(ActivePokemonMove);
}

#pragma region Damage Component

float APokemon_Parent::NatureModifier(ENatureType CurrentNature, const FGameplayTag& StatTagToBeModified)
{
	float StatModifier = 1;
	switch (CurrentNature)
	{
	case ENatureType::ENT_None:
		break;
	case ENatureType::ENT_Bashful:
		break;
	case ENatureType::ENT_Docile:
		break;
	case ENatureType::ENT_Hardy:
		break;
	case ENatureType::ENT_Quirky:
		break;
	case ENatureType::ENT_Serious:
		break;
	case ENatureType::ENT_Adamant:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Modest:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Bold:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Brave:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Calm:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Careful:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Gentle:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Hasty:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Jolly:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Lax:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Lonely:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Mild:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Naughty:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Quiet:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Timid:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Attack))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Relaxed:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Sassy:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Rash:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Naive:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Speed))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialDefense))
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Impish:
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_Defense))
			StatModifier = 1.1f;
		if (StatTagToBeModified.MatchesTagExact(GameplayTags.Attributes_Stats_SpecialAttack))
			StatModifier = 0.9f;
		break;
	default:
		break;
	}
	return StatModifier;
}

int32 APokemon_Parent::CalculateEffortLevelBase(int32 BaseStat, int32 AsCurrentLevel, const FGameplayTag& StatTag)
{
	return FMath::RoundToInt(((FMath::Sqrt(float(BaseStat)) * MultiplierMap[EffortLevelBaseMap[StatTag]]) + AsCurrentLevel) / 2.5f);
}

float APokemon_Parent::TypeChartDamageMultiplier(EElementalType DamageElementType)
{
	FString FirstTypeContextString;
	float X = 1;
	float Y = 1;
	FTypeChartMatchup* FirstTypeChart;
	FTypeChartMatchup* SecondTypeChart;

	FirstTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[PokemonDataAsset->FirstType], FirstTypeContextString, true);
	X = FirstTypeChart->TypeResponse[DamageElementType];
	if (PokemonDataAsset->SecondType != EElementalType::EET_None)
	{
		SecondTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[PokemonDataAsset->SecondType], FirstTypeContextString, true);
		Y = SecondTypeChart->TypeResponse[DamageElementType];
	}
	return X * Y;
}

float APokemon_Parent::GetRunningSpeed()
{
	return GetPokemonAS()->GetSpeed() * 3.5f * .75f;
}

float APokemon_Parent::GetWalkingSpeed()
{
	return GetPokemonAS()->GetSpeed() * 3.5f * .55f;
}

float APokemon_Parent::GetEngagedSpeed(float MoveMultiplier)
{
	return GetPokemonAS()->GetSpeed() * MoveMultiplier * 3.5f;
}
#pragma endregion

