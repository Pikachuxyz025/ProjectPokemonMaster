// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIControllers/PokemonAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBrainComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APokemonAIController Function GetCombatTarget ****************************
struct Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics
{
	struct PokemonAIController_eventGetCombatTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCombatTarget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCombatTarget constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCombatTarget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAIController_eventGetCombatTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::PropPointers) < 2048);
// ********** End Function GetCombatTarget Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokemonAIController, nullptr, "GetCombatTarget", 	Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::PokemonAIController_eventGetCombatTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::PokemonAIController_eventGetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokemonAIController_GetCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokemonAIController_GetCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokemonAIController::execGetCombatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCombatTarget();
	P_NATIVE_END;
}
// ********** End Class APokemonAIController Function GetCombatTarget ******************************

// ********** Begin Class APokemonAIController *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APokemonAIController;
UClass* APokemonAIController::GetPrivateStaticClass()
{
	using TClass = APokemonAIController;
	if (!Z_Registration_Info_UClass_APokemonAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonAIController"),
			Z_Registration_Info_UClass_APokemonAIController.InnerSingleton,
			StaticRegisterNativesAPokemonAIController,
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
	return Z_Registration_Info_UClass_APokemonAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_APokemonAIController_NoRegister()
{
	return APokemonAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APokemonAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllers/PokemonAIController.h" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPokemon_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonBrainComponent_MetaData[] = {
		{ "Category", "Brain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatBrainConfig_MetaData[] = {
		{ "Category", "Brain" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightSense_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageSense_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingSense_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerToFollow_MetaData[] = {
		{ "Category", "PokemonAIController" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationKeyName_MetaData[] = {
		{ "Category", "Key Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere)\n//FGameplayTag CurrentStateTag;\n" },
#endif
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere)\nFGameplayTag CurrentStateTag;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStateKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatusKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredCombatModeKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASCKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonActionStateKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonCurrentMoveKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonTrainerKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTargetKeyName_MetaData[] = {
		{ "Category", "Key Names" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAIController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APokemonAIController constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonBrainComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatBrainConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightSense;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageSense;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HearingSense;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerToFollow;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnLocationKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonStateKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonStatusKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DesiredCombatModeKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonASCKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonActionStateKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonCurrentMoveKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PokemonTrainerKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CombatTargetKeyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonAbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APokemonAIController constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCombatTarget"), .Pointer = &APokemonAIController::execGetCombatTarget },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APokemonAIController_GetCombatTarget, "GetCombatTarget" }, // 1192571914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokemonAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APokemonAIController_Statics

// ********** Begin Class APokemonAIController Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIBehaviorTree = { "AIBehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIBehaviorTree_MetaData), NewProp_AIBehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_ControlledPokemon = { "ControlledPokemon", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, ControlledPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledPokemon_MetaData), NewProp_ControlledPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerception_MetaData), NewProp_AIPerception_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonBrainComponent = { "PokemonBrainComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonBrainComponent), Z_Construct_UClass_UPokemonBrainComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonBrainComponent_MetaData), NewProp_PokemonBrainComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatBrainConfig = { "CombatBrainConfig", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, CombatBrainConfig), Z_Construct_UClass_UPokemonAICombatBrainConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatBrainConfig_MetaData), NewProp_CombatBrainConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_SightSense = { "SightSense", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, SightSense), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightSense_MetaData), NewProp_SightSense_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_DamageSense = { "DamageSense", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, DamageSense), Z_Construct_UClass_UAISenseConfig_Damage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageSense_MetaData), NewProp_DamageSense_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_HearingSense = { "HearingSense", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, HearingSense), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingSense_MetaData), NewProp_HearingSense_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTarget_MetaData), NewProp_CombatTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_TrainerToFollow = { "TrainerToFollow", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, TrainerToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerToFollow_MetaData), NewProp_TrainerToFollow_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_SpawnLocationKeyName = { "SpawnLocationKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, SpawnLocationKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocationKeyName_MetaData), NewProp_SpawnLocationKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStateKeyName = { "PokemonStateKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonStateKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonStateKeyName_MetaData), NewProp_PokemonStateKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStatusKeyName = { "PokemonStatusKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonStatusKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonStatusKeyName_MetaData), NewProp_PokemonStatusKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_DesiredCombatModeKeyName = { "DesiredCombatModeKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, DesiredCombatModeKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredCombatModeKeyName_MetaData), NewProp_DesiredCombatModeKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonASCKeyName = { "PokemonASCKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonASCKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonASCKeyName_MetaData), NewProp_PokemonASCKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonActionStateKeyName = { "PokemonActionStateKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonActionStateKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonActionStateKeyName_MetaData), NewProp_PokemonActionStateKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonCurrentMoveKeyName = { "PokemonCurrentMoveKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonCurrentMoveKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonCurrentMoveKeyName_MetaData), NewProp_PokemonCurrentMoveKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonTrainerKeyName = { "PokemonTrainerKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonTrainerKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonTrainerKeyName_MetaData), NewProp_PokemonTrainerKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTargetKeyName = { "CombatTargetKeyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, CombatTargetKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTargetKeyName_MetaData), NewProp_CombatTargetKeyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonAbilitySystemComponent = { "PokemonAbilitySystemComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokemonAIController, PokemonAbilitySystemComponent), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonAbilitySystemComponent_MetaData), NewProp_PokemonAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokemonAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIBehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_ControlledPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_AIPerception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonBrainComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatBrainConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_SightSense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_DamageSense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_HearingSense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_TrainerToFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_SpawnLocationKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStateKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonStatusKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_DesiredCombatModeKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonASCKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonActionStateKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonCurrentMoveKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonTrainerKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_CombatTargetKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokemonAIController_Statics::NewProp_PokemonAbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::PropPointers) < 2048);
// ********** End Class APokemonAIController Property Definitions **********************************
UObject* (*const Z_Construct_UClass_APokemonAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokemonAIController_Statics::ClassParams = {
	&APokemonAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APokemonAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokemonAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APokemonAIController_Statics::Class_MetaDataParams)
};
void APokemonAIController::StaticRegisterNativesAPokemonAIController()
{
	UClass* Class = APokemonAIController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APokemonAIController_Statics::Funcs));
}
UClass* Z_Construct_UClass_APokemonAIController()
{
	if (!Z_Registration_Info_UClass_APokemonAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokemonAIController.OuterSingleton, Z_Construct_UClass_APokemonAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokemonAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APokemonAIController);
APokemonAIController::~APokemonAIController() {}
// ********** End Class APokemonAIController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokemonAIController, APokemonAIController::StaticClass, TEXT("APokemonAIController"), &Z_Registration_Info_UClass_APokemonAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokemonAIController), 3983755121U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h__Script_ProjectMimikyu_1269948363{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAIController_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
