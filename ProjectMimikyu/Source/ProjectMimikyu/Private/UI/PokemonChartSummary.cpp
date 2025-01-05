// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PokemonChartSummary.h"
#include "Characters/Pokemon_Parent.h"
#include "UI/TrainerHUD.h"


void UPokemonChartSummary::AddMouseCursor()
{
	FInputModeUIOnly UIInputMode;

	UIInputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	UIInputMode.SetWidgetToFocus(TakeWidget());
	APlayerController* CurrentController= GetOwningPlayer();
	if (CurrentController)
	{
		CurrentController->SetInputMode(UIInputMode);
		CurrentController->bShowMouseCursor = true;
	}
}

void UPokemonChartSummary::RemoveMouseCursor()
{
	FInputModeGameOnly GameInputMode;
	APlayerController* CurrentController = GetOwningPlayer();
	if (CurrentController)
	{
		CurrentController->SetInputMode(GameInputMode);
		CurrentController->bShowMouseCursor = false;
	}
}

void UPokemonChartSummary::SetPokemonParty(const TArray<APokemon_Parent*> PokemonParty)
{
	PokemonPartyInfo = PokemonParty;
}

void UPokemonChartSummary::SetPokemonIndex(APokemon_Parent* SelectedPokemon)
{
	if (PokemonPartyInfo.Num() <= 0 || !PokemonPartyInfo.Contains(SelectedPokemon)) return;

 CurrentPartyIndex= PokemonPartyInfo.IndexOfByKey(SelectedPokemon);
}

FReply UPokemonChartSummary::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	if (InKeyEvent.GetKey() == ExitKey)
	{
		UE_LOG(LogTemp, Display, TEXT("Remove"));
		APlayerController* CurrentController = GetOwningPlayer();
		ATrainerHUD* TrainerHUD = CastChecked<ATrainerHUD>(CurrentController->GetHUD());
		TrainerHUD->SwitchOverlays(this, ReturnWidget);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Wrong Key"));
	}
	//Super::NativeOnKeyDown(InGeometry, InKeyEvent);
	return FReply::Handled();
}
