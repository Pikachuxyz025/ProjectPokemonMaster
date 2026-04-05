#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TargetingType.generated.h"

UENUM(BlueprintType)
enum class EAimTypeMode : uint8
{
	None		UMETA(DisplayName = "None"),
	LockOn		UMETA(DisplayName = "Lock On"),
	FreeAim		UMETA(DisplayName = "Free Aim")
};

UENUM(BlueprintType)
enum class EAimContext : uint8
{
	Combat		UMETA(DisplayName = "Combat"),
	Capture		UMETA(DisplayName = "Capture"),
	Interaction UMETA(DisplayName = "Interaction"),
	CommandMove UMETA(DisplayName = "Command Move")
};

USTRUCT(BlueprintType)
struct FAimData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	EAimTypeMode AimMode = EAimTypeMode::None;

	UPROPERTY(BlueprintReadOnly)
	EAimContext AimContext = EAimContext::Combat;

	UPROPERTY(BlueprintReadOnly)
	TWeakObjectPtr<AActor> TargetActor = nullptr;

	UPROPERTY(BlueprintReadOnly)
	FVector AimWorldLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly)
	FVector AimDirection = FVector::ForwardVector;

	UPROPERTY(BlueprintReadOnly)
	bool bHasValidTarget = false;

	UPROPERTY(BlueprintReadOnly)
	bool bUsingAimAssist = false;
};