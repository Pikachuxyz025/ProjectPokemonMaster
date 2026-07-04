// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Characters/CharacterTypes.h"
#include "TrainerController.generated.h"

class APokemon_Parent;
class UPokemonInputConfig;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class ATrainerCharacter;
class UTrainerQuickSlotComponent;

DECLARE_MULTICAST_DELEGATE(FOnEventCaller);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnKeyCalled,const EDirectionPoint);

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

	UFUNCTION(Exec)
	void DebugToggleAI();

	UFUNCTION(Exec)
	void DebugToggleCombat();

	UFUNCTION(Exec)
	void DebugToggleProjectile();

	UFUNCTION(Exec)
	void DebugToggleNetwork();

	UFUNCTION(Exec)
	void DebugVerboseBasic();

	UFUNCTION(Exec)
	void DebugVerboseDetailed();

	UFUNCTION(Exec)
	void DebugVerboseFull();
private:

	UPROPERTY()
	class ATrainerHUD* TrainerHUD;

	class UEnhancedInputLocalPlayerSubsystem* Subsystem;

	//void AbilityInputTagPressed(FGameplayTag InputTag);

protected:

	virtual void BeginPlay() override;
	virtual void BeginPlayingState() override;
	virtual void OnRep_PlayerState() override;
	virtual void AcknowledgePossession(APawn* P) override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UPokemonInputConfig> InputConfig;

	UPROPERTY()
	TObjectPtr<ATrainerCharacter> TrainerCharacter;

	UPROPERTY()
	TObjectPtr<UTrainerQuickSlotComponent> QuickSlotComponent;

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

	ATrainerCharacter* GetTrainerCharacter();
	UTrainerQuickSlotComponent* GetQuickSlotComponent();

public:

	FOnEventCaller SwapUIModeDelegate;
	FOnEventCaller ShiftLeftDelegate;
	FOnEventCaller ShiftRightDelegate;
	FOnEventCaller ShowMoveSetDelegate;
	FOnEventCaller RemoveMoveSetDelegate;
	
	FOnKeyCalled KeyCalledDelegate;

	void TryInitializeHUD();
	void HandleGameHasStarted();
	void SwapUIMode();
	void ShiftLeft();
	void ShiftRight();
	void ShowCurrentPokemonMoveset();
	void RemoveCurrentPokemonMoveset();
	FKey GetMoveKey();
	void GetKeyForSequence(EDirectionPoint KeyDirection);
	bool IsMoveValid(int32 DirectionIndex);
};
