// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/CharacterTypes.h"
#include "DamageSystemComponent.generated.h"


UENUM()
enum class EDamageOutput :uint8
{
	EDO_BlockDamage,
	EDO_DoDamage,
	EDO_NoDamage
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UDamageSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDamageSystemComponent();

	friend class APokemon_Parent;

	EDamageOutput MacroDamageOutput(bool bShouldDamageBeInvincible, bool bCanBeBlocked);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class UDataTable* TypeChartDataTable;
private:
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
	void SetupElementalType(EElementalType TypeOne, EElementalType TypeTwo);
	int32 CalculateEffortLevelBase(int32 BaseStat, int32 CurrentEffortLevel, int32 CurrentLevel);
	int32 CalulateMaxHP(int32 CurrentLevel, int32 BaseHP);
	int32 CalulateOtherStats(int32 CurrentLevel, int32 BaseStat, EStatsType StatType, ENatureType NatureType);
	float NatureModifier(ENatureType CurrentNature, EStatsType StatToBeModified);

	float TypeChartDamageMultiplier(EElementalType DamageElementType);

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
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupStats
	(
		int32 BaseHealth,
		int32 BaseAttack,
		int32 BaseSpecialAttack,
		int32 BaseDefense,
		int32 BaseSpecialDefense,
		int32 BaseSpeed,
		int32 CurrentLevel,
		ENatureType CurrentNature
	);
	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 CurrentHP = 0;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 MaxHP = 0;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 Attack = 0;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 Defense = 0;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 SpecialAttack = 0;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 SpecialDefense = 0;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int32 Speed = 0;

	float GetRunningSpeed();
	float GetWalkingSpeed();
	float GetEngagedSpeed(float MoveMultiplier = 1.f);

	int32 SendDamage(class UPokemonMoveDataAsset* CurrentMove, int CurrentLevel);
	int32 DefenseCounter(UPokemonMoveDataAsset* AttackingMove);

	UPROPERTY(EditDefaultsOnly)
	TMap<EStatsType, int32> EffortLevelBaseMap =
	{
		{EStatsType::EST_Attack, 0},
		{EStatsType::EST_SpecialAttack, 0},
		{EStatsType::EST_SpecialDefense, 0},
		{EStatsType::EST_Speed, 0},
		{EStatsType::EST_HealthPoints, 0},
		{EStatsType::EST_Defense, 0}
	};

	UPROPERTY(EditAnywhere, Category = "Stats")
	EElementalType FirstType = EElementalType::EET_None;

	UPROPERTY(EditAnywhere, Category = "Stats")
	EElementalType SecondType = EElementalType::EET_None;

	void RecieveDamage(FDamageInfo DamageInfo, bool& bWasDamaged);

	FORCEINLINE int32 GetCurrentHealth() { return CurrentHP; }
	FORCEINLINE int32 GetMaxHealth() { return MaxHP; }
	FORCEINLINE float GetHealthPercent() { return (float)CurrentHP / (float)MaxHP; }

	UPROPERTY(VisibleAnywhere,Category = "Damage Responses")
	bool bIsInvincible = false;

	UPROPERTY(VisibleAnywhere,Category = "Damage Responses")
	bool bIsDead = false;

	UPROPERTY(VisibleAnywhere,Category = "Damage Responses")
	bool bIsBlocking = false;

	UPROPERTY(VisibleAnywhere,Category = "Damage Responses")
	bool bIsInterruptable = true;
};
