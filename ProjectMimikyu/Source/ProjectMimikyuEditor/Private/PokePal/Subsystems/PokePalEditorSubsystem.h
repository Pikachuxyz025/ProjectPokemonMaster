#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "PokePalEditorSubsystem.generated.h"

struct FPokePalSelectedActorInfo
{
	FString ActorLabel;
	FString ObjectName;
	FString ClassName;
};

DECLARE_MULTICAST_DELEGATE(FOnPokePalSelectedActorsChanged);

UCLASS()
class UPokePalEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	TArray<FPokePalSelectedActorInfo> GetSelectedActorInfo() const;

	FOnPokePalSelectedActorsChanged OnSelectedActorsChanged()
	{
		return SelectedActorsChangedEvent;
	}

private:
	void HandleEditorSelectionChanged(UObject* NewSelection);

	FDelegateHandle EditorSelectionChangedHandle;
	FOnPokePalSelectedActorsChanged SelectedActorsChangedEvent;
};
