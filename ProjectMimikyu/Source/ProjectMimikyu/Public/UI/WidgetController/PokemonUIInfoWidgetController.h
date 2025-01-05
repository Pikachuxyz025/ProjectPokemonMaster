// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "Characters/CharacterTypes.h"
#include "PokemonUIInfoWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeChangedSignature, float, NewValue);

struct FOnAttributeChangeData;

UCLASS(BlueprintType, Blueprintable)
class PROJECTMIMIKYU_API UPokemonUIInfoWidgetController : public UPokemonWidgetController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UFUNCTION(BlueprintCallable)
	void SetInitialHealthValues(float& CurrentHealth, float& MaxHealth);
	
	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnAttributeChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnAttributeChangedSignature OnMaxHealthChanged;
};
