// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterTypes.h"
#include "GameplayEffectTypes.h"
#include "Interfaces/DamageInterface.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystemInterface.h"
#include "PokemonGameplayTags.h"
#include "GameplayTagContainer.h"
#include "Pokemon_Parent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDodgeEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharging);

class UGameplayEffect;
class UPokemonGameplayAbilities;
class UPokemonStatInfoDataAsset;
class UAbilitySystemComponent;
class UAttributeSet;
class UDataTable;
class UPokemonDataAsset;
class UBoxComponent;
class UPokemonMoveDataAsset;
struct FPokemonTypeInfo;

UCLASS()
class PROJECTMIMIKYU_API APokemon_Parent : public ACharacter, public IDamageInterface,public IAbilitySystemInterface,public IPokemonCombatInterface
{
	GENERATED_BODY()

public:

	APokemon_Parent();

	FOnAttackEnd OnAttackEnd;
	UPROPERTY(BlueprintAssignable)
	FOnCharging OnCharging;
	UPROPERTY(BlueprintAssignable)
	FOnDodgeEnd OnDodgeEnd;

	FPokemonGameplayTags GameplayTags = FPokemonGameplayTags::Get();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif

	void AddNewPokemonAbility(TSubclassOf<UPokemonGameplayAbilities> NewAbility, FGameplayTag AbilityInputTag);
protected:

	virtual void BeginPlay() override;

	void AddPokemonAbilities();

	//void SetupMeleeTimeline();

	void SetupPokemonUIInfo();

	void UpdatePokemonUIInfo();

	UPROPERTY(VisibleAnywhere)
	class APokemonAIController* PokemonController;

	virtual void PossessedBy(AController* NewController) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* AIBehaviorTree;

	FPokemonUIInfo PokemonUIInfo;
	FPokemonInfo PokemonInfo;

#pragma region Attributes Setup
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	UPROPERTY()
	TObjectPtr<UPokemonAbilitySystemComponent> PokemonASC;

	UPROPERTY()
	TObjectPtr<UPokemonBaseAttributeSet> PokemonAS;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attributes")
	TSubclassOf<UGameplayEffect> DefaultStatAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attributes")
	TSubclassOf<UGameplayEffect> DependentStatAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attributes")
	TSubclassOf<UGameplayEffect> StaminaRecoveryEffect;

	FActiveGameplayEffectHandle ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level);

	void InitializeDefaultAttributes();
	virtual void ReinitializeDefaultAttributes() override;

	void InitAbilityActorInfo();

	UPROPERTY()
	 FActiveGameplayEffectHandle CurrentStatHandle;
	 UPROPERTY()
	 FActiveGameplayEffectHandle CurrentDependentStatHandle;
#pragma endregion

	UFUNCTION(BlueprintCallable)
	virtual	void AttackEnded();

//	UFUNCTION(BlueprintCallable)
//	void OnBoxHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
//
//	UFUNCTION()
//	void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
//
//	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
//UBoxComponent* CollisionBox;

public:

	void Return();
	void Dissolve();

	UFUNCTION(BlueprintImplementableEvent)
	void StartDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance);

	UFUNCTION(BlueprintImplementableEvent)
	void StartWeaponDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance);

	void SetupPokemonOnSpawn(UPokemonDataAsset* ResetAsset);

	// Dynamic instance that we can change at runtime
	UPROPERTY(VisibleAnywhere, Category = "Elim")
	TObjectPtr<UMaterialInstanceDynamic> DynamicDissolveMaterialInstance;

	// Material instance set on the Blueprint, used with the dynamic material instance
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Elim")
	TObjectPtr<UMaterialInstance> ReturnMaterialInstance;


	void Dodge(const FVector NewDodgeDirection);

	UFUNCTION(BlueprintCallable)
	void EndDodge();

	UPROPERTY(EditAnywhere)
	UPokemonDataAsset* PokemonDataAsset;

	UPROPERTY(VisibleDefaultsOnly)
	class UMovesetComponent* MovesetComponent;

	UFUNCTION(BlueprintCallable)
	void SetMovementSpeed(EMovementSpeed NewMovementSpeed, float MoveMultiplier = 1.f);

	//virtual void ChargeIn();
	//virtual void FireAt();

	UPROPERTY(VisibleAnywhere,Replicated)
	class AActor* CurrentTrainer;

	//UFUNCTION()
	//void OnRep_CurrentTrainer();

	UPROPERTY(VisibleAnywhere,Replicated)
	EPokemonStatus PokemonStatus = EPokemonStatus::EPS_Wild;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UPokemonMoveDataAsset* ActivePokemonMove = nullptr;

	UPROPERTY(EditDefaultsOnly, meta = (Categories = "SpawnPoint"))
	FGameplayTag SpawnPointTag;

