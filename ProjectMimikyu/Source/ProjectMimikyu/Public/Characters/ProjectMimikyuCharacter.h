// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Interfaces/PlayerInterface.h"
#include "ActorComponents/TargetingType.h"
#include "GameplayTagContainer.h"
#include "Characters/CharacterTypes.h"
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
class UInventorySystemComponent;
class UTargetingComponent;
class APokeBall;
class UPokemonGameplayAbilities;
class UEnhancedInputLocalPlayerSubsystem;
class UTrainerQuickSlotComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyUpdated,TArray<APokemon_Parent*>, PokemonParty);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetRegistered,FHitResult,CombatHitResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPokemonSentOut, AActor*, NewPokemon);

UCLASS(config = Game)
class AProjectMimikyuCharacter : public ACharacter, public IPlayerInterface
{
	GENERATED_BODY()

public:
	AProjectMimikyuCharacter();

	// Public gameplay API
	void SetOverlappingItem(AItem* NewItem);
	void SetCurrentPokemon(APokemon_Parent* LeadPokemon);
	void CommandDodge(FGameplayTag GameplayTag);

	virtual void PostInitializeComponents() override;
	virtual void UpdatePokemonInfoInParty_Implementation(APokemon_Parent* AlteredPokemon) override;

	// Delegates
	FOnPartyUpdated OnPartyUpdated;
	FOnTargetRegistered OnTargetRegistered;
	FOnPokemonSentOut OnPokemonSentOut;

