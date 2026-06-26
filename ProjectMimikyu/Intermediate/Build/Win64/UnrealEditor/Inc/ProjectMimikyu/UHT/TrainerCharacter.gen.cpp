// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/TrainerCharacter.h"
#include "ActorComponents/TargetingType.h"
#include "Engine/HitResult.h"
#include "InputCoreTypes.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainerCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AItem_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerCharacter();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerCharacter_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerPlayerState_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTargetingComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerQuickSlotComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerThrowableComponent_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FAimData();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPartyUpdated *******************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnPartyUpdated_Parms
	{
		TArray<APokemon_Parent*> PokemonParty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPartyUpdated constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonParty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonParty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPartyUpdated constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPartyUpdated Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty_Inner = { "PokemonParty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty = { "PokemonParty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPartyUpdated_Parms, PokemonParty), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPartyUpdated Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPartyUpdated__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPartyUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPartyUpdated, const TArray<APokemon_Parent*>& PokemonParty)
{
	struct _Script_ProjectMimikyu_eventOnPartyUpdated_Parms
	{
		TArray<APokemon_Parent*> PokemonParty;
	};
	_Script_ProjectMimikyu_eventOnPartyUpdated_Parms Parms;
	Parms.PokemonParty=PokemonParty;
	OnPartyUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPartyUpdated *********************************************************

// ********** Begin Delegate FOnTargetRegistered ***************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnTargetRegistered_Parms
	{
		FHitResult CombatHitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTargetRegistered constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatHitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTargetRegistered constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTargetRegistered Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::NewProp_CombatHitResult = { "CombatHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnTargetRegistered_Parms, CombatHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatHitResult_MetaData), NewProp_CombatHitResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::NewProp_CombatHitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTargetRegistered Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnTargetRegistered__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTargetRegistered_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTargetRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTargetRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnTargetRegistered, FHitResult const& CombatHitResult)
{
	struct _Script_ProjectMimikyu_eventOnTargetRegistered_Parms
	{
		FHitResult CombatHitResult;
	};
	_Script_ProjectMimikyu_eventOnTargetRegistered_Parms Parms;
	Parms.CombatHitResult=CombatHitResult;
	OnTargetRegistered.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTargetRegistered *****************************************************

// ********** Begin Delegate FOnPokemonSentOut *****************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnPokemonSentOut_Parms
	{
		AActor* NewPokemon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPokemonSentOut constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPokemonSentOut constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPokemonSentOut Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::NewProp_NewPokemon = { "NewPokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPokemonSentOut_Parms, NewPokemon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::NewProp_NewPokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPokemonSentOut Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPokemonSentOut__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonSentOut_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonSentOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPokemonSentOut_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonSentOut, AActor* NewPokemon)
{
	struct _Script_ProjectMimikyu_eventOnPokemonSentOut_Parms
	{
		AActor* NewPokemon;
	};
	_Script_ProjectMimikyu_eventOnPokemonSentOut_Parms Parms;
	Parms.NewPokemon=NewPokemon;
	OnPokemonSentOut.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPokemonSentOut *******************************************************

// ********** Begin Class ATrainerCharacter Function GetCurrentPokemon *****************************
struct Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics
{
	struct TrainerCharacter_eventGetCurrentPokemon_Parms
	{
		APokemon_Parent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentPokemon constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentPokemon constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentPokemon Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventGetCurrentPokemon_Parms, ReturnValue), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentPokemon Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "GetCurrentPokemon", 	Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::TrainerCharacter_eventGetCurrentPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::TrainerCharacter_eventGetCurrentPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execGetCurrentPokemon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APokemon_Parent**)Z_Param__Result=P_THIS->GetCurrentPokemon();
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function GetCurrentPokemon *******************************

// ********** Begin Class ATrainerCharacter Function HandlePokeballSummonLanded ********************
struct Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics
{
	struct TrainerCharacter_eventHandlePokeballSummonLanded_Parms
	{
		FVector LandingLocation;
		FVector LandingNormal;
		int32 PartySlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePokeballSummonLanded constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingNormal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartySlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandlePokeballSummonLanded constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandlePokeballSummonLanded Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::NewProp_LandingLocation = { "LandingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventHandlePokeballSummonLanded_Parms, LandingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::NewProp_LandingNormal = { "LandingNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventHandlePokeballSummonLanded_Parms, LandingNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::NewProp_PartySlotIndex = { "PartySlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventHandlePokeballSummonLanded_Parms, PartySlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::NewProp_LandingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::NewProp_LandingNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::NewProp_PartySlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::PropPointers) < 2048);
// ********** End Function HandlePokeballSummonLanded Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "HandlePokeballSummonLanded", 	Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::TrainerCharacter_eventHandlePokeballSummonLanded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::TrainerCharacter_eventHandlePokeballSummonLanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execHandlePokeballSummonLanded)
{
	P_GET_STRUCT(FVector,Z_Param_LandingLocation);
	P_GET_STRUCT(FVector,Z_Param_LandingNormal);
	P_GET_PROPERTY(FIntProperty,Z_Param_PartySlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePokeballSummonLanded(Z_Param_LandingLocation,Z_Param_LandingNormal,Z_Param_PartySlotIndex);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function HandlePokeballSummonLanded **********************

// ********** Begin Class ATrainerCharacter Function OnRep_CurrentPokemon **************************
struct Z_Construct_UFunction_ATrainerCharacter_OnRep_CurrentPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentPokemon constinit property declarations ******************
// ********** End Function OnRep_CurrentPokemon constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_OnRep_CurrentPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "OnRep_CurrentPokemon", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_OnRep_CurrentPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_OnRep_CurrentPokemon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATrainerCharacter_OnRep_CurrentPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_OnRep_CurrentPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execOnRep_CurrentPokemon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentPokemon();
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function OnRep_CurrentPokemon ****************************

// ********** Begin Class ATrainerCharacter Function ServerAddToCurrentParty ***********************
struct TrainerCharacter_eventServerAddToCurrentParty_Parms
{
	AActor* AddedActor;
};
static FName NAME_ATrainerCharacter_ServerAddToCurrentParty = FName(TEXT("ServerAddToCurrentParty"));
void ATrainerCharacter::ServerAddToCurrentParty(AActor* AddedActor)
{
	TrainerCharacter_eventServerAddToCurrentParty_Parms Parms;
	Parms.AddedActor=AddedActor;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerAddToCurrentParty);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerAddToCurrentParty constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerAddToCurrentParty constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerAddToCurrentParty Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::NewProp_AddedActor = { "AddedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerAddToCurrentParty_Parms, AddedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::NewProp_AddedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::PropPointers) < 2048);
// ********** End Function ServerAddToCurrentParty Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerAddToCurrentParty", 	Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerAddToCurrentParty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerAddToCurrentParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerAddToCurrentParty)
{
	P_GET_OBJECT(AActor,Z_Param_AddedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAddToCurrentParty_Implementation(Z_Param_AddedActor);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerAddToCurrentParty *************************

// ********** Begin Class ATrainerCharacter Function ServerBroadcastTarget *************************
struct TrainerCharacter_eventServerBroadcastTarget_Parms
{
	FHitResult CombatHitResult;
};
static FName NAME_ATrainerCharacter_ServerBroadcastTarget = FName(TEXT("ServerBroadcastTarget"));
void ATrainerCharacter::ServerBroadcastTarget(FHitResult const& CombatHitResult)
{
	TrainerCharacter_eventServerBroadcastTarget_Parms Parms;
	Parms.CombatHitResult=CombatHitResult;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerBroadcastTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerBroadcastTarget constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatHitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerBroadcastTarget constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerBroadcastTarget Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::NewProp_CombatHitResult = { "CombatHitResult", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerBroadcastTarget_Parms, CombatHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatHitResult_MetaData), NewProp_CombatHitResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::NewProp_CombatHitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::PropPointers) < 2048);
// ********** End Function ServerBroadcastTarget Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerBroadcastTarget", 	Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerBroadcastTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerBroadcastTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerBroadcastTarget)
{
	P_GET_STRUCT(FHitResult,Z_Param_CombatHitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerBroadcastTarget_Implementation(Z_Param_CombatHitResult);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerBroadcastTarget ***************************

// ********** Begin Class ATrainerCharacter Function ServerCallCommand *****************************
struct TrainerCharacter_eventServerCallCommand_Parms
{
	int32 MoveIndex;
	FAimData AimData;
};
static FName NAME_ATrainerCharacter_ServerCallCommand = FName(TEXT("ServerCallCommand"));
void ATrainerCharacter::ServerCallCommand(int32 MoveIndex, FAimData const& AimData)
{
	TrainerCharacter_eventServerCallCommand_Parms Parms;
	Parms.MoveIndex=MoveIndex;
	Parms.AimData=AimData;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerCallCommand);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerCallCommand constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerCallCommand constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerCallCommand Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::NewProp_MoveIndex = { "MoveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerCallCommand_Parms, MoveIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerCallCommand_Parms, AimData), Z_Construct_UScriptStruct_FAimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimData_MetaData), NewProp_AimData_MetaData) }; // 713287180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::NewProp_MoveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::NewProp_AimData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::PropPointers) < 2048);
// ********** End Function ServerCallCommand Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerCallCommand", 	Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerCallCommand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerCallCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerCallCommand)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MoveIndex);
	P_GET_STRUCT(FAimData,Z_Param_AimData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCallCommand_Implementation(Z_Param_MoveIndex,Z_Param_AimData);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerCallCommand *******************************

// ********** Begin Class ATrainerCharacter Function ServerRequestCatchPokemon *********************
struct TrainerCharacter_eventServerRequestCatchPokemon_Parms
{
	FVector TraceStart;
	FVector TraceEnd;
};
static FName NAME_ATrainerCharacter_ServerRequestCatchPokemon = FName(TEXT("ServerRequestCatchPokemon"));
void ATrainerCharacter::ServerRequestCatchPokemon(FVector TraceStart, FVector TraceEnd)
{
	TrainerCharacter_eventServerRequestCatchPokemon_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerRequestCatchPokemon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestCatchPokemon constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestCatchPokemon constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestCatchPokemon Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerRequestCatchPokemon_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerRequestCatchPokemon_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::PropPointers) < 2048);
// ********** End Function ServerRequestCatchPokemon Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerRequestCatchPokemon", 	Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerRequestCatchPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerRequestCatchPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerRequestCatchPokemon)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestCatchPokemon_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerRequestCatchPokemon ***********************

// ********** Begin Class ATrainerCharacter Function ServerRequestCatchPokemonWithPokeball *********
struct TrainerCharacter_eventServerRequestCatchPokemonWithPokeball_Parms
{
	APokemon_Parent* TargetPokemon;
	TSubclassOf<APokeBall> PokeballClass;
};
static FName NAME_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball = FName(TEXT("ServerRequestCatchPokemonWithPokeball"));
void ATrainerCharacter::ServerRequestCatchPokemonWithPokeball(APokemon_Parent* TargetPokemon, TSubclassOf<APokeBall> PokeballClass)
{
	TrainerCharacter_eventServerRequestCatchPokemonWithPokeball_Parms Parms;
	Parms.TargetPokemon=TargetPokemon;
	Parms.PokeballClass=PokeballClass;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestCatchPokemonWithPokeball constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPokemon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PokeballClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestCatchPokemonWithPokeball constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestCatchPokemonWithPokeball Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::NewProp_TargetPokemon = { "TargetPokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerRequestCatchPokemonWithPokeball_Parms, TargetPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::NewProp_PokeballClass = { "PokeballClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerRequestCatchPokemonWithPokeball_Parms, PokeballClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APokeBall_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::NewProp_TargetPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::NewProp_PokeballClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::PropPointers) < 2048);
// ********** End Function ServerRequestCatchPokemonWithPokeball Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerRequestCatchPokemonWithPokeball", 	Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerRequestCatchPokemonWithPokeball_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerRequestCatchPokemonWithPokeball_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerRequestCatchPokemonWithPokeball)
{
	P_GET_OBJECT(APokemon_Parent,Z_Param_TargetPokemon);
	P_GET_OBJECT(UClass,Z_Param_PokeballClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestCatchPokemonWithPokeball_Implementation(Z_Param_TargetPokemon,Z_Param_PokeballClass);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerRequestCatchPokemonWithPokeball ***********

// ********** Begin Class ATrainerCharacter Function ServerRequestReturnCurrentPokemon *************
static FName NAME_ATrainerCharacter_ServerRequestReturnCurrentPokemon = FName(TEXT("ServerRequestReturnCurrentPokemon"));
void ATrainerCharacter::ServerRequestReturnCurrentPokemon()
{
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerRequestReturnCurrentPokemon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerRequestReturnCurrentPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestReturnCurrentPokemon constinit property declarations *****
// ********** End Function ServerRequestReturnCurrentPokemon constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestReturnCurrentPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerRequestReturnCurrentPokemon", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestReturnCurrentPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerRequestReturnCurrentPokemon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerRequestReturnCurrentPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerRequestReturnCurrentPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerRequestReturnCurrentPokemon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestReturnCurrentPokemon_Implementation();
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerRequestReturnCurrentPokemon ***************

// ********** Begin Class ATrainerCharacter Function ServerRequestSendOutPokemon *******************
struct TrainerCharacter_eventServerRequestSendOutPokemon_Parms
{
	int32 SelectedPartyIndex;
	FVector TraceStart;
	FVector TraceEnd;
};
static FName NAME_ATrainerCharacter_ServerRequestSendOutPokemon = FName(TEXT("ServerRequestSendOutPokemon"));
void ATrainerCharacter::ServerRequestSendOutPokemon(int32 SelectedPartyIndex, FVector TraceStart, FVector TraceEnd)
{
	TrainerCharacter_eventServerRequestSendOutPokemon_Parms Parms;
	Parms.SelectedPartyIndex=SelectedPartyIndex;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerRequestSendOutPokemon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestSendOutPokemon constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPartyIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestSendOutPokemon constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestSendOutPokemon Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::NewProp_SelectedPartyIndex = { "SelectedPartyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerRequestSendOutPokemon_Parms, SelectedPartyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerRequestSendOutPokemon_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerRequestSendOutPokemon_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::NewProp_SelectedPartyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::PropPointers) < 2048);
// ********** End Function ServerRequestSendOutPokemon Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerRequestSendOutPokemon", 	Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerRequestSendOutPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerRequestSendOutPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerRequestSendOutPokemon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SelectedPartyIndex);
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestSendOutPokemon_Implementation(Z_Param_SelectedPartyIndex,Z_Param_TraceStart,Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerRequestSendOutPokemon *********************

// ********** Begin Class ATrainerCharacter Function ServerSetPokemon ******************************
struct TrainerCharacter_eventServerSetPokemon_Parms
{
	APokemon_Parent* LeadPokemon;
};
static FName NAME_ATrainerCharacter_ServerSetPokemon = FName(TEXT("ServerSetPokemon"));
void ATrainerCharacter::ServerSetPokemon(APokemon_Parent* LeadPokemon)
{
	TrainerCharacter_eventServerSetPokemon_Parms Parms;
	Parms.LeadPokemon=LeadPokemon;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerSetPokemon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPCs\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPCs" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetPokemon constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeadPokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetPokemon constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetPokemon Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::NewProp_LeadPokemon = { "LeadPokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerSetPokemon_Parms, LeadPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::NewProp_LeadPokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::PropPointers) < 2048);
// ********** End Function ServerSetPokemon Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerSetPokemon", 	Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerSetPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerSetPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerSetPokemon)
{
	P_GET_OBJECT(APokemon_Parent,Z_Param_LeadPokemon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetPokemon_Implementation(Z_Param_LeadPokemon);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerSetPokemon ********************************

// ********** Begin Class ATrainerCharacter Function ServerThrowSelectedInventoryItem **************
struct TrainerCharacter_eventServerThrowSelectedInventoryItem_Parms
{
	FName ItemID;
	FAimData AimData;
};
static FName NAME_ATrainerCharacter_ServerThrowSelectedInventoryItem = FName(TEXT("ServerThrowSelectedInventoryItem"));
void ATrainerCharacter::ServerThrowSelectedInventoryItem(FName ItemID, FAimData const& AimData)
{
	TrainerCharacter_eventServerThrowSelectedInventoryItem_Parms Parms;
	Parms.ItemID=ItemID;
	Parms.AimData=AimData;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerThrowSelectedInventoryItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerThrowSelectedInventoryItem constinit property declarations ******
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerThrowSelectedInventoryItem constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerThrowSelectedInventoryItem Property Definitions *****************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerThrowSelectedInventoryItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerThrowSelectedInventoryItem_Parms, AimData), Z_Construct_UScriptStruct_FAimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimData_MetaData), NewProp_AimData_MetaData) }; // 713287180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::NewProp_AimData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::PropPointers) < 2048);
// ********** End Function ServerThrowSelectedInventoryItem Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerThrowSelectedInventoryItem", 	Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerThrowSelectedInventoryItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerThrowSelectedInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerThrowSelectedInventoryItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_GET_STRUCT(FAimData,Z_Param_AimData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerThrowSelectedInventoryItem_Implementation(Z_Param_ItemID,Z_Param_AimData);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerThrowSelectedInventoryItem ****************

// ********** Begin Class ATrainerCharacter Function ServerThrowSelectedPokemon ********************
struct TrainerCharacter_eventServerThrowSelectedPokemon_Parms
{
	int32 SelectedPartyIndex;
	FAimData AimData;
};
static FName NAME_ATrainerCharacter_ServerThrowSelectedPokemon = FName(TEXT("ServerThrowSelectedPokemon"));
void ATrainerCharacter::ServerThrowSelectedPokemon(int32 SelectedPartyIndex, FAimData const& AimData)
{
	TrainerCharacter_eventServerThrowSelectedPokemon_Parms Parms;
	Parms.SelectedPartyIndex=SelectedPartyIndex;
	Parms.AimData=AimData;
	UFunction* Func = FindFunctionChecked(NAME_ATrainerCharacter_ServerThrowSelectedPokemon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerThrowSelectedPokemon constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPartyIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerThrowSelectedPokemon constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerThrowSelectedPokemon Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::NewProp_SelectedPartyIndex = { "SelectedPartyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerThrowSelectedPokemon_Parms, SelectedPartyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerCharacter_eventServerThrowSelectedPokemon_Parms, AimData), Z_Construct_UScriptStruct_FAimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimData_MetaData), NewProp_AimData_MetaData) }; // 713287180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::NewProp_SelectedPartyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::NewProp_AimData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::PropPointers) < 2048);
// ********** End Function ServerThrowSelectedPokemon Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerCharacter, nullptr, "ServerThrowSelectedPokemon", 	Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::PropPointers), 
sizeof(TrainerCharacter_eventServerThrowSelectedPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerCharacter_eventServerThrowSelectedPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerCharacter::execServerThrowSelectedPokemon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SelectedPartyIndex);
	P_GET_STRUCT(FAimData,Z_Param_AimData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerThrowSelectedPokemon_Implementation(Z_Param_SelectedPartyIndex,Z_Param_AimData);
	P_NATIVE_END;
}
// ********** End Class ATrainerCharacter Function ServerThrowSelectedPokemon **********************

// ********** Begin Class ATrainerCharacter ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATrainerCharacter;
UClass* ATrainerCharacter::GetPrivateStaticClass()
{
	using TClass = ATrainerCharacter;
	if (!Z_Registration_Info_UClass_ATrainerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TrainerCharacter"),
			Z_Registration_Info_UClass_ATrainerCharacter.InnerSingleton,
			StaticRegisterNativesATrainerCharacter,
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
	return Z_Registration_Info_UClass_ATrainerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATrainerCharacter_NoRegister()
{
	return ATrainerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATrainerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/TrainerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickSlotComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input assets\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input assets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Pickup_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Throw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ThrowPokeball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Engage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Command_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ToggleLockOn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Aim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeballProjectileClass_MetaData[] = {
		{ "Category", "Items|Pokeball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pok\xc3\xa9 Ball settings\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pok\xc3\xa9 Ball settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThrowableProjectileClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeballThrowSpeed_MetaData[] = {
		{ "Category", "Items|Pokeball" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeballSpawnForwardOffset_MetaData[] = {
		{ "Category", "Items|Pokeball" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeballSpawnUpOffset_MetaData[] = {
		{ "Category", "Items|Pokeball" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeballCollisionRadius_MetaData[] = {
		{ "Category", "Items|Pokeball" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThrowableItemID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLockOnCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|LockOn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera settings\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnCameraInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|LockOn" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnFocusTargetBias_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|LockOn" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnFocusHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|LockOn" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSwitchCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|LockOn" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|Aim" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeAimZoomFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|Aim" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimFOVInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera|Aim" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalWalkSpeed_MetaData[] = {
		{ "Category", "Movement|Aim" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimWalkSpeed_MetaData[] = {
		{ "Category", "Movement|Aim" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedInterpSpeed_MetaData[] = {
		{ "Category", "Movement|Aim" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subsystem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime state\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentParty_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingItem_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngagedTarget_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThrowableItem_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPokemonIsOut_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAreMovesSelectable_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CatchingDistance_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAbility_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionKeyBind_MetaData[] = {
		{ "Category", "TrainerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/TrainerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATrainerCharacter constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuickSlotComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Pickup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Throw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ThrowPokeball;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Engage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Command;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ToggleLockOn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Aim;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PokeballProjectileClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentThrowableProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeballThrowSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeballSpawnForwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeballSpawnUpOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeballCollisionRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentThrowableItemID;
	static void NewProp_bEnableLockOnCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLockOnCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockOnCameraInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockOnFocusTargetBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockOnFocusHeightOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSwitchCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FreeAimZoomFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimFOVInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentParty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentParty;
	static void NewProp_bHasPokemon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngagedTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentThrowableItem;
	static void NewProp_bPokemonIsOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPokemonIsOut;
	static void NewProp_bAreMovesSelectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreMovesSelectable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CatchingDistance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DodgeAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionKeyBind_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectionKeyBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATrainerCharacter constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentPokemon"), .Pointer = &ATrainerCharacter::execGetCurrentPokemon },
		{ .NameUTF8 = UTF8TEXT("HandlePokeballSummonLanded"), .Pointer = &ATrainerCharacter::execHandlePokeballSummonLanded },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentPokemon"), .Pointer = &ATrainerCharacter::execOnRep_CurrentPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerAddToCurrentParty"), .Pointer = &ATrainerCharacter::execServerAddToCurrentParty },
		{ .NameUTF8 = UTF8TEXT("ServerBroadcastTarget"), .Pointer = &ATrainerCharacter::execServerBroadcastTarget },
		{ .NameUTF8 = UTF8TEXT("ServerCallCommand"), .Pointer = &ATrainerCharacter::execServerCallCommand },
		{ .NameUTF8 = UTF8TEXT("ServerRequestCatchPokemon"), .Pointer = &ATrainerCharacter::execServerRequestCatchPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerRequestCatchPokemonWithPokeball"), .Pointer = &ATrainerCharacter::execServerRequestCatchPokemonWithPokeball },
		{ .NameUTF8 = UTF8TEXT("ServerRequestReturnCurrentPokemon"), .Pointer = &ATrainerCharacter::execServerRequestReturnCurrentPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerRequestSendOutPokemon"), .Pointer = &ATrainerCharacter::execServerRequestSendOutPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerSetPokemon"), .Pointer = &ATrainerCharacter::execServerSetPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerThrowSelectedInventoryItem"), .Pointer = &ATrainerCharacter::execServerThrowSelectedInventoryItem },
		{ .NameUTF8 = UTF8TEXT("ServerThrowSelectedPokemon"), .Pointer = &ATrainerCharacter::execServerThrowSelectedPokemon },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrainerCharacter_GetCurrentPokemon, "GetCurrentPokemon" }, // 667786273
		{ &Z_Construct_UFunction_ATrainerCharacter_HandlePokeballSummonLanded, "HandlePokeballSummonLanded" }, // 457979662
		{ &Z_Construct_UFunction_ATrainerCharacter_OnRep_CurrentPokemon, "OnRep_CurrentPokemon" }, // 354903939
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerAddToCurrentParty, "ServerAddToCurrentParty" }, // 2080610890
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerBroadcastTarget, "ServerBroadcastTarget" }, // 2464932512
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerCallCommand, "ServerCallCommand" }, // 1830088177
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemon, "ServerRequestCatchPokemon" }, // 3730811691
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerRequestCatchPokemonWithPokeball, "ServerRequestCatchPokemonWithPokeball" }, // 3245632038
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerRequestReturnCurrentPokemon, "ServerRequestReturnCurrentPokemon" }, // 2446699117
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerRequestSendOutPokemon, "ServerRequestSendOutPokemon" }, // 240482225
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerSetPokemon, "ServerSetPokemon" }, // 2500298137
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedInventoryItem, "ServerThrowSelectedInventoryItem" }, // 843639517
		{ &Z_Construct_UFunction_ATrainerCharacter_ServerThrowSelectedPokemon, "ServerThrowSelectedPokemon" }, // 1578081026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATrainerCharacter_Statics

// ********** Begin Class ATrainerCharacter Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_InventorySystem = { "InventorySystem", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, InventorySystem), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySystem_MetaData), NewProp_InventorySystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TargetingComponent = { "TargetingComponent", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, TargetingComponent), Z_Construct_UClass_UTargetingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingComponent_MetaData), NewProp_TargetingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_QuickSlotComponent = { "QuickSlotComponent", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, QuickSlotComponent), Z_Construct_UClass_UTrainerQuickSlotComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickSlotComponent_MetaData), NewProp_QuickSlotComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_ThrowableComponent = { "ThrowableComponent", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, ThrowableComponent), Z_Construct_UClass_UTrainerThrowableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableComponent_MetaData), NewProp_ThrowableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, InputConfig), Z_Construct_UClass_UPokemonInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Pickup = { "IA_Pickup", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, IA_Pickup), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Pickup_MetaData), NewProp_IA_Pickup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Throw = { "IA_Throw", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, IA_Throw), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Throw_MetaData), NewProp_IA_Throw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_ThrowPokeball = { "IA_ThrowPokeball", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, IA_ThrowPokeball), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ThrowPokeball_MetaData), NewProp_IA_ThrowPokeball_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Engage = { "IA_Engage", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, IA_Engage), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Engage_MetaData), NewProp_IA_Engage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Command = { "IA_Command", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, IA_Command), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Command_MetaData), NewProp_IA_Command_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_ToggleLockOn = { "IA_ToggleLockOn", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, IA_ToggleLockOn), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ToggleLockOn_MetaData), NewProp_IA_ToggleLockOn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Aim = { "IA_Aim", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, IA_Aim), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Aim_MetaData), NewProp_IA_Aim_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballProjectileClass = { "PokeballProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, PokeballProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APokeBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeballProjectileClass_MetaData), NewProp_PokeballProjectileClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentThrowableProjectileClass = { "CurrentThrowableProjectileClass", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, CurrentThrowableProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThrowableProjectileClass_MetaData), NewProp_CurrentThrowableProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballThrowSpeed = { "PokeballThrowSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, PokeballThrowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeballThrowSpeed_MetaData), NewProp_PokeballThrowSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballSpawnForwardOffset = { "PokeballSpawnForwardOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, PokeballSpawnForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeballSpawnForwardOffset_MetaData), NewProp_PokeballSpawnForwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballSpawnUpOffset = { "PokeballSpawnUpOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, PokeballSpawnUpOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeballSpawnUpOffset_MetaData), NewProp_PokeballSpawnUpOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballCollisionRadius = { "PokeballCollisionRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, PokeballCollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeballCollisionRadius_MetaData), NewProp_PokeballCollisionRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentThrowableItemID = { "CurrentThrowableItemID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, CurrentThrowableItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThrowableItemID_MetaData), NewProp_CurrentThrowableItemID_MetaData) };
void Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bEnableLockOnCamera_SetBit(void* Obj)
{
	((ATrainerCharacter*)Obj)->bEnableLockOnCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bEnableLockOnCamera = { "bEnableLockOnCamera", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrainerCharacter), &Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bEnableLockOnCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLockOnCamera_MetaData), NewProp_bEnableLockOnCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LockOnCameraInterpSpeed = { "LockOnCameraInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, LockOnCameraInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnCameraInterpSpeed_MetaData), NewProp_LockOnCameraInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LockOnFocusTargetBias = { "LockOnFocusTargetBias", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, LockOnFocusTargetBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnFocusTargetBias_MetaData), NewProp_LockOnFocusTargetBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LockOnFocusHeightOffset = { "LockOnFocusHeightOffset", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, LockOnFocusHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnFocusHeightOffset_MetaData), NewProp_LockOnFocusHeightOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TargetSwitchCooldown = { "TargetSwitchCooldown", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, TargetSwitchCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSwitchCooldown_MetaData), NewProp_TargetSwitchCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, DefaultFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFOV_MetaData), NewProp_DefaultFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_FreeAimZoomFOV = { "FreeAimZoomFOV", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, FreeAimZoomFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeAimZoomFOV_MetaData), NewProp_FreeAimZoomFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_AimFOVInterpSpeed = { "AimFOVInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, AimFOVInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimFOVInterpSpeed_MetaData), NewProp_AimFOVInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_NormalWalkSpeed = { "NormalWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, NormalWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalWalkSpeed_MetaData), NewProp_NormalWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_AimWalkSpeed = { "AimWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, AimWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimWalkSpeed_MetaData), NewProp_AimWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_WalkSpeedInterpSpeed = { "WalkSpeedInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, WalkSpeedInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeedInterpSpeed_MetaData), NewProp_WalkSpeedInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, Subsystem), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subsystem_MetaData), NewProp_Subsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TrainerController = { "TrainerController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, TrainerController), Z_Construct_UClass_ATrainerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerController_MetaData), NewProp_TrainerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TrainerPlayerState = { "TrainerPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, TrainerPlayerState), Z_Construct_UClass_ATrainerPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerPlayerState_MetaData), NewProp_TrainerPlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokemonASC = { "PokemonASC", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, PokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonASC_MetaData), NewProp_PokemonASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentPokemon = { "CurrentPokemon", "OnRep_CurrentPokemon", (EPropertyFlags)0x0144000100020021, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, CurrentPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokemon_MetaData), NewProp_CurrentPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentParty_Inner = { "CurrentParty", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentParty = { "CurrentParty", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, CurrentParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentParty_MetaData), NewProp_CurrentParty_MetaData) };
void Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bHasPokemon_SetBit(void* Obj)
{
	((ATrainerCharacter*)Obj)->bHasPokemon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bHasPokemon = { "bHasPokemon", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrainerCharacter), &Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bHasPokemon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPokemon_MetaData), NewProp_bHasPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_OverlappingItem = { "OverlappingItem", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, OverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingItem_MetaData), NewProp_OverlappingItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_EngagedTarget = { "EngagedTarget", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, EngagedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngagedTarget_MetaData), NewProp_EngagedTarget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentThrowableItem = { "CurrentThrowableItem", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, CurrentThrowableItem), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThrowableItem_MetaData), NewProp_CurrentThrowableItem_MetaData) };
void Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bPokemonIsOut_SetBit(void* Obj)
{
	((ATrainerCharacter*)Obj)->bPokemonIsOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bPokemonIsOut = { "bPokemonIsOut", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrainerCharacter), &Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bPokemonIsOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPokemonIsOut_MetaData), NewProp_bPokemonIsOut_MetaData) };
void Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bAreMovesSelectable_SetBit(void* Obj)
{
	((ATrainerCharacter*)Obj)->bAreMovesSelectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bAreMovesSelectable = { "bAreMovesSelectable", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrainerCharacter), &Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bAreMovesSelectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAreMovesSelectable_MetaData), NewProp_bAreMovesSelectable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CatchingDistance = { "CatchingDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, CatchingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CatchingDistance_MetaData), NewProp_CatchingDistance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DodgeAbility = { "DodgeAbility", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, DodgeAbility), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeAbility_MetaData), NewProp_DodgeAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DirectionKeyBind_Inner = { "DirectionKeyBind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 2693575693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DirectionKeyBind = { "DirectionKeyBind", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerCharacter, DirectionKeyBind), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionKeyBind_MetaData), NewProp_DirectionKeyBind_MetaData) }; // 2693575693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_InventorySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TargetingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_QuickSlotComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_ThrowableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Pickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Throw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_ThrowPokeball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Engage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_ToggleLockOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_IA_Aim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentThrowableProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballThrowSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballSpawnForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballSpawnUpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokeballCollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentThrowableItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bEnableLockOnCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LockOnCameraInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LockOnFocusTargetBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_LockOnFocusHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TargetSwitchCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DefaultFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_FreeAimZoomFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_AimFOVInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_NormalWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_AimWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_WalkSpeedInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_Subsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TrainerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_TrainerPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_PokemonASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentParty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentParty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bHasPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_OverlappingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_EngagedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CurrentThrowableItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bPokemonIsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_bAreMovesSelectable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_CatchingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DodgeAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DirectionKeyBind_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerCharacter_Statics::NewProp_DirectionKeyBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerCharacter_Statics::PropPointers) < 2048);
// ********** End Class ATrainerCharacter Property Definitions *************************************
UObject* (*const Z_Construct_UClass_ATrainerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATrainerCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(ATrainerCharacter, IPlayerInterface), false },  // 537825841
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainerCharacter_Statics::ClassParams = {
	&ATrainerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATrainerCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainerCharacter_Statics::Class_MetaDataParams)
};
void ATrainerCharacter::StaticRegisterNativesATrainerCharacter()
{
	UClass* Class = ATrainerCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATrainerCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATrainerCharacter()
{
	if (!Z_Registration_Info_UClass_ATrainerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerCharacter.OuterSingleton, Z_Construct_UClass_ATrainerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrainerCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ATrainerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentPokemon(TEXT("CurrentPokemon"));
	const bool bIsValid = true
		&& Name_CurrentPokemon == ClassReps[(int32)ENetFields_Private::CurrentPokemon].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATrainerCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATrainerCharacter);
ATrainerCharacter::~ATrainerCharacter() {}
// ********** End Class ATrainerCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerCharacter, ATrainerCharacter::StaticClass, TEXT("ATrainerCharacter"), &Z_Registration_Info_UClass_ATrainerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerCharacter), 3335545658U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h__Script_ProjectMimikyu_1832612516{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_TrainerCharacter_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
