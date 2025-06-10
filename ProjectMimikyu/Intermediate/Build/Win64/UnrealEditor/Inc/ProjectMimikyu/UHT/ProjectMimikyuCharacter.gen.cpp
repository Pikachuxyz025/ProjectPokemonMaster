// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Characters/ProjectMimikyuCharacter.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectMimikyuCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnPartyUpdated_Parms
		{
			TArray<APokemon_Parent*> PokemonParty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonParty_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonParty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty_Inner = { "PokemonParty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty = { "PokemonParty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPartyUpdated_Parms, PokemonParty), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::NewProp_PokemonParty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPartyUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPartyUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPartyUpdated__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnTargetRegistered_Parms
		{
			AActor* CombatTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnTargetRegistered_Parms, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::NewProp_CombatTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPokemonHealthUpdated);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnTargetRegistered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTargetRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTargetRegistered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnTargetRegistered__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnPokemonSentOut_Parms
		{
			AActor* NewPokemon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPokemon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::NewProp_NewPokemon = { "NewPokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnPokemonSentOut_Parms, NewPokemon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::NewProp_NewPokemon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnPokemonSentOut__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonSentOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnPokemonSentOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnPokemonSentOut__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerSetPokemon)
	{
		P_GET_OBJECT(APokemon_Parent,Z_Param_LeadPokemon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPokemon_Implementation(Z_Param_LeadPokemon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerBroadcastTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBroadcastTarget_Implementation(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerCallCommand)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCallCommand_Implementation(Z_Param_i);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectMimikyuCharacter::execServerAddToCurrentParty)
	{
		P_GET_OBJECT(AActor,Z_Param_AddedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddToCurrentParty_Implementation(Z_Param_AddedActor);
		P_NATIVE_END;
	}
	struct ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms
	{
		AActor* AddedActor;
	};
	struct ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms
	{
		AActor* Target;
	};
	struct ProjectMimikyuCharacter_eventServerCallCommand_Parms
	{
		int32 i;
	};
	struct ProjectMimikyuCharacter_eventServerSetPokemon_Parms
	{
		APokemon_Parent* LeadPokemon;
	};
	static FName NAME_AProjectMimikyuCharacter_ServerAddToCurrentParty = FName(TEXT("ServerAddToCurrentParty"));
	void AProjectMimikyuCharacter::ServerAddToCurrentParty(AActor* AddedActor)
	{
		ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms Parms;
		Parms.AddedActor=AddedActor;
		ProcessEvent(FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerAddToCurrentParty),&Parms);
	}
	static FName NAME_AProjectMimikyuCharacter_ServerBroadcastTarget = FName(TEXT("ServerBroadcastTarget"));
	void AProjectMimikyuCharacter::ServerBroadcastTarget(AActor* Target)
	{
		ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerBroadcastTarget),&Parms);
	}
	static FName NAME_AProjectMimikyuCharacter_ServerCallCommand = FName(TEXT("ServerCallCommand"));
	void AProjectMimikyuCharacter::ServerCallCommand(int32 const& i)
	{
		ProjectMimikyuCharacter_eventServerCallCommand_Parms Parms;
		Parms.i=i;
		ProcessEvent(FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerCallCommand),&Parms);
	}
	static FName NAME_AProjectMimikyuCharacter_ServerSetPokemon = FName(TEXT("ServerSetPokemon"));
	void AProjectMimikyuCharacter::ServerSetPokemon(APokemon_Parent* LeadPokemon)
	{
		ProjectMimikyuCharacter_eventServerSetPokemon_Parms Parms;
		Parms.LeadPokemon=LeadPokemon;
		ProcessEvent(FindFunctionChecked(NAME_AProjectMimikyuCharacter_ServerSetPokemon),&Parms);
	}
	void AProjectMimikyuCharacter::StaticRegisterNativesAProjectMimikyuCharacter()
	{
		UClass* Class = AProjectMimikyuCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerAddToCurrentParty", &AProjectMimikyuCharacter::execServerAddToCurrentParty },
			{ "ServerBroadcastTarget", &AProjectMimikyuCharacter::execServerBroadcastTarget },
			{ "ServerCallCommand", &AProjectMimikyuCharacter::execServerCallCommand },
			{ "ServerSetPokemon", &AProjectMimikyuCharacter::execServerSetPokemon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::NewProp_AddedActor = { "AddedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms, AddedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::NewProp_AddedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerAddToCurrentParty", nullptr, nullptr, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers), sizeof(ProjectMimikyuCharacter_eventServerAddToCurrentParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerBroadcastTarget", nullptr, nullptr, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers), sizeof(ProjectMimikyuCharacter_eventServerBroadcastTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_i_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_i;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::NewProp_i_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerCallCommand_Parms, i), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::NewProp_i_MetaData), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::NewProp_i_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::NewProp_i,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerCallCommand", nullptr, nullptr, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers), sizeof(ProjectMimikyuCharacter_eventServerCallCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeadPokemon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::NewProp_LeadPokemon = { "LeadPokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuCharacter_eventServerSetPokemon_Parms, LeadPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::NewProp_LeadPokemon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuCharacter, nullptr, "ServerSetPokemon", nullptr, nullptr, Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers), sizeof(ProjectMimikyuCharacter_eventServerSetPokemon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectMimikyuCharacter);
	UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister()
	{
		return AProjectMimikyuCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProjectMimikyuCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Pickup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Pickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Throw_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Throw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_ThrowPokeball_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ThrowPokeball;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Engage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Engage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Command_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Command;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPokemon_MetaData[];
#endif
		static void NewProp_bHasPokemon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPokemon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokemon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPokemon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentParty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentParty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentParty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DodgeAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrainerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrainerPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PokemonASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CatchingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CatchingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngagedTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EngagedTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThrowableItem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentThrowableItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPokemonIsOut_MetaData[];
#endif
		static void NewProp_bPokemonIsOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPokemonIsOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAreMovesSelectable_MetaData[];
#endif
		static void NewProp_bAreMovesSelectable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreMovesSelectable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionKeyBind_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionKeyBind_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectionKeyBind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectMimikyuCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectMimikyuCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerAddToCurrentParty, "ServerAddToCurrentParty" }, // 3532245454
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerBroadcastTarget, "ServerBroadcastTarget" }, // 1619826760
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerCallCommand, "ServerCallCommand" }, // 962612258
		{ &Z_Construct_UFunction_AProjectMimikyuCharacter_ServerSetPokemon, "ServerSetPokemon" }, // 2495808002
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/ProjectMimikyuCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_JumpAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_MoveAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_LookAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Pickup_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Pickup = { "IA_Pickup", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Pickup), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Pickup_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Pickup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Throw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Throw = { "IA_Throw", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Throw), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Throw_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Throw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_ThrowPokeball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_ThrowPokeball = { "IA_ThrowPokeball", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_ThrowPokeball), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_ThrowPokeball_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_ThrowPokeball_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Engage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Engage = { "IA_Engage", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Engage), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Engage_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Engage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Command_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Command = { "IA_Command", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, IA_Command), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Command_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_IA_Command_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon_SetBit(void* Obj)
	{
		((AProjectMimikyuCharacter*)Obj)->bHasPokemon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon = { "bHasPokemon", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectMimikyuCharacter), &Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bHasPokemon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentPokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentPokemon = { "CurrentPokemon", nullptr, (EPropertyFlags)0x0040000000020021, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CurrentPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentPokemon_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentPokemon_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty_Inner = { "CurrentParty", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty = { "CurrentParty", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CurrentParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentParty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DodgeAbility_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DodgeAbility = { "DodgeAbility", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, DodgeAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DodgeAbility_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DodgeAbility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(Replicated)\n//FPokemonParty CurrentSParty;\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(Replicated)\nFPokemonParty CurrentSParty;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerController = { "TrainerController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, TrainerController), Z_Construct_UClass_ATrainerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerController_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerPlayerState = { "TrainerPlayerState", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, TrainerPlayerState), Z_Construct_UClass_ATrainerPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerPlayerState_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_TrainerPlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_PokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_PokemonASC = { "PokemonASC", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, PokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_PokemonASC_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_PokemonASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InventorySystem_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InventorySystem = { "InventorySystem", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, InventorySystem), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InventorySystem_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InventorySystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CatchingDistance_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CatchingDistance = { "CatchingDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CatchingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CatchingDistance_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CatchingDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_OverlappingItem_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_OverlappingItem = { "OverlappingItem", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, OverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_OverlappingItem_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_OverlappingItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_EngagedTarget_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_EngagedTarget = { "EngagedTarget", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, EngagedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_EngagedTarget_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_EngagedTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentThrowableItem_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentThrowableItem = { "CurrentThrowableItem", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, CurrentThrowableItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentThrowableItem_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_CurrentThrowableItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut_SetBit(void* Obj)
	{
		((AProjectMimikyuCharacter*)Obj)->bPokemonIsOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut = { "bPokemonIsOut", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectMimikyuCharacter), &Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bPokemonIsOut_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable_SetBit(void* Obj)
	{
		((AProjectMimikyuCharacter*)Obj)->bAreMovesSelectable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable = { "bAreMovesSelectable", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectMimikyuCharacter), &Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_bAreMovesSelectable_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind_Inner = { "DirectionKeyBind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind_MetaData[] = {
		{ "Category", "ProjectMimikyuCharacter" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind = { "DirectionKeyBind", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, DirectionKeyBind), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_DirectionKeyBind_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/ProjectMimikyuCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuCharacter, InputConfig), Z_Construct_UClass_UPokemonInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InputConfig_MetaData), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::NewProp_InputConfig_MetaData) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectMimikyuCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectMimikyuCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectMimikyuCharacter_Statics::ClassParams = {
		&AProjectMimikyuCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectMimikyuCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectMimikyuCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProjectMimikyuCharacter()
	{
		if (!Z_Registration_Info_UClass_AProjectMimikyuCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectMimikyuCharacter.OuterSingleton, Z_Construct_UClass_AProjectMimikyuCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectMimikyuCharacter.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<AProjectMimikyuCharacter>()
	{
		return AProjectMimikyuCharacter::StaticClass();
	}

	void AProjectMimikyuCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentPokemon(TEXT("CurrentPokemon"));

		const bool bIsValid = true
			&& Name_CurrentPokemon == ClassReps[(int32)ENetFields_Private::CurrentPokemon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AProjectMimikyuCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectMimikyuCharacter);
	AProjectMimikyuCharacter::~AProjectMimikyuCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectMimikyuCharacter, AProjectMimikyuCharacter::StaticClass, TEXT("AProjectMimikyuCharacter"), &Z_Registration_Info_UClass_AProjectMimikyuCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectMimikyuCharacter), 1394632801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_3639996556(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_ProjectMimikyuCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
