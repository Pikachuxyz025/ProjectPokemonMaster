#pragma once
using namespace UP;
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Items/Projectile.h"
#include "CharacterTypes.generated.h"



#pragma region Enums
UENUM(BlueprintType)
enum class EGenderType :uint8
{
	EGT_None UMETA(DisplayName = "None"),
	EGT_Male UMETA(DisplayName = "Male"),
	EGT_Female UMETA(DisplayName = "Female")

};

UENUM(BlueprintType)
enum class EMovementSpeed :uint8
{
	EMS_Idle UMETA(DisplayName = "Idle"),
	EMS_Walking UMETA(DisplayName = "Walking"),
	EMS_Jogging UMETA(DisplayName = "Jogging"),
	EMS_Running UMETA(DisplayName = "Running"),
	EMS_Engaging UMETA(DisplayName = "Engaging"),

	EMS_DefaultMax UMETA(DisplayName = "Default Max")
};

UENUM(BlueprintType)
enum class EElementalType :uint8
{
	EET_None UMETA(DisplayName = "None"),
	EET_Fire UMETA(DisplayName = "Fire"),
	EET_Water UMETA(DisplayName = "Water"),
	EET_Steel UMETA(DisplayName = "Steel"),
	EET_Fairy UMETA(DisplayName = "Fairy"),
	EET_Fighting UMETA(DisplayName = "Fighting"),
	EET_Electric UMETA(DisplayName = "Electric"),
	EET_Rock UMETA(DisplayName = "Rock"),
	EET_Ice UMETA(DisplayName = "Ice"),
	EET_Dragon UMETA(DisplayName = "Dragon"),
	EET_Ghost UMETA(DisplayName = "Ghost"),
	EET_Dark UMETA(DisplayName = "Dark"),
	EET_Bug UMETA(DisplayName = "Bug"),
	EET_Psychic UMETA(DisplayName = "Psychic"),
	EET_Ground UMETA(DisplayName = "Ground"),
	EET_Normal UMETA(DisplayName = "Normal"),
	EET_Flying UMETA(DisplayName = "Flying"),
	EET_Grass UMETA(DisplayName = "Grass"),
	EET_Poison UMETA(DisplayName = "Poison")
};

UENUM(BlueprintType)
enum class ENatureType :uint8
{
	ENT_None UMETA(DisplayName = "None"),
	ENT_Bashful UMETA(DisplayName = "Bashful"),
	ENT_Docile UMETA(DisplayName = "Docile"),
	ENT_Hardy UMETA(DisplayName = "Hardy"),
	ENT_Quirky UMETA(DisplayName = "Quirky"),
	ENT_Serious UMETA(DisplayName = "Serious"),
	ENT_Adamant UMETA(DisplayName = "Adamant"),
	ENT_Modest UMETA(DisplayName = "Modest"),
	ENT_Bold UMETA(DisplayName = "Bold"),
	ENT_Brave UMETA(DisplayName = "Brave"),
	ENT_Calm UMETA(DisplayName = "Calm"),
	ENT_Careful UMETA(DisplayName = "Careful"),
	ENT_Gentle UMETA(DisplayName = "Gentle"),
	ENT_Hasty UMETA(DisplayName = "Hasty"),
	ENT_Jolly UMETA(DisplayName = "Jolly"),
	ENT_Lax UMETA(DisplayName = "Lax"),
	ENT_Lonely UMETA(DisplayName = "Lonely"),
	ENT_Mild UMETA(DisplayName = "Mild"),
	ENT_Naughty UMETA(DisplayName = "Naughty"),
	ENT_Quiet UMETA(DisplayName = "Quiet"),
	ENT_Timid UMETA(DisplayName = "Timid"),
	ENT_Relaxed UMETA(DisplayName = "Relaxed"),
	ENT_Sassy UMETA(DisplayName = "Sassy"),
	ENT_Rash UMETA(DisplayName = "Rash"),
	ENT_Naive UMETA(DisplayName = "Naive"),
	ENT_Impish UMETA(DisplayName = "Impish")
};

UENUM(BlueprintType)
enum class EStatsType :uint8
{
	EST_None UMETA(DisplayName = "None"),
	EST_Attack UMETA(DisplayName = "Attack"),
	EST_HealthPoints UMETA(DisplayName = "HealthPoints"),
	EST_Defense UMETA(DisplayName = "Defense"),
	EST_SpecialAttack UMETA(DisplayName = "Special Attack"),
	EST_SpecialDefense UMETA(DisplayName = "Special Defense"),
	EST_Speed UMETA(DisplayName = "Speed"),
};

