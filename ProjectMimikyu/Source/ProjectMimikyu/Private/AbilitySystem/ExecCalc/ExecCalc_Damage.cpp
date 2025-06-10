// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/ExecCalc/ExecCalc_Damage.h"
#include <Interfaces/PokemonCombatInterface.h>
#include "DataAssets/PokemonMoveDataAsset.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "PokemonGameplayTags.h"
struct PokemonDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Defense); // Creates an FProperty and a FGameplayEffectAttributeCatureDefinition for us
	DECLARE_ATTRIBUTE_CAPTUREDEF(SpecialDefense);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Attack);
	DECLARE_ATTRIBUTE_CAPTUREDEF(SpecialAttack);

	PokemonDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPokemonBaseAttributeSet, Defense, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPokemonBaseAttributeSet, SpecialDefense, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPokemonBaseAttributeSet, Attack, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UPokemonBaseAttributeSet, SpecialAttack, Source, false);
	}
};
static const PokemonDamageStatics& DamageStatics()
{
	static PokemonDamageStatics DStatics;
	return DStatics;
}

UExecCalc_Damage::UExecCalc_Damage()
{
	RelevantAttributesToCapture.Add(DamageStatics().AttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().SpecialAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().SpecialDefenseDef);
	RelevantAttributesToCapture.Add(DamageStatics().DefenseDef);
}



void UExecCalc_Damage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
#pragma region Boiler Plate: Source/Target
	FPokemonGameplayTags GameplayTags = FPokemonGameplayTags::Get();

	const UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
	const UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();

	AActor* SourceAvatar = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
	AActor* TargetAvatar = TargetASC ? TargetASC->GetAvatarActor() : nullptr;

	TScriptInterface<IPokemonCombatInterface> SourceCombatInterface = SourceAvatar;
	TScriptInterface<IPokemonCombatInterface> TargetCombatInterface = TargetAvatar;

	UPokemonMoveDataAsset* SourceMove = SourceCombatInterface->GetPokemonActiveMove();
	UPokemonMoveDataAsset* TargetMove = TargetCombatInterface->GetPokemonActiveMove();

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	FGameplayEffectContextHandle EffectContextHandle = Spec.GetContext();

	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;
#pragma endregion

	float Random = FMath::RandRange(85.f, 100.f) / 100.f;
	float Type = UPokemonAbilitySystemLibrary::GetSavedTypeMatchup(EffectContextHandle);
	FGameplayTag MoveType = UPokemonAbilitySystemLibrary::GetDamageType(EffectContextHandle);
	float BaseDamage = Spec.GetSetByCallerMagnitude(MoveType, false);
	float SelectedDefenseStat = 0;
	float SelectedAttackStat = 0;

	//switch (MoveType)
	//{
	//case EMoveType::EMT_Physical:
	if(MoveType.MatchesTagExact(GameplayTags.PokemonMoves_MoveType_Physical))
	{
		ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().DefenseDef, EvaluationParameters, SelectedDefenseStat);
			ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().AttackDef, EvaluationParameters, SelectedAttackStat);
	}
	else if (MoveType.MatchesTagExact(GameplayTags.PokemonMoves_MoveType_Special))
	{
		//	break;
		//case EMoveType::EMT_Special:
		ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().SpecialDefenseDef, EvaluationParameters, SelectedDefenseStat);
		ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().SpecialAttackDef, EvaluationParameters, SelectedAttackStat);
		//break;
	//}
	}

	SelectedAttackStat = FMath::Max<float>(SelectedAttackStat, 0.f);
	SelectedDefenseStat = FMath::Max<float>(SelectedDefenseStat, 0.f) + 50.f;

	int32 DamageSent = ((100.f + SelectedAttackStat + (15.f * SourceCombatInterface->GetPokemonLevel())) * BaseDamage);
	int32 FinalDamage = (((float)DamageSent / (float)SelectedDefenseStat) / 5.f) * Random * Type;

	const FGameplayModifierEvaluatedData EvaluatedData(UPokemonBaseAttributeSet::GetIncomingDamageAttribute(), EGameplayModOp::Additive, FinalDamage);
	OutExecutionOutput.AddOutputModifier(EvaluatedData);
}
