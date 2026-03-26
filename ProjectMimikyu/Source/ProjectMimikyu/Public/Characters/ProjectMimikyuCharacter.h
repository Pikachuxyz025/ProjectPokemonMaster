// Copyright Epic Games, Inc. All Rights Reserved.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Interfaces/PlayerInterface.h"
#include "GameplayTagContainer.h"
#include "CharacterTypes.h"
#include "ProjectMimikyuCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UPokemonInputConfig;
class ATrainerController;
class ATrainerPlayerState;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class AItem;
class APokemon_Parent;
class UPokemonAbilitySystemComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyUpdated,TArray<APokemon_Parent*>, PokemonParty);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetRegistered,AActor*,CombatTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPokemonSentOut, AActor*, NewPokemon);

UCLASS(config=Game)
class AProjectMimikyuCharacter : public ACharacter, public IPlayerInterface
{
	GENERATED_BODY()
public:
	AProjectMimikyuCharacter();
	
	void SetOverlappingItem(AItem* NewItem);
	virtual void PostInitializeComponents()override;

	FOnPartyUpdated OnPartyUpdated;
	FOnTargetRegistered OnTargetRegistered;
	FOnPokemonSentOut OnPokemonSentOut;
	//FOnPokemonHealthUpdated OnPokemonHealthUpdated;

	void CommandDodge(FGameplayTag GameplayTag);


	virtual void UpdatePokemonInfoInParty_Implementation(APokemon_Parent* AlteredPokemon) override;
protected:
#pragma region Local-Only
	// Input Mapping
#pragma region Input Mapping
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
	UInputAction* IA_ThrowPokeball;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Engage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_Command;
#pragma endregion

	// HUD / moveset display
	// Camera Usage
#pragma endregion

#pragma region Server-Authoritative Gameplay
	// Catching/Returning Pokemon
	UFUNCTION(Server,Reliable)
	void ServerRequetCatchPokemon(FVector TraceStart,FVector TraceEnd);

	UFUNCTION(Server,Reliable)
	void ServerRequestReturnCurrentPokemon();

	bool TryGetCatchTarget(const FVector& TraceStart, const FVector& TraceEnd, APokemon_Parent*& OutPokemon) const;
	void HandleCatchPokemon(APokemon_Parent* CaughtPokemon);
	void HandleReturnedPokemon(APokemon_Parent* ReturnedPokemon);

	void CatchPokemon();
	// Sending Pokemon out 

	void ComeOnOut();

	UFUNCTION(Server, Reliable)
	void ServerRequestSendOutPokemon(FVector TraceStart,FVector TraceEnd);

	bool TryBuildPokemonSpawnTransform(const FVector& TraceStart, const FVector& TraceEnd,FTransform& OutSpawnTransform) const;

	void HandleSendOutPokemon(const FVector& TraceStart, const FVector& TraceEnd);

	// selecting a move 
	void SelectMove(int32 Index);

	UFUNCTION(Server, Reliable)
	void ServerCallCommand(int32 Index);

	// engaging a target 
	// updating party state


#pragma endregion

#pragma region Replication/Cached References
	// CurrentPokemon
	// Cached Controller/player state refernces
	// future replicated command/aim states
#pragma endregion

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	void Pickup();
	void TargetAndEngage();
	void AddToParty(APokemon_Parent* NewPokemon);

	FPokemonInfo GetCurrentPokemonInfo();

	UFUNCTION(Server, Reliable)
	void ServerAddToCurrentParty(AActor* AddedActor);
	void ShowPokemonMoveset();
	void RemovePokemonMoveset();
	void BasicLineTrace(FHitResult& OutHit, const FVector& Start, const FVector& End) const;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	class UEnhancedInputLocalPlayerSubsystem* Subsystem;

	UPROPERTY(VisibleAnywhere, Category = "Pokemon Party")
	bool bHasPokemon = false;

	UPROPERTY(VisibleAnywhere,ReplicatedUsing=OnRep_CurrentPokemon,Category = "Pokemon Party")
	TObjectPtr<APokemon_Parent>CurrentPokemon = nullptr;

	UFUNCTION()
	void OnRep_CurrentPokemon();

	UPROPERTY(VisibleAnywhere,Category = "Pokemon Party")
	TArray<APokemon_Parent*> CurrentParty;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UPokemonGameplayAbilities> DodgeAbility;

	// Multiplayer testing
	
	//UPROPERTY(Replicated)
	//FPokemonParty CurrentSParty;

	UPROPERTY()
	TObjectPtr<ATrainerController> TrainerController;

	UPROPERTY()
	TObjectPtr<ATrainerPlayerState> TrainerPlayerState;

	UPROPERTY()
	TObjectPtr<UPokemonAbilitySystemComponent> PokemonASC;

	ATrainerController* GetTC();

	ATrainerPlayerState* GetTPS();

	UPokemonAbilitySystemComponent* GetPASC();

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

