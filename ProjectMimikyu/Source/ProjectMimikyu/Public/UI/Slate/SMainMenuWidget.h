// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

class ATrainerHUD;
class SMainMenuWidget : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SMainMenuWidget){} 

	SLATE_ARGUMENT(TWeakObjectPtr<ATrainerHUD>,OwningHUD)

	SLATE_END_ARGS()

	/* every widget needs a construction function */
	void Construct(const FArguments& InArgs);

	virtual bool SupportsKeyboardFocus() const override { return true; }
};
