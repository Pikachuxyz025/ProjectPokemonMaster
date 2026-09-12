#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "PokePal/Context/PokePalEditorContext.h"
#include "PokePalEditorSubsystem.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnPokePalEditorContextChanged);

UCLASS()
class UPokePalEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	FPokePalEditorContext BuildEditorContext() const;

	FOnPokePalEditorContextChanged& OnEditorContextChanged()
	{
		return EditorContextChangedEvent;
	}

private:
	void HandleEditorSelectionChanged(UObject* NewSelection);
	void HandleMapOpened(const FString& Filename, bool bAsTemplate);

	FDelegateHandle EditorSelectionChangedHandle;
	FDelegateHandle MapOpenedHandle;

	FOnPokePalEditorContextChanged EditorContextChangedEvent;
};
