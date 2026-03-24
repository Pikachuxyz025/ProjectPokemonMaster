// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonBrainComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonBrainComponent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBrainComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBrainComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonBrainComponent Function GetDesiredCombatMode *********************
struct Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics
{
	struct PokemonBrainComponent_eventGetDesiredCombatMode_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Brain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters and Setters\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters and Setters" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDesiredCombatMode constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDesiredCombatMode constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDesiredCombatMode Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBrainComponent_eventGetDesiredCombatMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::PropPointers) < 2048);
// ********** End Function GetDesiredCombatMode Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBrainComponent, nullptr, "GetDesiredCombatMode", 	Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::PokemonBrainComponent_eventGetDesiredCombatMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::PokemonBrainComponent_eventGetDesiredCombatMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBrainComponent::execGetDesiredCombatMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetDesiredCombatMode();
	P_NATIVE_END;
}
// ********** End Class UPokemonBrainComponent Function GetDesiredCombatMode ***********************

// ********** Begin Class UPokemonBrainComponent Function SetBrainConfig ***************************
struct Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics
{
	struct PokemonBrainComponent_eventSetBrainConfig_Parms
	{
		UPokemonAICombatBrainConfig* NewConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBrainConfig constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBrainConfig constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBrainConfig Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonBrainComponent_eventSetBrainConfig_Parms, NewConfig), Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::NewProp_NewConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::PropPointers) < 2048);
// ********** End Function SetBrainConfig Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonBrainComponent, nullptr, "SetBrainConfig", 	Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::PokemonBrainComponent_eventSetBrainConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::PokemonBrainComponent_eventSetBrainConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonBrainComponent::execSetBrainConfig)
{
	P_GET_OBJECT(UPokemonAICombatBrainConfig,Z_Param_NewConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrainConfig(Z_Param_NewConfig);
	P_NATIVE_END;
}
// ********** End Class UPokemonBrainComponent Function SetBrainConfig *****************************

// ********** Begin Class UPokemonBrainComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonBrainComponent;
UClass* UPokemonBrainComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonBrainComponent;
	if (!Z_Registration_Info_UClass_UPokemonBrainComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonBrainComponent"),
			Z_Registration_Info_UClass_UPokemonBrainComponent.InnerSingleton,
			StaticRegisterNativesUPokemonBrainComponent,
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
	return Z_Registration_Info_UClass_UPokemonBrainComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonBrainComponent_NoRegister()
{
	return UPokemonBrainComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonBrainComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This script should be responsible for knowing when the AI is allowed to think\n// Reading a bit of info form the controlled pawn/controller \n// Making a small/simple decision\n// Pushing that result back into the controller or logging it\n" },
#endif
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "ActorComponents/PokemonBrainComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This script should be responsible for knowing when the AI is allowed to think\nReading a bit of info form the controlled pawn/controller\nMaking a small/simple decision\nPushing that result back into the controller or logging it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrainConfig_MetaData[] = {
		{ "Category", "Brain" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBrainActive_MetaData[] = {
		{ "Category", "Brain|Runtime" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextThinkTime_MetaData[] = {
		{ "Category", "Brain|Runtime" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommitUntilTime_MetaData[] = {
		{ "Category", "Brain|Runtime" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDecisionTime_MetaData[] = {
		{ "Category", "Brain|Runtime" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUrgentInterruptedRequested_MetaData[] = {
		{ "Category", "Brain|Runtime" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredCombatMode_MetaData[] = {
		{ "Categories", "AI.Decision" },
		{ "Category", "Brain|Runtime" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonBrainComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonBrainComponent constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrainConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPokemonController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPokemonASC;
	static void NewProp_bBrainActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBrainActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NextThinkTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CommitUntilTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDecisionTime;
	static void NewProp_bUrgentInterruptedRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUrgentInterruptedRequested;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredCombatMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonBrainComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDesiredCombatMode"), .Pointer = &UPokemonBrainComponent::execGetDesiredCombatMode },
		{ .NameUTF8 = UTF8TEXT("SetBrainConfig"), .Pointer = &UPokemonBrainComponent::execSetBrainConfig },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonBrainComponent_GetDesiredCombatMode, "GetDesiredCombatMode" }, // 191502781
		{ &Z_Construct_UFunction_UPokemonBrainComponent_SetBrainConfig, "SetBrainConfig" }, // 509165351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonBrainComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonBrainComponent_Statics

// ********** Begin Class UPokemonBrainComponent Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_BrainConfig = { "BrainConfig", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, BrainConfig), Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrainConfig_MetaData), NewProp_BrainConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_OwningPokemonController = { "OwningPokemonController", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, OwningPokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPokemonController_MetaData), NewProp_OwningPokemonController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_ControlledPokemon = { "ControlledPokemon", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, ControlledPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledPokemon_MetaData), NewProp_ControlledPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_CachedPokemonASC = { "CachedPokemonASC", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, CachedPokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPokemonASC_MetaData), NewProp_CachedPokemonASC_MetaData) };
void Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bBrainActive_SetBit(void* Obj)
{
	((UPokemonBrainComponent*)Obj)->bBrainActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bBrainActive = { "bBrainActive", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonBrainComponent), &Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bBrainActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBrainActive_MetaData), NewProp_bBrainActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_NextThinkTime = { "NextThinkTime", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, NextThinkTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextThinkTime_MetaData), NewProp_NextThinkTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_CommitUntilTime = { "CommitUntilTime", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, CommitUntilTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommitUntilTime_MetaData), NewProp_CommitUntilTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_LastDecisionTime = { "LastDecisionTime", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, LastDecisionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDecisionTime_MetaData), NewProp_LastDecisionTime_MetaData) };
void Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bUrgentInterruptedRequested_SetBit(void* Obj)
{
	((UPokemonBrainComponent*)Obj)->bUrgentInterruptedRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bUrgentInterruptedRequested = { "bUrgentInterruptedRequested", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonBrainComponent), &Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bUrgentInterruptedRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUrgentInterruptedRequested_MetaData), NewProp_bUrgentInterruptedRequested_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_DesiredCombatMode = { "DesiredCombatMode", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonBrainComponent, DesiredCombatMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredCombatMode_MetaData), NewProp_DesiredCombatMode_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonBrainComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_BrainConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_OwningPokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_ControlledPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_CachedPokemonASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bBrainActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_NextThinkTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_CommitUntilTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_LastDecisionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_bUrgentInterruptedRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonBrainComponent_Statics::NewProp_DesiredCombatMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBrainComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokemonBrainComponent Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UPokemonBrainComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBrainComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBrainComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonBrainComponent_Statics::ClassParams = {
	&UPokemonBrainComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonBrainComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBrainComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonBrainComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonBrainComponent_Statics::Class_MetaDataParams)
};
void UPokemonBrainComponent::StaticRegisterNativesUPokemonBrainComponent()
{
	UClass* Class = UPokemonBrainComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonBrainComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonBrainComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonBrainComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonBrainComponent.OuterSingleton, Z_Construct_UClass_UPokemonBrainComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonBrainComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonBrainComponent);
UPokemonBrainComponent::~UPokemonBrainComponent() {}
// ********** End Class UPokemonBrainComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonBrainComponent, UPokemonBrainComponent::StaticClass, TEXT("UPokemonBrainComponent"), &Z_Registration_Info_UClass_UPokemonBrainComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonBrainComponent), 624682827U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h__Script_ProjectMimikyu_4090082960{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonBrainComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