//#pragma region IDamageInterface
//	virtual float GetCurrentHealth() override;
//	virtual float GetMaxHealth() override;
//
//	virtual void RecieveHealth_Implementation(float AddHealthPercent) override;
//
//	virtual void RecieveDamage(FDamageInfo DamageInfo) override;
//
//	bool IsAttacking_Implementation() override;
//
//	bool HasFainted_Implementation() override;
//#pragma endregion

#pragma region IPokemonCombatInterface
	virtual int32 GetPokemonLevel() override;
	virtual float GetNatureMultiplier(const FGameplayTag& StatTagToBeModified) override;
	virtual AActor* GetAvatar_Implementation() override;
	virtual AActor* GetCombatTarget_Implementation() override;
	virtual int32 GetELB(int32 BaseStat, const FGameplayTag& StatTag) override;
	virtual int32 GetELBValue(const FGameplayTag& StatTag) override;
	virtual FVector GetCombatSocketLocation_Implementation(const FGameplayTag& MontageTag) override;
	virtual float GetTypeMatchup(EElementalType ElementalType) override;
	virtual FPokemonTypeInfo GetPokemonElementalTypes() override;
	virtual UPokemonMoveDataAsset* GetPokemonActiveMove() override;
	virtual int32 GetBaseStatFromTag(const FGameplayTag& StatTag) override;
	virtual void Fainted(const FVector& DeathImpulse) override;
	virtual void DisengageFromCombat() override;
	virtual void AdjustXP(int32 NewXP) override;
	virtual void AdjustLevel(int32 NewLevel) override;
	virtual int32 GetXPBaseReward() override;
	virtual int32 GetExperienceNeededAtLevel(int32 Level) override;
#pragma endregion

	//void DamageTarget(AActor* Target);

#pragma region Timeline

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//class UTimelineComponent* MeleeTimeline;

//UFUNCTION()
//void AddCollision();

//UFUNCTION()
//void RemoveCollision();

//UFUNCTION(BlueprintCallable)
//void StartBoxTrace(FHitResult& HitResult);

#pragma endregion

	bool bIsCharging = false;

	bool bIsDodging = false;

	void CombatReady(AActor* Target);

	//bool WithinCloseRangeOfTarget();

	//UFUNCTION(BlueprintCallable)
	//void Charge();

	//virtual void EnactMove();

	void SetPokemonStartup(const FPokemonInfo SetupInfo);
protected:

#pragma region Damage Component
	float NatureModifier(ENatureType CurrentNature, const FGameplayTag& StatTagToBeModified);

	int32 CalculateEffortLevelBase(int32 BaseStat, int32 AsCurrentLevel, const FGameplayTag& StatTag);

	float TypeChartDamageMultiplier(EElementalType DamageElementType);

	UPROPERTY()
	TMap<int32, int32> MultiplierMap =
	{
		{ 0, 0 },
		{ 1, 2 },
		{ 2, 3 },
		{ 3, 4 },
		{ 4, 7 },
		{ 5, 8 },
		{ 6, 9 },
		{ 7, 14 },
		{ 8, 15 },
		{ 9, 16 },
		{ 10, 25 }
	};

	UPROPERTY(EditDefaultsOnly)
	TMap<FGameplayTag, int32> EffortLevelBaseMap =
	{
		{FPokemonGameplayTags::Get().Attributes_Stats_Attack, 0},
		{FPokemonGameplayTags::Get().Attributes_Stats_Defense, 0},
		{FPokemonGameplayTags::Get().Attributes_Stats_MaxHP, 0},
		{FPokemonGameplayTags::Get().Attributes_Stats_SpecialAttack, 0},
		{FPokemonGameplayTags::Get().Attributes_Stats_SpecialDefense, 0},
		{FPokemonGameplayTags::Get().Attributes_Stats_Speed, 0}
	};

	UPROPERTY()
	TMap<EElementalType, FName> TypeResponse =
	{
		{EElementalType::EET_Bug,"Bug" },
		{EElementalType::EET_Dark,"Dark" },
		{EElementalType::EET_Dragon,"Dragon" },
		{EElementalType::EET_Electric,"Electric" },
		{EElementalType::EET_Fairy,"Fairy" },
		{EElementalType::EET_Fighting,"Fighting" },
		{EElementalType::EET_Fire,"Fire" },
		{EElementalType::EET_Flying,"Flying" },
		{EElementalType::EET_Ghost,"Ghost" },
		{EElementalType::EET_Grass,"Grass" },
		{EElementalType::EET_Ground,"Ground" },
		{EElementalType::EET_Ice,"Ice" },
		{EElementalType::EET_Normal,"Normal" },
		{EElementalType::EET_Poison,"Poison" },
		{EElementalType::EET_Psychic,"Psychic" },
		{EElementalType::EET_Rock,"Rock" },
		{EElementalType::EET_Water,"Water" },
		{EElementalType::EET_Steel,"Steel" }
	};

	bool bIsDead = false;

	UPROPERTY(EditAnywhere)
	UDataTable* TypeChartDataTable;

	float GetRunningSpeed();
	float GetWalkingSpeed();
	float GetEngagedSpeed(float MoveMultiplier = 1.f);
