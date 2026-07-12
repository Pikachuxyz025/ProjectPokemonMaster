// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "PMAnimNotifyState_AbilityWindow.generated.h"

UCLASS(meta = (DisplayName = "Pokemon Ability Window"))
class PROJECTMIMIKYU_API UPMAnimNotifyState_AbilityWindow : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Window", meta = (Categories = "Ability.Window"))
	FGameplayTag AbilityWindowTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Window|Events")
	bool bSendBeginEvent = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Window|Events", meta = (Categories = "Event.Ability.Window"))
	FGameplayTag BeginEventTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Window|Events")
	bool bSendEndEvent = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Window|Events", meta = (Categories = "Event.Ability.Window"))
	FGameplayTag EndEventTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Window|Debug")
	bool bLogWindowEvents = true;

	virtual FString GetNotifyName_Implementation() const override;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;

	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

private:
	void SendWindowEvent(USkeletalMeshComponent* MeshComp, const FGameplayTag& EventTag, float EventMagnitude, const TCHAR* PhaseLabel) const;
};
