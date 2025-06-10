// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/TrainerOverlay.h"
#include "UI/PokemonMoveList.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "ActorComponents/MovesetComponent.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Characters/Pokemon_Parent.h"
#include "Engine/DataTable.h"

void UTrainerOverlay::NativeConstruct()
{
	Super::NativeConstruct();

	OwnerCharacter = Cast<AProjectMimikyuCharacter>(GetOwningPlayerPawn());
	if (OwnerCharacter)
		UE_LOG(LogTemp, Display, TEXT("The character is real!"));
	InventorySystem = OwnerCharacter->GetInventorySystem();
	if (!InventorySystem)
		UE_LOG(LogTemp, Display, TEXT(" not Constructed"));
	InventorySystem->OnInventoryUpdated.AddDynamic(this, &UTrainerOverlay::SetupInventoryInfo);
	OwnerCharacter->OnPartyUpdated.AddDynamic(this, &UTrainerOverlay::SetupPartyInfo);
	//OwnerCharacter->OnPokemonHealthUpdated.AddDynamic(this, &UTrainerOverlay::SetCurrentPokemonUI);
}

void UTrainerOverlay::ShiftUILeft()
{
	switch (CurrentSlotMode)
	{
	case ESlotType::EST_None:
		break;
	case ESlotType::EST_PokemonParty:

	if (!HasPokemon() || HowManyPokemon() < 2)
		return;

		SetIndexLeft(PartyIndex, 0, HowManyPokemon() - 1);

		if (PokemonPartyInfo.IsValidIndex(PartyIndex) && !PokemonPartyInfo[PartyIndex])
		{
			ShiftUILeft();
		}

		AllocatePokemonInfo();
		break;
	case ESlotType::EST_Inventory:

		if (ThrowableContent.Num() < 2)
			return;
		SetIndexLeft(InventoryIndex, 0, ThrowableContent.Num() - 1);

		AllocateInventoryInfo();
		break;
	default:
		break;
	}

}

void UTrainerOverlay::ShiftUIRight()
{
	switch (CurrentSlotMode)
	{
	case ESlotType::EST_None:
		break;
	case ESlotType::EST_PokemonParty:

	if (!HasPokemon()||HowManyPokemon() < 2)
		return;

		SetIndexRight(PartyIndex, 0, HowManyPokemon()-1);

		if (PokemonPartyInfo.IsValidIndex(PartyIndex) && !PokemonPartyInfo[PartyIndex])
		{
			ShiftUIRight();
		}

		AllocatePokemonInfo();
		break;
	case ESlotType::EST_Inventory:

		if (ThrowableContent.Num() < 2)
			return;

		SetIndexRight(InventoryIndex, 0, ThrowableContent.Num()-1);

		AllocateInventoryInfo();
		break;
	default:
		break;
	}
}

void UTrainerOverlay::SetLeftRightImages(const int32 RightIndex, const int32 LeftIndex)
{
	if (PokemonPartyInfo.IsValidIndex(RightIndex) && !PokemonPartyInfo[RightIndex])
	{
		PokemonRightImage->SetBrushFromTexture(DefaultImage);
	}
	else
	{
		PokemonRightImage->SetBrushFromTexture(PokemonPartyInfo[RightIndex]->GetPokemonUIInfo(false).PokemonSpriteImage);
	}
	if (PokemonPartyInfo.IsValidIndex(LeftIndex) && !PokemonPartyInfo[LeftIndex])
	{
		PokemonLeftImage->SetBrushFromTexture(DefaultImage);
	}
	else
	{
		PokemonLeftImage->SetBrushFromTexture(PokemonPartyInfo[LeftIndex]->GetPokemonUIInfo(false).PokemonSpriteImage);
	}


	//SelectedPokemonImage->SetBrushFromTexture(PokemonPartyInfo[PartyIndex]->GetPokemonUIInfo().PokemonSpriteImage);
}

void UTrainerOverlay::SetLeftRightInventoryImages(const int32 RightIndex, const int32 LeftIndex)
{
	FInventoryItemInfo* LeftItem = GetInventoryInfo(ThrowableContent[LeftIndex].ItemName);
	FInventoryItemInfo* RightItem = GetInventoryInfo(ThrowableContent[RightIndex].ItemName);
	
	if (!RightItem)
	{
		PokemonRightImage->SetBrushFromTexture(DefaultImage);
	}
	else
	{
		PokemonRightImage->SetBrushFromTexture(RightItem->Thumbnail);
	}

	if (!LeftItem)
	{
		PokemonLeftImage->SetBrushFromTexture(DefaultImage);
	}
	else
	{
		PokemonLeftImage->SetBrushFromTexture(LeftItem->Thumbnail);
	}
}

void UTrainerOverlay::SetIndexLeft(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex)
{
	CurrentIndex--;
	if (CurrentIndex < LowestIndex)
	{
		CurrentIndex = HighestIndex;
	}
}

