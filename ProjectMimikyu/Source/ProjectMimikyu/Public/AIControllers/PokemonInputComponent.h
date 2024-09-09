// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAssets/PokemonInputConfig.h"
#include "PokemonInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UPokemonInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
	
public:
	template<class UserClass,typename PressedFuncType>
	void BindAbilityActions(const UPokemonInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc);
};

template<class UserClass, typename PressedFuncType>
 void UPokemonInputComponent::BindAbilityActions(const UPokemonInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc)
 {
	 check(InputConfig);

	 for (const FPokemonInputAction& Action : InputConfig->AbilityInputActions)
	 {
		 if (Action.InputAction)
		 {
			 if (PressedFunc)
			 {
				 BindAction(Action.InputAction, ETriggerEvent::Started, Object, PressedFunc, Action.Index);
			 }
		 }
	 }
}
