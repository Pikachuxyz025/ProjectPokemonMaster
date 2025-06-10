// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PokemonChartSummary.generated.h"

class APokemon_Parent;
struct FPokemonInfo;
UCLASS()
class PROJECTMIMIKYU_API UPokemonChartSummary : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void AddMouseCursor();
	UFUNCTION(BlueprintCallable)
	void RemoveMouseCursor();

	UFUNCTION(BlueprintCallable)
	void SetPokemonParty(const TArray<FPokemonInfo> PokemonParty);

	UFUNCTION(BlueprintCallable)
	void SetPokemonIndex(const FPokemonInfo SelectedPokemon);

	UFUNCTION(BlueprintCallable)
	void SetReturnWidget(UUserWidget* ReturnToWidget) { ReturnWidget = ReturnToWidget; }

	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FPokemonInfo> PokemonPartyInfo;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	int32 CurrentPartyIndex = 0;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	TObjectPtr<UUserWidget> ReturnWidget;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FKey ExitKey;
};
