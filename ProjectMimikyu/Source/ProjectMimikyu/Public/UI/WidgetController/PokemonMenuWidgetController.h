// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "DataAssets/PokemonStatInfoDataAsset.h"
#include "GameplayTagContainer.h"
#include "PokemonMenuWidgetController.generated.h"

class UPokemonStatInfoDataAsset;
struct FPokemonStatInfo;
struct FGameplayAttribute;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatInfoSignature, const FPokemonStatInfo&, Info);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttributeInfoSignature, const FGameplayTag&, Info);

UCLASS(BlueprintType,Blueprintable)
class PROJECTMIMIKYU_API UPokemonMenuWidgetController : public UPokemonWidgetController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	virtual void BroadcastInitialValues() override;

	void BroadcastAttributeInfo(const FGameplayTag& AttributeTag, const FGameplayAttribute& Attribute);
	void BroadcastAttributeInfo(const FGameplayTag& AttributeTag);

	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Stats")
	FStatInfoSignature StatInfoDelegate;

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Stats")
	FAttributeInfoSignature AttributeInfoDelegate;
protected:
	//UPROPERTY(BlueprintReadOnly)
	//TObjectPtr<UPokemonStatInfoDataAsset> StatInfo;

	UPROPERTY(EditDefaultsOnly, meta = (Categories = "Attributes"))
	TArray<FGameplayTag> AttributeTags;

public:

	//void SetStatInfo(UPokemonStatInfoDataAsset* NewStatInfo) { StatInfo = NewStatInfo; }
};
