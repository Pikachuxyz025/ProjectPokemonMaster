// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Characters/CharacterTypes.h"
#include "PokemonWidgetController.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
class UPokemonBaseAttributeSet;
class ATrainerPlayerState;
class UPokemonAbilitySystemComponent;
class APokemon_Parent;
class UPokemonDataAsset;
class ATrainerController;

USTRUCT(BlueprintType)
struct FWidgetControllerParams
{
	GENERATED_BODY()

	FWidgetControllerParams() {}
	FWidgetControllerParams(APlayerState* PS) : PlayerState(PS) {}
	FWidgetControllerParams(APlayerState* PS,APlayerController* PC) : PlayerState(PS)  ,PlayerController(PC){}
	FWidgetControllerParams(APlayerState* PS, APlayerController* PC, UAbilitySystemComponent* ASC, UAttributeSet* AS) :
		 PlayerState(PS), PlayerController(PC), AbilitySystemComponent(ASC), AttributeSet(AS) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APlayerState> PlayerState = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APlayerController> PlayerController = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UAttributeSet> AttributeSet = nullptr;
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

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerState> PlayerState;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerController> PlayerController;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UPokemonBaseAttributeSet> PokemonAttributeSet;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UPokemonAbilitySystemComponent> PokemonAbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APokemon_Parent> Pokemon;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UPokemonDataAsset> PokemonData;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<ATrainerPlayerState> TrainerPlayerState;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<ATrainerController> TrainerController;

	APokemon_Parent* GetPokemon();
	ATrainerPlayerState* GetTPS();
	UPokemonAbilitySystemComponent* GetPASC();
	UPokemonBaseAttributeSet* GetPAS();
	UPokemonDataAsset* GetPokemonData();
	ATrainerController* GetTC();
public:
	//FText GetPokemonName();
	AActor* GetWidgetAvatarActor();
};
