// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/Pokemon_Parent.h"
#include "ActiveGameplayEffectHandle.h"
#include "Characters/CharacterTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemon_Parent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMovesetComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatInterface_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonIncapacitationComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EGenderType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ENatureType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonUIInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAttackEnd **********************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAttackEnd constinit property declarations **************************
// ********** End Delegate FOnAttackEnd constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnAttackEnd__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackEnd_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnd)
{
	OnAttackEnd.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAttackEnd ************************************************************

// ********** Begin Delegate FOnDodgeEnd ***********************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDodgeEnd constinit property declarations ***************************
// ********** End Delegate FOnDodgeEnd constinit property declarations *****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnDodgeEnd__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDodgeEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDodgeEnd)
{
	OnDodgeEnd.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDodgeEnd *************************************************************

// ********** Begin Delegate FOnCharging ***********************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCharging constinit property declarations ***************************
// ********** End Delegate FOnCharging constinit property declarations *****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnCharging__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCharging_DelegateWrapper(const FMulticastScriptDelegate& OnCharging)
{
	OnCharging.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCharging *************************************************************

// ********** Begin Class APokemon_Parent Function ApplyPokemonKnockback ***************************
struct Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics
{
	struct Pokemon_Parent_eventApplyPokemonKnockback_Parms
	{
		FVector KnockbackVelocity;
		bool bCanCauseFaint;
		bool bForceRagdoll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bForceRagdoll", "false" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyPokemonKnockback constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackVelocity;
	static void NewProp_bCanCauseFaint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCauseFaint;
	static void NewProp_bForceRagdoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRagdoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyPokemonKnockback constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyPokemonKnockback Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_KnockbackVelocity = { "KnockbackVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventApplyPokemonKnockback_Parms, KnockbackVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackVelocity_MetaData), NewProp_KnockbackVelocity_MetaData) };
void Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bCanCauseFaint_SetBit(void* Obj)
{
	((Pokemon_Parent_eventApplyPokemonKnockback_Parms*)Obj)->bCanCauseFaint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bCanCauseFaint = { "bCanCauseFaint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventApplyPokemonKnockback_Parms), &Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bCanCauseFaint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bForceRagdoll_SetBit(void* Obj)
{
	((Pokemon_Parent_eventApplyPokemonKnockback_Parms*)Obj)->bForceRagdoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bForceRagdoll = { "bForceRagdoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventApplyPokemonKnockback_Parms), &Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bForceRagdoll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_KnockbackVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bCanCauseFaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::NewProp_bForceRagdoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::PropPointers) < 2048);
// ********** End Function ApplyPokemonKnockback Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "ApplyPokemonKnockback", 	Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::Pokemon_Parent_eventApplyPokemonKnockback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::Pokemon_Parent_eventApplyPokemonKnockback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execApplyPokemonKnockback)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_KnockbackVelocity);
	P_GET_UBOOL(Z_Param_bCanCauseFaint);
	P_GET_UBOOL(Z_Param_bForceRagdoll);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPokemonKnockback(Z_Param_Out_KnockbackVelocity,Z_Param_bCanCauseFaint,Z_Param_bForceRagdoll);
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function ApplyPokemonKnockback *****************************

// ********** Begin Class APokemon_Parent Function AttackEnded *************************************
struct Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttackEnded constinit property declarations ***************************
// ********** End Function AttackEnded constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "AttackEnded", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_AttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execAttackEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackEnded();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function AttackEnded ***************************************

// ********** Begin Class APokemon_Parent Function BeginManualReturnAfterFaint *********************
struct Z_Construct_UFunction_APokemon_Parent_BeginManualReturnAfterFaint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginManualReturnAfterFaint constinit property declarations ***********
// ********** End Function BeginManualReturnAfterFaint constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_BeginManualReturnAfterFaint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "BeginManualReturnAfterFaint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_BeginManualReturnAfterFaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_BeginManualReturnAfterFaint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_BeginManualReturnAfterFaint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_BeginManualReturnAfterFaint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execBeginManualReturnAfterFaint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginManualReturnAfterFaint();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function BeginManualReturnAfterFaint ***********************

// ********** Begin Class APokemon_Parent Function CanInteractWhileFainted *************************
struct Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics
{
	struct Pokemon_Parent_eventCanInteractWhileFainted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanInteractWhileFainted constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanInteractWhileFainted constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanInteractWhileFainted Property Definitions **************************
void Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Pokemon_Parent_eventCanInteractWhileFainted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventCanInteractWhileFainted_Parms), &Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::PropPointers) < 2048);
// ********** End Function CanInteractWhileFainted Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "CanInteractWhileFainted", 	Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::Pokemon_Parent_eventCanInteractWhileFainted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::Pokemon_Parent_eventCanInteractWhileFainted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execCanInteractWhileFainted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteractWhileFainted();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function CanInteractWhileFainted ***************************

// ********** Begin Class APokemon_Parent Function Debug_ResetDeadFlag *****************************
struct Z_Construct_UFunction_APokemon_Parent_Debug_ResetDeadFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Faint" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Debug_ResetDeadFlag constinit property declarations *******************
// ********** End Function Debug_ResetDeadFlag constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_Debug_ResetDeadFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "Debug_ResetDeadFlag", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_Debug_ResetDeadFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_Debug_ResetDeadFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_Debug_ResetDeadFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_Debug_ResetDeadFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execDebug_ResetDeadFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_ResetDeadFlag();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function Debug_ResetDeadFlag *******************************

// ********** Begin Class APokemon_Parent Function Debug_TestCollapseFaint *************************
struct Z_Construct_UFunction_APokemon_Parent_Debug_TestCollapseFaint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Faint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug functions to test the different stages of the fainted chain\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug functions to test the different stages of the fainted chain" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Debug_TestCollapseFaint constinit property declarations ***************
// ********** End Function Debug_TestCollapseFaint constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_Debug_TestCollapseFaint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "Debug_TestCollapseFaint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_Debug_TestCollapseFaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_Debug_TestCollapseFaint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_Debug_TestCollapseFaint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_Debug_TestCollapseFaint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execDebug_TestCollapseFaint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_TestCollapseFaint();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function Debug_TestCollapseFaint ***************************

// ********** Begin Class APokemon_Parent Function Debug_TestHeavyFaint ****************************
struct Z_Construct_UFunction_APokemon_Parent_Debug_TestHeavyFaint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Faint" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Debug_TestHeavyFaint constinit property declarations ******************
// ********** End Function Debug_TestHeavyFaint constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_Debug_TestHeavyFaint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "Debug_TestHeavyFaint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_Debug_TestHeavyFaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_Debug_TestHeavyFaint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_Debug_TestHeavyFaint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_Debug_TestHeavyFaint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execDebug_TestHeavyFaint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_TestHeavyFaint();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function Debug_TestHeavyFaint ******************************

// ********** Begin Class APokemon_Parent Function Debug_TestManualReturn **************************
struct Z_Construct_UFunction_APokemon_Parent_Debug_TestManualReturn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Faint" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Debug_TestManualReturn constinit property declarations ****************
// ********** End Function Debug_TestManualReturn constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_Debug_TestManualReturn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "Debug_TestManualReturn", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_Debug_TestManualReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_Debug_TestManualReturn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_Debug_TestManualReturn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_Debug_TestManualReturn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execDebug_TestManualReturn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_TestManualReturn();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function Debug_TestManualReturn ****************************

// ********** Begin Class APokemon_Parent Function EndDodge ****************************************
struct Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndDodge constinit property declarations ******************************
// ********** End Function EndDodge constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "EndDodge", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_EndDodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execEndDodge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndDodge();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function EndDodge ******************************************

// ********** Begin Class APokemon_Parent Function EnterCollapsedFaint *****************************
struct Z_Construct_UFunction_APokemon_Parent_EnterCollapsedFaint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnterCollapsedFaint constinit property declarations *******************
// ********** End Function EnterCollapsedFaint constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_EnterCollapsedFaint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "EnterCollapsedFaint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_EnterCollapsedFaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_EnterCollapsedFaint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_EnterCollapsedFaint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_EnterCollapsedFaint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execEnterCollapsedFaint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterCollapsedFaint();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function EnterCollapsedFaint *******************************

// ********** Begin Class APokemon_Parent Function EnterFaintedState *******************************
struct Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics
{
	struct Pokemon_Parent_eventEnterFaintedState_Parms
	{
		bool bFromKnockback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnterFaintedState constinit property declarations *********************
	static void NewProp_bFromKnockback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromKnockback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnterFaintedState constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnterFaintedState Property Definitions ********************************
void Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::NewProp_bFromKnockback_SetBit(void* Obj)
{
	((Pokemon_Parent_eventEnterFaintedState_Parms*)Obj)->bFromKnockback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::NewProp_bFromKnockback = { "bFromKnockback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventEnterFaintedState_Parms), &Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::NewProp_bFromKnockback_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::NewProp_bFromKnockback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::PropPointers) < 2048);
// ********** End Function EnterFaintedState Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "EnterFaintedState", 	Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::Pokemon_Parent_eventEnterFaintedState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::Pokemon_Parent_eventEnterFaintedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_EnterFaintedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_EnterFaintedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execEnterFaintedState)
{
	P_GET_UBOOL(Z_Param_bFromKnockback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterFaintedState(Z_Param_bFromKnockback);
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function EnterFaintedState *********************************

// ********** Begin Class APokemon_Parent Function GetAbilitySystemComponent ***********************
struct Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics
{
	struct Pokemon_Parent_eventGetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilitySystemComponent constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilitySystemComponent constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilitySystemComponent Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
// ********** End Function GetAbilitySystemComponent Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetAbilitySystemComponent", 	Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Pokemon_Parent_eventGetAbilitySystemComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Pokemon_Parent_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetAbilitySystemComponent *************************

// ********** Begin Class APokemon_Parent Function GetAttributeSet *********************************
struct Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics
{
	struct Pokemon_Parent_eventGetAttributeSet_Parms
	{
		UAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAttributeSet constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAttributeSet constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAttributeSet Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetAttributeSet_Parms, ReturnValue), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers) < 2048);
// ********** End Function GetAttributeSet Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetAttributeSet", 	Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Pokemon_Parent_eventGetAttributeSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Pokemon_Parent_eventGetAttributeSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetAttributeSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetAttributeSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAttributeSet**)Z_Param__Result=P_THIS->GetAttributeSet();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetAttributeSet ***********************************

// ********** Begin Class APokemon_Parent Function GetDodgeDirection *******************************
struct Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics
{
	struct Pokemon_Parent_eventGetDodgeDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDodgeDirection constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDodgeDirection constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDodgeDirection Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetDodgeDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers) < 2048);
// ********** End Function GetDodgeDirection Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetDodgeDirection", 	Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Pokemon_Parent_eventGetDodgeDirection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Pokemon_Parent_eventGetDodgeDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetDodgeDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDodgeDirection();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetDodgeDirection *********************************

// ********** Begin Class APokemon_Parent Function GetPokemonAS ************************************
struct Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics
{
	struct Pokemon_Parent_eventGetPokemonAS_Parms
	{
		UPokemonBaseAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokemonAS constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokemonAS constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokemonAS Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonAS_Parms, ReturnValue), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers) < 2048);
// ********** End Function GetPokemonAS Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonAS", 	Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Pokemon_Parent_eventGetPokemonAS_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Pokemon_Parent_eventGetPokemonAS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetPokemonAS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetPokemonAS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPokemonBaseAttributeSet**)Z_Param__Result=P_THIS->GetPokemonAS();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetPokemonAS **************************************

// ********** Begin Class APokemon_Parent Function GetPokemonASC ***********************************
struct Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics
{
	struct Pokemon_Parent_eventGetPokemonASC_Parms
	{
		UPokemonAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokemonASC constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokemonASC constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokemonASC Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonASC_Parms, ReturnValue), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers) < 2048);
// ********** End Function GetPokemonASC Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonASC", 	Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Pokemon_Parent_eventGetPokemonASC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Pokemon_Parent_eventGetPokemonASC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetPokemonASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetPokemonASC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPokemonAbilitySystemComponent**)Z_Param__Result=P_THIS->GetPokemonASC();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetPokemonASC *************************************

// ********** Begin Class APokemon_Parent Function GetPokemonController ****************************
struct Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics
{
	struct Pokemon_Parent_eventGetPokemonController_Parms
	{
		APokemonAIController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokemonController constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokemonController constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokemonController Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonController_Parms, ReturnValue), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers) < 2048);
// ********** End Function GetPokemonController Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonController", 	Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Pokemon_Parent_eventGetPokemonController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Pokemon_Parent_eventGetPokemonController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetPokemonController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetPokemonController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APokemonAIController**)Z_Param__Result=P_THIS->GetPokemonController();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetPokemonController ******************************

// ********** Begin Class APokemon_Parent Function GetPokemonUIInfo ********************************
struct Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics
{
	struct Pokemon_Parent_eventGetPokemonUIInfo_Parms
	{
		bool bNeedsSetup;
		FPokemonUIInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokemonUIInfo constinit property declarations **********************
	static void NewProp_bNeedsSetup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsSetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokemonUIInfo constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokemonUIInfo Property Definitions *********************************
void Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup_SetBit(void* Obj)
{
	((Pokemon_Parent_eventGetPokemonUIInfo_Parms*)Obj)->bNeedsSetup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup = { "bNeedsSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventGetPokemonUIInfo_Parms), &Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonUIInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FPokemonUIInfo, METADATA_PARAMS(0, nullptr) }; // 1130679456
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers) < 2048);
// ********** End Function GetPokemonUIInfo Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonUIInfo", 	Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Pokemon_Parent_eventGetPokemonUIInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Pokemon_Parent_eventGetPokemonUIInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetPokemonUIInfo)
{
	P_GET_UBOOL(Z_Param_bNeedsSetup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPokemonUIInfo*)Z_Param__Result=P_THIS->GetPokemonUIInfo(Z_Param_bNeedsSetup);
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetPokemonUIInfo **********************************

// ********** Begin Class APokemon_Parent Function GetReadyForCombat *******************************
struct Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics
{
	struct Pokemon_Parent_eventGetReadyForCombat_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetReadyForCombat constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetReadyForCombat constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetReadyForCombat Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetReadyForCombat_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers) < 2048);
// ********** End Function GetReadyForCombat Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetReadyForCombat", 	Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Pokemon_Parent_eventGetReadyForCombat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Pokemon_Parent_eventGetReadyForCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execGetReadyForCombat)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetReadyForCombat(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function GetReadyForCombat *********************************

// ********** Begin Class APokemon_Parent Function HasTrainer **************************************
struct Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics
{
	struct Pokemon_Parent_eventHasTrainer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasTrainer constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasTrainer constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasTrainer Property Definitions ***************************************
void Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Pokemon_Parent_eventHasTrainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventHasTrainer_Parms), &Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::PropPointers) < 2048);
// ********** End Function HasTrainer Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "HasTrainer", 	Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::Pokemon_Parent_eventHasTrainer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::Pokemon_Parent_eventHasTrainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_HasTrainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_HasTrainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execHasTrainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTrainer();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function HasTrainer ****************************************

// ********** Begin Class APokemon_Parent Function InteractWithFaintedPokemon **********************
struct Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics
{
	struct Pokemon_Parent_eventInteractWithFaintedPokemon_Parms
	{
		AActor* InteractingActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InteractWithFaintedPokemon constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InteractWithFaintedPokemon constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InteractWithFaintedPokemon Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventInteractWithFaintedPokemon_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::NewProp_InteractingActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::PropPointers) < 2048);
// ********** End Function InteractWithFaintedPokemon Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "InteractWithFaintedPokemon", 	Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::Pokemon_Parent_eventInteractWithFaintedPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::Pokemon_Parent_eventInteractWithFaintedPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execInteractWithFaintedPokemon)
{
	P_GET_OBJECT(AActor,Z_Param_InteractingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractWithFaintedPokemon(Z_Param_InteractingActor);
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function InteractWithFaintedPokemon ************************

// ********** Begin Class APokemon_Parent Function IsPokemonFaintedProne ***************************
struct Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics
{
	struct Pokemon_Parent_eventIsPokemonFaintedProne_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPokemonFaintedProne constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPokemonFaintedProne constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPokemonFaintedProne Property Definitions ****************************
void Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Pokemon_Parent_eventIsPokemonFaintedProne_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventIsPokemonFaintedProne_Parms), &Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::PropPointers) < 2048);
// ********** End Function IsPokemonFaintedProne Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "IsPokemonFaintedProne", 	Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::Pokemon_Parent_eventIsPokemonFaintedProne_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::Pokemon_Parent_eventIsPokemonFaintedProne_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execIsPokemonFaintedProne)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPokemonFaintedProne();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function IsPokemonFaintedProne *****************************

// ********** Begin Class APokemon_Parent Function IsPokemonProne **********************************
struct Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics
{
	struct Pokemon_Parent_eventIsPokemonProne_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPokemonProne constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPokemonProne constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPokemonProne Property Definitions ***********************************
void Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Pokemon_Parent_eventIsPokemonProne_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventIsPokemonProne_Parms), &Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::PropPointers) < 2048);
// ********** End Function IsPokemonProne Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "IsPokemonProne", 	Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::Pokemon_Parent_eventIsPokemonProne_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::Pokemon_Parent_eventIsPokemonProne_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_IsPokemonProne()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_IsPokemonProne_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execIsPokemonProne)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPokemonProne();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function IsPokemonProne ************************************

// ********** Begin Class APokemon_Parent Function MulticastPlayReturnEffects **********************
static FName NAME_APokemon_Parent_MulticastPlayReturnEffects = FName(TEXT("MulticastPlayReturnEffects"));
void APokemon_Parent::MulticastPlayReturnEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_APokemon_Parent_MulticastPlayReturnEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APokemon_Parent_MulticastPlayReturnEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastPlayReturnEffects constinit property declarations ************
// ********** End Function MulticastPlayReturnEffects constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_MulticastPlayReturnEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "MulticastPlayReturnEffects", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_MulticastPlayReturnEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_MulticastPlayReturnEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_MulticastPlayReturnEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_MulticastPlayReturnEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execMulticastPlayReturnEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPlayReturnEffects_Implementation();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function MulticastPlayReturnEffects ************************

// ********** Begin Class APokemon_Parent Function OnRep_StartupPokemonInfo ************************
struct Z_Construct_UFunction_APokemon_Parent_OnRep_StartupPokemonInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_StartupPokemonInfo constinit property declarations **************
// ********** End Function OnRep_StartupPokemonInfo constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_OnRep_StartupPokemonInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "OnRep_StartupPokemonInfo", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_OnRep_StartupPokemonInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_OnRep_StartupPokemonInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_OnRep_StartupPokemonInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_OnRep_StartupPokemonInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execOnRep_StartupPokemonInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StartupPokemonInfo();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function OnRep_StartupPokemonInfo **************************

// ********** Begin Class APokemon_Parent Function PrepareForFieldRemoval **************************
struct Z_Construct_UFunction_APokemon_Parent_PrepareForFieldRemoval_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PrepareForFieldRemoval constinit property declarations ****************
// ********** End Function PrepareForFieldRemoval constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_PrepareForFieldRemoval_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "PrepareForFieldRemoval", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_PrepareForFieldRemoval_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_PrepareForFieldRemoval_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_PrepareForFieldRemoval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_PrepareForFieldRemoval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execPrepareForFieldRemoval)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareForFieldRemoval();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function PrepareForFieldRemoval ****************************

// ********** Begin Class APokemon_Parent Function SelectRandomMove ********************************
struct Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectRandomMove constinit property declarations **********************
// ********** End Function SelectRandomMove constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "SelectRandomMove", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokemon_Parent_SelectRandomMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execSelectRandomMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectRandomMove();
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function SelectRandomMove **********************************

// ********** Begin Class APokemon_Parent Function SetIsDodging ************************************
struct Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics
{
	struct Pokemon_Parent_eventSetIsDodging_Parms
	{
		bool Dodging;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsDodging constinit property declarations **************************
	static void NewProp_Dodging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Dodging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsDodging constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsDodging Property Definitions *************************************
void Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging_SetBit(void* Obj)
{
	((Pokemon_Parent_eventSetIsDodging_Parms*)Obj)->Dodging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging = { "Dodging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventSetIsDodging_Parms), &Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers) < 2048);
// ********** End Function SetIsDodging Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "SetIsDodging", 	Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Pokemon_Parent_eventSetIsDodging_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Pokemon_Parent_eventSetIsDodging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_SetIsDodging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execSetIsDodging)
{
	P_GET_UBOOL(Z_Param_Dodging);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsDodging(Z_Param_Dodging);
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function SetIsDodging **************************************

// ********** Begin Class APokemon_Parent Function SetMovementSpeed ********************************
struct Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics
{
	struct Pokemon_Parent_eventSetMovementSpeed_Parms
	{
		EMovementSpeed NewMovementSpeed;
		float MoveMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_MoveMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMovementSpeed constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementSpeed_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMovementSpeed constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMovementSpeed Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed = { "NewMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventSetMovementSpeed_Parms, NewMovementSpeed), Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed, METADATA_PARAMS(0, nullptr) }; // 3830158877
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_MoveMultiplier = { "MoveMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventSetMovementSpeed_Parms, MoveMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_MoveMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers) < 2048);
// ********** End Function SetMovementSpeed Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "SetMovementSpeed", 	Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Pokemon_Parent_eventSetMovementSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Pokemon_Parent_eventSetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemon_Parent::execSetMovementSpeed)
{
	P_GET_ENUM(EMovementSpeed,Z_Param_NewMovementSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MoveMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementSpeed(EMovementSpeed(Z_Param_NewMovementSpeed),Z_Param_MoveMultiplier);
	P_NATIVE_END;
}
// ********** End Class APokemon_Parent Function SetMovementSpeed **********************************

// ********** Begin Class APokemon_Parent Function StartDissolveTimeline ***************************
struct Pokemon_Parent_eventStartDissolveTimeline_Parms
{
	UMaterialInstanceDynamic* DynamicMaterialInstance;
};
static FName NAME_APokemon_Parent_StartDissolveTimeline = FName(TEXT("StartDissolveTimeline"));
void APokemon_Parent::StartDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	Pokemon_Parent_eventStartDissolveTimeline_Parms Parms;
	Parms.DynamicMaterialInstance=DynamicMaterialInstance;
	UFunction* Func = FindFunctionChecked(NAME_APokemon_Parent_StartDissolveTimeline);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartDissolveTimeline constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartDissolveTimeline constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartDissolveTimeline Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventStartDissolveTimeline_Parms, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::NewProp_DynamicMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers) < 2048);
// ********** End Function StartDissolveTimeline Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "StartDissolveTimeline", 	Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers), 
sizeof(Pokemon_Parent_eventStartDissolveTimeline_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Pokemon_Parent_eventStartDissolveTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APokemon_Parent Function StartDissolveTimeline *****************************

// ********** Begin Class APokemon_Parent Function StartWeaponDissolveTimeline *********************
struct Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms
{
	UMaterialInstanceDynamic* DynamicMaterialInstance;
};
static FName NAME_APokemon_Parent_StartWeaponDissolveTimeline = FName(TEXT("StartWeaponDissolveTimeline"));
void APokemon_Parent::StartWeaponDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms Parms;
	Parms.DynamicMaterialInstance=DynamicMaterialInstance;
	UFunction* Func = FindFunctionChecked(NAME_APokemon_Parent_StartWeaponDissolveTimeline);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartWeaponDissolveTimeline constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartWeaponDissolveTimeline constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartWeaponDissolveTimeline Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::NewProp_DynamicMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers) < 2048);
// ********** End Function StartWeaponDissolveTimeline Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "StartWeaponDissolveTimeline", 	Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers), 
sizeof(Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APokemon_Parent Function StartWeaponDissolveTimeline ***********************

// ********** Begin Class APokemon_Parent **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APokemon_Parent;
UClass* APokemon_Parent::GetPrivateStaticClass()
{
	using TClass = APokemon_Parent;
	if (!Z_Registration_Info_UClass_APokemon_Parent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Pokemon_Parent"),
			Z_Registration_Info_UClass_APokemon_Parent.InnerSingleton,
			StaticRegisterNativesAPokemon_Parent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APokemon_Parent.InnerSingleton;
}
UClass* Z_Construct_UClass_APokemon_Parent_NoRegister()
{
	return APokemon_Parent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APokemon_Parent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Pokemon_Parent.h" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackEnd_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCharging_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDodgeEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnedFromPartyStartup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupPokemonInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStartupPokemonInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAS_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStatAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependentStatAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRecoveryEffect_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupPassiveAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStatHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDependentStatHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic instance that we can change at runtime\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic instance that we can change at runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material instance set on the Blueprint, used with the dynamic material instance\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material instance set on the Blueprint, used with the dynamic material instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonDataAsset_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovesetComponent_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrainer_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatus_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePokemonMove_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPointTag_MetaData[] = {
		{ "Categories", "SpawnPoint" },
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffortLevelBaseMap_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeChartDataTable_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nature_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingMove_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncapacitationComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TailSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCaught_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APokemon_Parent constinit property declarations **************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharging;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDodgeEnd;
	static void NewProp_bSpawnedFromPartyStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnedFromPartyStartup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartupPokemonInfo;
	static void NewProp_bHasStartupPokemonInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStartupPokemonInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonAS;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultStatAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DependentStatAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StaminaRecoveryEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupPassiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupPassiveAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStatHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDependentStatHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDissolveMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovesetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTrainer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PokemonStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PokemonStatus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePokemonMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPointTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MultiplierMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffortLevelBaseMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffortLevelBaseMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EffortLevelBaseMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeResponse_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeResponse_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeResponse_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TypeResponse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeChartDataTable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Nature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Nature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentXP;
	static void NewProp_bIsUsingMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IncapacitationComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MeleeSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TailSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandSocketName;
	static void NewProp_bIsCaught_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCaught;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APokemon_Parent constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyPokemonKnockback"), .Pointer = &APokemon_Parent::execApplyPokemonKnockback },
		{ .NameUTF8 = UTF8TEXT("AttackEnded"), .Pointer = &APokemon_Parent::execAttackEnded },
		{ .NameUTF8 = UTF8TEXT("BeginManualReturnAfterFaint"), .Pointer = &APokemon_Parent::execBeginManualReturnAfterFaint },
		{ .NameUTF8 = UTF8TEXT("CanInteractWhileFainted"), .Pointer = &APokemon_Parent::execCanInteractWhileFainted },
		{ .NameUTF8 = UTF8TEXT("Debug_ResetDeadFlag"), .Pointer = &APokemon_Parent::execDebug_ResetDeadFlag },
		{ .NameUTF8 = UTF8TEXT("Debug_TestCollapseFaint"), .Pointer = &APokemon_Parent::execDebug_TestCollapseFaint },
		{ .NameUTF8 = UTF8TEXT("Debug_TestHeavyFaint"), .Pointer = &APokemon_Parent::execDebug_TestHeavyFaint },
		{ .NameUTF8 = UTF8TEXT("Debug_TestManualReturn"), .Pointer = &APokemon_Parent::execDebug_TestManualReturn },
		{ .NameUTF8 = UTF8TEXT("EndDodge"), .Pointer = &APokemon_Parent::execEndDodge },
		{ .NameUTF8 = UTF8TEXT("EnterCollapsedFaint"), .Pointer = &APokemon_Parent::execEnterCollapsedFaint },
		{ .NameUTF8 = UTF8TEXT("EnterFaintedState"), .Pointer = &APokemon_Parent::execEnterFaintedState },
		{ .NameUTF8 = UTF8TEXT("GetAbilitySystemComponent"), .Pointer = &APokemon_Parent::execGetAbilitySystemComponent },
		{ .NameUTF8 = UTF8TEXT("GetAttributeSet"), .Pointer = &APokemon_Parent::execGetAttributeSet },
		{ .NameUTF8 = UTF8TEXT("GetDodgeDirection"), .Pointer = &APokemon_Parent::execGetDodgeDirection },
		{ .NameUTF8 = UTF8TEXT("GetPokemonAS"), .Pointer = &APokemon_Parent::execGetPokemonAS },
		{ .NameUTF8 = UTF8TEXT("GetPokemonASC"), .Pointer = &APokemon_Parent::execGetPokemonASC },
		{ .NameUTF8 = UTF8TEXT("GetPokemonController"), .Pointer = &APokemon_Parent::execGetPokemonController },
		{ .NameUTF8 = UTF8TEXT("GetPokemonUIInfo"), .Pointer = &APokemon_Parent::execGetPokemonUIInfo },
		{ .NameUTF8 = UTF8TEXT("GetReadyForCombat"), .Pointer = &APokemon_Parent::execGetReadyForCombat },
		{ .NameUTF8 = UTF8TEXT("HasTrainer"), .Pointer = &APokemon_Parent::execHasTrainer },
		{ .NameUTF8 = UTF8TEXT("InteractWithFaintedPokemon"), .Pointer = &APokemon_Parent::execInteractWithFaintedPokemon },
		{ .NameUTF8 = UTF8TEXT("IsPokemonFaintedProne"), .Pointer = &APokemon_Parent::execIsPokemonFaintedProne },
		{ .NameUTF8 = UTF8TEXT("IsPokemonProne"), .Pointer = &APokemon_Parent::execIsPokemonProne },
		{ .NameUTF8 = UTF8TEXT("MulticastPlayReturnEffects"), .Pointer = &APokemon_Parent::execMulticastPlayReturnEffects },
		{ .NameUTF8 = UTF8TEXT("OnRep_StartupPokemonInfo"), .Pointer = &APokemon_Parent::execOnRep_StartupPokemonInfo },
		{ .NameUTF8 = UTF8TEXT("PrepareForFieldRemoval"), .Pointer = &APokemon_Parent::execPrepareForFieldRemoval },
		{ .NameUTF8 = UTF8TEXT("SelectRandomMove"), .Pointer = &APokemon_Parent::execSelectRandomMove },
		{ .NameUTF8 = UTF8TEXT("SetIsDodging"), .Pointer = &APokemon_Parent::execSetIsDodging },
		{ .NameUTF8 = UTF8TEXT("SetMovementSpeed"), .Pointer = &APokemon_Parent::execSetMovementSpeed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APokemon_Parent_ApplyPokemonKnockback, "ApplyPokemonKnockback" }, // 3973192962
		{ &Z_Construct_UFunction_APokemon_Parent_AttackEnded, "AttackEnded" }, // 2062940830
		{ &Z_Construct_UFunction_APokemon_Parent_BeginManualReturnAfterFaint, "BeginManualReturnAfterFaint" }, // 1541757482
		{ &Z_Construct_UFunction_APokemon_Parent_CanInteractWhileFainted, "CanInteractWhileFainted" }, // 1529616311
		{ &Z_Construct_UFunction_APokemon_Parent_Debug_ResetDeadFlag, "Debug_ResetDeadFlag" }, // 176015981
		{ &Z_Construct_UFunction_APokemon_Parent_Debug_TestCollapseFaint, "Debug_TestCollapseFaint" }, // 69203312
		{ &Z_Construct_UFunction_APokemon_Parent_Debug_TestHeavyFaint, "Debug_TestHeavyFaint" }, // 3194961792
		{ &Z_Construct_UFunction_APokemon_Parent_Debug_TestManualReturn, "Debug_TestManualReturn" }, // 4026144557
		{ &Z_Construct_UFunction_APokemon_Parent_EndDodge, "EndDodge" }, // 3531910875
		{ &Z_Construct_UFunction_APokemon_Parent_EnterCollapsedFaint, "EnterCollapsedFaint" }, // 2651269914
		{ &Z_Construct_UFunction_APokemon_Parent_EnterFaintedState, "EnterFaintedState" }, // 2769093889
		{ &Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 1286457634
		{ &Z_Construct_UFunction_APokemon_Parent_GetAttributeSet, "GetAttributeSet" }, // 2323235576
		{ &Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection, "GetDodgeDirection" }, // 1406978883
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonAS, "GetPokemonAS" }, // 3920087908
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonASC, "GetPokemonASC" }, // 843985849
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonController, "GetPokemonController" }, // 4131175284
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo, "GetPokemonUIInfo" }, // 1258368981
		{ &Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat, "GetReadyForCombat" }, // 2998225118
		{ &Z_Construct_UFunction_APokemon_Parent_HasTrainer, "HasTrainer" }, // 354838779
		{ &Z_Construct_UFunction_APokemon_Parent_InteractWithFaintedPokemon, "InteractWithFaintedPokemon" }, // 210099460
		{ &Z_Construct_UFunction_APokemon_Parent_IsPokemonFaintedProne, "IsPokemonFaintedProne" }, // 4170150779
		{ &Z_Construct_UFunction_APokemon_Parent_IsPokemonProne, "IsPokemonProne" }, // 127710511
		{ &Z_Construct_UFunction_APokemon_Parent_MulticastPlayReturnEffects, "MulticastPlayReturnEffects" }, // 2452750425
		{ &Z_Construct_UFunction_APokemon_Parent_OnRep_StartupPokemonInfo, "OnRep_StartupPokemonInfo" }, // 1461422383
		{ &Z_Construct_UFunction_APokemon_Parent_PrepareForFieldRemoval, "PrepareForFieldRemoval" }, // 3010003046
		{ &Z_Construct_UFunction_APokemon_Parent_SelectRandomMove, "SelectRandomMove" }, // 2827749720
		{ &Z_Construct_UFunction_APokemon_Parent_SetIsDodging, "SetIsDodging" }, // 3257198252
		{ &Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed, "SetMovementSpeed" }, // 4010223811
		{ &Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline, "StartDissolveTimeline" }, // 3614959218
		{ &Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline, "StartWeaponDissolveTimeline" }, // 137792898
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokemon_Parent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APokemon_Parent_Statics

// ********** Begin Class APokemon_Parent Property Definitions *************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnAttackEnd = { "OnAttackEnd", nullptr, (EPropertyFlags)0x0010000010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, OnAttackEnd), Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackEnd_MetaData), NewProp_OnAttackEnd_MetaData) }; // 2356655160
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnCharging = { "OnCharging", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, OnCharging), Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCharging_MetaData), NewProp_OnCharging_MetaData) }; // 742402364
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnDodgeEnd = { "OnDodgeEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, OnDodgeEnd), Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDodgeEnd_MetaData), NewProp_OnDodgeEnd_MetaData) }; // 274823597
void Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bSpawnedFromPartyStartup_SetBit(void* Obj)
{
	((APokemon_Parent*)Obj)->bSpawnedFromPartyStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bSpawnedFromPartyStartup = { "bSpawnedFromPartyStartup", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokemon_Parent), &Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bSpawnedFromPartyStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnedFromPartyStartup_MetaData), NewProp_bSpawnedFromPartyStartup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StartupPokemonInfo = { "StartupPokemonInfo", "OnRep_StartupPokemonInfo", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, StartupPokemonInfo), Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupPokemonInfo_MetaData), NewProp_StartupPokemonInfo_MetaData) }; // 2094424460
void Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bHasStartupPokemonInfo_SetBit(void* Obj)
{
	((APokemon_Parent*)Obj)->bHasStartupPokemonInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bHasStartupPokemonInfo = { "bHasStartupPokemonInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokemon_Parent), &Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bHasStartupPokemonInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStartupPokemonInfo_MetaData), NewProp_bHasStartupPokemonInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonController_MetaData), NewProp_PokemonController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AIBehaviorTree = { "AIBehaviorTree", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIBehaviorTree_MetaData), NewProp_AIBehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonASC = { "PokemonASC", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonASC_MetaData), NewProp_PokemonASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonAS = { "PokemonAS", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonAS), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonAS_MetaData), NewProp_PokemonAS_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DefaultStatAttributes = { "DefaultStatAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, DefaultStatAttributes), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStatAttributes_MetaData), NewProp_DefaultStatAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DependentStatAttributes = { "DependentStatAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, DependentStatAttributes), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependentStatAttributes_MetaData), NewProp_DependentStatAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StaminaRecoveryEffect = { "StaminaRecoveryEffect", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, StaminaRecoveryEffect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRecoveryEffect_MetaData), NewProp_StaminaRecoveryEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StartupPassiveAbilities_Inner = { "StartupPassiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StartupPassiveAbilities = { "StartupPassiveAbilities", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, StartupPassiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupPassiveAbilities_MetaData), NewProp_StartupPassiveAbilities_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentStatHandle = { "CurrentStatHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentStatHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStatHandle_MetaData), NewProp_CurrentStatHandle_MetaData) }; // 2923520073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentDependentStatHandle = { "CurrentDependentStatHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentDependentStatHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDependentStatHandle_MetaData), NewProp_CurrentDependentStatHandle_MetaData) }; // 2923520073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DynamicDissolveMaterialInstance = { "DynamicDissolveMaterialInstance", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, DynamicDissolveMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicDissolveMaterialInstance_MetaData), NewProp_DynamicDissolveMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ReturnMaterialInstance = { "ReturnMaterialInstance", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, ReturnMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnMaterialInstance_MetaData), NewProp_ReturnMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonDataAsset = { "PokemonDataAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonDataAsset), Z_Construct_UClass_UPokemonDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonDataAsset_MetaData), NewProp_PokemonDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MovesetComponent = { "MovesetComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, MovesetComponent), Z_Construct_UClass_UMovesetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovesetComponent_MetaData), NewProp_MovesetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentTrainer = { "CurrentTrainer", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentTrainer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrainer_MetaData), NewProp_CurrentTrainer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus = { "PokemonStatus", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonStatus), Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonStatus_MetaData), NewProp_PokemonStatus_MetaData) }; // 1292692463
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ActivePokemonMove = { "ActivePokemonMove", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, ActivePokemonMove), Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePokemonMove_MetaData), NewProp_ActivePokemonMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_SpawnPointTag = { "SpawnPointTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, SpawnPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPointTag_MetaData), NewProp_SpawnPointTag_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_ValueProp = { "MultiplierMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_Key_KeyProp = { "MultiplierMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap = { "MultiplierMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, MultiplierMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplierMap_MetaData), NewProp_MultiplierMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_ValueProp = { "EffortLevelBaseMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_Key_KeyProp = { "EffortLevelBaseMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap = { "EffortLevelBaseMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, EffortLevelBaseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffortLevelBaseMap_MetaData), NewProp_EffortLevelBaseMap_MetaData) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_ValueProp = { "TypeResponse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_Key_KeyProp = { "TypeResponse_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(0, nullptr) }; // 1457640518
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse = { "TypeResponse", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, TypeResponse), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeResponse_MetaData), NewProp_TypeResponse_MetaData) }; // 1457640518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeChartDataTable = { "TypeChartDataTable", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, TypeChartDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeChartDataTable_MetaData), NewProp_TypeChartDataTable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, Gender), Z_Construct_UEnum_ProjectMimikyu_EGenderType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) }; // 3170657478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature = { "Nature", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, Nature), Z_Construct_UEnum_ProjectMimikyu_ENatureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nature_MetaData), NewProp_Nature_MetaData) }; // 1385819911
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
void Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove_SetBit(void* Obj)
{
	((APokemon_Parent*)Obj)->bIsUsingMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove = { "bIsUsingMove", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokemon_Parent), &Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUsingMove_MetaData), NewProp_bIsUsingMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_IncapacitationComponent = { "IncapacitationComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, IncapacitationComponent), Z_Construct_UClass_UPokemonIncapacitationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncapacitationComponent_MetaData), NewProp_IncapacitationComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, WalkingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingSpeed_MetaData), NewProp_WalkingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, RunningSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningSpeed_MetaData), NewProp_RunningSpeed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ProjectileSocketName = { "ProjectileSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, ProjectileSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSocketName_MetaData), NewProp_ProjectileSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MeleeSocketName = { "MeleeSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, MeleeSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeSocketName_MetaData), NewProp_MeleeSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TailSocketName = { "TailSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, TailSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TailSocketName_MetaData), NewProp_TailSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, LeftHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandSocketName_MetaData), NewProp_LeftHandSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, RightHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandSocketName_MetaData), NewProp_RightHandSocketName_MetaData) };
void Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught_SetBit(void* Obj)
{
	((APokemon_Parent*)Obj)->bIsCaught = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught = { "bIsCaught", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokemon_Parent), &Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCaught_MetaData), NewProp_bIsCaught_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokemon_Parent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnAttackEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnDodgeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bSpawnedFromPartyStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StartupPokemonInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bHasStartupPokemonInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AIBehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonAS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DefaultStatAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DependentStatAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StaminaRecoveryEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StartupPassiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StartupPassiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentStatHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentDependentStatHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DynamicDissolveMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ReturnMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MovesetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentTrainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ActivePokemonMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_SpawnPointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeChartDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_IncapacitationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_WalkingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RunningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ProjectileSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MeleeSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TailSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_LeftHandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RightHandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::PropPointers) < 2048);
// ********** End Class APokemon_Parent Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_APokemon_Parent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APokemon_Parent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDamageInterface_NoRegister, (int32)VTABLE_OFFSET(APokemon_Parent, IDamageInterface), false },  // 3986291462
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APokemon_Parent, IAbilitySystemInterface), false },  // 2722098046
	{ Z_Construct_UClass_UPokemonCombatInterface_NoRegister, (int32)VTABLE_OFFSET(APokemon_Parent, IPokemonCombatInterface), false },  // 876305782
	{ Z_Construct_UClass_UTargetableInterface_NoRegister, (int32)VTABLE_OFFSET(APokemon_Parent, ITargetableInterface), false },  // 2207626993
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokemon_Parent_Statics::ClassParams = {
	&APokemon_Parent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APokemon_Parent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::Class_MetaDataParams), Z_Construct_UClass_APokemon_Parent_Statics::Class_MetaDataParams)
};
void APokemon_Parent::StaticRegisterNativesAPokemon_Parent()
{
	UClass* Class = APokemon_Parent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APokemon_Parent_Statics::Funcs));
}
UClass* Z_Construct_UClass_APokemon_Parent()
{
	if (!Z_Registration_Info_UClass_APokemon_Parent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokemon_Parent.OuterSingleton, Z_Construct_UClass_APokemon_Parent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokemon_Parent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void APokemon_Parent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bSpawnedFromPartyStartup(TEXT("bSpawnedFromPartyStartup"));
	static FName Name_StartupPokemonInfo(TEXT("StartupPokemonInfo"));
	static FName Name_CurrentTrainer(TEXT("CurrentTrainer"));
	static FName Name_PokemonStatus(TEXT("PokemonStatus"));
	static FName Name_bIsCaught(TEXT("bIsCaught"));
	const bool bIsValid = true
		&& Name_bSpawnedFromPartyStartup == ClassReps[(int32)ENetFields_Private::bSpawnedFromPartyStartup].Property->GetFName()
		&& Name_StartupPokemonInfo == ClassReps[(int32)ENetFields_Private::StartupPokemonInfo].Property->GetFName()
		&& Name_CurrentTrainer == ClassReps[(int32)ENetFields_Private::CurrentTrainer].Property->GetFName()
		&& Name_PokemonStatus == ClassReps[(int32)ENetFields_Private::PokemonStatus].Property->GetFName()
		&& Name_bIsCaught == ClassReps[(int32)ENetFields_Private::bIsCaught].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APokemon_Parent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APokemon_Parent);
APokemon_Parent::~APokemon_Parent() {}
// ********** End Class APokemon_Parent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokemon_Parent, APokemon_Parent::StaticClass, TEXT("APokemon_Parent"), &Z_Registration_Info_UClass_APokemon_Parent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokemon_Parent), 391994084U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h__Script_ProjectMimikyu_3691546686{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