UENUM(BlueprintType)
enum class EStatusType :uint8
{
	EST_None UMETA(DisplayName = "None"),
	EST_Frostbit UMETA(DisplayName = "Frostbit"),
	EST_Burned UMETA(DisplayName = "Burned"),
	EST_Paralyzed UMETA(DisplayName = "Paralyzed"),
	EST_Sleep UMETA(DisplayName = "Sleep"),
	EST_Poisoned UMETA(DisplayName = "Poisoned")
};

UENUM(BlueprintType)
enum class EPokemonStatus :uint8
{
	EPS_Wild UMETA(DisplayName = "Wild"),
	EPS_AITrainer UMETA(DisplayName = "AITrainer"),
	EPS_PlayerTrainer UMETA(DisplayName = "PlayerTrainer")
};

UENUM(BlueprintType)
enum class EProjectileEffect : uint8
{
	EPE_None UMETA(DisplayName="None"),
	EPE_Explosion UMETA(DisplayName="Explosion"),
	EPE_Status UMETA(DisplayName="Status"),

	EPE_Max UMETA(DisplayName="Default Max")
};

UENUM(BlueprintType)
enum class EMoveAction : uint8
{
	EMA_None UMETA(DisplayName = "None"),
	EMA_Melee UMETA(DisplayName = "Melee"),
	EMA_Projectile UMETA(DisplayName = "Projectile"),
	EMA_Dodging UMETA(DisplayName = "Dodging"),
	EMA_Charging UMETA(DisplayName = "Charging"),
	EMA_Environment UMETA(DisplayName = "Environment"),

	EMA_Max UMETA(DisplayName = "Default Max")
};

UENUM(BlueprintType)
enum class EDamageResponse : uint8
{
	EDR_None UMETA(DisplayName = "None"),
	EDR_HitReaction UMETA(DisplayName = "Hit Reaction"),
	EDR_Stagger UMETA(DisplayName = "Stagger"),
	EDR_Stun UMETA(DisplayName = "Stun"),
	EDR_Knockback UMETA(DisplayName = "Knockback"),

	EDR_Max UMETA(DisplayName = "Default Max")
};

UENUM(BlueprintType)
enum class EDirectionPoint :uint8
{
	EDP_Up = 0 UMETA(DisplayName= "Up"),
	EDP_Down = 1 UMETA(DisplayName = "Down"),
	EDP_Left = 2 UMETA(DisplayName = "Left"),
	EDP_Right = 3 UMETA(DisplayName = "Right")
};

UENUM(BlueprintType)
enum class EMoveType : uint8
{
	EMT_None UMETA(DisplayName = "None"),
	EMT_Physical UMETA(DisplayName = "Physical"),
	EMT_Special UMETA(DisplayName = "Special"),
	EMT_Status UMETA(DisplayName = "Status"),

	EMT_Max UMETA(DisplayName = "Default Max")
};

UENUM(BlueprintType)
enum class EPokeballType :uint8
{
	EPT_None UMETA(DisplayName = "None"),
	EPT_Pokeball UMETA(DisplayName = "PokeBall"),
	EPT_GreatBall UMETA(DisplayName = "GreatBall"),
	EPT_UltraBall UMETA(DisplayName = "UltraBall"),
	EPT_HeavyBall UMETA(DisplayName = "HeavyBall"),
	EPT_LeadenBall UMETA(DisplayName = "LeadenBall"),
	EPT_GigatonBall UMETA(DisplayName = "GigatonBall"),
	EPT_FeatherBall UMETA(DisplayName = "FeatherBall"),
	EPT_WingBall UMETA(DisplayName = "WingBall"),
	EPT_JetBall UMETA(DisplayName = "JetBall"),
};

UENUM(BlueprintType)
enum class ESlotType :uint8
{
	EST_None UMETA(DisplayName="None"),
	EST_PokemonParty UMETA(DisplayName="Pokemon Party"),
	EST_Inventory UMETA(DisplayName="Inventory")
};

