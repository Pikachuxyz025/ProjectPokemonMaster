// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Pokemon_Parent.h"
#include "Components/BoxComponent.h"
#include "BrainComponent.h"
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
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Net/UnrealNetwork.h"

// Sets default values
APokemon_Parent::APokemon_Parent()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (PokemonDataAsset && PokemonDataAsset->Model)
	{
		GetMesh()->SetSkeletalMeshAsset(PokemonDataAsset->Model);
	}
	DamageSystem = CreateDefaultSubobject<UDamageSystemComponent>(TEXT("Damage System"));
	MovesetComponent = CreateDefaultSubobject<UMovesetComponent>(TEXT("Moveset Component"));

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(GetRootComponent());

	CollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	CollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	BoxTraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace Start"));
	BoxTraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace End"));

	BoxTraceStart->SetupAttachment(GetRootComponent());
	BoxTraceEnd->SetupAttachment(GetRootComponent());

	MeleeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Melee Timeline"));

	AbilitySystemComponent = CreateDefaultSubobject<UPokemonAbilitySystemComponent>("Ability System Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	AttributeSet = CreateDefaultSubobject<UPokemonBaseAttributeSet>("Attribute Set");
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
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APokemon_Parent::OnBoxOverlap);
	DamageSystem->SetupStats
	(
		PokemonDataAsset->BaseHealthPoints,
		PokemonDataAsset->BaseAttack,
		PokemonDataAsset->BaseSpecialAttack,
		PokemonDataAsset->BaseDefense,
		PokemonDataAsset->BaseSpecialDefense,
		PokemonDataAsset->BaseSpeed,
		CurrentLevel,
		Nature
	);

	DamageSystem->SetupElementalType(PokemonDataAsset->FirstType, PokemonDataAsset->SecondType);
	SetupPokemonUIInfo();
	MovesetComponent->SpawnWithMoveSet(CurrentLevel);
	AddPokemonAbilities();

	SetupMeleeTimeline();

	InitAbilityActorInfo();
}

void APokemon_Parent::AddPokemonAbilities()
{
	UPokemonAbilitySystemComponent* PokemonASC = CastChecked<UPokemonAbilitySystemComponent>(AbilitySystemComponent);
	if (HasAuthority())
	{
		PokemonASC->AddCharacterAbilities(MovesetComponent->CurrentPokemonMoves);
	}
}

void APokemon_Parent::SetupMeleeTimeline()
{
	//FOnTimelineEvent StartCollisionEvent;
	//FOnTimelineEvent EndCollisionEvent;
	FOnTimelineEvent StartBoxTraceEvent;
	FOnTimelineEvent FinishedCollisionEvent;

	//StartCollisionEvent.BindUFunction(this, FName("AddCollision"));
	//EndCollisionEvent.BindUFunction(this, FName("RemoveCollision"));
	//StartBoxTraceEvent.BindUFunction(this, FName("StartBoxTrace"));
	FinishedCollisionEvent.BindUFunction(this, FName("StartBoxTrace"));

	//MeleeTimeline->AddEvent(.3f, StartCollisionEvent);
	//MeleeTimeline->AddEvent(1.5f, EndCollisionEvent);
	//MeleeTimeline->AddEvent(.4f, StartBoxTraceEvent);
	MeleeTimeline->SetTimelineFinishedFunc(FinishedCollisionEvent);
	MeleeTimeline->SetTimelineLength(.5f);
}

void APokemon_Parent::SetupPokemonUIInfo()
{
	PokemonUIInfo.PokemonLevel = CurrentLevel;
	PokemonUIInfo.PokemonName = PokemonDataAsset->Name;
	PokemonUIInfo.PokemonSpriteImage = PokemonDataAsset->SpriteImage;
	PokemonUIInfo.PokemonHPPercent = DamageSystem->GetHealthPercent();
}

void APokemon_Parent::UpdatEPokemonUIInfo()
{
	PokemonUIInfo.PokemonHPPercent = DamageSystem->GetHealthPercent();
}

void APokemon_Parent::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	PokemonController = Cast<APokemonAIController>(GetController());
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

void APokemon_Parent::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const
{
	check(IsValid(GetAbilitySystemComponent()));
	check(GameplayEffectClass);
	FGameplayEffectContextHandle EffectContext = GetAbilitySystemComponent()->MakeEffectContext();
	EffectContext.AddSourceObject(this);
	const FGameplayEffectSpecHandle SpecsHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, Level, EffectContext);
	FActiveGameplayEffectHandle ActiveEffectHandle = GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecsHandle.Data.Get(), GetAbilitySystemComponent());
}

void APokemon_Parent::InitializeDefaultAttributes() const
{
	ApplyEffectToSelf(DefaultStatAttributes, 1.f);
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
	PokemonController->SetBlackboardCurrentMove(ActivePokemonMove);
	SetMovementSpeed(EMovementSpeed::EMS_Running);

	OnAttackEnd.Broadcast();
}

