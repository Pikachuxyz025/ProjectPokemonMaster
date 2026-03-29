


#include "Debugging/PokemonDebugWorldSubsystem.h"
#include "Debugging/PokemonDebugLog.h"

bool UPokemonDebugWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return true;
}

void UPokemonDebugWorldSubsystem::SetGlobalDebugEnabled(bool bEnabled)
{
	bGlobalDebugEnabled = bEnabled;
}

void UPokemonDebugWorldSubsystem::EnableCategory(const FGameplayTag& CategoryTag)
{
	if (CategoryTag.IsValid())
	{
		EnabledCategories.AddTag(CategoryTag);
	}
}

void UPokemonDebugWorldSubsystem::DisableCategory(const FGameplayTag& CategoryTag)
{
	if (CategoryTag.IsValid())
	{
		EnabledCategories.RemoveTag(CategoryTag);
	}
}

void UPokemonDebugWorldSubsystem::SetCategoryEnabled(const FGameplayTag& CategoryTag, bool bEnabled)
{
	if (bEnabled)
	{
		EnableCategory(CategoryTag);
	}
	else
	{
		DisableCategory(CategoryTag);
	}
}

bool UPokemonDebugWorldSubsystem::IsCategoryEnabled(const FGameplayTag& CategoryTag) const
{
	if (!bGlobalDebugEnabled||!CategoryTag.IsValid())
	{
		return false;
	}

	if(bDefaultEnableAllCategories)
	{
		return true;
	}

	for (const FGameplayTag& EnabledCategory : EnabledCategories)
	{
		if (CategoryTag.MatchesTag(EnabledCategory))
		{
			return true;
		}
	}

	return false;
}

bool UPokemonDebugWorldSubsystem::ShouldEmitMessage(const UObject* SourceObject, const FGameplayTag& CategoryTag, EPokemonDebugVerbosity Verbosity) const
{
	if (!IsCategoryEnabled(CategoryTag))
	{
		return false;
	}

	if (static_cast<uint8>(Verbosity) > static_cast<uint8>(MaxVerbosity))
	{
		return false;
	}

	if (!PassesObservedActorFilter(SourceObject))
	{
		return false;
	}
	return true;
}

void UPokemonDebugWorldSubsystem::SetObservedActor(const AActor* InActor)
{
	ObservedActor = InActor;
}

void UPokemonDebugWorldSubsystem::ClearObservedActor()
{
	ObservedActor.Reset();
}

void UPokemonDebugWorldSubsystem::SetMaxVerbosity(EPokemonDebugVerbosity InVerbosity)
{
	MaxVerbosity = InVerbosity;
}

void UPokemonDebugWorldSubsystem::AddMessage(const UObject* SourceObject, const FGameplayTag& CategoryTag, const FString& Message, EPokemonDebugOutputMode OutputMode, FColor Color, float ScreenDuration, EPokemonDebugVerbosity Verbosity)
{
	if(!ShouldEmitMessage(SourceObject,CategoryTag,Verbosity))
	{
		return;
	}

	UWorld* World = GetWorld();
	if(!World)
	{
		return;
	}
	const FString Prefix = BuildPrefix(SourceObject, CategoryTag);
	const FString FinalMessage = FString::Printf(TEXT("%s %s"), *Prefix, *Message);

	FPokemonDebugMessage MessageData;
	MessageData.CategoryTag = CategoryTag;
	MessageData.Message = FinalMessage;
	MessageData.SourceObject = SourceObject;
	MessageData.TimeStampInSeconds = World->GetTimeSeconds();
	MessageData.Color = Color;
	MessageData.Verbosity = Verbosity;

	StoreMessage(MessageData);

	if(OutputMode== EPokemonDebugOutputMode::Log || OutputMode == EPokemonDebugOutputMode::LogAndScreen)
	{
		UE_LOG(LogPokemonDebug, Log, TEXT("%s"), *FinalMessage);
	}

	if ((OutputMode == EPokemonDebugOutputMode::OnScreen || OutputMode == EPokemonDebugOutputMode::LogAndScreen) && GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			ScreenDuration,
			Color,
			FinalMessage
		);
	}
}

void UPokemonDebugWorldSubsystem::DrawDebugSphereForCategory(const UObject* SourceObject, const FGameplayTag& CategoryTag, const FVector& Center, float Radius, float Duration, FColor Color, int32 Segments, float Thickness, EPokemonDebugVerbosity Verbosity)
{
	if (!ShouldEmitMessage(SourceObject, CategoryTag, Verbosity))
	{
		return;
	}

	if (UWorld* World = GetWorld())
	{
		DrawDebugSphere(World, Center, Radius, Segments, Color, false, Duration, 0, Thickness);
	}
}

void UPokemonDebugWorldSubsystem::DrawDebugLineForCategory(const UObject* SourceObject, const FGameplayTag& CategoryTag, const FVector& Start, const FVector& End, float Duration, FColor Color, float Thickness, EPokemonDebugVerbosity Verbosity)
{
	if (!ShouldEmitMessage(SourceObject, CategoryTag, Verbosity))
	{
		return;
	}

	if (UWorld* World = GetWorld())
	{
		DrawDebugLine(World, Start, End, Color, false, Duration, 0, Thickness);
	}
}

FString UPokemonDebugWorldSubsystem::BuildPrefix(const UObject* SourceObject, const FGameplayTag& CategoryTag) const
{
	const FString NetPrefix = GetNetModePrefix(SourceObject);
	const FString CategoryString = CategoryTag.IsValid() ? CategoryTag.ToString() : TEXT("Debug.Unknown");

	FString SourceName = TEXT("NoSource");
	if(IsValid(SourceObject))
	{
		SourceName = SourceObject->GetName();
	}

	return FString::Printf(TEXT("[%s][%s][%s]"), *NetPrefix, *CategoryString, *SourceName);
}

FString UPokemonDebugWorldSubsystem::GetNetModePrefix(const UObject* SourceObject) const
{
	const UWorld* World = GetWorld();
	if (!World && SourceObject)
	{
		World = SourceObject->GetWorld();
	}
	// Why not else if
	if(!World)
	{
		return TEXT("NoWorld");
	}

	switch (World->GetNetMode())
	{
	case NM_Standalone:
		return TEXT("Standalone");
	case NM_DedicatedServer:
		return TEXT("DedicatedServer");
	case NM_ListenServer:
		return TEXT("ListenServer");
	case NM_Client:
		return TEXT("Client");
	default:
		return TEXT("UnknownNetMode");
	}
}

bool UPokemonDebugWorldSubsystem::PassesObservedActorFilter(const UObject* SourceObject) const
{
	if (!ObservedActor.IsValid())
	{
		return true;
	}

	if (!IsValid(SourceObject))
	{
		return false;
	}

	const AActor* SourceActor = Cast<AActor>(SourceObject);
	if (!SourceActor)
	{
		// What is GetTypedOuter?
		SourceActor = SourceActor->GetTypedOuter<AActor>();
	}
	return SourceActor == ObservedActor.Get();
}

void UPokemonDebugWorldSubsystem::StoreMessage(const FPokemonDebugMessage& MessageData)
{
	RecentMessages.Add(MessageData);

	if(RecentMessages.Num()>MaxStoredMessages)
	{
		const int32 NumToRemove = RecentMessages.Num() - MaxStoredMessages;
		RecentMessages.RemoveAt(0, NumToRemove);
	}
}