	// Getters
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE UInventorySystemComponent* GetInventorySystem() const { return InventorySystem; }
	FORCEINLINE TArray<APokemon_Parent*> GetCurrentParty() const { return CurrentParty; }
	FORCEINLINE UTrainerQuickSlotComponent* GetQuickSlotComponent() const { return QuickSlotComponent; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE APokemon_Parent* GetCurrentPokemon() const { return CurrentPokemon; }

	FORCEINLINE void SetCurrentThrowableItem(FName ItemID, TSubclassOf<AProjectile> ProjectileClass)
	{
		CurrentThrowableItemID = ItemID;
		CurrentThrowableProjectileClass = ProjectileClass;
	}

	UFUNCTION(Server, Reliable)
	void ServerRequestCatchPokemonWithPokeball(APokemon_Parent* TargetPokemon);

protected:
	// Unreal lifecycle
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Input handlers
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Pickup();
	void TargetAndEngage();

	void Input_ToggleLockOn();
	void Input_BeginFocusAim();
	void Input_EndFocusAim();

	void ThrowQuickSlotInput();
	void ThrowSelectedInventoryItemInput();
	void ThrowSelectedPokemonInput();

	void CatchPokemon();
	void ComeOnOut();

	void ServerRequestSendOutPokemon_Implementation(int32 SelectedPartyIndex, FVector TraceStart, FVector TraceEnd);

	void SelectMove(int32 MoveIndex);
	void ShowPokemonMoveset();
	void RemovePokemonMoveset();
	void HandleLockOnLookInput(const FVector2D& LookAxisVector);

	// Camera
	void UpdateTargetingCamera(float DeltaTime);
	void UpdateLockOnCamera(float DeltaTime);
	void UpdateAimZoom(float DeltaTime);

private:
	// Server RPCs
	UFUNCTION(Server, Reliable)
	void ServerSetPokemon(APokemon_Parent* LeadPokemon);

	UFUNCTION(Server, Reliable)
	void ServerRequestCatchPokemon(FVector TraceStart, FVector TraceEnd);

	UFUNCTION(Server, Reliable)
	void ServerRequestReturnCurrentPokemon();

	UFUNCTION(Server, Reliable)
	void ServerRequestSendOutPokemon(int32 SelectedPartyIndex,FVector TraceStart, FVector TraceEnd);

	UFUNCTION(Server, Reliable)
	void ServerCallCommand(int32 MoveIndex, const FAimData& AimData);

	UFUNCTION(Server, Reliable)
	void ServerAddToCurrentParty(AActor* AddedActor);

	UFUNCTION(Server, Reliable)
	void ServerBroadcastTarget(const FHitResult& CombatHitResult);

	UFUNCTION(Server, Reliable)
	void ServerThrowSelectedInventoryItem(FName ItemID, const FAimData& AimData);

	UFUNCTION(Server, Reliable)
	void ServerThrowSelectedPokemon(int32 SelectedPartyIndex, const FAimData& AimData);

	// Server gameplay implementation
	bool TryGetCatchTarget(const FVector& TraceStart, const FVector& TraceEnd, APokemon_Parent*& OutPokemon) const;
	void HandleCatchPokemon(APokemon_Parent* CaughtPokemon);
	void HandleReturnedPokemon(APokemon_Parent* ReturnedPokemon);

	void ThrowThrowableProjectile (TSubclassOf<AProjectile> ProjectileClass, const FAimData& AimData);

	bool TryBuildPokemonSpawnTransform(const FVector& TraceStart, const FVector& TraceEnd, FTransform& OutSpawnTransform) const;
	void HandleSendOutPokemonAtIndex(int32 SelectedPartyIndex, const FVector& TraceStart, const FVector& TraceEnd);

	void AddToParty(APokemon_Parent* NewPokemon);
	FPokemonInfo GetCurrentPokemonInfo();
	void BasicLineTrace(FHitResult& OutHit, const FVector& Start, const FVector& End) const;

	// Cached getters
	ATrainerController* GetTC();
	ATrainerPlayerState* GetTPS();
	UPokemonAbilitySystemComponent* GetPASC();

	UFUNCTION()
	void OnRep_CurrentPokemon();

private:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> FollowCamera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInventorySystemComponent> InventorySystem;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UTargetingComponent> TargetingComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UTrainerQuickSlotComponent> QuickSlotComponent;

	// Input assets
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UPokemonInputConfig> InputConfig;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_Pickup;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_Throw;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_ThrowPokeball;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_Engage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_Command;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_ToggleLockOn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_Aim;

	// Poké Ball settings
	UPROPERTY(EditAnywhere, Category = "Items|Pokeball")
	TSubclassOf<APokeBall> PokeballClass;

	UPROPERTY(VisibleAnywhere,Category = "Inventory")
	TSubclassOf<AProjectile> CurrentThrowableProjectileClass;

	UPROPERTY(EditAnywhere, Category = "Items|Pokeball")
	float PokeballThrowSpeed = 1800.f;

	UPROPERTY(EditAnywhere, Category = "Items|Pokeball")
	float PokeballSpawnForwardOffset = 80.f;

	UPROPERTY(EditAnywhere, Category = "Items|Pokeball")
	float PokeballSpawnUpOffset = 40.f;

	UPROPERTY(EditAnywhere, Category = "Items|Pokeball")
	float PokeballCollisionRadius = 12.f;

	UPROPERTY(VisibleAnywhere, Category = "Inventory")
	FName CurrentThrowableItemID = NAME_None;

	// Camera settings
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|LockOn", meta = (AllowPrivateAccess = "true"))
	bool bEnableLockOnCamera = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|LockOn", meta = (AllowPrivateAccess = "true"))
	float LockOnCameraInterpSpeed = 8.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|LockOn", meta = (AllowPrivateAccess = "true"))
	float LockOnFocusTargetBias = .65f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|LockOn", meta = (AllowPrivateAccess = "true"))
	float LockOnFocusHeightOffset = 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|LockOn", meta = (AllowPrivateAccess = "true"))
	float TargetSwitchCooldown = .35f;

	float LastTargetSwitchTime = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|Aim", meta = (AllowPrivateAccess = "true"))
	float DefaultFOV = 90.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|Aim", meta = (AllowPrivateAccess = "true"))
	float FreeAimZoomFOV = 65.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera|Aim", meta = (AllowPrivateAccess = "true"))
	float AimFOVInterpSpeed = 8.f;

	UPROPERTY(EditAnywhere, Category = "Movement|Aim")
	float NormalWalkSpeed = 500.f;

	UPROPERTY(EditAnywhere, Category = "Movement|Aim")
	float AimWalkSpeed = 275.f;

	UPROPERTY(EditAnywhere, Category = "Movement|Aim")
	float WalkSpeedInterpSpeed = 8.f;

	// Runtime state
	UPROPERTY()
	TObjectPtr<UEnhancedInputLocalPlayerSubsystem> Subsystem;

	UPROPERTY()
	TObjectPtr<ATrainerController> TrainerController;

	UPROPERTY()
	TObjectPtr<ATrainerPlayerState> TrainerPlayerState;

	UPROPERTY()
	TObjectPtr<UPokemonAbilitySystemComponent> PokemonASC;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_CurrentPokemon, Category = "Pokemon Party")
	TObjectPtr<APokemon_Parent> CurrentPokemon = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Pokemon Party")
	TArray<TObjectPtr<APokemon_Parent>> CurrentParty;

	UPROPERTY(VisibleAnywhere, Category = "Pokemon Party")
	bool bHasPokemon = false;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AItem> OverlappingItem;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AActor> EngagedTarget;

	UPROPERTY(VisibleAnywhere)
	TSubclassOf<AProjectile> CurrentThrowableItem;

	UPROPERTY(VisibleAnywhere)
	bool bPokemonIsOut = false;

	UPROPERTY(VisibleAnywhere)
	bool bAreMovesSelectable = false;

	UPROPERTY(EditAnywhere)
	float CatchingDistance = 1000.f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPokemonGameplayAbilities> DodgeAbility;

	UPROPERTY(EditDefaultsOnly)
	TArray<FKey> DirectionKeyBind;
};

