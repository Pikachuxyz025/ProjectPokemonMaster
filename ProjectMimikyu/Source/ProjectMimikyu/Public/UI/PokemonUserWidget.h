// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PokemonUserWidget.generated.h"

class USizeBox;
class AProjectMimikyuCharacter;

UCLASS()
class PROJECTMIMIKYU_API UPokemonUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* InWidgetController);

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UObject> WidgetController;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<AProjectMimikyuCharacter> OwnerCharacter;
protected:

	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Box Properties")
	float BoxWidth = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Box Properties")
	float BoxHeight = 0;

private:

	UFUNCTION(BlueprintCallable)
	void UpdateBoxSize(USizeBox* SizeBox);
};
