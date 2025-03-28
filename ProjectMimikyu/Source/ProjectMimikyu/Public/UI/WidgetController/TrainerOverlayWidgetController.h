// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "TrainerOverlayWidgetController.generated.h"

struct FPokemonUIInfo;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSignature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChangedSignature, float, NewMaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPokemonUIInfoSignature, const  FPokemonUIInfo&, Info);
// Set Party UI On Party Changed Signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyChangedSignature, const TArray<APokemon_Parent*>&, PokemonParty);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEventActivatedSignature);

// Switch between Pokemon and Inventory with Slotinfo enum signature 

struct FOnAttributeChangeData;
UCLASS(BlueprintType, Blueprintable)
class PROJECTMIMIKYU_API UTrainerOverlayWidgetController : public UPokemonWidgetController
{
	GENERATED_BODY()
	
public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnHealthChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnMaxHealthChangedSignature OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FPokemonUIInfoSignature PokemonUI_InfoDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPartyChangedSignature OnPartyChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnEventActivatedSignature ShiftUILeftDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnEventActivatedSignature ShiftUIRightDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnEventActivatedSignature SwapSlotModesDelegate;

protected:

	//UFUNCTION()
	//void HealthChanged(const FOnAttributeChangeData& Data) const;
	//UFUNCTION()
	//void MaxHealthChanged(const FOnAttributeChangeData& Data) const;
};
