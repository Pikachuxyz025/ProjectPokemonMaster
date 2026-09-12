#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "PokePalEditorSubsystem.generated.h"

UCLASS()
class UPokePalEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};