UENUM(BlueprintType)
enum class EPokemonState :uint8
{
	EPS_NoState UMETA(DisplayName="NoState"),
	EPS_Passive UMETA(DisplayName="Passive"),
	EPS_Training UMETA(DisplayName="Training"),
	EPS_Resting UMETA(DisplayName="Resting"),
	EPS_Docile UMETA(DisplayName="Docile"),
	EPS_Combative UMETA(DisplayName="Combative"),
	EPS_Investigative UMETA(DisplayName="Investigative"),
	EPS_Fainted UMETA(DisplayName="Fainted")
};
#pragma endregion

#pragma region Structs

USTRUCT(BlueprintType)
struct FTypeChartMatchup:public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TMap<EElementalType, float> TypeResponse =
	{
		{EElementalType::EET_Bug,1.0f },
		{EElementalType::EET_Dark,1.0f },
		{EElementalType::EET_Dragon,1.0f },
		{EElementalType::EET_Electric,1.0f },
		{EElementalType::EET_Fairy,1.0f },
		{EElementalType::EET_Fighting,1.0f },
		{EElementalType::EET_Fire,1.0f },
		{EElementalType::EET_Flying,1.0f },
		{EElementalType::EET_Ghost,1.0f },
		{EElementalType::EET_Grass,1.0f },
		{EElementalType::EET_Ground,1.0f },
		{EElementalType::EET_Ice,1.0f },
		{EElementalType::EET_Normal,1.0f },
		{EElementalType::EET_Poison,1.0f },
		{EElementalType::EET_Psychic,1.0f },
		{EElementalType::EET_Rock,1.0f },
		{EElementalType::EET_Water,1.0f },
		{EElementalType::EET_Steel,1.0f }
	};
};

USTRUCT(BlueprintType, Blueprintable)
struct FPokemonUIInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FText PokemonName;

	UPROPERTY(BlueprintReadOnly)
	class	UTexture2D* PokemonSpriteImage;

	UPROPERTY(BlueprintReadOnly)
	int32 PokemonLevel = 0;

	UPROPERTY(BlueprintReadOnly)
	float PokemonHPPercent = 0;
};

USTRUCT(BlueprintType)
struct FPokemonInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class UPokemonDataAsset* PokemonDataAsset;

	UPROPERTY(EditAnywhere)
	TArray<class UPokemonMoveDataAsset*> CurrentPokemonMoves;

	UPROPERTY(EditAnywhere)
	int32 CurrentLevel = 0;

	UPROPERTY(EditAnywhere)
	float XP = 0.f;

	UPROPERTY(EditAnywhere)
	ENatureType Nature = ENatureType::ENT_None;
};

USTRUCT(BlueprintType)
struct FPokemonParty
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, meta = (MakeStructureDefaultValue = "nullptr"))
	class APokemon_Parent* Slot1;

	UPROPERTY(VisibleAnywhere, meta = (MakeStructureDefaultValue = "nullptr"))
	APokemon_Parent* Slot2;

	UPROPERTY(VisibleAnywhere, meta = (MakeStructureDefaultValue = "nullptr"))
	APokemon_Parent* Slot3;

	UPROPERTY(VisibleAnywhere, meta = (MakeStructureDefaultValue = "nullptr"))
	APokemon_Parent* Slot4;

	UPROPERTY(VisibleAnywhere, meta = (MakeStructureDefaultValue = "nullptr"))
	 APokemon_Parent* Slot5;

	UPROPERTY(VisibleAnywhere,meta=(MakeStructureDefaultValue="nullptr"))
	APokemon_Parent* Slot6;

};

USTRUCT(BlueprintType)
struct FSlotInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FName ItemName;

	UPROPERTY(EditAnywhere)
	int32 Quantity=0;

	UPROPERTY(EditAnywhere)
	bool bIsThrowable = false;
};

USTRUCT(BlueprintType)
struct FDamageInfo
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	float DamageAmount;

	UPROPERTY(VisibleAnywhere)
	class UPokemonMoveDataAsset* PokemonMove;

	UPROPERTY(VisibleAnywhere)
	AController* DamageInsigator;

	UPROPERTY(VisibleAnywhere)
	AActor* DamageCauser;
};

USTRUCT(BlueprintType)
struct FInventoryItemInfo :public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText ItemName;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	class UTexture2D* Thumbnail;

	UPROPERTY(EditAnywhere)
	int32 StackSize;

	UPROPERTY(EditAnywhere)
	bool bIsThrowable;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "bIsThrowable", EditConditionHides))
	TSubclassOf< AProjectile> ProjectileClass;
};
#pragma endregion




  