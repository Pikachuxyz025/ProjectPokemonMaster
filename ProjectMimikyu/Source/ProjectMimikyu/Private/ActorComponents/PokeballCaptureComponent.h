#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokeballCaptureComponent.generated.h"

class APokeBall;

UCLASS(ClassGroup = (Pokeball), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokeballCaptureComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokeballCaptureComponent();

	void InitializeCapture(APokeBall* InOwningPokeBall);

	void HandleHit(AActor* OtherActor);
	void HandleBeginOverlap(AActor* OtherActor);

private:
	UPROPERTY()
	TObjectPtr<APokeBall> OwningPokeBall;

	void HandlePokemonContact(AActor* OtherActor);
};