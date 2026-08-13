

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "AbilitySystem/PokemonAbilityTypes.h"
#include "Characters/CharacterTypes.h"
#include "Combat/PokemonImpactTypes.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "PokemonDodgeGamplayAbility.generated.h"

class PROJECTMIMIKYU_API UPokemonDodgeGameplayAbility : public UPokemonGameplayAbilities
{
public:

	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
	float DodgeDuration = 0.25f;

	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
	float BaseDodgeStrength = 1400.f;

	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
	TObjectPtr<UCurveFloat> DodgeStrengthCurve;
};
