// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextValueSection.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UTextValueSection : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetInfoEvent(AActor* ObjectActor);
};
