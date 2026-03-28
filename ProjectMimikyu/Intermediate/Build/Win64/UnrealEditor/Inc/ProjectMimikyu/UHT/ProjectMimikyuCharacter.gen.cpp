// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectMimikyuCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AItem_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerPlayerState_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature();
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
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
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
		AActor* CombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTargetRegistered constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTargetRegistered constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTargetRegistered Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnTargetRegistered_Parms, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::NewProp_CombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTargetRegistered Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnTargetRegistered__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTargetRegistered_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::Function_MetaDataParams)},  };
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
void FOnTargetRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnTargetRegistered, AActor* CombatTarget)
{
	struct _Script_ProjectMimikyu_eventOnTargetRegistered_Parms
	{
		AActor* CombatTarget;
	};
	_Script_ProjectMimikyu_eventOnTargetRegistered_Parms Parms;
	Parms.CombatTarget=CombatTarget;
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
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
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

// ********** Begin Class AProjectMimikyuCharacter Function GetCurrentPokemon **********************
struct Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics
{
	struct ProjectMimikyuCharacter_eventGetCurrentPokemon_Parms
	{
		APokemon_Parent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentPokemon constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentPokemon constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentPokemon Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventGetCurrentPokemon_Parms, ReturnValue), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentPokemon Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "GetCurrentPokemon", 	Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::ProjectMimikyuCharacter_eventGetCurrentPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::ProjectMimikyuCharacter_eventGetCurrentPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execGetCurrentPokemon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APokemon_Parent**)Z_Param__Result=P_THIS->GetCurrentPokemon();
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function GetCurrentPokemon ************************

// ********** Begin Class AProjectMimikyuCharacter Function OnRep_CurrentPokemon *******************
struct Z_Construct_UFunction_AProjectMimikyuCharacter_OnRep_CurrentPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentPokemon constinit property declarations ******************
// ********** End Function OnRep_CurrentPokemon constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_OnRep_CurrentPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "OnRep_CurrentPokemon", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_OnRep_CurrentPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_OnRep_CurrentPokemon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_OnRep_CurrentPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_OnRep_CurrentPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execOnRep_CurrentPokemon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentPokemon();
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function OnRep_CurrentPokemon *********************

// ********** Begin Class AProjectMimikyuCharacter Function ServerAddToCurrentParty ****************
struct ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms
{
	AActor* AddedActor;
};
static FName NAME_AProjectMimikyuCharacter_ServerAddToCurrentParty = FName(TEXT("ServerAddToCurrentParty"));
void AProjectMimikyuCharacter::ServerAddToCurrentParty(AActor* AddedActor)
{
	ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms Parms;
	Parms.AddedActor=AddedActor;
	UFunction* Func = FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerAddToCurrentParty);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerAddToCurrentParty constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerAddToCurrentParty constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerAddToCurrentParty Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::NewProp_AddedActor = { "AddedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms, AddedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::NewProp_AddedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers) < 2048);
// ********** End Function ServerAddToCurrentParty Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerAddToCurrentParty", 	Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers), 
sizeof(ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerAddToCurrentParty)
{
	P_GET_OBJECT(AActor,Z_Param_AddedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAddToCurrentParty_Implementation(Z_Param_AddedActor);
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function ServerAddToCurrentParty ******************

// ********** Begin Class AProjectMimikyuCharacter Function ServerBroadcastTarget ******************
struct ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms
{
	AActor* Target;
};
static FName NAME_AProjectMimikyuCharacter_ServerBroadcastTarget = FName(TEXT("ServerBroadcastTarget"));
void AProjectMimikyuCharacter::ServerBroadcastTarget(AActor* Target)
{
	ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms Parms;
	Parms.Target=Target;
	UFunction* Func = FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerBroadcastTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerBroadcastTarget constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerBroadcastTarget constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerBroadcastTarget Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers) < 2048);
// ********** End Function ServerBroadcastTarget Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerBroadcastTarget", 	Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers), 
sizeof(ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerBroadcastTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerBroadcastTarget_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function ServerBroadcastTarget ********************

// ********** Begin Class AProjectMimikyuCharacter Function ServerCallCommand **********************
struct ProjectMimikyuCharacter_eventServerCallCommand_Parms
{
	int32 Index;
};
static FName NAME_AProjectMimikyuCharacter_ServerCallCommand = FName(TEXT("ServerCallCommand"));
void AProjectMimikyuCharacter::ServerCallCommand(int32 Index)
{
	ProjectMimikyuCharacter_eventServerCallCommand_Parms Parms;
	Parms.Index=Index;
	UFunction* Func = FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerCallCommand);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerCallCommand constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerCallCommand constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerCallCommand Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerCallCommand_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers) < 2048);
// ********** End Function ServerCallCommand Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerCallCommand", 	Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers), 
sizeof(ProjectMimikyuCharacter_eventServerCallCommand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectMimikyuCharacter_eventServerCallCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerCallCommand)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCallCommand_Implementation(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function ServerCallCommand ************************

// ********** Begin Class AProjectMimikyuCharacter Function ServerRequestReturnCurrentPokemon ******
static FName NAME_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon = FName(TEXT("ServerRequestReturnCurrentPokemon"));
void AProjectMimikyuCharacter::ServerRequestReturnCurrentPokemon()
{
	UFunction* Func = FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestReturnCurrentPokemon constinit property declarations *****
// ********** End Function ServerRequestReturnCurrentPokemon constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerRequestReturnCurrentPokemon", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerRequestReturnCurrentPokemon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestReturnCurrentPokemon_Implementation();
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function ServerRequestReturnCurrentPokemon ********

// ********** Begin Class AProjectMimikyuCharacter Function ServerRequestSendOutPokemon ************
struct ProjectMimikyuCharacter_eventServerRequestSendOutPokemon_Parms
{
	FVector TraceStart;
	FVector TraceEnd;
};
static FName NAME_AProjectMimikyuCharacter_ServerRequestSendOutPokemon = FName(TEXT("ServerRequestSendOutPokemon"));
void AProjectMimikyuCharacter::ServerRequestSendOutPokemon(FVector TraceStart, FVector TraceEnd)
{
	ProjectMimikyuCharacter_eventServerRequestSendOutPokemon_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	UFunction* Func = FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerRequestSendOutPokemon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestSendOutPokemon constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestSendOutPokemon constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestSendOutPokemon Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerRequestSendOutPokemon_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerRequestSendOutPokemon_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::PropPointers) < 2048);
// ********** End Function ServerRequestSendOutPokemon Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerRequestSendOutPokemon", 	Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::PropPointers), 
sizeof(ProjectMimikyuCharacter_eventServerRequestSendOutPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectMimikyuCharacter_eventServerRequestSendOutPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerRequestSendOutPokemon)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestSendOutPokemon_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function ServerRequestSendOutPokemon **************

// ********** Begin Class AProjectMimikyuCharacter Function ServerRequetCatchPokemon ***************
struct ProjectMimikyuCharacter_eventServerRequetCatchPokemon_Parms
{
	FVector TraceStart;
	FVector TraceEnd;
};
static FName NAME_AProjectMimikyuCharacter_ServerRequetCatchPokemon = FName(TEXT("ServerRequetCatchPokemon"));
void AProjectMimikyuCharacter::ServerRequetCatchPokemon(FVector TraceStart, FVector TraceEnd)
{
	ProjectMimikyuCharacter_eventServerRequetCatchPokemon_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	UFunction* Func = FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerRequetCatchPokemon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Catching/Returning Pokemon\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Catching/Returning Pokemon" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequetCatchPokemon constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequetCatchPokemon constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequetCatchPokemon Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerRequetCatchPokemon_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerRequetCatchPokemon_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::PropPointers) < 2048);
// ********** End Function ServerRequetCatchPokemon Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerRequetCatchPokemon", 	Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::PropPointers), 
sizeof(ProjectMimikyuCharacter_eventServerRequetCatchPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectMimikyuCharacter_eventServerRequetCatchPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerRequetCatchPokemon)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequetCatchPokemon_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function ServerRequetCatchPokemon *****************

// ********** Begin Class AProjectMimikyuCharacter Function ServerSetPokemon ***********************
struct ProjectMimikyuCharacter_eventServerSetPokemon_Parms
{
	APokemon_Parent* LeadPokemon;
};
static FName NAME_AProjectMimikyuCharacter_ServerSetPokemon = FName(TEXT("ServerSetPokemon"));
void AProjectMimikyuCharacter::ServerSetPokemon(APokemon_Parent* LeadPokemon)
{
	ProjectMimikyuCharacter_eventServerSetPokemon_Parms Parms;
	Parms.LeadPokemon=LeadPokemon;
	UFunction* Func = FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerSetPokemon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetPokemon constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeadPokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetPokemon constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetPokemon Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::NewProp_LeadPokemon = { "LeadPokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerSetPokemon_Parms, LeadPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::NewProp_LeadPokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers) < 2048);
// ********** End Function ServerSetPokemon Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerSetPokemon", 	Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers), 
sizeof(ProjectMimikyuCharacter_eventServerSetPokemon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectMimikyuCharacter_eventServerSetPokemon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerSetPokemon)
{
	P_GET_OBJECT(APokemon_Parent,Z_Param_LeadPokemon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetPokemon_Implementation(Z_Param_LeadPokemon);
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuCharacter Function ServerSetPokemon *************************

// ********** Begin Class AProjectMimikyuCharacter *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectMimikyuCharacter;
UClass* AProjectMimikyuCharacter::GetPrivateStaticClass()
{
	using TClass = AProjectMimikyuCharacter;
	if (!Z_Registration_Info_UClass_AProjectMimikyuCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectMimikyuCharacter"),
			Z_Registration_Info_UClass_AProjectMimikyuCharacter.InnerSingleton,
			StaticRegisterNativesAProjectMimikyuCharacter,
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
	return Z_Registration_Info_UClass_AProjectMimikyuCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister()
{
	return AProjectMimikyuCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectMimikyuCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/ProjectMimikyuCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Pickup_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Throw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ThrowPokeball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Engage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Command_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentParty_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAbility_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(Replicated)\n//FPokemonParty CurrentSParty;\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(Replicated)\nFPokemonParty CurrentSParty;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySystem_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CatchingDistance_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingItem_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngagedTarget_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThrowableItem_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPokemonIsOut_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAreMovesSelectable_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionKeyBind_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectMimikyuCharacter constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Pickup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Throw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ThrowPokeball;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Engage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Command;
	static void NewProp_bHasPokemon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentParty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentParty;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DodgeAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CatchingDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngagedTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentThrowableItem;
	static void NewProp_bPokemonIsOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPokemonIsOut;
	static void NewProp_bAreMovesSelectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreMovesSelectable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionKeyBind_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectionKeyBind;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectMimikyuCharacter constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentPokemon"), .Pointer = &AProjectMimikyuCharacter::execGetCurrentPokemon },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentPokemon"), .Pointer = &AProjectMimikyuCharacter::execOnRep_CurrentPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerAddToCurrentParty"), .Pointer = &AProjectMimikyuCharacter::execServerAddToCurrentParty },
		{ .NameUTF8 = UTF8TEXT("ServerBroadcastTarget"), .Pointer = &AProjectMimikyuCharacter::execServerBroadcastTarget },
		{ .NameUTF8 = UTF8TEXT("ServerCallCommand"), .Pointer = &AProjectMimikyuCharacter::execServerCallCommand },
		{ .NameUTF8 = UTF8TEXT("ServerRequestReturnCurrentPokemon"), .Pointer = &AProjectMimikyuCharacter::execServerRequestReturnCurrentPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerRequestSendOutPokemon"), .Pointer = &AProjectMimikyuCharacter::execServerRequestSendOutPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerRequetCatchPokemon"), .Pointer = &AProjectMimikyuCharacter::execServerRequetCatchPokemon },
		{ .NameUTF8 = UTF8TEXT("ServerSetPokemon"), .Pointer = &AProjectMimikyuCharacter::execServerSetPokemon },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_GetCurrentPokemon, "GetCurrentPokemon" }, // 2204959484
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_OnRep_CurrentPokemon, "OnRep_CurrentPokemon" }, // 2993332916
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty, "ServerAddToCurrentParty" }, // 3774299443
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget, "ServerBroadcastTarget" }, // 964369296
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand, "ServerCallCommand" }, // 3429706063
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestReturnCurrentPokemon, "ServerRequestReturnCurrentPokemon" }, // 2126475363
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequestSendOutPokemon, "ServerRequestSendOutPokemon" }, // 1148336703
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerRequetCatchPokemon, "ServerRequetCatchPokemon" }, // 4244398202
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon, "ServerSetPokemon" }, // 1599649773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectMimikyuCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectMimikyuCharacter_Statics

