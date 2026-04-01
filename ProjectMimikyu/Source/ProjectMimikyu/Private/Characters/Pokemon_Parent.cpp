// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Pokemon_Parent.h"
#include "BrainComponent.h"
#include "Components/CapsuleComponent.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "DataAssets/PokemonDataAsset.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "AIControllers/PokemonAIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/PlayerInterface.h"
#include "ActorComponents/MovesetComponent.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "Net/UnrealNetwork.h"
#include "Debugging/PokemonDebugLibrary.h"
#include "PokemonDebugTags.h"
#include "ActorComponents/PokemonIncapacitationComponent.h"
#include "ProjectMimikyu/ProjectMimikyu.h"

APokemon_Parent::APokemon_Parent()
{

	PrimaryActorTick.bCanEverTick = true;
	if (PokemonDataAsset && PokemonDataAsset->Model)
	{
		GetMesh()->SetSkeletalMeshAsset(PokemonDataAsset->Model);
	}

	MovesetComponent = CreateDefaultSubobject<UMovesetComponent>(TEXT("Moveset Component"));
	IncapacitationComponent = CreateDefaultSubobject<UPokemonIncapacitationComponent>(TEXT("Incapacitation Component"));
	AbilitySystemComponent = CreateDefaultSubobject<UPokemonAbilitySystemComponent>("Ability System Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	AttributeSet = CreateDefaultSubobject<UPokemonBaseAttributeSet>("Attribute Set");

	GetMesh()->SetCollisionResponseToChannel(ECC_Melee,ECollisionResponse::ECR_Overlap);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera,ECollisionResponse::ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECollisionResponse::ECR_Ignore);
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

	UE_LOG(LogTemp, Warning,
		TEXT("BeginPlay entered on %s | bSpawnedFromPartyStartup=%d | SpawnPointTag=%s | Level=%d | XP=%d"),
		*GetName(),
		bSpawnedFromPartyStartup ? 1 : 0,
		*SpawnPointTag.ToString(),
		CurrentLevel,
		CurrentXP);

	if (!bSpawnedFromPartyStartup)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("BeginPlay XP init on %s | SpawnPointTag=%s | CurrentLevel=%d | CurrentXP(before)=%d"),
			*GetName(),
			*SpawnPointTag.ToString(),
			CurrentLevel,
			CurrentXP);

		MovesetComponent->SpawnWithDataMoveSet(CurrentLevel, PokemonDataAsset);
		CurrentXP = UPokemonAbilitySystemLibrary::GetPokemonXPAtLevel(this, CurrentLevel, PokemonDataAsset->XpStyle);
		UE_LOG(LogTemp, Warning, TEXT("Changed CurrentXP on %s. XP %f"), *GetName(), (float)CurrentXP);
	}

	AddPokemonAbilities();
	InitAbilityActorInfo();
	GetPokemonUIInfo(true);
}

void APokemon_Parent::AddPokemonAbilities()
{
	if (HasAuthority())
	{
		GetPokemonASC()->AddCharacterAbilities(MovesetComponent->CurrentPokemonMoves);

		// Passive Event Check Should be active only if the pokemon has a player trainer 
		// We'll Keep at just trainer for now
		if(CurrentTrainer)
		{
			GetPokemonASC()->AddCharacterPassiveAbilities(StartupPassiveAbilities);
		}
		UPokemonDebugLibrary::SetCategoryEnabled(this, PokemonDebugTags::Ability, true);
	}
}

void APokemon_Parent::AddNewPokemonAbility(TSubclassOf<UPokemonGameplayAbilities> NewAbility,FGameplayTag AbilityInputTag)
{
	if (HasAuthority())
	{
		GetPokemonASC()->AddSingleAbility(NewAbility,AbilityInputTag);
	}
}

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
	StartupPokemonInfo = SetupInfo;
	bHasStartupPokemonInfo = true;
	bSpawnedFromPartyStartup = true;

	Gender = SetupInfo.Gender;
	Nature = SetupInfo.Nature;
	EffortLevelBaseMap = SetupInfo.GetStoredEffortLevelBaseValuesMap();
	CurrentLevel = SetupInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_Level);
	CurrentXP = SetupInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_XP);
	MovesetComponent->SetupMoveset(SetupInfo.CurrentPokemonMoves);
	SpawnPointTag = GameplayTags.SpawnPoint_ComeOnOut;
}

