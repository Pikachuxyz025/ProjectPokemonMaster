// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/DamageSystemComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/DataTable.h"
#include "Characters/CharacterTypes.h"

// Sets default values for this component's properties
UDamageSystemComponent::UDamageSystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


EDamageOutput UDamageSystemComponent::MacroDamageOutput(bool bShouldDamageBeInvincible, bool bCanBeBlocked)
{
	EDamageOutput DamageOutput = EDamageOutput::EDO_NoDamage;
	bool bIsHit = !bIsDead && (!bIsInvincible || bShouldDamageBeInvincible);
	if (bIsHit)
	{
		if (bIsBlocking && bCanBeBlocked)
		{
			DamageOutput = EDamageOutput::EDO_BlockDamage;
		}
		else
		{
			DamageOutput = EDamageOutput::EDO_DoDamage;
		}
	}
	else
	{
		DamageOutput = EDamageOutput::EDO_NoDamage;
	}
	return DamageOutput;
}

// Called when the game starts
void UDamageSystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}



void UDamageSystemComponent::SetupElementalType(EElementalType TypeOne, EElementalType TypeTwo)
{
	FirstType = TypeOne;
	SecondType = TypeTwo;
}

int32 UDamageSystemComponent::CalculateEffortLevelBase(int32 BaseStat, int32 CurrentEffortLevel, int32 CurrentLevel)
{
	return FMath::RoundToInt(((FMath::Sqrt(float(BaseStat)) * MultiplierMap[CurrentEffortLevel]) + CurrentLevel) / 2.5f);
}

int32 UDamageSystemComponent::CalulateMaxHP(int32 CurrentLevel, int32 BaseHP)
{
	float X = ((float)CurrentLevel / 100.f) + 1.f;
	float NewHealth = ((X * BaseHP) + CurrentLevel) + CalculateEffortLevelBase(BaseHP, EffortLevelBaseMap[EStatsType::EST_HealthPoints], CurrentLevel);
	return NewHealth;
}

int32 UDamageSystemComponent::CalulateOtherStats(int32 CurrentLevel, int32 BaseStat, EStatsType StatType, ENatureType NatureType)
{
	float X = ((float)CurrentLevel / 50.f) + 1;
	float Y = (X * (float)BaseStat) / 1.5;
	float Nature = NatureModifier(NatureType, StatType);
	float ELB = CalculateEffortLevelBase(BaseStat, EffortLevelBaseMap[StatType], CurrentLevel);
	return (Y * Nature) + ELB;
}

float UDamageSystemComponent::NatureModifier(ENatureType CurrentNature, EStatsType StatToBeModified)
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
		if (StatToBeModified == EStatsType::EST_Attack)	
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Modest:
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Attack)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Bold:
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Attack)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Brave:
		if (StatToBeModified == EStatsType::EST_Attack)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Calm:
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Attack)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Careful:
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Gentle:
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Hasty:
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Jolly:
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Lax:
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Lonely:
		if (StatToBeModified == EStatsType::EST_Attack)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Mild:
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Naughty:
		if (StatToBeModified == EStatsType::EST_Attack)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Quiet:
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Timid:
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Attack)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Relaxed:
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Sassy:
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Rash:
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Naive:
		if (StatToBeModified == EStatsType::EST_Speed)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialDefense)
			StatModifier = 0.9f;
		break;
	case ENatureType::ENT_Impish:
		if (StatToBeModified == EStatsType::EST_Defense)
			StatModifier = 1.1f;
		if (StatToBeModified == EStatsType::EST_SpecialAttack)
			StatModifier = 0.9f;
		break;
	default:
		break;
	}
	return StatModifier;
}

float UDamageSystemComponent::TypeChartDamageMultiplier(EElementalType DamageElementType)
{
	FString FirstTypeContextString;
	float X = 1;
	float Y = 1;
	FTypeChartMatchup* FirstTypeChart;
	FTypeChartMatchup* SecondTypeChart;

	FirstTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[FirstType], FirstTypeContextString, true);
	X = FirstTypeChart->TypeResponse[DamageElementType];
	if (SecondType != EElementalType::EET_None)
	{
		SecondTypeChart = TypeChartDataTable->FindRow<FTypeChartMatchup>(TypeResponse[SecondType], FirstTypeContextString, true);
		Y = SecondTypeChart->TypeResponse[DamageElementType];
	}
	return X * Y;
}


