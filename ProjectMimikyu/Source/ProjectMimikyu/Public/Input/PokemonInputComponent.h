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

	template<class UserClass, typename InputFuncType>
	void BindDodgeActions(const UPokemonInputConfig* InputConfig, UserClass* Object,
		InputFuncType Pressed, InputFuncType Released, InputFuncType Canceled);

	template<class UserClass, typename PressedFuncType>
	void BindKeySequenceActions(const UPokemonInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc);
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

 template<class UserClass, typename InputFuncType>
 void UPokemonInputComponent::BindDodgeActions(const UPokemonInputConfig* InputConfig, UserClass* Object,
	InputFuncType Pressed, InputFuncType Released, InputFuncType Canceled)
 {
	 check(InputConfig);

	 for (const FPokemonInputDodgeAction& Action : InputConfig->DodgeInputActions)
	 {
		 if (Action.InputAction)
		 {
			 // A held action stays latched between these edges. Triggered/Ongoing must never replay a press.
			 BindAction(Action.InputAction, ETriggerEvent::Started, Object, Pressed, Action.InputTag);
			 BindAction(Action.InputAction, ETriggerEvent::Completed, Object, Released, Action.InputTag);
			 BindAction(Action.InputAction, ETriggerEvent::Canceled, Object, Canceled, Action.InputTag);
		 }
	 }
 }

 template<class UserClass, typename PressedFuncType>
 void UPokemonInputComponent::BindKeySequenceActions(const UPokemonInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc)
 {
	 check(InputConfig);

	 for (const FPokemonInputKeySequenceAction& Action : InputConfig->KeySequenceInputActions)
	 {
		 if (Action.InputAction)
		 {
			 if (PressedFunc)
			 {
				 BindAction(Action.InputAction, ETriggerEvent::Triggered, Object, PressedFunc, Action.KeyDirection);
			 }
		 }
	 }
 }