FPokemonInfo APokemon_Parent::SetupPokemonInfo()
{
	FPokemonInfo NewInfo;
	NewInfo.CurrentPokemonMoves = MovesetComponent->CurrentPokemonMoves;
	NewInfo.CurrentUiInfo = GetPokemonUIInfo(true);
	NewInfo.SetStoredEffortValuesFromMap(EffortLevelBaseMap);
	NewInfo.SetStoredAttributeValuesFromMap(GetPokemonAS()->GetAttributeTagValues());
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
	Super::PossessedBy(NewController);
	PokemonController = Cast<APokemonAIController>(NewController);
	if (PokemonController)
	{
		PokemonController->SetTree(AIBehaviorTree, this);
	}
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
	CurrentDependentStatHandle = ApplyEffectToSelf(DependentStatAttributes, 1.f);
}

void APokemon_Parent::InitializeAttributesFromStartupData()
{
	if (!bHasStartupPokemonInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("InitializeAttributesFromStartupData failed on %s: no startup info"), *GetName());
		InitializeDefaultAttributes();
		return;
	}
	CurrentLevel = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_Level);
	CurrentXP = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_XP);
	EffortLevelBaseMap = StartupPokemonInfo.GetStoredEffortLevelBaseValuesMap();

	// Re-apply the standard attribute effects, but now they use the restored
	// CurrentLevel and CurrentXP that were assigned in SetPokemonStartup().
	InitializeDefaultAttributes();

	UPokemonBaseAttributeSet* PAS = GetPokemonAS();
	if (!PAS)
	{
		UE_LOG(LogTemp, Warning, TEXT("InitializeAttributesFromStartupData failed on %s: no attribute set"), *GetName());
		return;
	}

	const float StoredHealth = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Vital_HP);
	const float StoredMaxHealth = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_MaxHP);
	const float StoredLevel = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_Level);
	const float StoredXP = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_XP);

	// Restore values that should persist from party state.
	// Only set them if they exist in the stored data.
	if (StoredLevel > 0.f)
	{
		PAS->SetCurrentLevel(StoredLevel);
		CurrentLevel = FMath::RoundToInt(StoredLevel);
	}

	if (StoredXP >= 0.f)
	{
		PAS->SetXP(StoredXP);
		CurrentXP = FMath::RoundToInt(StoredXP);
	}

	if (StoredMaxHealth > 0.f)
	{
		PAS->SetMaxHealth(StoredMaxHealth);
	}

	if (StoredHealth > 0.f)
	{
		PAS->SetHealth(StoredHealth);
	}
	else if (StoredMaxHealth > 0.f)
	{
		PAS->SetHealth(StoredMaxHealth);
	}

	UE_LOG(LogTemp, Warning,
		TEXT("InitializeAttributesFromStartupData on %s | Level=%d XP=%d HP=%.2f/%.2f PP=%.2f/%.2f"),
		*GetName(),
		CurrentLevel,
		CurrentXP,
		PAS->GetHealth(),
		PAS->GetMaxHealth(),
		PAS->GetPowerPoints(),
		PAS->GetMaxPowerPoints());
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

	if (!HasAuthority())
	{
		return;
	}

	InitializeDefaultAttributes();

	if (bSpawnedFromPartyStartup && bHasStartupPokemonInfo)
	{
		InitializeAttributesFromStartupData();
	}
}

void APokemon_Parent::OnRep_StartupPokemonInfo()
{
	bHasStartupPokemonInfo = true;
	bSpawnedFromPartyStartup = true;

	Gender = StartupPokemonInfo.Gender;
	Nature = StartupPokemonInfo.Nature;
	EffortLevelBaseMap = StartupPokemonInfo.GetStoredEffortLevelBaseValuesMap();
	CurrentLevel = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_Level);
	CurrentXP = StartupPokemonInfo.GetStoredAttributeValue(GameplayTags.Attributes_Stats_XP);
	MovesetComponent->SetupMoveset(StartupPokemonInfo.CurrentPokemonMoves);
	SpawnPointTag = GameplayTags.SpawnPoint_ComeOnOut;
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
	SetMovementSpeed(EMovementSpeed::EMS_Running);

	OnAttackEnd.Broadcast();
}

void APokemon_Parent::PrepareForFieldRemoval()
{
	if (!HasAuthority())
	{
		return;
	}

	// Stop AI/Brain first
	if (PokemonController)
	{
		PokemonController->SetPokemonState(EPokemonState::EPS_Fainted);
		PokemonController->GetBrainComponent()->StopLogic(FString::Printf(TEXT("Returned to ball / caught")));
		PokemonController->StopMovement();
	}

	// Stop movement
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->StopMovementImmediately();
		GetCharacterMovement()->DisableMovement();
	}

	// Disable gameplay interaction
	SetActorEnableCollision(false);

	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	// Stop Combat State
	ActivePokemonMove = nullptr;
	ClearTrainerBindings();
}