void APokemon_Parent::OnBoxHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (Hit.bBlockingHit)
	{
		FString ActorName = UKismetSystemLibrary::GetDisplayName(Hit.GetActor());
		UE_LOG(LogTemp, Display, TEXT("Hit %s"), *ActorName);
		UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, ChargeTimer);
		DamageTarget(Hit.GetActor());
		AttackEnded();
	}
}

void APokemon_Parent::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FHitResult HitResult;
	BoxTrace(HitResult);
	UE_LOG(LogTemp, Display, TEXT("At Least Overlapping"));
	//if (MeleeTimeline && MeleeTimeline->IsPlaying())
	//{
	//	MeleeTimeline->Stop();
	//}
	//if (HitResult.GetActor())
	//{
	//	FString ActorName = UKismetSystemLibrary::GetDisplayName(HitResult.GetActor());
	//	UE_LOG(LogTemp, Display, TEXT("Hit %s"), *ActorName);

	//	AttackEnded();
	//}
}

// Called every frame
void APokemon_Parent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APokemon_Parent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APokemon_Parent::Faint()
{
	if (PokemonController)
	{
		PokemonController->GetBrainComponent()->StopLogic(FString::Printf(TEXT("Fainted")));
		PokemonController->SetPokemonState(EPokemonState::EPS_Fainted);
		if (PokemonController->GetCombatTarget())
		{
			if (APokemon_Parent* PokemonTarget = Cast<APokemon_Parent>(PokemonController->GetCombatTarget()))
			{
				PokemonTarget->DisengageFromCombat();
				DisengageFromCombat();

			}
		}
	}
}

void APokemon_Parent::SetMovementSpeed(EMovementSpeed NewMovementSpeed)
{
	float NewSpeed = 0.0f;
	switch (NewMovementSpeed)
	{
	case EMovementSpeed::EMS_Idle:
		NewSpeed = 0.0f;
		break;
	case EMovementSpeed::EMS_Walking:
		NewSpeed = DamageSystem->GetWalkingSpeed();
		break;
	case  EMovementSpeed::EMS_Running:
		NewSpeed = DamageSystem->GetRunningSpeed();
		break;
	case EMovementSpeed::EMS_Engaging:
		if (ActivePokemonMove)
			NewSpeed = DamageSystem->GetEngagedSpeed(ActivePokemonMove->SpeedMultiplier);
		else
			NewSpeed = DamageSystem->GetEngagedSpeed();
		break;
	case EMovementSpeed::EMS_DefaultMax:
		break;
	default:
		break;
	}
	GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
}

void APokemon_Parent::ChargeIn()
{
}

void APokemon_Parent::FireAt()
{
}

float APokemon_Parent::GetCurrentHealth()
{
	return DamageSystem->GetCurrentHealth();
}

float APokemon_Parent::GetMaxHealth()
{
	return DamageSystem->GetMaxHealth();
}

void APokemon_Parent::RecieveHealth_Implementation(float AddHealthPercent)
{
}

void APokemon_Parent::RecieveDamage(FDamageInfo DamageInfo)
{
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

}

bool APokemon_Parent::IsAttacking_Implementation()
{
	return false;
}

bool APokemon_Parent::HasFainted_Implementation()
{
	return !DamageSystem->bIsDead;
}

#pragma region IPokemonCombatInterface

int32 APokemon_Parent::GetPokemonLevel()
{
	return CurrentLevel;
}

int32 APokemon_Parent::GetHP()
{
	return PokemonDataAsset->BaseHealthPoints;
}

int32 APokemon_Parent::GetSpecialDefense()
{
	return PokemonDataAsset->BaseSpecialDefense;
}

int32 APokemon_Parent::GetSpecialAttack()
{
	return PokemonDataAsset->BaseSpecialAttack;
}

int32 APokemon_Parent::GetAttack()
{
	return PokemonDataAsset->BaseAttack;
}

int32 APokemon_Parent::GetDefense()
{
	return PokemonDataAsset->BaseDefense;
}

int32 APokemon_Parent::GetSpeed()
{
	return PokemonDataAsset->BaseSpeed;
}
float APokemon_Parent::GetNatureMultiplier(EStatsType StatType)
{
	return DamageSystem->NatureModifier(Nature, StatType);
}
int32 APokemon_Parent::GetELB(int32 BaseStat, EStatsType StatType)
{
	return DamageSystem->CalculateEffortLevelBase(BaseStat, DamageSystem->EffortLevelBaseMap[StatType], CurrentLevel);
}
#pragma endregion



void APokemon_Parent::DamageTarget(AActor* Target)
{
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
}

void APokemon_Parent::AddCollision()
{
	UE_LOG(LogTemp, Display, TEXT("Collision On"));
	SetBoxCollision(ECollisionEnabled::QueryAndPhysics);
}

void APokemon_Parent::RemoveCollision()
{
	UE_LOG(LogTemp, Display, TEXT("Collision Off"));
	SetBoxCollision(ECollisionEnabled::NoCollision);
}

void APokemon_Parent::StartBoxTrace()
{
	UE_LOG(LogTemp, Display, TEXT("Trace Started"));
	FHitResult HitResult;
	BoxTrace(HitResult);

	if (HitResult.GetActor())
	{
		FString ActorName = UKismetSystemLibrary::GetDisplayName(HitResult.GetActor());
		UE_LOG(LogTemp, Display, TEXT("Hit %s"), *ActorName);
		DamageTarget(HitResult.GetActor());
	}

	AttackEnded();
}

