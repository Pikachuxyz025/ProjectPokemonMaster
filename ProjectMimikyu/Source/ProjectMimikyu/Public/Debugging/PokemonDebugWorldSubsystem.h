

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "PokemonDebugTypes.h"
#include "PokemonDebugWorldSubsystem.generated.h"

UCLASS()
class PROJECTMIMIKYU_API UPokemonDebugWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	void SetGlobalDebugEnabled(bool bEnabled);
	bool IsGlobalDebugEnabled() const { return bGlobalDebugEnabled; };

	void EnableCategory(const FGameplayTag& CategoryTag);
	void DisableCategory(const FGameplayTag& CategoryTag);
	void SetCategoryEnabled(const FGameplayTag& CategoryTag, bool bEnabled);
	bool ToggleCategory(const FGameplayTag& CategoryTag);

	bool IsCategoryEnabled(const FGameplayTag& CategoryTag) const;
	bool ShouldEmitMessage(const UObject* SourceObject, const FGameplayTag& CategoryTag, EPokemonDebugVerbosity Verbosity) const;

	void SetObservedActor(const AActor* InActor);
	const AActor* GetObservedActor() const { return ObservedActor.Get(); }
	void ClearObservedActor();

	void SetMaxVerbosity(EPokemonDebugVerbosity InVerbosity);
	EPokemonDebugVerbosity GetMaxVerbosity() const { return MaxVerbosity; }

	void AddMessage(
		const UObject* SourceObject,
		const FGameplayTag& CategoryTag, 
		const FString& Message, 
		EPokemonDebugOutputMode OutputMode = EPokemonDebugOutputMode::Log,
		FColor Color = FColor::White, 
		float ScreenDuration = 3.f,
		EPokemonDebugVerbosity Verbosity = EPokemonDebugVerbosity::Basic
	);

	void DrawDebugSphereForCategory(
		const UObject* SourceObject,
		const FGameplayTag& CategoryTag,
		const FVector& Center,
		float Radius,
		float Duration = 3.f,
		FColor Color = FColor::Green,
		int32 Segments = 12,
		float Thickness = 1.f,
		EPokemonDebugVerbosity Verbosity = EPokemonDebugVerbosity::Basic
	);

	void DrawDebugLineForCategory(
		const UObject* SourceObject,
		const FGameplayTag& CategoryTag,
		const FVector& Start,
		const FVector& End,
		float Duration = 3.f,
		FColor Color = FColor::Yellow,
		float Thickness = 1.f,
		EPokemonDebugVerbosity Verbosity = EPokemonDebugVerbosity::Basic
	);

	const TArray<FPokemonDebugMessage>& GetDebugMessages() const { return RecentMessages; }

protected:
	UPROPERTY(EditAnywhere,Category="Debug")
	bool bGlobalDebugEnabled = true;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDefaultEnableAllCategories = false;

	UPROPERTY(EditAnywhere, Category = "Debug")
	int32 MaxStoredMessages = 200;

	UPROPERTY()
	FGameplayTagContainer EnabledCategories;

	UPROPERTY()
	TArray<FPokemonDebugMessage> RecentMessages;

	TWeakObjectPtr<const AActor> ObservedActor;

	UPROPERTY(EditAnywhere, Category = "Debug")
	EPokemonDebugVerbosity MaxVerbosity = EPokemonDebugVerbosity::Detailed;

	FString BuildPrefix(const UObject* SourceObject, const FGameplayTag& CategoryTag) const;
	FString GetNetModePrefix(const UObject* SourceObject) const;
	FString GetActorRolePrefix(const UObject* SourceObject) const;
	bool PassesObservedActorFilter(const UObject* SourceObject) const;
	void StoreMessage(const FPokemonDebugMessage& MessageData);
};
