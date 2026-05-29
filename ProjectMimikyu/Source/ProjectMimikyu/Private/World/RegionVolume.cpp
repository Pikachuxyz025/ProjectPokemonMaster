// Fill out your copyright notice in the Description page of Project Settings.


#include "World/RegionVolume.h"
#include "DataAssets/RegionPopulationData.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Engine.h"

ARegionVolume::ARegionVolume()
{
	PrimaryActorTick.bCanEverTick = false;

	RegionBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("RegionBounds"));
	SetRootComponent(RegionBounds);

	RegionBounds->SetBoxExtent(FVector(5000.0f, 5000.0f, 1000.0f));
	RegionBounds->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	RegionBounds->SetCollisionObjectType(ECC_WorldDynamic);
	RegionBounds->SetCollisionResponseToAllChannels(ECR_Ignore);
	RegionBounds->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	RegionBounds->SetGenerateOverlapEvents(true);

#if WITH_EDITORONLY_DATA
	RegionBounds->bVisualizeComponent = true;
#endif
}

void ARegionVolume::BeginPlay()
{
	Super::BeginPlay();

	if (!RegionBounds)
	{
		return;
	}

	RegionBounds->OnComponentBeginOverlap.AddDynamic(this, &ARegionVolume::OnRegionBeginOverlap);
	RegionBounds->OnComponentEndOverlap.AddDynamic(this, &ARegionVolume::OnRegionEndOverlap);

	ValidateRegionData();
}

void ARegionVolume::OnRegionBeginOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	if (!IsValidRegionActor(OtherActor))
	{
		return;
	}

	PrintEnterDebug(OtherActor);

	// Later:
	// if (UWorldPopulationSubsystem* PopulationSubsystem = GetWorld()->GetSubsystem<UWorldPopulationSubsystem>())
	// {
	//     PopulationSubsystem->NotifyActorEnteredRegion(OtherActor, this);
	// }
}

void ARegionVolume::OnRegionEndOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex
)
{
	if (!IsValidRegionActor(OtherActor))
	{
		return;
	}

	PrintExitDebug(OtherActor);

	// Later:
	// if (UWorldPopulationSubsystem* PopulationSubsystem = GetWorld()->GetSubsystem<UWorldPopulationSubsystem>())
	// {
	//     PopulationSubsystem->NotifyActorExitedRegion(OtherActor, this);
	// }
}

bool ARegionVolume::IsValidRegionActor(AActor* OtherActor) const
{
	if (!OtherActor)
	{
		return false;
	}

	const APawn* Pawn = Cast<APawn>(OtherActor);
	if (!Pawn)
	{
		return false;
	}

	const APlayerController* PlayerController = Cast<APlayerController>(Pawn->GetController());
	if (!PlayerController)
	{
		return false;
	}

	return true;
}

void ARegionVolume::PrintEnterDebug(AActor* EnteringActor) const
{
	if (!bDebugRegionOverlap || !GEngine)
	{
		return;
	}

	const FString RegionName = RegionTag.IsValid()
		? RegionTag.ToString()
		: TEXT("None");

	const FString BiomeString = BuildTagContainerString(BiomeTags);
	const FString EnvironmentString = BuildTagContainerString(EnvironmentTags);

	const FString DataAssetName = RegionPopulationData
		? RegionPopulationData->GetName()
		: TEXT("None");

	const FString DataSummary = RegionPopulationData
		? RegionPopulationData->GetDebugSummary()
		: TEXT("No RegionPopulationData assigned.");

	const FString Message = FString::Printf(
		TEXT("Entered Region: %s\nBiomeTags: %s\nEnvironmentTags: %s\nDataAsset: %s\n%s"),
		*RegionName,
		*BiomeString,
		*EnvironmentString,
		*DataAssetName,
		*DataSummary
	);

	GEngine->AddOnScreenDebugMessage(
		-1,
		DebugMessageDuration,
		DebugEnterColor,
		Message
	);

	UE_LOG(LogTemp, Log, TEXT("[RegionVolume] %s entered region %s. Biomes: %s. Environment: %s. DataAsset: %s. %s"),
		*GetNameSafe(EnteringActor),
		*RegionName,
		*BiomeString,
		*EnvironmentString,
		*DataAssetName,
		*DataSummary
	);
}

void ARegionVolume::PrintExitDebug(AActor* ExitingActor) const
{
	if (!bDebugRegionOverlap || !GEngine)
	{
		return;
	}

	const FString RegionName = RegionTag.IsValid()
		? RegionTag.ToString()
		: TEXT("None");

	const FString Message = FString::Printf(
		TEXT("Exited Region: %s"),
		*RegionName
	);

	GEngine->AddOnScreenDebugMessage(
		-1,
		DebugMessageDuration,
		DebugExitColor,
		Message
	);

	UE_LOG(LogTemp, Log, TEXT("[RegionVolume] %s exited region %s."),
		*GetNameSafe(ExitingActor),
		*RegionName
	);
}

void ARegionVolume::ValidateRegionData() const
{
	if(!RegionPopulationData)
	{
		UE_LOG(LogTemp, Warning, TEXT("[RegionVolume] %s has no RegionPopulationData assigned."), *GetName());
		return;
	}

	if (RegionTag.IsValid() && RegionPopulationData->RegionTag.IsValid())
	{
		if (RegionTag != RegionPopulationData->RegionTag)
		{
			UE_LOG(LogTemp, Warning,
				TEXT("[RegionVolume] %s RegionTag mismatch. Volume=%s DataAsset=%s"),
				*GetName(),
				*RegionTag.ToString(),
				*RegionPopulationData->RegionTag.ToString()
			);
		}
	}
}

FString ARegionVolume::BuildTagContainerString(const FGameplayTagContainer& TagContainer) const
{
	if (TagContainer.IsEmpty())
	{
		return TEXT("None");
	}

	TArray<FGameplayTag> RegionTags;
	TagContainer.GetGameplayTagArray(RegionTags);

	TArray<FString> TagStrings;
	for (const FGameplayTag& Tag : RegionTags)
	{
		TagStrings.Add(Tag.ToString());
	}

	return FString::Join(TagStrings, TEXT(", "));
}

#if WITH_EDITOR
void ARegionVolume::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// Later we can use this to update editor-only labels/colors based on RegionTag.
}
#endif

