// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIControllers/PokemonAITypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonAITypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FAgentNavigationRequest();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAgentNavigationRequest *******************************************
struct Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAgentNavigationRequest); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAgentNavigationRequest); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntentTag_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredMovementMode_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredDistance_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Urgency_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpecialTraversal_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGASMovementAbilities_MetaData[] = {
		{ "Category", "AgentNavigationRequest" },
		{ "ModuleRelativePath", "Public/AIControllers/PokemonAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAgentNavigationRequest constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredMovementMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Urgency;
	static void NewProp_bAllowSpecialTraversal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpecialTraversal;
	static void NewProp_bAllowGASMovementAbilities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGASMovementAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAgentNavigationRequest constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentNavigationRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAgentNavigationRequest;
class UScriptStruct* FAgentNavigationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAgentNavigationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAgentNavigationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentNavigationRequest, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("AgentNavigationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FAgentNavigationRequest.OuterSingleton;
	}

// ********** Begin ScriptStruct FAgentNavigationRequest Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_IntentTag = { "IntentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentNavigationRequest, IntentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntentTag_MetaData), NewProp_IntentTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_PreferredMovementMode = { "PreferredMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentNavigationRequest, PreferredMovementMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredMovementMode_MetaData), NewProp_PreferredMovementMode_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentNavigationRequest, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentNavigationRequest, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_DesiredDistance = { "DesiredDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentNavigationRequest, DesiredDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredDistance_MetaData), NewProp_DesiredDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentNavigationRequest, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_Urgency = { "Urgency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentNavigationRequest, Urgency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Urgency_MetaData), NewProp_Urgency_MetaData) };
void Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowSpecialTraversal_SetBit(void* Obj)
{
	((FAgentNavigationRequest*)Obj)->bAllowSpecialTraversal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowSpecialTraversal = { "bAllowSpecialTraversal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAgentNavigationRequest), &Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowSpecialTraversal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSpecialTraversal_MetaData), NewProp_bAllowSpecialTraversal_MetaData) };
void Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowGASMovementAbilities_SetBit(void* Obj)
{
	((FAgentNavigationRequest*)Obj)->bAllowGASMovementAbilities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowGASMovementAbilities = { "bAllowGASMovementAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAgentNavigationRequest), &Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowGASMovementAbilities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGASMovementAbilities_MetaData), NewProp_bAllowGASMovementAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_IntentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_PreferredMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_DesiredDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_AcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_Urgency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowSpecialTraversal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewProp_bAllowGASMovementAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAgentNavigationRequest Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"AgentNavigationRequest",
	Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::PropPointers),
	sizeof(FAgentNavigationRequest),
	alignof(FAgentNavigationRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAgentNavigationRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FAgentNavigationRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAgentNavigationRequest.InnerSingleton, Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAgentNavigationRequest.InnerSingleton);
}
// ********** End ScriptStruct FAgentNavigationRequest *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAITypes_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAgentNavigationRequest::StaticStruct, Z_Construct_UScriptStruct_FAgentNavigationRequest_Statics::NewStructOps, TEXT("AgentNavigationRequest"),&Z_Registration_Info_UScriptStruct_FAgentNavigationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgentNavigationRequest), 948006626U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAITypes_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAITypes_h__Script_ProjectMimikyu_2646498073{
	TEXT("/Script/ProjectMimikyu"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAITypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_PokemonAITypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