void UTrainerOverlay::SetIndexRight(int32& CurrentIndex, int32 LowestIndex, int32 HighestIndex)
{
	CurrentIndex++;
	if (CurrentIndex > HighestIndex)
	{
		CurrentIndex = LowestIndex;
	}
}

void UTrainerOverlay::SetIndexFromScratch(int32 CurrentIndex, int32& LeftIndex, int32& RightIndex, int32 LowestIndex, int32 HighestIndex)
{
	LeftIndex = CurrentIndex - 1;
	RightIndex = CurrentIndex + 1;

	if (LeftIndex < LowestIndex)
	{
		LeftIndex = HighestIndex;
	}
	if (RightIndex > HighestIndex)
	{
		RightIndex = LowestIndex;
	}
}

void UTrainerOverlay::SwapSlotModes()
{
	if (CurrentSlotMode == ESlotType::EST_Inventory)
	{
		SetupPartyInfo(PokemonPartyInfo);
	}
	else if (CurrentSlotMode == ESlotType::EST_PokemonParty)
	{
		SetupInventoryInfo();
	}
}

void UTrainerOverlay::AllocatePokemonInfo()
{
	if (!OwnerCharacter) return;

	switch (HowManyPokemon())
	{
	case 0:
		SelectedPokemonImage->SetBrushFromTexture(DefaultImage);
		PokemonRightImage->SetBrushFromTexture(DefaultImage);
		PokemonLeftImage->SetBrushFromTexture(DefaultImage);
		PokemonName->SetText(FText::FromString(FString::Printf(TEXT(" "))));
		PokemonLevel->SetText(FText::FromString(FString::Printf(TEXT("Lv. 0"))));
		PokemonHealth->SetVisibility(ESlateVisibility::Hidden);
		OwnerCharacter->SetCurrentPokemon(nullptr);
		return;
	case 1:
		PartyIndex = 0;

		PokemonRightImage->SetBrushFromTexture(DefaultImage);
		PokemonLeftImage->SetBrushFromTexture(DefaultImage);
		break;
	default:
		break;
	}
	SelectedPokemonImage->SetBrushFromTexture(PokemonPartyInfo[PartyIndex]->GetPokemonUIInfo(false).PokemonSpriteImage);

	if (HowManyPokemon() >= 2)
	{
		int32 LeftIndex = 0;
		int32 RightIndex = 0;
		SetIndexFromScratch(PartyIndex, LeftIndex, RightIndex, 0, HowManyPokemon() - 1);
		SetLeftRightImages(RightIndex, LeftIndex);
	}

	SetCurrentPokemonUI();
}

void UTrainerOverlay::SetCurrentPokemonUI()
{
	PokemonHealth->SetVisibility(ESlateVisibility::Visible);

	OwnerCharacter->SetCurrentPokemon(PokemonPartyInfo[PartyIndex]);

	PokemonName->SetText(PokemonPartyInfo[PartyIndex]->GetPokemonUIInfo(false).PokemonName);

	PokemonLevel->SetText(FText::FromString(FString::FromInt(PokemonPartyInfo[PartyIndex]->GetPokemonUIInfo(false).PokemonLevel)));

	PokemonHealth->SetPercent(PokemonPartyInfo[PartyIndex]->GetPokemonUIInfo(false).PokemonHPPercent);
}

void UTrainerOverlay::AllocateInventoryInfo()
{
	if (!OwnerCharacter) return;

	PokemonHealth->SetVisibility(ESlateVisibility::Hidden);
	FInventoryItemInfo* NewItem = nullptr;
	FText QuantityText = FText::GetEmpty();

	switch (ThrowableContent.Num())
	{
	case 0:
		SelectedPokemonImage->SetBrushFromTexture(DefaultImage);
		PokemonRightImage->SetBrushFromTexture(DefaultImage);
		PokemonLeftImage->SetBrushFromTexture(DefaultImage);
		PokemonName->SetText(FText::FromString(FString::Printf(TEXT(" "))));
		PokemonLevel->SetText(FText::FromString(FString::Printf(TEXT(" "))));
		OwnerCharacter->SetCurrentThrowableItem(NULL);
		return;
	case 1:
		InventoryIndex = 0;
		NewItem = GetInventoryInfo(ThrowableContent[InventoryIndex].ItemName);
		QuantityText = FText::FromString(FString::Printf(TEXT("%d"), ThrowableContent[InventoryIndex].Quantity));

		PokemonRightImage->SetBrushFromTexture(DefaultImage);
		PokemonLeftImage->SetBrushFromTexture(DefaultImage);

		break;
	default:
		break;
	}	
	
	if (NewItem)
	{
		SelectedPokemonImage->SetBrushFromTexture(NewItem->Thumbnail);
		PokemonName->SetText(FText::FromString(NewItem->ItemName.ToString()));
		PokemonLevel->SetText(QuantityText);
	}
	else
	{
		SelectedPokemonImage->SetBrushFromTexture(DefaultImage);
	}
	OwnerCharacter->SetCurrentThrowableItem(*NewItem->ProjectileClass);

	if (ThrowableContent.Num() >= 2)
	{
		int32 LeftIndex = 0;
		int32 RightIndex = 0;
		SetIndexFromScratch(InventoryIndex, LeftIndex, RightIndex, 0, ThrowableContent.Num() - 1);
		SetLeftRightInventoryImages(RightIndex, LeftIndex);
	}
}

