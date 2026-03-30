// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/WidgetController/TrainerOverlayWidgetController.h"
#include "Characters/CharacterTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainerOverlayWidgetController() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlayWidgetController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonUIInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHealthChangedSignature constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHealthChangedSignature constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHealthChangedSignature Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnHealthChangedSignature Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnHealthChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth)
{
	struct _Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
	};
	_Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Delegate FOnMaxHealthChangedSignature ******************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms
	{
		float NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMaxHealthChangedSignature constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMaxHealthChangedSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMaxHealthChangedSignature Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMaxHealthChangedSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnMaxHealthChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMaxHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangedSignature, float NewMaxHealth)
{
	struct _Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms
	{
		float NewMaxHealth;
	};
	_Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms Parms;
	Parms.NewMaxHealth=NewMaxHealth;
	OnMaxHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMaxHealthChangedSignature ********************************************

// ********** Begin Delegate FPokemonUIInfoSignature ***********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms
	{
		FPokemonUIInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPokemonUIInfoSignature constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPokemonUIInfoSignature constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPokemonUIInfoSignature Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FPokemonUIInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 1130679456
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FPokemonUIInfoSignature Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "PokemonUIInfoSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPokemonUIInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& PokemonUIInfoSignature, FPokemonUIInfo const& Info)
{
	struct _Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms
	{
		FPokemonUIInfo Info;
	};
	_Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms Parms;
	Parms.Info=Info;
	PokemonUIInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPokemonUIInfoSignature *************************************************

// ********** Begin Delegate FPokemonInfoSignature *************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventPokemonInfoSignature_Parms
	{
		TArray<FPokemonInfo> Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPokemonInfoSignature constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPokemonInfoSignature constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPokemonInfoSignature Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info_Inner = { "Info", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 2094424460
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokemonInfoSignature_Parms, Info), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2094424460
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FPokemonInfoSignature Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "PokemonInfoSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonInfoSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonInfoSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPokemonInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& PokemonInfoSignature, TArray<FPokemonInfo> const& Info)
{
	struct _Script_ProjectMimikyu_eventPokemonInfoSignature_Parms
	{
		TArray<FPokemonInfo> Info;
	};
	_Script_ProjectMimikyu_eventPokemonInfoSignature_Parms Parms;
	Parms.Info=Info;
	PokemonInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPokemonInfoSignature ***************************************************

// ********** Begin Delegate FOnPartyChangedSignature **********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms
	{
		TArray<APokemon_Parent*> PokemonParty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Party UI On Party Changed Signature\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Party UI On Party Changed Signature" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonParty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPartyChangedSignature constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonParty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonParty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPartyChangedSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPartyChangedSignature Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty_Inner = { "PokemonParty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty = { "PokemonParty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms, PokemonParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonParty_MetaData), NewProp_PokemonParty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPartyChangedSignature Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPartyChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPartyChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPartyChangedSignature, TArray<APokemon_Parent*> const& PokemonParty)
{
	struct _Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms
	{
		TArray<APokemon_Parent*> PokemonParty;
	};
	_Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms Parms;
	Parms.PokemonParty=PokemonParty;
	OnPartyChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPartyChangedSignature ************************************************

// ********** Begin Delegate FOnPokemonActiveSignature *********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms
	{
		APokemon_Parent* NewActivePokemon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPokemonActiveSignature constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActivePokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPokemonActiveSignature constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPokemonActiveSignature Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::NewProp_NewActivePokemon = { "NewActivePokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms, NewActivePokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::NewProp_NewActivePokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPokemonActiveSignature Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPokemonActiveSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPokemonActiveSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPokemonActiveSignature, APokemon_Parent* NewActivePokemon)
{
	struct _Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms
	{
		APokemon_Parent* NewActivePokemon;
	};
	_Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms Parms;
	Parms.NewActivePokemon=NewActivePokemon;
	OnPokemonActiveSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPokemonActiveSignature ***********************************************

// ********** Begin Delegate FOnEventActivatedSignature ********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnEventActivatedSignature constinit property declarations ************
// ********** End Delegate FOnEventActivatedSignature constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnEventActivatedSignature__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEventActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEventActivatedSignature)
{
	OnEventActivatedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEventActivatedSignature **********************************************

// ********** Begin Delegate FPokemonAbilityConfigured *********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms
	{
		UAbilitySystemComponent* ASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPokemonAbilityConfigured constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPokemonAbilityConfigured constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPokemonAbilityConfigured Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FPokemonAbilityConfigured Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "PokemonAbilityConfigured__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPokemonAbilityConfigured_DelegateWrapper(const FMulticastScriptDelegate& PokemonAbilityConfigured, UAbilitySystemComponent* ASC)
{
	struct _Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms
	{
		UAbilitySystemComponent* ASC;
	};
	_Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms Parms;
	Parms.ASC=ASC;
	PokemonAbilityConfigured.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPokemonAbilityConfigured ***********************************************

// ********** Begin Delegate FOnKeyInputSignature **************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnKeyInputSignature_Parms
	{
		EDirectionPoint KeyDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show Key Sequence With Signature\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show Key Sequence With Signature" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnKeyInputSignature constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnKeyInputSignature constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnKeyInputSignature Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection = { "KeyDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnKeyInputSignature_Parms, KeyDirection), Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyDirection_MetaData), NewProp_KeyDirection_MetaData) }; // 4250284492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnKeyInputSignature Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnKeyInputSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnKeyInputSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnKeyInputSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKeyInputSignature_DelegateWrapper(const FMulticastScriptDelegate& OnKeyInputSignature, EDirectionPoint const& KeyDirection)
{
	struct _Script_ProjectMimikyu_eventOnKeyInputSignature_Parms
	{
		EDirectionPoint KeyDirection;
	};
	_Script_ProjectMimikyu_eventOnKeyInputSignature_Parms Parms;
	Parms.KeyDirection=KeyDirection;
	OnKeyInputSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnKeyInputSignature ****************************************************

// ********** Begin Class UTrainerOverlayWidgetController ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainerOverlayWidgetController;
UClass* UTrainerOverlayWidgetController::GetPrivateStaticClass()
{
	using TClass = UTrainerOverlayWidgetController;
	if (!Z_Registration_Info_UClass_UTrainerOverlayWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TrainerOverlayWidgetController"),
			Z_Registration_Info_UClass_UTrainerOverlayWidgetController.InnerSingleton,
			StaticRegisterNativesUTrainerOverlayWidgetController,
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
	return Z_Registration_Info_UClass_UTrainerOverlayWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister()
{
	return UTrainerOverlayWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTrainerOverlayWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/WidgetController/TrainerOverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPowerPointsChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxPowerPointsChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonUI_InfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonInfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPartyChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPokemonActiveChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftUILeftDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftUIRightDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapSlotModesDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonActivatedDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirectionDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAbilityConfigured_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTrainerOverlayWidgetController constinit property declarations **********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPowerPointsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxPowerPointsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonUI_InfoDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonInfoDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPokemonActiveChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShiftUILeftDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShiftUIRightDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SwapSlotModesDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonActivatedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_KeyDirectionDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonAbilityConfigured;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTrainerOverlayWidgetController constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainerOverlayWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTrainerOverlayWidgetController_Statics

// ********** Begin Class UTrainerOverlayWidgetController Property Definitions *********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 4004945029
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnLevelChanged = { "OnLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnLevelChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelChanged_MetaData), NewProp_OnLevelChanged_MetaData) }; // 4004945029
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 4004945029
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPowerPointsChanged = { "OnPowerPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnPowerPointsChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPowerPointsChanged_MetaData), NewProp_OnPowerPointsChanged_MetaData) }; // 4004945029
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxPowerPointsChanged = { "OnMaxPowerPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnMaxPowerPointsChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxPowerPointsChanged_MetaData), NewProp_OnMaxPowerPointsChanged_MetaData) }; // 4004945029
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonUI_InfoDelegate = { "PokemonUI_InfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonUI_InfoDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonUI_InfoDelegate_MetaData), NewProp_PokemonUI_InfoDelegate_MetaData) }; // 3982401781
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonInfoDelegate = { "PokemonInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonInfoDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonInfoDelegate_MetaData), NewProp_PokemonInfoDelegate_MetaData) }; // 1380447235
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPartyChanged = { "OnPartyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnPartyChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPartyChanged_MetaData), NewProp_OnPartyChanged_MetaData) }; // 3382782802
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPokemonActiveChanged = { "OnPokemonActiveChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnPokemonActiveChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPokemonActiveChanged_MetaData), NewProp_OnPokemonActiveChanged_MetaData) }; // 3596479581
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUILeftDelegate = { "ShiftUILeftDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, ShiftUILeftDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftUILeftDelegate_MetaData), NewProp_ShiftUILeftDelegate_MetaData) }; // 2954336686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUIRightDelegate = { "ShiftUIRightDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, ShiftUIRightDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftUIRightDelegate_MetaData), NewProp_ShiftUIRightDelegate_MetaData) }; // 2954336686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_SwapSlotModesDelegate = { "SwapSlotModesDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, SwapSlotModesDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapSlotModesDelegate_MetaData), NewProp_SwapSlotModesDelegate_MetaData) }; // 2954336686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonActivatedDelegate = { "PokemonActivatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonActivatedDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonActivatedDelegate_MetaData), NewProp_PokemonActivatedDelegate_MetaData) }; // 2954336686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_KeyDirectionDelegate = { "KeyDirectionDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, KeyDirectionDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyDirectionDelegate_MetaData), NewProp_KeyDirectionDelegate_MetaData) }; // 3849497204
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonAbilityConfigured = { "PokemonAbilityConfigured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonAbilityConfigured), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonAbilityConfigured_MetaData), NewProp_PokemonAbilityConfigured_MetaData) }; // 118471024
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPowerPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxPowerPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonUI_InfoDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonInfoDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPartyChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPokemonActiveChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUILeftDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUIRightDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_SwapSlotModesDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonActivatedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_KeyDirectionDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonAbilityConfigured,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::PropPointers) < 2048);
// ********** End Class UTrainerOverlayWidgetController Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::ClassParams = {
	&UTrainerOverlayWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::Class_MetaDataParams)
};
void UTrainerOverlayWidgetController::StaticRegisterNativesUTrainerOverlayWidgetController()
{
}
UClass* Z_Construct_UClass_UTrainerOverlayWidgetController()
{
	if (!Z_Registration_Info_UClass_UTrainerOverlayWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainerOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainerOverlayWidgetController.OuterSingleton;
}
UTrainerOverlayWidgetController::UTrainerOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrainerOverlayWidgetController);
UTrainerOverlayWidgetController::~UTrainerOverlayWidgetController() {}
// ********** End Class UTrainerOverlayWidgetController ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainerOverlayWidgetController, UTrainerOverlayWidgetController::StaticClass, TEXT("UTrainerOverlayWidgetController"), &Z_Registration_Info_UClass_UTrainerOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainerOverlayWidgetController), 1569854946U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h__Script_ProjectMimikyu_1923718201{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
