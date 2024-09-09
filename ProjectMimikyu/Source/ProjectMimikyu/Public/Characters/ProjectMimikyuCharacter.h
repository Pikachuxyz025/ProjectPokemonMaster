// Copyright Epic Games, Inc. All Rights Reserved.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "GameplayTagContainer.h"
#include "CharacterTypes.h"
#include "ProjectMimikyuCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UPokemonInputConfig;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class AItem;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPartyUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetRegistered,AActor*,CombatTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPokemonSentOut, AActor*, NewPokemon);

UCLASS(config=Game)
class AProjectMimikyuCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Pickup;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Throw;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Engage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Command;

public:
	AProjectMimikyuCharacter();
	
	void SetOverlappingItem(AItem* NewItem);
	virtual void PostInitializeComponents()override;

	FOnPartyUpdated OnPartyUpdated;
	FOnTargetRegistered OnTargetRegistered;
	FOnPokemonSentOut OnPokemonSentOut;
	FOnPokemonHealthUpdated OnPokemonHealthUpdated;

	void UpdateCurrentPokemonHealth();
protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	void Pickup();
	void TargetAndEngage();
	void CatchPokemon();

	UFUNCTION(Server, Reliable)
	void ServerAddToCurrentParty(AActor* AddedActor);
	void ShowPokemonMoveset();
	void RemovePokemonMoveset();
	void BasicLineTrace(FHitResult& OutHit, FVector Start, FVector End);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	class	 UEnhancedInputLocalPlayerSubsystem* Subsystem;

	UPROPERTY(VisibleAnywhere, Category = "Pokemon Party")
	bool bHasPokemon = false;

	UPROPERTY(VisibleAnywhere,Replicated,Category = "Pokemon Party")
	class APokemon_Parent* CurrentPokemon = nullptr;

	UPROPERTY(VisibleAnywhere,Category = "Pokemon Party")
	TArray<APokemon_Parent*> CurrentParty;
	// Multiplayer testing
	
	//UPROPERTY(Replicated)
	//FPokemonParty CurrentSParty;

	UPROPERTY()
	class ATrainerController* TrainerController;

	UPROPERTY(EditDefaultsOnly)
	class UInventorySystemComponent* InventorySystem;

	UPROPERTY(EditAnywhere)
	float CatchingDistance = 1000.f;

	UPROPERTY(VisibleAnywhere)
	 AItem* OverlappingItem;

	 UPROPERTY(VisibleAnywhere)
	 AActor* EngagedTarget;

	 UPROPERTY(VisibleAnywhere)
	 TSubclassOf<class AProjectile> CurrentThrowableItem;

	 UPROPERTY(VisibleAnywhere)
	 bool bPokemonIsOut;

	 UPROPERTY(VisibleAnywhere)
	 bool bAreMovesSelectable = false;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void SelectMove(int32 Index);

	UFUNCTION(Server, Reliable)
	void ServerCallCommand(const int32& i);

	UPROPERTY(EditDefaultsOnly)
	TArray<FKey>DirectionKeyBind;

	UFUNCTION(Server,Reliable)
	void ServerBroadcastTarget(AActor* Target);

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UPokemonInputConfig> InputConfig;
public:

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	void SetCurrentPokemon(APokemon_Parent* LeadPokemon);

	UFUNCTION(Server,Reliable)
	void ServerSetPokemon(APokemon_Parent* LeadPokemon);

	FORCEINLINE void SetCurrentThrowableItem(TSubclassOf<class AProjectile> NewItemClass) { CurrentThrowableItem = NewItemClass; }

	FORCEINLINE UInventorySystemComponent* GetInventorySystem() { return InventorySystem; }
	FORCEINLINE TArray<APokemon_Parent*> GetCurrentParty() { return CurrentParty; }
	FORCEINLINE APokemon_Parent* GetCurrentPokemon() { return CurrentPokemon; }

};

