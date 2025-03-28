// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TrainerController.generated.h"

class APokemon_Parent;
class UPokemonInputConfig;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_MULTICAST_DELEGATE(FOnEventCaller);

UCLASS()
class PROJECTMIMIKYU_API ATrainerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATrainerController();

UFUNCTION(BlueprintCallable)
	void AddMouseCursor(UUserWidget* CurrentWidget, bool bSetUpMode);
UFUNCTION(BlueprintCallable)
	void RemoveMouseCursor();
	UFUNCTION(BlueprintCallable)
	void FocusNewWidget(UUserWidget* NewWidget);
private:

	UPROPERTY()
	class ATrainerHUD* TrainerHUD;

	class UEnhancedInputLocalPlayerSubsystem* Subsystem;

	//void AbilityInputTagPressed(FGameplayTag InputTag);

protected:

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* InputMappingContext;

	void DisplayPlayerMenu();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Swap;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Left;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Right;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_MoveSelection;

public:

	FOnEventCaller SwapUIModeDelegate;
	FOnEventCaller ShiftLeftDelegate;
	FOnEventCaller ShiftRightDelegate;

	void HandleGameHasStarted();
	void SwapUIMode();
	void ShiftLeft();
	void ShiftRight();
	void ShowCurrentPokemonMoveset();
	void RemoveCurrentPokemonMoveset();
	FKey GetMoveKey();
	bool IsMoveValid(int32 DirectionIndex);
};