void APokemon_Parent::EnterFaintedState(bool bFromKnockback)
{
	if (bIsDead)
	{
		return;
	}

	bIsDead = true;

	// Stop Combat Logic
	ActivePokemonMove = nullptr;

	// Stop movement
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->StopMovementImmediately();
		GetCharacterMovement()->DisableMovement();
	}
	if (PokemonController)
	{
		PokemonController->SetPokemonState(EPokemonState::EPS_Fainted);
		PokemonController->GetBrainComponent()->StopLogic(FString::Printf(TEXT("Returned to ball / caught")));
		PokemonController->StopMovement();
	}
}

void APokemon_Parent::MulticastPlayReturnEffects_Implementation()
{
	Dissolve();
}

void APokemon_Parent::ClearTrainerBindings()
{
	if (AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CurrentTrainer))
	{
		Trainer->OnTargetRegistered.RemoveDynamic(this, &APokemon_Parent::GetReadyForCombat);
}
}

void APokemon_Parent::ApplyPokemonKnockback(const FVector& KnockbackVelocity, bool bCanCauseFaint, bool bForceRagdoll)
{
	if (IncapacitationComponent)
	{
		IncapacitationComponent->ApplyKnockback(KnockbackVelocity, bCanCauseFaint, bForceRagdoll);
	}
}

void APokemon_Parent::EnterCollapsedFaint()
{
	if (IncapacitationComponent)
	{
		IncapacitationComponent->EnterCollapsedFaint();
	}
}

void APokemon_Parent::BeginManualReturnAfterFaint()
{
	if(IncapacitationComponent)
	{
		IncapacitationComponent->BeginManualReturn();
	}
}

bool APokemon_Parent::IsPokemonProne() const
{
	return IncapacitationComponent && IncapacitationComponent->IsProne();
}

bool APokemon_Parent::IsPokemonFaintedProne() const
{
	return IncapacitationComponent&&IncapacitationComponent->IsFaintedProne();
}

void APokemon_Parent::Fainted(const FVector& DeathImpulse)
{
	if (bIsDead)
	{
		return;
	}

	bIsDead = true;
	AttackEnded();

	UE_LOG(LogTemp, Warning, TEXT("%s has fainted."), *GetNameSafe(this));

	if (!DeathImpulse.IsNearlyZero())
	{
		ApplyPokemonKnockback(DeathImpulse, true, true);
		return;
	}

	EnterCollapsedFaint();
}

void APokemon_Parent::Debug_TestCollapseFaint()
{
	UE_LOG(LogTemp, Warning, TEXT("[DEBUG][%s] Debug_TestCollapseFaint called"), *GetNameSafe(this));

	Debug_ResetDeadFlag();
	Fainted(FVector::ZeroVector);
}

void APokemon_Parent::Debug_TestHeavyFaint()
{
	UE_LOG(LogTemp, Warning, TEXT("[DEBUG][%s] Debug_TestHeavyFaint called"), *GetNameSafe(this));

	Debug_ResetDeadFlag();

	const FVector DebugImpulse =
		(GetActorForwardVector() * 1500.f) +
		(FVector::UpVector * 250.f);

	Fainted(DebugImpulse);
}

void APokemon_Parent::Debug_TestManualReturn()
{
	const bool bCanReturn = IncapacitationComponent && IncapacitationComponent->CanBeReturned();

	UE_LOG(LogTemp, Warning, TEXT("[DEBUG][%s] Debug_TestManualReturn called | CanReturn=%s | IsProne=%s | IsFaintedProne=%s"),
		*GetNameSafe(this),
		bCanReturn ? TEXT("true") : TEXT("false"),
		IsPokemonProne() ? TEXT("true") : TEXT("false"),
		IsPokemonFaintedProne() ? TEXT("true") : TEXT("false"));

	BeginManualReturnAfterFaint();
}

void APokemon_Parent::Debug_ResetDeadFlag()
{
	UE_LOG(LogTemp, Warning, TEXT("[DEBUG][%s] Debug_ResetDeadFlag called | Old bIsDead=%s"),
		*GetNameSafe(this),
		bIsDead ? TEXT("true") : TEXT("false"));

	bIsDead = false;
}