void UTrainerOverlay::SetupPartyInfo(TArray<APokemon_Parent*> PokemonParty)
{
	if(OwnerCharacter)
	{
		PokemonPartyInfo = PokemonParty;
		CurrentSlotMode = ESlotType::EST_PokemonParty;
		AllocatePokemonInfo();
	}
}

void UTrainerOverlay::SetupInventoryInfo()
{
	UE_LOG(LogTemp, Display, TEXT("inventory info updated"));
	if (InventorySystem)
	{
		ThrowableContent = InventorySystem->GetThrowableContent();
		CurrentSlotMode = ESlotType::EST_Inventory;
		AllocateInventoryInfo();
	}
}



FInventoryItemInfo* UTrainerOverlay::GetInventoryInfo(FName ItemID)
{
	FString ItemContextString;

	FDataTableRowHandle ItemRow;
	ItemRow.DataTable = ItemDataTable;
	ItemRow.RowName = ItemID;

	if (!ItemDataTable) return nullptr;
	FInventoryItemInfo* NewItem = ItemRow.GetRow<FInventoryItemInfo>(ItemContextString);
	return NewItem;
}

TMap<EDirectionPoint, UPokemonMoveDataAsset*> UTrainerOverlay::SetupMovesetOfActivePokemon()
{
	TMap<EDirectionPoint, UPokemonMoveDataAsset*> NewMoveset;
	if (!OwnerCharacter || !OwnerCharacter->GetCurrentPokemon())
		return NewMoveset;
	APokemon_Parent* CurrentPokemon = OwnerCharacter->GetCurrentPokemon();
	UMovesetComponent* PokemonMoveset = CurrentPokemon->MovesetComponent;
	for (int32 i = 0; i < PokemonMoveset->CurrentPokemonMoves.Num(); i++)
	{
		EDirectionPoint GamepadDirection = static_cast<EDirectionPoint>(i);
		if (PokemonMoveset->CurrentPokemonMoves[i])
		{
			//UE_LOG(LogTemp, Display, TEXT("Map Added: %s, %s"), *UEnum::GetValueAsString(GamepadDirection), *PokemonMoveset->CurrentPokemonMoves[i]->MoveName.ToString());

			NewMoveset.Add(GamepadDirection, PokemonMoveset->CurrentPokemonMoves[i]);
		}
	}
	return NewMoveset;
}

void UTrainerOverlay::CreateMovesetUI()
{
	PokemonMovesetOptions.Empty();
	PokemonMovesetOptions = SetupMovesetOfActivePokemon();
	UE_LOG(LogTemp, Display, TEXT("create moveset"));
	PokemonMoveList->SetVisibility(ESlateVisibility::Visible);
	PokemonMoveList->SetupMoveList(PokemonMovesetOptions);
	// Set up moveset widget here

}

void UTrainerOverlay::RemoveMovesetUI()
{
	PokemonMovesetOptions.Empty();
	PokemonMoveList->SetVisibility(ESlateVisibility::Hidden);
	// Set up moveset widget here
}

void UTrainerOverlay::ChangeInputMode(FInputModeDataBase& NewMode)
{
	APlayerController* CurrentController = GetOwningPlayer();
	if (CurrentController)
	{
		CurrentController->SetInputMode(NewMode);
	}
}

bool UTrainerOverlay::HasPokemon()
{
	return PokemonPartyInfo.Num() >= 1;
}

int32 UTrainerOverlay::HowManyPokemon()
{
	//int32 CurrentAmount = 0;
	//TArray<APokemon_Parent*> NewPartyInfo;
	//PokemonPartyInfo.GenerateValueArray(NewPartyInfo);
	//if (PokemonPartyInfo.Num()<=0)
	//	return CurrentAmount;
	//	for (APokemon_Parent* Pokemon : NewPartyInfo)
	//	{
	//		if (Pokemon)
	//			CurrentAmount++;
	//	}
	//
	return PokemonPartyInfo.Num();
}

UPokemonMoveDataAsset* UTrainerOverlay::GetMove(EDirectionPoint DirectionPoint)
{
	return PokemonMovesetOptions[DirectionPoint];
}




