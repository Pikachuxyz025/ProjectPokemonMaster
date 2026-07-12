// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotifies/PMAnimNotifyState_AbilityWindow.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayEffectTypes.h"
#include "GameplayTags/PokemonGameplayTags.h"

FString UPMAnimNotifyState_AbilityWindow::GetNotifyName_Implementation() const
{
	return AbilityWindowTag.IsValid()
		? FString::Printf(TEXT("Ability Window: %s"), *AbilityWindowTag.ToString())
		: TEXT("Pokemon	Ability Window");
}

void UPMAnimNotifyState_AbilityWindow::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (!bSendBeginEvent)
	{
		return;
	}

	const FPokemonGameplayTags& PokemonTags = FPokemonGameplayTags::Get();

	const FGameplayTag ResolvedEventTag = BeginEventTag.IsValid()
		? BeginEventTag
		: PokemonTags.Event_Ability_Window_Begin;

	SendWindowEvent(
		MeshComp,
		ResolvedEventTag,
		TotalDuration,
		TEXT("Begin")
	);
}

void UPMAnimNotifyState_AbilityWindow::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (!bSendEndEvent)
	{
		return;
	}

	const FPokemonGameplayTags& PokemonTags = FPokemonGameplayTags::Get();

	const FGameplayTag ResolvedEventTag = EndEventTag.IsValid()
		? EndEventTag
		: PokemonTags.Event_Ability_Window_End;

	SendWindowEvent(
		MeshComp,
		ResolvedEventTag,
		0.f,
		TEXT("End")
	);
}

void UPMAnimNotifyState_AbilityWindow::SendWindowEvent(USkeletalMeshComponent* MeshComp, const FGameplayTag& EventTag, float EventMagnitude, const TCHAR* PhaseLabel) const
{
	if (!MeshComp || !EventTag.IsValid())
	{
		return;
	}

	if (!AbilityWindowTag.IsValid())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PMAnimNotifyState_AbilityWindow] Missing AbilityWindowTag. EventTag=%s"),
			*EventTag.ToString());

		return;
	}

	AActor* OwnerActor = MeshComp->GetOwner();
	if (!OwnerActor)
	{
		return;
	}

	if (!UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OwnerActor))
	{
		UE_LOG(LogTemp, Verbose,
			TEXT("[PMAnimNotifyState_AbilityWindow] Skipped window event. Owner has no ASC. Owner=%s EventTag=%s WindowTag=%s"),
			*GetNameSafe(OwnerActor),
			*EventTag.ToString(),
			*AbilityWindowTag.ToString());

		return;
	}

	FGameplayEventData Payload;
	Payload.EventTag = EventTag;
	Payload.Instigator = OwnerActor;
	Payload.Target = OwnerActor;
	Payload.EventMagnitude = EventMagnitude;

	Payload.InstigatorTags.AddTag(AbilityWindowTag);
	Payload.TargetTags.AddTag(AbilityWindowTag);

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		OwnerActor,
		EventTag,
		Payload
	);

	if (bLogWindowEvents)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[PMAnimNotifyState_AbilityWindow] Sent window event. Phase=%s Owner=%s EventTag=%s WindowTag=%s Magnitude=%.2f"),
			PhaseLabel,
			*GetNameSafe(OwnerActor),
			*EventTag.ToString(),
			*AbilityWindowTag.ToString(),
			EventMagnitude);
	}
}
