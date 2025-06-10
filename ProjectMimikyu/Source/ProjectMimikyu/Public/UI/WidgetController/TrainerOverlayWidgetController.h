// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "Characters/CharacterTypes.h"
#include "TrainerOverlayWidgetController.generated.h"

struct FPokemonUIInfo;
struct FPokemonInfo;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSignature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChangedSignature, float, NewMaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPokemonUIInfoSignature, const  FPokemonUIInfo&, Info);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPokemonInfoSignature, const TArray<FPokemonInfo>&, Info);

// Set Party UI On Party Changed Signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyChangedSignature, const TArray<APokemon_Parent*>&, PokemonParty);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPokemonActiveSignature, APokemon_Parent*, NewActivePokemon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEventActivatedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPokemonAbilityConfigured, UAbilitySystemComponent*, ASC);

// Switch between Pokemon and Inventory with Slotinfo enum signature 

// Show Key Sequence With Signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyInputSignature, const EDirectionPoint&, KeyDirection);

struct FOnAttributeChangeData;
UCLASS(BlueprintType, Blueprintable)
class PROJECTMIMIKYU_API UTrainerOverlayWidgetController : public UPokemonWidgetController
{
	GENERATED_BODY()
	
public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;
	void BindPokemonCallbacksToDependencies();

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPokemonStatChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPokemonStatChangedSignature OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPokemonStatChangedSignature OnPowerPointsChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPokemonStatChangedSignature OnMaxPowerPointsChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FPokemonUIInfoSignature PokemonUI_InfoDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FPokemonInfoSignature PokemonInfoDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPartyChangedSignature OnPartyChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPokemonActiveSignature OnPokemonActiveChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnEventActivatedSignature ShiftUILeftDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnEventActivatedSignature ShiftUIRightDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnEventActivatedSignature SwapSlotModesDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnEventActivatedSignature PokemonActivatedDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnKeyInputSignature KeyDirectionDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FPokemonAbilityConfigured PokemonAbilityConfigured;
	// activate pokemon move list
	// send an event for input commands
protected:

	//UFUNCTION()
	//void HealthChanged(const FOnAttributeChangeData& Data) const;
	//UFUNCTION()
	//void MaxHealthChanged(const FOnAttributeChangeData& Data) const;
};
