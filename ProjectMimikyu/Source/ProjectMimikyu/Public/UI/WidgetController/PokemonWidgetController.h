// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Characters/CharacterTypes.h"
#include "PokemonWidgetController.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

USTRUCT(BlueprintType)
struct FWidgetControllerParams
{
	GENERATED_BODY()
	FWidgetControllerParams() {}
	FWidgetControllerParams(FPokemonUIInfo Info, UAbilitySystemComponent* ASC, UAttributeSet* AS) :
		 PokeUIInfo(Info), AbilitySystemComponent(ASC), AttributeSet(AS) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UAttributeSet> AttributeSet = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FPokemonUIInfo PokeUIInfo;
};



UCLASS()
class PROJECTMIMIKYU_API UPokemonWidgetController: public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetWidgetControllerParams(const FWidgetControllerParams& WCParams);

	virtual void BroadcastInitialValues();

	virtual void BindCallbacksToDependencies();
protected:
	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UAttributeSet> AttributeSet;

	UPROPERTY( BlueprintReadOnly, Category = "WidgetController")
	FPokemonUIInfo PokeUIInfo;
};
