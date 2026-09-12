#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "PokePal/Context/PokePalEditorContext.h"
#include "PokePalEditorSubsystem.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnPokePalSelectedActorsChanged);

UCLASS()
class UPokePalEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	FPokePalEditorContext BuildEditorContext() const;

	FOnPokePalSelectedActorsChanged& OnSelectedActorsChanged()
	{
		return SelectedActorsChangedEvent;
	}

private:
	void HandleEditorSelectionChanged(UObject* NewSelection);

	FDelegateHandle EditorSelectionChangedHandle;
	FOnPokePalSelectedActorsChanged SelectedActorsChangedEvent;
};