void APokemon_Parent::EnactMove()
{
	if (ActivePokemonMove)
	{
		EMoveAction ActiveMoveAction = ActivePokemonMove->MoveAction;
		FTimerHandle Timer;

		switch (ActiveMoveAction)
		{
		case EMoveAction::EMA_None:
			break;
		case EMoveAction::EMA_Melee:
			if (MeleeTimeline)
				MeleeTimeline->PlayFromStart();
			//StartBoxTrace();
			break;
		case EMoveAction::EMA_Projectile:
			GetWorldTimerManager().SetTimer(Timer, this, &APokemon_Parent::AttackEnded, 4.f, false);

			break;
		case EMoveAction::EMA_Charging:

			bIsCharging = true;
			if (!GetCapsuleComponent()->OnComponentHit.IsBound())
				GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &APokemon_Parent::OnBoxHit);
			break;
		case EMoveAction::EMA_Environment:

			GetWorldTimerManager().SetTimer(Timer, this, &APokemon_Parent::AttackEnded, 4.f, false);
			break;
		}
		UE_LOG(LogTemp, Display, TEXT("%s"), *ActivePokemonMove->MoveName.ToString());
	}
}

void APokemon_Parent::CombatReady(AActor* Target)
{
	APokemon_Parent* PokemonTarget = Cast<APokemon_Parent>(Target);
	PokemonController->SetCombatTarget(Target);
}

bool APokemon_Parent::WithinCloseRangeOfTarget()
{
	if (PokemonController && PokemonController->GetCombatTarget())
	{
		float CurrentDistanceToTarget = (GetActorLocation() - PokemonController->GetCombatTarget()->GetActorLocation()).Size();
		if (CurrentDistanceToTarget < 5)
			return true;
	}
	return false;
}

void APokemon_Parent::Charge()
{
	GetCharacterMovement()->StopMovementImmediately();
	GetCapsuleComponent()->SetSimulatePhysics(true);
	FVector ToTarget = UKismetMathLibrary::GetDirectionUnitVector(GetActorLocation(), PokemonController->GetCombatTarget()->GetActorLocation());
	GetCapsuleComponent()->AddImpulse(ToTarget * 100000.f);
	GetWorldTimerManager().SetTimer(ChargeTimer, this, &APokemon_Parent::AttackEnded, 3.f, false);
}


void APokemon_Parent::GetReadyForCombat(AActor* Target)
{
	APokemon_Parent* PokemonTarget = Cast<APokemon_Parent>(Target);
	PokemonController->SetCombatTarget(Target);
	if (PokemonTarget)
	{
		PokemonTarget->CombatReady(this);
	}
}

void APokemon_Parent::DisengageFromCombat()
{
	PokemonController->SetCombatTarget(nullptr);
}

void APokemon_Parent::SelectRandomMove()
{
	int32 RandonIndex = FMath::RandRange(0, 3);
	CallCommand(RandonIndex);
}

void APokemon_Parent::SetBoxCollision(ECollisionEnabled::Type CollisionEnabled)
{
	if (CollisionBox)
	{
		CollisionBox->SetCollisionEnabled(CollisionEnabled);
		IgnoreActors.Empty();
	}
}

void APokemon_Parent::BoxTrace(FHitResult& BoxHit)
{
	const FVector End = BoxTraceStart->GetComponentLocation();
	const FVector Start = BoxTraceEnd->GetComponentLocation();
	TArray<AActor*>ActorsToIgnore;
	ActorsToIgnore.Add(this);
	ActorsToIgnore.Add(GetOwner());

	for (AActor* Actor : IgnoreActors)
	{
		ActorsToIgnore.AddUnique(Actor);
	}
	UKismetSystemLibrary::BoxTraceSingle(
		this,
		Start,
		End,
		CollisionBox->GetUnscaledBoxExtent(),
		BoxTraceStart->GetComponentRotation(),
		ETraceTypeQuery::TraceTypeQuery1,
		false,
		ActorsToIgnore,
		bShowBoxDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		BoxHit,
		true
	);
	DrawDebugSphere(GetWorld(), BoxHit.ImpactPoint, 1, 12, FColor::Blue);
	IgnoreActors.AddUnique(BoxHit.GetActor());
}

void APokemon_Parent::SetPokemonTrainer(AActor* NewTrainer)
{
	CurrentTrainer = NewTrainer;

	PokemonController = PokemonController ? PokemonController : Cast<APokemonAIController>(GetController());
	PokemonController->SetTrainer(CurrentTrainer);

	AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CurrentTrainer);
	if (Trainer)
	{
		Trainer->OnTargetRegistered.AddDynamic(this, &APokemon_Parent::GetReadyForCombat);
		PokemonStatus = EPokemonStatus::EPS_PlayerTrainer;
		PokemonController->SetPokemonStatus(PokemonStatus);
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
	PokemonController->SetBlackboardCurrentMove(ActivePokemonMove);
}



