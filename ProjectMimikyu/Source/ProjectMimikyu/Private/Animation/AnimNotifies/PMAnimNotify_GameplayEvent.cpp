// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotifies/PMAnimNotify_GameplayEvent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayEffectTypes.h"

FString UPMAnimNotify_GameplayEvent::GetNotifyName_Implementation() const
{
	return EventTag.IsValid()
		? FString::Printf(TEXT("Gameplay Event: %s"), *EventTag.ToString())
		: TEXT("Gameplay Event");
}

void UPMAnimNotify_GameplayEvent::Notify(
	USkeletalMeshComponent* MeshComp,
	UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (!MeshComp || !EventTag.IsValid())
	{
		return;
	}

	AActor* OwnerActor = MeshComp->GetOwner();
	if (!OwnerActor)
	{
		return;
	}

	FGameplayEventData Payload;
	Payload.EventTag = EventTag;
	Payload.Instigator = OwnerActor;
	Payload.Target = OwnerActor;
	Payload.EventMagnitude = EventMagnitude;

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		OwnerActor,
		EventTag,
		Payload
	);

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonAnimNotify] Sent gameplay event. Owner=%s EventTag=%s"),
		*GetNameSafe(OwnerActor),
		*EventTag.ToString());
}
