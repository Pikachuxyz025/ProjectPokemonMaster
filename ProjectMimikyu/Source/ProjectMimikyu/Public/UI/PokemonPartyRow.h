// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PokemonPartyRow.generated.h"

class UImage;
class UTextBlock;
class UButton;
class UProgressBar;
class UBorder;

UCLASS()
class PROJECTMIMIKYU_API UPokemonPartyRow : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UButton* SelectImageButton;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UImage* SelectorArrow;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UProgressBar* ExperienceBar;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UTextBlock* Health;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UTextBlock* ExpLeft;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UTextBlock* PokemonName;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UTextBlock* PokemonLevel;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UBorder* SelectImageButtonBorder;

public:

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void SetIcon(UObject* NewImage);

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void SetHealth(const float CurrentHealth, const float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void SetNameAndLevel(const FText& NewPokemonName, int32 NewPokemonLevel);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FLinearColor HighlightedColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FLinearColor RegularColor;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	class UTexture2D* DefaultImage;
};
