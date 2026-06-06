// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "AIControllers/PokemonAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonNavigationComponent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonNavigationComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonNavigationComponent_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FAgentNavigationRequest();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonNavigationComponent Function ClearNavigationIntent ***************
struct Z_Construct_UFunction_UPokemonNavigationComponent_ClearNavigationIntent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearNavigationIntent constinit property declarations *****************
// ********** End Function ClearNavigationIntent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonNavigationComponent_ClearNavigationIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonNavigationComponent, nullptr, "ClearNavigationIntent", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_ClearNavigationIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonNavigationComponent_ClearNavigationIntent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonNavigationComponent_ClearNavigationIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonNavigationComponent_ClearNavigationIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonNavigationComponent::execClearNavigationIntent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearNavigationIntent();
	P_NATIVE_END;
}
// ********** End Class UPokemonNavigationComponent Function ClearNavigationIntent *****************

// ********** Begin Class UPokemonNavigationComponent Function DebugApproachTarget *****************
struct Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics
{
	struct PokemonNavigationComponent_eventDebugApproachTarget_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugApproachTarget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugApproachTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugApproachTarget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonNavigationComponent_eventDebugApproachTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::PropPointers) < 2048);
// ********** End Function DebugApproachTarget Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonNavigationComponent, nullptr, "DebugApproachTarget", 	Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::PokemonNavigationComponent_eventDebugApproachTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::PokemonNavigationComponent_eventDebugApproachTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonNavigationComponent::execDebugApproachTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugApproachTarget(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonNavigationComponent Function DebugApproachTarget *******************

// ********** Begin Class UPokemonNavigationComponent Function DebugFleeFromTarget *****************
struct Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics
{
	struct PokemonNavigationComponent_eventDebugFleeFromTarget_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugFleeFromTarget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugFleeFromTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugFleeFromTarget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonNavigationComponent_eventDebugFleeFromTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::PropPointers) < 2048);
// ********** End Function DebugFleeFromTarget Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonNavigationComponent, nullptr, "DebugFleeFromTarget", 	Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::PokemonNavigationComponent_eventDebugFleeFromTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::PokemonNavigationComponent_eventDebugFleeFromTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonNavigationComponent::execDebugFleeFromTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugFleeFromTarget(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonNavigationComponent Function DebugFleeFromTarget *******************

// ********** Begin Class UPokemonNavigationComponent Function DebugFollowTarget *******************
struct Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics
{
	struct PokemonNavigationComponent_eventDebugFollowTarget_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugFollowTarget constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugFollowTarget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugFollowTarget Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonNavigationComponent_eventDebugFollowTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::PropPointers) < 2048);
// ********** End Function DebugFollowTarget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonNavigationComponent, nullptr, "DebugFollowTarget", 	Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::PokemonNavigationComponent_eventDebugFollowTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::PokemonNavigationComponent_eventDebugFollowTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonNavigationComponent::execDebugFollowTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugFollowTarget(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonNavigationComponent Function DebugFollowTarget *********************

// ********** Begin Class UPokemonNavigationComponent Function GetCurrentNavigationIntent **********
struct Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics
{
	struct PokemonNavigationComponent_eventGetCurrentNavigationIntent_Parms
	{
		FAgentNavigationRequest ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentNavigationIntent constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentNavigationIntent constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentNavigationIntent Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonNavigationComponent_eventGetCurrentNavigationIntent_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentNavigationRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 948006626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentNavigationIntent Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonNavigationComponent, nullptr, "GetCurrentNavigationIntent", 	Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::PokemonNavigationComponent_eventGetCurrentNavigationIntent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::PokemonNavigationComponent_eventGetCurrentNavigationIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonNavigationComponent::execGetCurrentNavigationIntent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAgentNavigationRequest*)Z_Param__Result=P_THIS->GetCurrentNavigationIntent();
	P_NATIVE_END;
}
// ********** End Class UPokemonNavigationComponent Function GetCurrentNavigationIntent ************

