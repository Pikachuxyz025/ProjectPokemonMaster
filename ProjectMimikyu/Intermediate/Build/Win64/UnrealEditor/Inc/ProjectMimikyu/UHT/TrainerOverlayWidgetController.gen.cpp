// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/WidgetController/TrainerOverlayWidgetController.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainerOverlayWidgetController() {}
// Cross Module References
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms
		{
			float NewHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnHealthChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnHealthChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms
		{
			float NewMaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnMaxHealthChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnMaxHealthChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms
		{
			FPokemonUIInfo Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FPokemonUIInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 2226701393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "PokemonUIInfoSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonUIInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventPokemonInfoSignature_Parms
		{
			TArray<FPokemonInfo> Info;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info_Inner = { "Info", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 1826758845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokemonInfoSignature_Parms, Info), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 1826758845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "PokemonInfoSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms
		{
			TArray<APokemon_Parent*> PokemonParty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonParty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonParty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonParty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty_Inner = { "PokemonParty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty = { "PokemonParty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms, PokemonParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty_MetaData), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::NewProp_PokemonParty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Party UI On Party Changed Signature\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Party UI On Party Changed Signature" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPartyChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms
		{
			APokemon_Parent* NewActivePokemon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActivePokemon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::NewProp_NewActivePokemon = { "NewActivePokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms, NewActivePokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::NewProp_NewActivePokemon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPokemonActiveSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonActiveSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnEventActivatedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEventActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEventActivatedSignature)
{
	OnEventActivatedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms
		{
			UAbilitySystemComponent* ASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::NewProp_ASC_MetaData), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::NewProp_ASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "PokemonAbilityConfigured__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokemonAbilityConfigured_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnKeyInputSignature_Parms
		{
			EDirectionPoint KeyDirection;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection = { "KeyDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnKeyInputSignature_Parms, KeyDirection), Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection_MetaData), Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection_MetaData) }; // 493927155
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::NewProp_KeyDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show Key Sequence With Signature\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show Key Sequence With Signature" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnKeyInputSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnKeyInputSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnKeyInputSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature_Statics::FuncParams);
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
	void UTrainerOverlayWidgetController::StaticRegisterNativesUTrainerOverlayWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrainerOverlayWidgetController);
	UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister()
	{
		return UTrainerOverlayWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UTrainerOverlayWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPowerPointsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPowerPointsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxPowerPointsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxPowerPointsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonUI_InfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonUI_InfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPartyChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPokemonActiveChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPokemonActiveChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShiftUILeftDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShiftUILeftDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShiftUIRightDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShiftUIRightDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapSlotModesDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SwapSlotModesDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonActivatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonActivatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirectionDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_KeyDirectionDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAbilityConfigured_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PokemonAbilityConfigured;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPokemonWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/WidgetController/TrainerOverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData) }; // 2204456126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 2204456126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPowerPointsChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPowerPointsChanged = { "OnPowerPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnPowerPointsChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPowerPointsChanged_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPowerPointsChanged_MetaData) }; // 2204456126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxPowerPointsChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxPowerPointsChanged = { "OnMaxPowerPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnMaxPowerPointsChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxPowerPointsChanged_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnMaxPowerPointsChanged_MetaData) }; // 2204456126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonUI_InfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonUI_InfoDelegate = { "PokemonUI_InfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonUI_InfoDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonUIInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonUI_InfoDelegate_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonUI_InfoDelegate_MetaData) }; // 3723013290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonInfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonInfoDelegate = { "PokemonInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonInfoDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonInfoDelegate_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonInfoDelegate_MetaData) }; // 2593055780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPartyChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPartyChanged = { "OnPartyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnPartyChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPartyChanged_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPartyChanged_MetaData) }; // 1863775839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPokemonActiveChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPokemonActiveChanged = { "OnPokemonActiveChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, OnPokemonActiveChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonActiveSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPokemonActiveChanged_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnPokemonActiveChanged_MetaData) }; // 3245568096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUILeftDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUILeftDelegate = { "ShiftUILeftDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, ShiftUILeftDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUILeftDelegate_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUILeftDelegate_MetaData) }; // 724493228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUIRightDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUIRightDelegate = { "ShiftUIRightDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, ShiftUIRightDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUIRightDelegate_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_ShiftUIRightDelegate_MetaData) }; // 724493228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_SwapSlotModesDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_SwapSlotModesDelegate = { "SwapSlotModesDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, SwapSlotModesDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_SwapSlotModesDelegate_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_SwapSlotModesDelegate_MetaData) }; // 724493228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonActivatedDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonActivatedDelegate = { "PokemonActivatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonActivatedDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnEventActivatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonActivatedDelegate_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonActivatedDelegate_MetaData) }; // 724493228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_KeyDirectionDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_KeyDirectionDelegate = { "KeyDirectionDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, KeyDirectionDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_OnKeyInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_KeyDirectionDelegate_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_KeyDirectionDelegate_MetaData) }; // 4226886314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonAbilityConfigured_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/TrainerOverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonAbilityConfigured = { "PokemonAbilityConfigured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlayWidgetController, PokemonAbilityConfigured), Z_Construct_UDelegateFunction_ProjectMimikyu_PokemonAbilityConfigured__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonAbilityConfigured_MetaData), Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_PokemonAbilityConfigured_MetaData) }; // 869659543
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::NewProp_OnHealthChanged,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainerOverlayWidgetController>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTrainerOverlayWidgetController()
	{
		if (!Z_Registration_Info_UClass_UTrainerOverlayWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainerOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UTrainerOverlayWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrainerOverlayWidgetController.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UTrainerOverlayWidgetController>()
	{
		return UTrainerOverlayWidgetController::StaticClass();
	}
	UTrainerOverlayWidgetController::UTrainerOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrainerOverlayWidgetController);
	UTrainerOverlayWidgetController::~UTrainerOverlayWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrainerOverlayWidgetController, UTrainerOverlayWidgetController::StaticClass, TEXT("UTrainerOverlayWidgetController"), &Z_Registration_Info_UClass_UTrainerOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainerOverlayWidgetController), 3538781499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_3252582640(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_TrainerOverlayWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
