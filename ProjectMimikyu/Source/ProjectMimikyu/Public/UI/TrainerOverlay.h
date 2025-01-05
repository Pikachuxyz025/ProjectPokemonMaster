// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/CharacterTypes.h"
#include "TrainerOverlay.generated.h"


class UImage;
class UTextBlock;
class APokemon_Parent;
class UPokemonMoveDataAsset;
class UPokemonMoveList;
class UTrainerOverlayWidgetController;
/**
 *
 */
UCLASS()
class PROJECTMIMIKYU_API UTrainerOverlay : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UImage* SelectedPokemonImage;

	UPROPERTY(meta = (BindWidget))
	UImage* PokemonLeftImage;

	UPROPERTY(meta = (BindWidget))
	UImage* PokemonRightImage;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* PokemonName;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* PokemonLevel;

	UPROPERTY(EditDefaultsOnly)
	class UTexture2D* DefaultImage;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* PokemonHealth;

	UPROPERTY(VisibleAnywhere)
	class AProjectMimikyuCharacter* OwnerCharacter;

	UPROPERTY(VisibleAnywhere)
	class UInventorySystemComponent* InventorySystem;

	UPROPERTY(meta = (BindWidget))
	UPokemonMoveList* PokemonMoveList;

	void ShiftUILeft();
	void ShiftUIRight();
	void SetLeftRightImages(const int32 RightIndex, const int32 LeftIndex);
	void SetLeftRightInventoryImages(const int32 RightIndex, const int32 LeftIndex);
	void SetIndexLeft(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex);
	void SetIndexRight(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex);
	void SetIndexFromScratch(int32 CurrentIndex, int32& LeftIndex, int32& RightIndex, int32 LowestIndex, int32 HighestIndex);
	void SwapSlotModes();
	void AllocatePokemonInfo();


	UFUNCTION()
	void SetCurrentPokemonUI();
	void AllocateInventoryInfo();

	UFUNCTION()
	void SetupPartyInfo();
	UFUNCTION()
	void SetupInventoryInfo();
	//virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	void CreateMovesetUI();
	void RemoveMovesetUI();

	void ChangeInputMode(FInputModeDataBase& NewMode);
private:

	UPROPERTY()
	UTrainerOverlayWidgetController* WidgetController;

	UPROPERTY(VisibleAnywhere)
	ESlotType CurrentSlotMode = ESlotType::EST_Inventory;

	UPROPERTY(VisibleAnywhere)
	TArray<APokemon_Parent*> PokemonPartyInfo;

	UPROPERTY(VisibleAnywhere)
	TMap<EDirectionPoint, UPokemonMoveDataAsset*> PokemonMovesetOptions;


	UPROPERTY(VisibleAnywhere)
	TArray<FSlotInfo> ThrowableContent;

	UPROPERTY(EditAnywhere)
	class UDataTable* ItemDataTable;

	UPROPERTY(VisibleAnywhere)
	int32 PartyIndex = 0;

	UPROPERTY(VisibleAnywhere)
	int32 InventoryIndex = 0;

	FInventoryItemInfo* GetInventoryInfo(FName ItemID);

	TMap<EDirectionPoint,  UPokemonMoveDataAsset*> SetupMovesetOfActivePokemon();
	bool HasPokemon();
	int32 HowManyPokemon();

public:
	UPokemonMoveDataAsset* GetMove(EDirectionPoint DirectionPoint);
};