void APokemon_Parent::InteractWithFaintedPokemon(AActor* InteractingActor)
{
	UE_LOG(LogTemp, Warning, TEXT("[DEBUG][%s] InteractWithFaintedPokemon called by %s | CanInteract=%s | IsFaintedProne=%s"),
		*GetNameSafe(this),
		*GetNameSafe(InteractingActor),
		CanInteractWhileFainted() ? TEXT("true") : TEXT("false"),
		IsPokemonFaintedProne() ? TEXT("true") : TEXT("false"));

	if (!CanInteractWhileFainted())
	{
		return;
	}

	// Placeholder for future interaction logic:
	// - Trainer-owned care / recovery item
	// - Wild gratitude
	// - Friendship / notoriety hooks
}

bool APokemon_Parent::CanInteractWhileFainted() const
{
	return IsPokemonFaintedProne();
}

void APokemon_Parent::Return()
{
	if (!HasAuthority())
	{
		return;
	}

	MulticastPlayReturnEffects();

	// Delay the actual return to allow effects to play out
	SetLifeSpan(1.f);
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

float APokemon_Parent::GetTypeMatchup(EElementalType AttackingType)
{
	return TypeChartDamageMultiplier(AttackingType, GetPokemonElementalTypes());
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

void APokemon_Parent::CombatReady(AActor* Target)
{
	APokemon_Parent* PokemonTarget = Cast<APokemon_Parent>(Target);
	PokemonController->SetCombatTarget(Target);
}

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
	return UPokemonAbilitySystemLibrary::GetNeededPokemonXPAtLevel(this, Level, PokemonDataAsset->XpStyle);	
}

int32 APokemon_Parent::GetExperienceAtLevel(int32 Level)
{
	return UPokemonAbilitySystemLibrary::GetPokemonXPAtLevel(this,Level,PokemonDataAsset->XpStyle);
}

void APokemon_Parent::UpdatePokemonInfoInParty_Implementation()
{
	if (CurrentTrainer && CurrentTrainer->Implements<UPlayerInterface>())
	{
		IPlayerInterface::Execute_UpdatePokemonInfoInParty(CurrentTrainer, this);
	}
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

	
	if (AProjectMimikyuCharacter* Trainer = Cast<AProjectMimikyuCharacter>(CurrentTrainer))
	{
		Trainer->OnTargetRegistered.RemoveDynamic(this, &APokemon_Parent::GetReadyForCombat);
		Trainer->OnTargetRegistered.AddDynamic(this, &APokemon_Parent::GetReadyForCombat);
	}

	PokemonStatus = CurrentTrainer ? EPokemonStatus::EPS_PlayerTrainer : EPokemonStatus::EPS_Wild;
}
void APokemon_Parent::CallCommand(int32 MoveIndex)
{
	if (GetIsCommandActive())
	{
		UE_LOG(LogTemp, Verbose, TEXT("CallCommand ignored: command already active."));
		return;
	}
	if (!MovesetComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("CallCommand failed: MovesetComponent is null."));
		return;
	}
	if (!MovesetComponent->CurrentPokemonMoves.IsValidIndex(MoveIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("CallCommand failed: Invalid move index %d."), MoveIndex);
		return;
	}

	UPokemonMoveDataAsset* SelectedMove = MovesetComponent->CurrentPokemonMoves[MoveIndex];
	if (!SelectedMove)
	{
		UE_LOG(LogTemp, Warning, TEXT("CallCommand failed: Move at index %d is null."), MoveIndex);
		return;
	}
	UPokemonAbilitySystemComponent* PASC = GetPokemonASC();
	if (!PASC)
	{
		UE_LOG(LogTemp, Error, TEXT("CallCommand failed: PokemonASC is null."));
		return;
	}

	const FGameplayTag MoveCooldownTag = SelectedMove->CooldownTag;
	if (PASC->HasMatchingGameplayTag(MoveCooldownTag))
	{
		UE_LOG(LogTemp, Display, TEXT("Move '%s' is in cooldown."), *SelectedMove->MoveName.ToString());
		return;
	}
	ActivePokemonMove = SelectedMove;

	if (PokemonController)
	{
		PokemonController->SetBlackboardCurrentMove(ActivePokemonMove);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CallCommand warning: PokemonController is null."));
	}
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

float APokemon_Parent::TypeChartDamageMultiplier(EElementalType DamageElementType, const FPokemonTypeInfo& PokemonTypes)
{
	FString FirstTypeContextString;
	float X = 1;
	float Y = 1;
	FTypeChartMatchup* FirstTypeChart;
	FTypeChartMatchup* SecondTypeChart;

	FirstTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[PokemonTypes.FirstType], FirstTypeContextString, true);
	X = FirstTypeChart->TypeResponse[DamageElementType];
	if (PokemonTypes.SecondType != EElementalType::EET_None)
	{
		SecondTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[PokemonTypes.SecondType], FirstTypeContextString, true);
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

