// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
#include "ProjectMimikyu/Public/PokemonAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonAbilitySystemLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonTypeInfo();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetTypeMultiplier)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTypeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetTypeMultiplier(Z_Param_Out_EffectContextHandle,Z_Param_InTypeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDamageType)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InDamageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetDamageType(Z_Param_Out_EffectContextHandle,Z_Param_Out_InDamageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetKnockbackForce)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InKnockback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetKnockbackForce(Z_Param_Out_EffectContextHandle,Z_Param_Out_InKnockback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDeathImpulse)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDeathImpulse);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetDeathImpulse(Z_Param_Out_EffectContextHandle,Z_Param_Out_InDeathImpulse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDebuffFrequency)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDebuffFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetDebuffFrequency(Z_Param_Out_EffectContextHandle,Z_Param_InDebuffFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDebuffDuration)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDebuffDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetDebuffDuration(Z_Param_Out_EffectContextHandle,Z_Param_InDebuffDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetDebuffDamage)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDebuffDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetDebuffDamage(Z_Param_Out_EffectContextHandle,Z_Param_InDebuffDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetIsSuccessfulDebuff)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsSuccessfulDebuff);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetIsSuccessfulDebuff(Z_Param_Out_EffectContextHandle,Z_Param_bInIsSuccessfulDebuff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsCriticalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetIsCriticalHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsCriticalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execSetIsBlockedHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsBlockedHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::SetIsBlockedHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsBlockedHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDamageType)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDamageType(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetKnockbackForce)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetKnockbackForce(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDeathImpulse)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDeathImpulse(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDebuffFrequency)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDebuffFrequency(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDebuffDuration)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDebuffDuration(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetDebuffDamage)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetDebuffDamage(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execIsSuccessfulDebuff)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPokemonAbilitySystemLibrary::IsSuccessfulDebuff(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPokemonAbilitySystemLibrary::IsCriticalHit(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execIsBlockedHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPokemonAbilitySystemLibrary::IsBlockedHit(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetSavedTypeMatchup)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetSavedTypeMatchup(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetTypeMatchup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EElementalType,Z_Param_AttackingType);
		P_GET_STRUCT_REF(FPokemonTypeInfo,Z_Param_Out_TargetPokemonTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPokemonAbilitySystemLibrary::GetTypeMatchup(Z_Param_WorldContextObject,EElementalType(Z_Param_AttackingType),Z_Param_Out_TargetPokemonTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execApplyDamageEffect)
	{
		P_GET_STRUCT_REF(FDamageEffectParams,Z_Param_Out_DamageEffectParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectContextHandle*)Z_Param__Result=UPokemonAbilitySystemLibrary::ApplyDamageEffect(Z_Param_Out_DamageEffectParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetTrainerOverlayWidgetController)
	{
		P_GET_OBJECT(AActor,Z_Param_ObjectActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrainerOverlayWidgetController**)Z_Param__Result=UPokemonAbilitySystemLibrary::GetTrainerOverlayWidgetController(Z_Param_ObjectActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execGetPokemonMenuWidgetController)
	{
		P_GET_OBJECT(AActor,Z_Param_ObjectActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPokemonMenuWidgetController**)Z_Param__Result=UPokemonAbilitySystemLibrary::GetPokemonMenuWidgetController(Z_Param_ObjectActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execActivateAbilityByTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPokemonAbilitySystemComponent,Z_Param_ASC);
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::ActivateAbilityByTag(Z_Param_WorldContextObject,Z_Param_ASC,Z_Param_AbilityTag);
		P_NATIVE_END;
	}
	void UPokemonAbilitySystemLibrary::StaticRegisterNativesUPokemonAbilitySystemLibrary()
	{
		UClass* Class = UPokemonAbilitySystemLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbilityByTag", &UPokemonAbilitySystemLibrary::execActivateAbilityByTag },
			{ "ApplyDamageEffect", &UPokemonAbilitySystemLibrary::execApplyDamageEffect },
			{ "GetDamageType", &UPokemonAbilitySystemLibrary::execGetDamageType },
			{ "GetDeathImpulse", &UPokemonAbilitySystemLibrary::execGetDeathImpulse },
			{ "GetDebuffDamage", &UPokemonAbilitySystemLibrary::execGetDebuffDamage },
			{ "GetDebuffDuration", &UPokemonAbilitySystemLibrary::execGetDebuffDuration },
			{ "GetDebuffFrequency", &UPokemonAbilitySystemLibrary::execGetDebuffFrequency },
			{ "GetKnockbackForce", &UPokemonAbilitySystemLibrary::execGetKnockbackForce },
			{ "GetPokemonMenuWidgetController", &UPokemonAbilitySystemLibrary::execGetPokemonMenuWidgetController },
			{ "GetSavedTypeMatchup", &UPokemonAbilitySystemLibrary::execGetSavedTypeMatchup },
			{ "GetTrainerOverlayWidgetController", &UPokemonAbilitySystemLibrary::execGetTrainerOverlayWidgetController },
			{ "GetTypeMatchup", &UPokemonAbilitySystemLibrary::execGetTypeMatchup },
			{ "IsBlockedHit", &UPokemonAbilitySystemLibrary::execIsBlockedHit },
			{ "IsCriticalHit", &UPokemonAbilitySystemLibrary::execIsCriticalHit },
			{ "IsSuccessfulDebuff", &UPokemonAbilitySystemLibrary::execIsSuccessfulDebuff },
			{ "SetDamageType", &UPokemonAbilitySystemLibrary::execSetDamageType },
			{ "SetDeathImpulse", &UPokemonAbilitySystemLibrary::execSetDeathImpulse },
			{ "SetDebuffDamage", &UPokemonAbilitySystemLibrary::execSetDebuffDamage },
			{ "SetDebuffDuration", &UPokemonAbilitySystemLibrary::execSetDebuffDuration },
			{ "SetDebuffFrequency", &UPokemonAbilitySystemLibrary::execSetDebuffFrequency },
			{ "SetIsBlockedHit", &UPokemonAbilitySystemLibrary::execSetIsBlockedHit },
			{ "SetIsCriticalHit", &UPokemonAbilitySystemLibrary::execSetIsCriticalHit },
			{ "SetIsSuccessfulDebuff", &UPokemonAbilitySystemLibrary::execSetIsSuccessfulDebuff },
			{ "SetKnockbackForce", &UPokemonAbilitySystemLibrary::execSetKnockbackForce },
			{ "SetTypeMultiplier", &UPokemonAbilitySystemLibrary::execSetTypeMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics
	{
		struct PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms
		{
			const UObject* WorldContextObject;
			UPokemonAbilitySystemComponent* ASC;
			FGameplayTag AbilityTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, ASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|AbilitySystemCalls" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "ActivateAbilityByTag", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics
	{
		struct PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms
		{
			FDamageEffectParams DamageEffectParams;
			FGameplayEffectContextHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams_MetaData) }; // 85173987
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "ApplyDamageEffect", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::PokemonAbilitySystemLibrary_eventApplyDamageEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetDamageType_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			FGameplayTag ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDamageType_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDamageType_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDamageType", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PokemonAbilitySystemLibrary_eventGetDamageType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::PokemonAbilitySystemLibrary_eventGetDamageType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDeathImpulse", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventGetDeathImpulse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDebuffDamage", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDebuffDuration", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventGetDebuffDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetDebuffFrequency", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventGetDebuffFrequency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetKnockbackForce", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventGetKnockbackForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms
		{
			AActor* ObjectActor;
			UPokemonMenuWidgetController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ObjectActor = { "ObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms, ObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms, ReturnValue), Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ObjectActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetPokemonMenuWidgetController", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetPokemonMenuWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|PokemonTypes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetSavedTypeMatchup", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetSavedTypeMatchup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms
		{
			AActor* ObjectActor;
			UTrainerOverlayWidgetController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ObjectActor = { "ObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms, ObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ObjectActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetTrainerOverlayWidgetController", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::PokemonAbilitySystemLibrary_eventGetTrainerOverlayWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics
	{
		struct PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms
		{
			const UObject* WorldContextObject;
			EElementalType AttackingType;
			FPokemonTypeInfo TargetPokemonTypes;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttackingType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPokemonTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPokemonTypes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType = { "AttackingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, AttackingType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(0, nullptr) }; // 3798297509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_TargetPokemonTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_TargetPokemonTypes = { "TargetPokemonTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, TargetPokemonTypes), Z_Construct_UScriptStruct_FPokemonTypeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_TargetPokemonTypes_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_TargetPokemonTypes_MetaData) }; // 658382411
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_AttackingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_TargetPokemonTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|PokemonTypes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "GetTypeMatchup", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::PokemonAbilitySystemLibrary_eventGetTypeMatchup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics
	{
		struct PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "IsBlockedHit", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventIsBlockedHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics
	{
		struct PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "IsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventIsCriticalHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics
	{
		struct PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "IsSuccessfulDebuff", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventIsSuccessfulDebuff_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetDamageType_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			FGameplayTag InDamageType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDamageType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDamageType_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_InDamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_InDamageType = { "InDamageType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDamageType_Parms, InDamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_InDamageType_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_InDamageType_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::NewProp_InDamageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDamageType", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PokemonAbilitySystemLibrary_eventSetDamageType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::PokemonAbilitySystemLibrary_eventSetDamageType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			FVector InDeathImpulse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDeathImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDeathImpulse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_InDeathImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_InDeathImpulse = { "InDeathImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms, InDeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_InDeathImpulse_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_InDeathImpulse_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::NewProp_InDeathImpulse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDeathImpulse", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::PokemonAbilitySystemLibrary_eventSetDeathImpulse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float InDebuffDamage;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDebuffDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_InDebuffDamage = { "InDebuffDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms, InDebuffDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::NewProp_InDebuffDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDebuffDamage", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float InDebuffDuration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDebuffDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_InDebuffDuration = { "InDebuffDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms, InDebuffDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::NewProp_InDebuffDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDebuffDuration", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::PokemonAbilitySystemLibrary_eventSetDebuffDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float InDebuffFrequency;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDebuffFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_InDebuffFrequency = { "InDebuffFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms, InDebuffFrequency), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::NewProp_InDebuffFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetDebuffFrequency", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::PokemonAbilitySystemLibrary_eventSetDebuffFrequency_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsBlockedHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsBlockedHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit(void* Obj)
	{
		((PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms*)Obj)->bInIsBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit = { "bInIsBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetIsBlockedHit", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::PokemonAbilitySystemLibrary_eventSetIsBlockedHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsCriticalHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit(void* Obj)
	{
		((PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms*)Obj)->bInIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit = { "bInIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetIsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::PokemonAbilitySystemLibrary_eventSetIsCriticalHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsSuccessfulDebuff;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsSuccessfulDebuff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsSuccessfulDebuff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	void Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff_SetBit(void* Obj)
	{
		((PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms*)Obj)->bInIsSuccessfulDebuff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff = { "bInIsSuccessfulDebuff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms), &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::NewProp_bInIsSuccessfulDebuff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetIsSuccessfulDebuff", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::PokemonAbilitySystemLibrary_eventSetIsSuccessfulDebuff_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			FVector InKnockback;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKnockback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKnockback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_InKnockback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_InKnockback = { "InKnockback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms, InKnockback), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_InKnockback_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_InKnockback_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::NewProp_InKnockback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetKnockbackForce", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::PokemonAbilitySystemLibrary_eventSetKnockbackForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics
	{
		struct PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			float InTypeMultiplier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTypeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_InTypeMultiplier = { "InTypeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms, InTypeMultiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::NewProp_InTypeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "SetTypeMultiplier", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::PokemonAbilitySystemLibrary_eventSetTypeMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonAbilitySystemLibrary);
	UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary_NoRegister()
	{
		return UPokemonAbilitySystemLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag, "ActivateAbilityByTag" }, // 1806656304
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ApplyDamageEffect, "ApplyDamageEffect" }, // 2317521985
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDamageType, "GetDamageType" }, // 138051615
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDeathImpulse, "GetDeathImpulse" }, // 2315441653
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDamage, "GetDebuffDamage" }, // 1371184961
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffDuration, "GetDebuffDuration" }, // 3013073639
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetDebuffFrequency, "GetDebuffFrequency" }, // 4076022444
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetKnockbackForce, "GetKnockbackForce" }, // 159760724
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetPokemonMenuWidgetController, "GetPokemonMenuWidgetController" }, // 3184998104
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetSavedTypeMatchup, "GetSavedTypeMatchup" }, // 3664977761
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTrainerOverlayWidgetController, "GetTrainerOverlayWidgetController" }, // 952593985
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_GetTypeMatchup, "GetTypeMatchup" }, // 3758018713
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsBlockedHit, "IsBlockedHit" }, // 4118186790
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsCriticalHit, "IsCriticalHit" }, // 2646750985
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_IsSuccessfulDebuff, "IsSuccessfulDebuff" }, // 1672563052
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDamageType, "SetDamageType" }, // 2816847880
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDeathImpulse, "SetDeathImpulse" }, // 3712539436
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDamage, "SetDebuffDamage" }, // 3555518463
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffDuration, "SetDebuffDuration" }, // 1107102924
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetDebuffFrequency, "SetDebuffFrequency" }, // 2100475978
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsBlockedHit, "SetIsBlockedHit" }, // 946329557
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsCriticalHit, "SetIsCriticalHit" }, // 1713080060
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetIsSuccessfulDebuff, "SetIsSuccessfulDebuff" }, // 812879876
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetKnockbackForce, "SetKnockbackForce" }, // 2762759563
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_SetTypeMultiplier, "SetTypeMultiplier" }, // 844729876
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AbilitySystem/PokemonAbilitySystemLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAbilitySystemLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::ClassParams = {
		&UPokemonAbilitySystemLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary()
	{
		if (!Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton, Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonAbilitySystemLibrary>()
	{
		return UPokemonAbilitySystemLibrary::StaticClass();
	}
	UPokemonAbilitySystemLibrary::UPokemonAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonAbilitySystemLibrary);
	UPokemonAbilitySystemLibrary::~UPokemonAbilitySystemLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAbilitySystemLibrary, UPokemonAbilitySystemLibrary::StaticClass, TEXT("UPokemonAbilitySystemLibrary"), &Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAbilitySystemLibrary), 2940739560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_4263394554(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
