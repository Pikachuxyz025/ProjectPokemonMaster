

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonPresentationComponent.generated.h"

class APokemon_Parent;
class UPokemonPresentationProfile;
class USkeletalMeshComponent;
class USkeletalMesh;
class UAnimSequence;


// Summary: Represents the current state of a Pokemon's presentation, including head tracking and blinking information.
// This struct is used to store the created and relevant data for animating the Pokemon's head and eyes based on the current game state.
// The information around head tracking is inputted into the Control Rig in the anim graph; if the head bone is set and the 
// HeadAlpha is greater than 0, then the Control Rig will attempt to rotate the head using the Aim node.
USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonPresentationState
{
	GENERATED_BODY()

	// The name of the bone used for head tracking in the skeletal mesh. 
	// If this is set to NAME_None, head tracking is disabled.
	UPROPERTY(BlueprintReadOnly, Category = "Presentation")
	FName HeadBone = NAME_None;

	// The normalized local-space axis of the head bone that should point toward the look target.
	UPROPERTY(BlueprintReadOnly, Category = "Presentation")
	FVector HeadAimAxisLS = FVector::ZeroVector;

	// The normalized look direction in the character's local space, used for head tracking.
	UPROPERTY(BlueprintReadOnly, Category = "Presentation")
	FVector LookDirectionCS = FVector::ZeroVector;

	// The alpha value for head tracking, ranging from 0.0 (no tracking) to 1.0 (full tracking).
	UPROPERTY(BlueprintReadOnly, Category = "Presentation")
	float HeadAlpha = 0.0f;

	// The animation sequence used for blinking. If this is null, blinking is disabled.
	UPROPERTY(BlueprintReadOnly, Category = "Presentation")
	TObjectPtr<UAnimSequence> BlinkSequence = nullptr;

	// The name of the blend profile used for blinking. If this is NAME_None, blinking is disabled.
	UPROPERTY(BlueprintReadOnly, Category = "Presentation")
	float BlinkTime = 0.f;
	
	// The alpha value for blinking, ranging from 0.0 (no blink) to 1.0 (full blink).
	UPROPERTY(BlueprintReadOnly, Category = "Presentation")
	float BlinkAlpha = 0.f;
};

UCLASS( ClassGroup=(Pokemon), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UPokemonPresentationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPokemonPresentationComponent();

	// Call at startup, or after an intentional mesh/profile replacement.
	// Do not call from the AnimGraph or an animation worker-thread function.
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Presentation")
	void InitializePresentation(UPokemonPresentationProfile* NewProfile);

	UFUNCTION(BlueprintCallable,Category ="Pokemon|Presentation")
	void SetLookTarget(AActor* Target);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Presentation")
	void SetLookLocation(FVector WorldLocation);

	// Clears the explicit override. Automatic combat targeting may resume.
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Presentation")
	void ClearLookTarget();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Presentation")
	bool RequestBlink();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Presentation")
	bool bUseCombatTarget;

	// Only the main UPokemonAnimInstance should call this. It is not a tick function.
	void UpdatePresentation(float DeltaTime);

	const FPokemonPresentationState& GetPresentationState() const { return State; }

private:
	// Returns true if a valid world point was resolved from the explicit target or location, or the combat target if enabled.
	bool ResolveLookPoint(FVector& OutWorldPoint) const;

	// Returns true if the Pokemon is incapacitated or attacking and the profile suppresses head tracking.
	bool ShouldSuppressPresentation() const;
	bool IsHitStopActive() const;
	float ChooseBlinkInterval() const;
	void ResetBlink();

	UPROPERTY(Transient)
	TObjectPtr<UPokemonPresentationProfile> Profile=nullptr;

	UPROPERTY(Transient)
	FPokemonPresentationState State;

	TWeakObjectPtr<APokemon_Parent>Pokemon;
	TWeakObjectPtr<USkeletalMeshComponent> Mesh;
	TWeakObjectPtr<USkeletalMesh> InitializedMesh;
	TWeakObjectPtr<AActor> ExplicitTarget;
	FVector ExplicitWorldPoint = FVector::ZeroVector;
	bool bHasWorldPoint = false;
	bool bInitialized = false;
	bool bHeadReady = false;
	bool bBlinkReady = false;
	bool bBlinking = false;

	// Current head yaw in degrees, used for smooth interpolation towards the target look direction.
	float CurrentYaw = 0.f;
	// Current head pitch in degrees, used for smooth interpolation towards the target look direction.
	float CurrentPitch = 0.f;

	float BlinkElapsed = 0.f;
	float TimeUntilBlink = 0.f;
};