// ********** Begin Class AProjectMimikyuCharacter Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Pickup = { "IA_Pickup", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Pickup), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Pickup_MetaData), NewProp_IA_Pickup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Throw = { "IA_Throw", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Throw), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Throw_MetaData), NewProp_IA_Throw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_ThrowPokeball = { "IA_ThrowPokeball", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_ThrowPokeball), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ThrowPokeball_MetaData), NewProp_IA_ThrowPokeball_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Engage = { "IA_Engage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Engage), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Engage_MetaData), NewProp_IA_Engage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Command = { "IA_Command", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Command), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Command_MetaData), NewProp_IA_Command_MetaData) };
void Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon_SetBit(void* Obj)
{
	((AProjectMimikyuCharacter*)Obj)->bHasPokemon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon = { "bHasPokemon", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectMimikyuCharacter), &Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPokemon_MetaData), NewProp_bHasPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentPokemon = { "CurrentPokemon", "OnRep_CurrentPokemon", (EPropertyFlags)0x0144000100020021, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CurrentPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokemon_MetaData), NewProp_CurrentPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty_Inner = { "CurrentParty", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty = { "CurrentParty", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CurrentParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentParty_MetaData), NewProp_CurrentParty_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DodgeAbility = { "DodgeAbility", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, DodgeAbility), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeAbility_MetaData), NewProp_DodgeAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerController = { "TrainerController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, TrainerController), Z_Construct_UClass_ATrainerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerController_MetaData), NewProp_TrainerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerPlayerState = { "TrainerPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, TrainerPlayerState), Z_Construct_UClass_ATrainerPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerPlayerState_MetaData), NewProp_TrainerPlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_PokemonASC = { "PokemonASC", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, PokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonASC_MetaData), NewProp_PokemonASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InventorySystem = { "InventorySystem", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, InventorySystem), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySystem_MetaData), NewProp_InventorySystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CatchingDistance = { "CatchingDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CatchingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CatchingDistance_MetaData), NewProp_CatchingDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_OverlappingItem = { "OverlappingItem", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, OverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingItem_MetaData), NewProp_OverlappingItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_EngagedTarget = { "EngagedTarget", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, EngagedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngagedTarget_MetaData), NewProp_EngagedTarget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentThrowableItem = { "CurrentThrowableItem", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CurrentThrowableItem), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThrowableItem_MetaData), NewProp_CurrentThrowableItem_MetaData) };
void Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut_SetBit(void* Obj)
{
	((AProjectMimikyuCharacter*)Obj)->bPokemonIsOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut = { "bPokemonIsOut", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectMimikyuCharacter), &Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPokemonIsOut_MetaData), NewProp_bPokemonIsOut_MetaData) };
void Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable_SetBit(void* Obj)
{
	((AProjectMimikyuCharacter*)Obj)->bAreMovesSelectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable = { "bAreMovesSelectable", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectMimikyuCharacter), &Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAreMovesSelectable_MetaData), NewProp_bAreMovesSelectable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind_Inner = { "DirectionKeyBind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 2693575693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind = { "DirectionKeyBind", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, DirectionKeyBind), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionKeyBind_MetaData), NewProp_DirectionKeyBind_MetaData) }; // 2693575693
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, InputConfig), Z_Construct_UClass_UPokemonInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectMimikyuCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Pickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Throw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_ThrowPokeball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Engage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DodgeAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_PokemonASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InventorySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CatchingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_OverlappingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_EngagedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentThrowableItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InputConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::PropPointers) < 2048);
// ********** End Class AProjectMimikyuCharacter Property Definitions ******************************
UObject* (*const Z_Construct_UClass_AProjectMimikyuCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AProjectMimikyuCharacter, IPlayerInterface), false },  // 537825841
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::ClassParams = {
	&AProjectMimikyuCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectMimikyuCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::Class_MetaDataParams)
};
void AProjectMimikyuCharacter::StaticRegisterNativesAProjectMimikyuCharacter()
{
	UClass* Class = AProjectMimikyuCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AProjectMimikyuCharacter()
{
	if (!Z_Registration_Info_UClass_AProjectMimikyuCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectMimikyuCharacter.OuterSingleton, Z_Construct_UClass_AProjectMimikyuCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectMimikyuCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AProjectMimikyuCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentPokemon(TEXT("CurrentPokemon"));
	const bool bIsValid = true
		&& Name_CurrentPokemon == ClassReps[(int32)ENetFields_Private::CurrentPokemon].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AProjectMimikyuCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectMimikyuCharacter);
AProjectMimikyuCharacter::~AProjectMimikyuCharacter() {}
// ********** End Class AProjectMimikyuCharacter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectMimikyuCharacter, AProjectMimikyuCharacter::StaticClass, TEXT("AProjectMimikyuCharacter"), &Z_Registration_Info_UClass_AProjectMimikyuCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectMimikyuCharacter), 1445701050U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h__Script_ProjectMimikyu_1911167015{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
