// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterTypes.h"
#include "Interfaces/DamageInterface.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystemInterface.h"
#include "Pokemon_Parent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackEnd);
class UGameplayEffect;

UCLASS()
class PROJECTMIMIKYU_API APokemon_Parent : public ACharacter, public IDamageInterface,public IAbilitySystemInterface,public IPokemonCombatInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APokemon_Parent();
	FOnAttackEnd OnAttackEnd;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void AddPokemonAbilities();

	void SetupMeleeTimeline();

	void SetupPokemonUIInfo();

	void UpdatEPokemonUIInfo();

	UPROPERTY(VisibleAnywhere)
	class APokemonAIController* PokemonController;

	virtual void PossessedBy(AController* NewController) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* AIBehaviorTree;
	FPokemonUIInfo PokemonUIInfo;

#pragma region Attributes Setup
	UPROPERTY()
	TObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<class UAttributeSet> AttributeSet;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attributes")
	TSubclassOf<UGameplayEffect> DefaultStatAttributes;

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

	void ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const;

	void InitializeDefaultAttributes() const;

	void InitAbilityActorInfo();
#pragma endregion

	UFUNCTION(BlueprintCallable)
	virtual	void AttackEnded();

	UFUNCTION(BlueprintCallable)
	void OnBoxHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
class	UBoxComponent* CollisionBox;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	virtual void Faint();

	void DisengageFromCombat();

	UPROPERTY(EditAnywhere)
	class UPokemonDataAsset* PokemonDataAsset;

	UPROPERTY(VisibleDefaultsOnly)
	class UDamageSystemComponent* DamageSystem;

	UPROPERTY(VisibleDefaultsOnly)
	class UMovesetComponent* MovesetComponent;

	void SetMovementSpeed(EMovementSpeed NewMovementSpeed);

	virtual void ChargeIn();
	virtual void FireAt();

	UPROPERTY(VisibleAnywhere,Replicated)
	class AActor* CurrentTrainer;

	//UFUNCTION()
	//void OnRep_CurrentTrainer();

	UPROPERTY(VisibleAnywhere,Replicated)
	EPokemonStatus PokemonStatus = EPokemonStatus::EPS_Wild;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UPokemonMoveDataAsset* ActivePokemonMove = nullptr;

#pragma region IDamageInterface
	virtual float GetCurrentHealth() override;
	virtual float GetMaxHealth() override;

	virtual void RecieveHealth_Implementation(float AddHealthPercent) override;

	virtual void RecieveDamage(FDamageInfo DamageInfo) override;

	bool IsAttacking_Implementation() override;

	bool HasFainted_Implementation() override;
#pragma endregion

#pragma region IPokemonCombatInterface
	virtual int32 GetPokemonLevel() override;
	virtual int32 GetHP() override;
	virtual int32 GetSpecialDefense() override;
	virtual int32 GetSpecialAttack() override;
	virtual int32 GetAttack() override;
	virtual int32 GetDefense() override;
	virtual int32 GetSpeed() override;
	virtual float GetNatureMultiplier(EStatsType StatType) override;
	virtual int32 GetELB(int32 BaseStat, EStatsType StatType) override;
#pragma endregion


	void DamageTarget(AActor* Target);

#pragma region Timeline

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UTimelineComponent* MeleeTimeline;

UFUNCTION()
void AddCollision();

UFUNCTION()
void RemoveCollision();

UFUNCTION()
void StartBoxTrace();

#pragma endregion

	bool bIsCharging = false;

	void CombatReady(AActor* Target);

	bool WithinCloseRangeOfTarget();

	UFUNCTION(BlueprintCallable)
	void Charge();

	virtual void EnactMove();
protected:
#pragma region Stats

	UFUNCTION()
	void GetReadyForCombat(AActor* Target);

	UPROPERTY(EditAnywhere, Category = "Stats")
	EGenderType Gender = EGenderType::EGT_None;

	UPROPERTY(EditAnywhere, Category = "Stats")
	ENatureType Nature = ENatureType::ENT_None;

	UPROPERTY(EditAnywhere, Category = "Stats", meta = (ClampMin = "1", ClampMax = "100"))
	int32 CurrentLevel = 1;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 CurrentEffortLevel = 0;

	UPROPERTY(VisibleAnywhere)
	bool bIsUsingMove = false;

	FTimerHandle ChargeTimer;
#pragma endregion

	TArray<AActor*>IgnoreActors;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS",meta = (AllowPrivateAccess = "true"))
	//class UAbilitySystemComponent* AbilitySystemComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS",meta = (AllowPrivateAccess = "true"))
	//const class UPokemonStatAttributeSet* PokemonStatAttributeSet;

	//FORCEINLINE virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }

	UPROPERTY(EditAnywhere, Category = "Combat")
	float WalkingSpeed = 300.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float RunningSpeed = 600.f;

	UFUNCTION(BlueprintCallable)
	void SelectRandomMove();

	UFUNCTION(BlueprintCallable)
	void SetBoxCollision(ECollisionEnabled::Type CollisionEnabled);

	void BoxTrace(FHitResult& BoxHit);

	UPROPERTY(EditAnywhere, Category = "Collision Properties")
	FVector BoxTraceExtent = FVector(5.f);

	UPROPERTY(EditAnywhere, Category = "Collision Properties")
	bool bShowBoxDebug = false;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* BoxTraceStart;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* BoxTraceEnd;

public:

	UPROPERTY(Replicated)
	bool bIsCaught = false;

	FORCEINLINE UBehaviorTree* GetBehaviorTree() { return AIBehaviorTree; }
	FORCEINLINE FPokemonUIInfo GetPokemonUIInfo() { return PokemonUIInfo; }
	FORCEINLINE APokemonAIController* GetPokemonController() { return PokemonController; }
	FORCEINLINE bool GetIsCommandActive() { return ActivePokemonMove != nullptr; }
	FORCEINLINE bool GetIsUsingMove() { return bIsUsingMove; }
	ENatureType GetNature() { return Nature; }

	void SetPokemonTrainer(AActor* NewTrainer);
	UFUNCTION(Server,Reliable)
	void ServerSetTrainer(AActor* NewTrainer);
	void CallCommand(int32 Direction);
};