#pragma endregion

#pragma region Stats

	UFUNCTION()
	void GetReadyForCombat(AActor* Target);

	FVector DodgeDirection = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = "Stats")
	EGenderType Gender = EGenderType::EGT_None;

	UPROPERTY(EditAnywhere, Category = "Stats")
	ENatureType Nature = ENatureType::ENT_None;

	UPROPERTY(EditAnywhere, Category = "Stats", meta = (ClampMin = "1", ClampMax = "100"))
	int32 CurrentLevel = 1;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 CurrentXP = 0; 

	UPROPERTY(VisibleAnywhere)
	bool bIsUsingMove = false;

	FTimerHandle ChargeTimer;
#pragma endregion

	FPokemonInfo SetupPokemonInfo();

	TArray<AActor*>IgnoreActors;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float WalkingSpeed = 300.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float RunningSpeed = 600.f;

	UFUNCTION(BlueprintCallable)
	void SelectRandomMove();

	//UFUNCTION(BlueprintCallable)
	//void SetBoxCollision(ECollisionEnabled::Type CollisionEnabled);

	//void BoxTrace(FHitResult& BoxHit);

	//UPROPERTY(EditAnywhere, Category = "Collision Properties")
	//FVector BoxTraceExtent = FVector(5.f);

	//UPROPERTY(EditAnywhere, Category = "Collision Properties")
	//bool bShowBoxDebug = false;

	//UPROPERTY(VisibleAnywhere, Category = "Components")
	//USceneComponent* BoxTraceStart;

	//UPROPERTY(VisibleAnywhere, Category = "Components")
	//USceneComponent* BoxTraceEnd;

	UPROPERTY(EditDefaultsOnly, Category = "Combat Socket")
	FName ProjectileSocketName;
	UPROPERTY(EditDefaultsOnly, Category = "Combat Socket")
	FName MeleeSocketName;
	UPROPERTY(EditDefaultsOnly, Category = "Combat Socket")
	FName TailSocketName;
	UPROPERTY(EditDefaultsOnly, Category = "Combat Socket")
	FName LeftHandSocketName;
	UPROPERTY(EditDefaultsOnly, Category = "Combat Socket")
	FName RightHandSocketName;

public:
	FPokemonInfo GetPokemonInfo();

	UPROPERTY(Replicated)
	bool bIsCaught = false;

	UFUNCTION(BlueprintCallable)
	void SetIsDodging(bool Dodging) { bIsDodging = Dodging; }

	FORCEINLINE UBehaviorTree* GetBehaviorTree() { return AIBehaviorTree; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE FPokemonUIInfo GetPokemonUIInfo(bool bNeedsSetup);

	UFUNCTION(BlueprintCallable)
	APokemonAIController* GetPokemonController();

	FORCEINLINE bool GetIsCommandActive() { return ActivePokemonMove != nullptr; }
	FORCEINLINE bool GetIsDodging() { return bIsDodging; }
	FORCEINLINE bool GetIsUsingMove() { return bIsUsingMove; }

	ENatureType GetNature() { return Nature; }

	UFUNCTION(BlueprintCallable)
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UFUNCTION(BlueprintCallable)
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

	UFUNCTION(BlueprintCallable,BlueprintPure)
	UPokemonAbilitySystemComponent* GetPokemonASC();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UPokemonBaseAttributeSet* GetPokemonAS();

	UFUNCTION(BlueprintCallable,BlueprintPure)
	FVector GetDodgeDirection() { return DodgeDirection; }

	void SetPokemonTrainer(AActor* NewTrainer);
	UFUNCTION(Server,Reliable)
	void ServerSetTrainer(AActor* NewTrainer);
	void CallCommand(int32 Direction);
};