// ********** Begin Class UPokemonNavigationComponent Function HasActiveNavigationRequest **********
struct Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics
{
	struct PokemonNavigationComponent_eventHasActiveNavigationRequest_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasActiveNavigationRequest constinit property declarations ************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasActiveNavigationRequest constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasActiveNavigationRequest Property Definitions ***********************
void Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonNavigationComponent_eventHasActiveNavigationRequest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonNavigationComponent_eventHasActiveNavigationRequest_Parms), &Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::PropPointers) < 2048);
// ********** End Function HasActiveNavigationRequest Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonNavigationComponent, nullptr, "HasActiveNavigationRequest", 	Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::PokemonNavigationComponent_eventHasActiveNavigationRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::PokemonNavigationComponent_eventHasActiveNavigationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonNavigationComponent::execHasActiveNavigationRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasActiveNavigationRequest();
	P_NATIVE_END;
}
// ********** End Class UPokemonNavigationComponent Function HasActiveNavigationRequest ************

// ********** Begin Class UPokemonNavigationComponent Function SetNavigationIntent *****************
struct Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics
{
	struct PokemonNavigationComponent_eventSetNavigationIntent_Parms
	{
		FAgentNavigationRequest NewRequest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNavigationIntent constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNavigationIntent constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNavigationIntent Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::NewProp_NewRequest = { "NewRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonNavigationComponent_eventSetNavigationIntent_Parms, NewRequest), Z_Construct_UScriptStruct_FAgentNavigationRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRequest_MetaData), NewProp_NewRequest_MetaData) }; // 948006626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::NewProp_NewRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::PropPointers) < 2048);
// ********** End Function SetNavigationIntent Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonNavigationComponent, nullptr, "SetNavigationIntent", 	Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::PokemonNavigationComponent_eventSetNavigationIntent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::PokemonNavigationComponent_eventSetNavigationIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonNavigationComponent::execSetNavigationIntent)
{
	P_GET_STRUCT_REF(FAgentNavigationRequest,Z_Param_Out_NewRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationIntent(Z_Param_Out_NewRequest);
	P_NATIVE_END;
}
// ********** End Class UPokemonNavigationComponent Function SetNavigationIntent *******************

// ********** Begin Class UPokemonNavigationComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonNavigationComponent;
UClass* UPokemonNavigationComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonNavigationComponent;
	if (!Z_Registration_Info_UClass_UPokemonNavigationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonNavigationComponent"),
			Z_Registration_Info_UClass_UPokemonNavigationComponent.InnerSingleton,
			StaticRegisterNativesUPokemonNavigationComponent,
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
	return Z_Registration_Info_UClass_UPokemonNavigationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonNavigationComponent_NoRegister()
{
	return UPokemonNavigationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonNavigationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/PokemonNavigationComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNavigationRequest_MetaData[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasActiveRequest_MetaData[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationThinkInterval_MetaData[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAcceptableRadius_MetaData[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FleeDistance_MetaData[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowDistance_MetaData[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatKeepDistance_MetaData[] = {
		{ "Category", "Pokemon|AI|Navigation" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonNavigationComponent constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNavigationRequest;
	static void NewProp_bHasActiveRequest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasActiveRequest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavigationThinkInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAcceptableRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FleeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatKeepDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedAIController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonNavigationComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearNavigationIntent"), .Pointer = &UPokemonNavigationComponent::execClearNavigationIntent },
		{ .NameUTF8 = UTF8TEXT("DebugApproachTarget"), .Pointer = &UPokemonNavigationComponent::execDebugApproachTarget },
		{ .NameUTF8 = UTF8TEXT("DebugFleeFromTarget"), .Pointer = &UPokemonNavigationComponent::execDebugFleeFromTarget },
		{ .NameUTF8 = UTF8TEXT("DebugFollowTarget"), .Pointer = &UPokemonNavigationComponent::execDebugFollowTarget },
		{ .NameUTF8 = UTF8TEXT("GetCurrentNavigationIntent"), .Pointer = &UPokemonNavigationComponent::execGetCurrentNavigationIntent },
		{ .NameUTF8 = UTF8TEXT("HasActiveNavigationRequest"), .Pointer = &UPokemonNavigationComponent::execHasActiveNavigationRequest },
		{ .NameUTF8 = UTF8TEXT("SetNavigationIntent"), .Pointer = &UPokemonNavigationComponent::execSetNavigationIntent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonNavigationComponent_ClearNavigationIntent, "ClearNavigationIntent" }, // 2236707437
		{ &Z_Construct_UFunction_UPokemonNavigationComponent_DebugApproachTarget, "DebugApproachTarget" }, // 1650444801
		{ &Z_Construct_UFunction_UPokemonNavigationComponent_DebugFleeFromTarget, "DebugFleeFromTarget" }, // 837812078
		{ &Z_Construct_UFunction_UPokemonNavigationComponent_DebugFollowTarget, "DebugFollowTarget" }, // 448964605
		{ &Z_Construct_UFunction_UPokemonNavigationComponent_GetCurrentNavigationIntent, "GetCurrentNavigationIntent" }, // 2789401910
		{ &Z_Construct_UFunction_UPokemonNavigationComponent_HasActiveNavigationRequest, "HasActiveNavigationRequest" }, // 934432936
		{ &Z_Construct_UFunction_UPokemonNavigationComponent_SetNavigationIntent, "SetNavigationIntent" }, // 1009970884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonNavigationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonNavigationComponent_Statics

// ********** Begin Class UPokemonNavigationComponent Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_CurrentNavigationRequest = { "CurrentNavigationRequest", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, CurrentNavigationRequest), Z_Construct_UScriptStruct_FAgentNavigationRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNavigationRequest_MetaData), NewProp_CurrentNavigationRequest_MetaData) }; // 948006626
void Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_bHasActiveRequest_SetBit(void* Obj)
{
	((UPokemonNavigationComponent*)Obj)->bHasActiveRequest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_bHasActiveRequest = { "bHasActiveRequest", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonNavigationComponent), &Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_bHasActiveRequest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasActiveRequest_MetaData), NewProp_bHasActiveRequest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_NavigationThinkInterval = { "NavigationThinkInterval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, NavigationThinkInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationThinkInterval_MetaData), NewProp_NavigationThinkInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_DefaultAcceptableRadius = { "DefaultAcceptableRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, DefaultAcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAcceptableRadius_MetaData), NewProp_DefaultAcceptableRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_FleeDistance = { "FleeDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, FleeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FleeDistance_MetaData), NewProp_FleeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_FollowDistance = { "FollowDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, FollowDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowDistance_MetaData), NewProp_FollowDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_CombatKeepDistance = { "CombatKeepDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, CombatKeepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatKeepDistance_MetaData), NewProp_CombatKeepDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_CachedAIController = { "CachedAIController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonNavigationComponent, CachedAIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAIController_MetaData), NewProp_CachedAIController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonNavigationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_CurrentNavigationRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_bHasActiveRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_NavigationThinkInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_DefaultAcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_FleeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_FollowDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_CombatKeepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonNavigationComponent_Statics::NewProp_CachedAIController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonNavigationComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokemonNavigationComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPokemonNavigationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonNavigationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::ClassParams = {
	&UPokemonNavigationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonNavigationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonNavigationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonNavigationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonNavigationComponent_Statics::Class_MetaDataParams)
};
void UPokemonNavigationComponent::StaticRegisterNativesUPokemonNavigationComponent()
{
	UClass* Class = UPokemonNavigationComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonNavigationComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonNavigationComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonNavigationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonNavigationComponent.OuterSingleton, Z_Construct_UClass_UPokemonNavigationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonNavigationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonNavigationComponent);
UPokemonNavigationComponent::~UPokemonNavigationComponent() {}
// ********** End Class UPokemonNavigationComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonNavigationComponent, UPokemonNavigationComponent::StaticClass, TEXT("UPokemonNavigationComponent"), &Z_Registration_Info_UClass_UPokemonNavigationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonNavigationComponent), 3526507365U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_1709364670{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
