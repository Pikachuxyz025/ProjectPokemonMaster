// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Characters/Pokemon_Parent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemon_Parent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
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
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EGenderType();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ENatureType();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonUIInfo();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnAttackEnd__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnAttackEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttackEnd_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnd)
{
	OnAttackEnd.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnDodgeEnd__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDodgeEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDodgeEnd)
{
	OnDodgeEnd.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnCharging__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCharging_DelegateWrapper(const FMulticastScriptDelegate& OnCharging)
{
	OnCharging.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(APokemon_Parent::execServerSetTrainer)
	{
		P_GET_OBJECT(AActor,Z_Param_NewTrainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetTrainer_Implementation(Z_Param_NewTrainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetDodgeDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDodgeDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetPokemonAS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPokemonBaseAttributeSet**)Z_Param__Result=P_THIS->GetPokemonAS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetPokemonASC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPokemonAbilitySystemComponent**)Z_Param__Result=P_THIS->GetPokemonASC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetAttributeSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributeSet**)Z_Param__Result=P_THIS->GetAttributeSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetPokemonController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APokemonAIController**)Z_Param__Result=P_THIS->GetPokemonController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetPokemonUIInfo)
	{
		P_GET_UBOOL(Z_Param_bNeedsSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPokemonUIInfo*)Z_Param__Result=P_THIS->GetPokemonUIInfo(Z_Param_bNeedsSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execSetIsDodging)
	{
		P_GET_UBOOL(Z_Param_Dodging);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsDodging(Z_Param_Dodging);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execSelectRandomMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectRandomMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execGetReadyForCombat)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetReadyForCombat(Z_Param_Target);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(APokemon_Parent::execEndDodge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndDodge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APokemon_Parent::execAttackEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEnded();
		P_NATIVE_END;
	}
	struct Pokemon_Parent_eventServerSetTrainer_Parms
	{
		AActor* NewTrainer;
	};
	struct Pokemon_Parent_eventStartDissolveTimeline_Parms
	{
		UMaterialInstanceDynamic* DynamicMaterialInstance;
	};
	struct Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms
	{
		UMaterialInstanceDynamic* DynamicMaterialInstance;
	};
	static FName NAME_APokemon_Parent_ServerSetTrainer = FName(TEXT("ServerSetTrainer"));
	void APokemon_Parent::ServerSetTrainer(AActor* NewTrainer)
	{
		Pokemon_Parent_eventServerSetTrainer_Parms Parms;
		Parms.NewTrainer=NewTrainer;
		ProcessEvent(FindFunctionChecked(NAME_APokemon_Parent_ServerSetTrainer),&Parms);
	}
	static FName NAME_APokemon_Parent_StartDissolveTimeline = FName(TEXT("StartDissolveTimeline"));
	void APokemon_Parent::StartDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance)
	{
		Pokemon_Parent_eventStartDissolveTimeline_Parms Parms;
		Parms.DynamicMaterialInstance=DynamicMaterialInstance;
		ProcessEvent(FindFunctionChecked(NAME_APokemon_Parent_StartDissolveTimeline),&Parms);
	}
	static FName NAME_APokemon_Parent_StartWeaponDissolveTimeline = FName(TEXT("StartWeaponDissolveTimeline"));
	void APokemon_Parent::StartWeaponDissolveTimeline(UMaterialInstanceDynamic* DynamicMaterialInstance)
	{
		Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms Parms;
		Parms.DynamicMaterialInstance=DynamicMaterialInstance;
		ProcessEvent(FindFunctionChecked(NAME_APokemon_Parent_StartWeaponDissolveTimeline),&Parms);
	}
	void APokemon_Parent::StaticRegisterNativesAPokemon_Parent()
	{
		UClass* Class = APokemon_Parent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackEnded", &APokemon_Parent::execAttackEnded },
			{ "EndDodge", &APokemon_Parent::execEndDodge },
			{ "GetAbilitySystemComponent", &APokemon_Parent::execGetAbilitySystemComponent },
			{ "GetAttributeSet", &APokemon_Parent::execGetAttributeSet },
			{ "GetDodgeDirection", &APokemon_Parent::execGetDodgeDirection },
			{ "GetPokemonAS", &APokemon_Parent::execGetPokemonAS },
			{ "GetPokemonASC", &APokemon_Parent::execGetPokemonASC },
			{ "GetPokemonController", &APokemon_Parent::execGetPokemonController },
			{ "GetPokemonUIInfo", &APokemon_Parent::execGetPokemonUIInfo },
			{ "GetReadyForCombat", &APokemon_Parent::execGetReadyForCombat },
			{ "SelectRandomMove", &APokemon_Parent::execSelectRandomMove },
			{ "ServerSetTrainer", &APokemon_Parent::execServerSetTrainer },
			{ "SetIsDodging", &APokemon_Parent::execSetIsDodging },
			{ "SetMovementSpeed", &APokemon_Parent::execSetMovementSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "AttackEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APokemon_Parent_AttackEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_AttackEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "EndDodge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APokemon_Parent_EndDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_EndDodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics
	{
		struct Pokemon_Parent_eventGetAbilitySystemComponent_Parms
		{
			UAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Pokemon_Parent_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics
	{
		struct Pokemon_Parent_eventGetAttributeSet_Parms
		{
			UAttributeSet* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetAttributeSet_Parms, ReturnValue), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetAttributeSet", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Pokemon_Parent_eventGetAttributeSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetAttributeSet_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics
	{
		struct Pokemon_Parent_eventGetDodgeDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetDodgeDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetDodgeDirection", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Pokemon_Parent_eventGetDodgeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics
	{
		struct Pokemon_Parent_eventGetPokemonAS_Parms
		{
			UPokemonBaseAttributeSet* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonAS_Parms, ReturnValue), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonAS", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Pokemon_Parent_eventGetPokemonAS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonAS_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics
	{
		struct Pokemon_Parent_eventGetPokemonASC_Parms
		{
			UPokemonAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonASC_Parms, ReturnValue), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonASC", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Pokemon_Parent_eventGetPokemonASC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonASC_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics
	{
		struct Pokemon_Parent_eventGetPokemonController_Parms
		{
			APokemonAIController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonController_Parms, ReturnValue), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonController", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Pokemon_Parent_eventGetPokemonController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonController_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics
	{
		struct Pokemon_Parent_eventGetPokemonUIInfo_Parms
		{
			bool bNeedsSetup;
			FPokemonUIInfo ReturnValue;
		};
		static void NewProp_bNeedsSetup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsSetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup_SetBit(void* Obj)
	{
		((Pokemon_Parent_eventGetPokemonUIInfo_Parms*)Obj)->bNeedsSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup = { "bNeedsSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventGetPokemonUIInfo_Parms), &Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetPokemonUIInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FPokemonUIInfo, METADATA_PARAMS(0, nullptr) }; // 2226701393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_bNeedsSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetPokemonUIInfo", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Pokemon_Parent_eventGetPokemonUIInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics
	{
		struct Pokemon_Parent_eventGetReadyForCombat_Parms
		{
			AActor* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventGetReadyForCombat_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "GetReadyForCombat", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Pokemon_Parent_eventGetReadyForCombat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "SelectRandomMove", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APokemon_Parent_SelectRandomMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_SelectRandomMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTrainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::NewProp_NewTrainer = { "NewTrainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventServerSetTrainer_Parms, NewTrainer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::NewProp_NewTrainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "ServerSetTrainer", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::PropPointers), sizeof(Pokemon_Parent_eventServerSetTrainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Pokemon_Parent_eventServerSetTrainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics
	{
		struct Pokemon_Parent_eventSetIsDodging_Parms
		{
			bool Dodging;
		};
		static void NewProp_Dodging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Dodging;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging_SetBit(void* Obj)
	{
		((Pokemon_Parent_eventSetIsDodging_Parms*)Obj)->Dodging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging = { "Dodging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pokemon_Parent_eventSetIsDodging_Parms), &Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::NewProp_Dodging,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "SetIsDodging", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Pokemon_Parent_eventSetIsDodging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetIsDodging_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics
	{
		struct Pokemon_Parent_eventSetMovementSpeed_Parms
		{
			EMovementSpeed NewMovementSpeed;
			float MoveMultiplier;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementSpeed_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovementSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed = { "NewMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventSetMovementSpeed_Parms, NewMovementSpeed), Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed, METADATA_PARAMS(0, nullptr) }; // 3314933686
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_MoveMultiplier = { "MoveMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventSetMovementSpeed_Parms, MoveMultiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_NewMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::NewProp_MoveMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_MoveMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "SetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Pokemon_Parent_eventSetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventStartDissolveTimeline_Parms, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::NewProp_DynamicMaterialInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "StartDissolveTimeline", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers), sizeof(Pokemon_Parent_eventStartDissolveTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::NewProp_DynamicMaterialInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APokemon_Parent, nullptr, "StartWeaponDissolveTimeline", nullptr, nullptr, Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers), sizeof(Pokemon_Parent_eventStartWeaponDissolveTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APokemon_Parent);
	UClass* Z_Construct_UClass_APokemon_Parent_NoRegister()
	{
		return APokemon_Parent::StaticClass();
	}
	struct Z_Construct_UClass_APokemon_Parent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCharging_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDodgeEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDodgeEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PokemonASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PokemonAS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStatAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultStatAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependentStatAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DependentStatAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRecoveryEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StaminaRecoveryEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStatHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStatHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDependentStatHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDependentStatHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicDissolveMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReturnMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovesetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTrainer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PokemonStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PokemonStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePokemonMove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePokemonMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPointTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPointTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MultiplierMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffortLevelBaseMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffortLevelBaseMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffortLevelBaseMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EffortLevelBaseMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeResponse_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeResponse_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeResponse_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TypeResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeChartDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeChartDataTable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Nature_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nature_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Nature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentXP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingMove_MetaData[];
#endif
		static void NewProp_bIsUsingMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MeleeSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TailSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TailSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCaught_MetaData[];
#endif
		static void NewProp_bIsCaught_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCaught;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APokemon_Parent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APokemon_Parent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APokemon_Parent_AttackEnded, "AttackEnded" }, // 3667749253
		{ &Z_Construct_UFunction_APokemon_Parent_EndDodge, "EndDodge" }, // 1949757815
		{ &Z_Construct_UFunction_APokemon_Parent_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 1075066794
		{ &Z_Construct_UFunction_APokemon_Parent_GetAttributeSet, "GetAttributeSet" }, // 3866452885
		{ &Z_Construct_UFunction_APokemon_Parent_GetDodgeDirection, "GetDodgeDirection" }, // 3244779473
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonAS, "GetPokemonAS" }, // 1616158781
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonASC, "GetPokemonASC" }, // 3059740
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonController, "GetPokemonController" }, // 3231827838
		{ &Z_Construct_UFunction_APokemon_Parent_GetPokemonUIInfo, "GetPokemonUIInfo" }, // 637606191
		{ &Z_Construct_UFunction_APokemon_Parent_GetReadyForCombat, "GetReadyForCombat" }, // 3701763976
		{ &Z_Construct_UFunction_APokemon_Parent_SelectRandomMove, "SelectRandomMove" }, // 2109357777
		{ &Z_Construct_UFunction_APokemon_Parent_ServerSetTrainer, "ServerSetTrainer" }, // 3240261003
		{ &Z_Construct_UFunction_APokemon_Parent_SetIsDodging, "SetIsDodging" }, // 1874459605
		{ &Z_Construct_UFunction_APokemon_Parent_SetMovementSpeed, "SetMovementSpeed" }, // 2156865540
		{ &Z_Construct_UFunction_APokemon_Parent_StartDissolveTimeline, "StartDissolveTimeline" }, // 781955584
		{ &Z_Construct_UFunction_APokemon_Parent_StartWeaponDissolveTimeline, "StartWeaponDissolveTimeline" }, // 4060990198
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Pokemon_Parent.h" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnCharging_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnCharging = { "OnCharging", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, OnCharging), Z_Construct_UDelegateFunction_ProjectMimikyu_OnCharging__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnCharging_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnCharging_MetaData) }; // 4194258783
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnDodgeEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnDodgeEnd = { "OnDodgeEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, OnDodgeEnd), Z_Construct_UDelegateFunction_ProjectMimikyu_OnDodgeEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnDodgeEnd_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnDodgeEnd_MetaData) }; // 4123327999
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonController_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonController_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AIBehaviorTree_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AIBehaviorTree = { "AIBehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AIBehaviorTree_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AIBehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonASC = { "PokemonASC", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonASC_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonAS_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonAS = { "PokemonAS", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonAS), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonAS_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonAS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DefaultStatAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DefaultStatAttributes = { "DefaultStatAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, DefaultStatAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DefaultStatAttributes_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DefaultStatAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DependentStatAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DependentStatAttributes = { "DependentStatAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, DependentStatAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DependentStatAttributes_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DependentStatAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StaminaRecoveryEffect_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StaminaRecoveryEffect = { "StaminaRecoveryEffect", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, StaminaRecoveryEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StaminaRecoveryEffect_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StaminaRecoveryEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentStatHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentStatHandle = { "CurrentStatHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentStatHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentStatHandle_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentStatHandle_MetaData) }; // 179499981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentDependentStatHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentDependentStatHandle = { "CurrentDependentStatHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentDependentStatHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentDependentStatHandle_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentDependentStatHandle_MetaData) }; // 179499981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic instance that we can change at runtime\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic instance that we can change at runtime" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DynamicDissolveMaterialInstance = { "DynamicDissolveMaterialInstance", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, DynamicDissolveMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ReturnMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material instance set on the Blueprint, used with the dynamic material instance\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material instance set on the Blueprint, used with the dynamic material instance" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ReturnMaterialInstance = { "ReturnMaterialInstance", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, ReturnMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ReturnMaterialInstance_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ReturnMaterialInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonDataAsset_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonDataAsset = { "PokemonDataAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonDataAsset), Z_Construct_UClass_UPokemonDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonDataAsset_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MovesetComponent_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MovesetComponent = { "MovesetComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, MovesetComponent), Z_Construct_UClass_UMovesetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MovesetComponent_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MovesetComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentTrainer_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual void ChargeIn();\n//virtual void FireAt();\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void ChargeIn();\nvirtual void FireAt();" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentTrainer = { "CurrentTrainer", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentTrainer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentTrainer_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentTrainer_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION()\n//void OnRep_CurrentTrainer();\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\nvoid OnRep_CurrentTrainer();" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus = { "PokemonStatus", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, PokemonStatus), Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonStatus_MetaData) }; // 683156905
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ActivePokemonMove_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ActivePokemonMove = { "ActivePokemonMove", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, ActivePokemonMove), Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ActivePokemonMove_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ActivePokemonMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_SpawnPointTag_MetaData[] = {
		{ "Categories", "SpawnPoint" },
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_SpawnPointTag = { "SpawnPointTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, SpawnPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_SpawnPointTag_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_SpawnPointTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_ValueProp = { "MultiplierMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_Key_KeyProp = { "MultiplierMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap = { "MultiplierMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, MultiplierMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MultiplierMap_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_ValueProp = { "EffortLevelBaseMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_Key_KeyProp = { "EffortLevelBaseMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap = { "EffortLevelBaseMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, EffortLevelBaseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_EffortLevelBaseMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_ValueProp = { "TypeResponse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_Key_KeyProp = { "TypeResponse_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(0, nullptr) }; // 3798297509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse = { "TypeResponse", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, TypeResponse), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeResponse_MetaData) }; // 3798297509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeChartDataTable_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeChartDataTable = { "TypeChartDataTable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, TypeChartDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeChartDataTable_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TypeChartDataTable_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, Gender), Z_Construct_UEnum_ProjectMimikyu_EGenderType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Gender_MetaData) }; // 1104621053
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature = { "Nature", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, Nature), Z_Construct_UEnum_ProjectMimikyu_ENatureType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_Nature_MetaData) }; // 588008713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentLevel_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentXP_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentXP_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_CurrentXP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove_MetaData[] = {
		{ "Category", "Pokemon_Parent" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	void Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove_SetBit(void* Obj)
	{
		((APokemon_Parent*)Obj)->bIsUsingMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove = { "bIsUsingMove", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokemon_Parent), &Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsUsingMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_WalkingSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, WalkingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_WalkingSpeed_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_WalkingSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RunningSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, RunningSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RunningSpeed_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RunningSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ProjectileSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere, Category = \"Components\")\n//USceneComponent* BoxTraceEnd;\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Components\")\nUSceneComponent* BoxTraceEnd;" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ProjectileSocketName = { "ProjectileSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, ProjectileSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ProjectileSocketName_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ProjectileSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MeleeSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MeleeSocketName = { "MeleeSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, MeleeSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MeleeSocketName_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MeleeSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TailSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TailSocketName = { "TailSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, TailSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TailSocketName_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TailSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, LeftHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_LeftHandSocketName_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_LeftHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "Combat Socket" },
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemon_Parent, RightHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RightHandSocketName_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RightHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Pokemon_Parent.h" },
	};
#endif
	void Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught_SetBit(void* Obj)
	{
		((APokemon_Parent*)Obj)->bIsCaught = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught = { "bIsCaught", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokemon_Parent), &Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught_MetaData), Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokemon_Parent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnCharging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_OnDodgeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AIBehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_PokemonAS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DefaultStatAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_DependentStatAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_StaminaRecoveryEffect,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_WalkingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RunningSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_ProjectileSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_MeleeSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_TailSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_LeftHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_RightHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemon_Parent_Statics::NewProp_bIsCaught,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APokemon_Parent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageInterface_NoRegister, (int32)VTABLE_OFFSET(APokemon_Parent, IDamageInterface), false },  // 632616990
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APokemon_Parent, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UPokemonCombatInterface_NoRegister, (int32)VTABLE_OFFSET(APokemon_Parent, IPokemonCombatInterface), false },  // 3881303510
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_APokemon_Parent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokemon_Parent>::IsAbstract,
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemon_Parent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APokemon_Parent()
	{
		if (!Z_Registration_Info_UClass_APokemon_Parent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokemon_Parent.OuterSingleton, Z_Construct_UClass_APokemon_Parent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APokemon_Parent.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<APokemon_Parent>()
	{
		return APokemon_Parent::StaticClass();
	}

	void APokemon_Parent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentTrainer(TEXT("CurrentTrainer"));
		static const FName Name_PokemonStatus(TEXT("PokemonStatus"));
		static const FName Name_bIsCaught(TEXT("bIsCaught"));

		const bool bIsValid = true
			&& Name_CurrentTrainer == ClassReps[(int32)ENetFields_Private::CurrentTrainer].Property->GetFName()
			&& Name_PokemonStatus == ClassReps[(int32)ENetFields_Private::PokemonStatus].Property->GetFName()
			&& Name_bIsCaught == ClassReps[(int32)ENetFields_Private::bIsCaught].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APokemon_Parent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APokemon_Parent);
	APokemon_Parent::~APokemon_Parent() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APokemon_Parent, APokemon_Parent::StaticClass, TEXT("APokemon_Parent"), &Z_Registration_Info_UClass_APokemon_Parent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokemon_Parent), 1433817248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_746836507(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Characters_Pokemon_Parent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