// Called every frame
void UDamageSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDamageSystemComponent::SetupStats
(
	int32 BaseHealth, 
	int32 BaseAttack, 
	int32 BaseSpecialAttack,
	int32 BaseDefense, 
	int32 BaseSpecialDefense, 
	int32 BaseSpeed, 
	int32 CurrentLevel, 
	ENatureType CurrentNature
)
{
	MaxHP = CalulateMaxHP(CurrentLevel, BaseHealth);
	CurrentHP = MaxHP;
	Attack = CalulateOtherStats(CurrentLevel, BaseAttack, EStatsType::EST_Attack, CurrentNature);
	Speed = CalulateOtherStats(CurrentLevel, BaseSpeed, EStatsType::EST_Speed, CurrentNature);
	SpecialAttack = CalulateOtherStats(CurrentLevel, BaseSpecialAttack, EStatsType::EST_SpecialAttack, CurrentNature);
	Defense = CalulateOtherStats(CurrentLevel, BaseDefense, EStatsType::EST_Defense, CurrentNature);
	SpecialDefense = CalulateOtherStats(CurrentLevel, BaseSpecialDefense, EStatsType::EST_SpecialDefense, CurrentNature);
}

float UDamageSystemComponent::GetRunningSpeed()
{
	return Speed * 3.5f * .75f;
}

float UDamageSystemComponent::GetWalkingSpeed()
{
	return Speed * 3.5f * .55f;
}

float UDamageSystemComponent::GetEngagedSpeed(float MoveMultiplier)
{
	return Speed * MoveMultiplier * 3.5f;
}

int32 UDamageSystemComponent::SendDamage(UPokemonMoveDataAsset* CurrentMove, int CurrentLevel)
{
	EMoveType MoveType = CurrentMove->Category;

	float PokemonAttackStat = 0;
	float DamageSent = 0;
	switch (MoveType)
	{
	case EMoveType::EMT_Physical:
		PokemonAttackStat = (float)Attack;
		break;
	case EMoveType::EMT_Special:
		PokemonAttackStat = (float)SpecialAttack;
		break;
	default:
		break;
	}
	DamageSent = ((100.f + PokemonAttackStat + (15.f * CurrentLevel)) * CurrentMove->BaseDamage);
	return DamageSent;
}

int32 UDamageSystemComponent::DefenseCounter(UPokemonMoveDataAsset* AttackingMove)
{
	EMoveType MoveType = AttackingMove->Category;
	float PokemonDefenseStat = 0;
	switch (MoveType)
	{
	case EMoveType::EMT_Physical:
		PokemonDefenseStat = (float)Defense;
		break;
	case EMoveType::EMT_Special:
		PokemonDefenseStat = (float)SpecialDefense;
		break;
	default:
		break;
	}
	return PokemonDefenseStat + 50.f;
}

void UDamageSystemComponent::RecieveDamage(FDamageInfo DamageInfo, bool& bWasDamaged)
{
	if (!DamageInfo.PokemonMove) return;
	EDamageOutput DamageOutput = MacroDamageOutput(DamageInfo.PokemonMove->bShouldDamageInvincible, DamageInfo.PokemonMove->bCanBeBlocked);

	switch (DamageOutput)
	{
	case EDamageOutput::EDO_BlockDamage:
		bWasDamaged = false;
		break;
	case EDamageOutput::EDO_DoDamage:
		bWasDamaged = true;
		if (!bIsDead)
		{
			FString CurrentActorName = UKismetSystemLibrary::GetDisplayName(GetOwner());
			UE_LOG(LogTemp, Display, TEXT("%s took %d damage"), *CurrentActorName, (int32)DamageInfo.DamageAmount);
			CurrentHP = FMath::Clamp(CurrentHP - (int32)DamageInfo.DamageAmount, 0, MaxHP);
			if (CurrentHP <= 0)
			{
				UE_LOG(LogTemp, Display, TEXT("Should be dead"));
				bIsDead = true;
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("%s has %d health left"), *CurrentActorName, CurrentHP);
				if (bIsInterruptable || DamageInfo.PokemonMove->bShouldForceInterrupt)
				{
					//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, TEXT("%s"), *UEnum::GetValueAsString((int64)DamageInfo.DamageResponse));
					//CallOnDamageResponse.Broadcast(DamageInfo.DamageResponse, DamageInfo.DamageCauser);
				}

			}
		}
		break;
	case EDamageOutput::EDO_NoDamage:
		bWasDamaged = false;
		break;
	default:
		break;
	}
}


