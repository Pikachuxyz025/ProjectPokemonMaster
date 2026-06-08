// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonOwnershipComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonOwnershipComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonOwnershipComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonOwnershipComponent_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonOwnershipComponent Function ClearTrainerBindings *****************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_ClearTrainerBindings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearTrainerBindings constinit property declarations ******************
// ********** End Function ClearTrainerBindings constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_ClearTrainerBindings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "ClearTrainerBindings", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_ClearTrainerBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_ClearTrainerBindings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_ClearTrainerBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_ClearTrainerBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execClearTrainerBindings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTrainerBindings();
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function ClearTrainerBindings *******************

// ********** Begin Class UPokemonOwnershipComponent Function GetCurrentTrainer ********************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics
{
	struct PokemonOwnershipComponent_eventGetCurrentTrainer_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentTrainer constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentTrainer constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentTrainer Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonOwnershipComponent_eventGetCurrentTrainer_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentTrainer Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "GetCurrentTrainer", 	Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::PokemonOwnershipComponent_eventGetCurrentTrainer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::PokemonOwnershipComponent_eventGetCurrentTrainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execGetCurrentTrainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCurrentTrainer();
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function GetCurrentTrainer **********************

// ********** Begin Class UPokemonOwnershipComponent Function GetPokemonStatus *********************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics
{
	struct PokemonOwnershipComponent_eventGetPokemonStatus_Parms
	{
		EPokemonStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokemonStatus constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokemonStatus constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokemonStatus Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonOwnershipComponent_eventGetPokemonStatus_Parms, ReturnValue), Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus, METADATA_PARAMS(0, nullptr) }; // 1292692463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::PropPointers) < 2048);
// ********** End Function GetPokemonStatus Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "GetPokemonStatus", 	Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::PokemonOwnershipComponent_eventGetPokemonStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::PokemonOwnershipComponent_eventGetPokemonStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execGetPokemonStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPokemonStatus*)Z_Param__Result=P_THIS->GetPokemonStatus();
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function GetPokemonStatus ***********************

// ********** Begin Class UPokemonOwnershipComponent Function HasTrainer ***************************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics
{
	struct PokemonOwnershipComponent_eventHasTrainer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasTrainer constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasTrainer constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasTrainer Property Definitions ***************************************
void Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonOwnershipComponent_eventHasTrainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonOwnershipComponent_eventHasTrainer_Parms), &Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::PropPointers) < 2048);
// ********** End Function HasTrainer Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "HasTrainer", 	Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::PokemonOwnershipComponent_eventHasTrainer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::PokemonOwnershipComponent_eventHasTrainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execHasTrainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTrainer();
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function HasTrainer *****************************

// ********** Begin Class UPokemonOwnershipComponent Function IsCaught *****************************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics
{
	struct PokemonOwnershipComponent_eventIsCaught_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCaught constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCaught constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCaught Property Definitions *****************************************
void Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonOwnershipComponent_eventIsCaught_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonOwnershipComponent_eventIsCaught_Parms), &Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::PropPointers) < 2048);
// ********** End Function IsCaught Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "IsCaught", 	Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::PokemonOwnershipComponent_eventIsCaught_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::PokemonOwnershipComponent_eventIsCaught_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execIsCaught)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCaught();
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function IsCaught *******************************

// ********** Begin Class UPokemonOwnershipComponent Function IsOwnedByTrainer *********************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics
{
	struct PokemonOwnershipComponent_eventIsOwnedByTrainer_Parms
	{
		const AActor* TrainerActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOwnedByTrainer constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOwnedByTrainer constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOwnedByTrainer Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::NewProp_TrainerActor = { "TrainerActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonOwnershipComponent_eventIsOwnedByTrainer_Parms, TrainerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerActor_MetaData), NewProp_TrainerActor_MetaData) };
void Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonOwnershipComponent_eventIsOwnedByTrainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonOwnershipComponent_eventIsOwnedByTrainer_Parms), &Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::NewProp_TrainerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::PropPointers) < 2048);
// ********** End Function IsOwnedByTrainer Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "IsOwnedByTrainer", 	Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::PokemonOwnershipComponent_eventIsOwnedByTrainer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::PokemonOwnershipComponent_eventIsOwnedByTrainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execIsOwnedByTrainer)
{
	P_GET_OBJECT(AActor,Z_Param_TrainerActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOwnedByTrainer(Z_Param_TrainerActor);
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function IsOwnedByTrainer ***********************

// ********** Begin Class UPokemonOwnershipComponent Function SetIsCaught **************************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics
{
	struct PokemonOwnershipComponent_eventSetIsCaught_Parms
	{
		bool bNewIsCaught;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsCaught constinit property declarations ***************************
	static void NewProp_bNewIsCaught_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsCaught;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsCaught constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsCaught Property Definitions **************************************
void Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::NewProp_bNewIsCaught_SetBit(void* Obj)
{
	((PokemonOwnershipComponent_eventSetIsCaught_Parms*)Obj)->bNewIsCaught = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::NewProp_bNewIsCaught = { "bNewIsCaught", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonOwnershipComponent_eventSetIsCaught_Parms), &Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::NewProp_bNewIsCaught_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::NewProp_bNewIsCaught,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::PropPointers) < 2048);
// ********** End Function SetIsCaught Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "SetIsCaught", 	Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::PokemonOwnershipComponent_eventSetIsCaught_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::PokemonOwnershipComponent_eventSetIsCaught_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execSetIsCaught)
{
	P_GET_UBOOL(Z_Param_bNewIsCaught);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsCaught(Z_Param_bNewIsCaught);
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function SetIsCaught ****************************

// ********** Begin Class UPokemonOwnershipComponent Function SetPokemonTrainer ********************
struct Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics
{
	struct PokemonOwnershipComponent_eventSetPokemonTrainer_Parms
	{
		AActor* NewTrainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPokemonTrainer constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTrainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPokemonTrainer constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPokemonTrainer Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::NewProp_NewTrainer = { "NewTrainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonOwnershipComponent_eventSetPokemonTrainer_Parms, NewTrainer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::NewProp_NewTrainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::PropPointers) < 2048);
// ********** End Function SetPokemonTrainer Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonOwnershipComponent, nullptr, "SetPokemonTrainer", 	Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::PokemonOwnershipComponent_eventSetPokemonTrainer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::PokemonOwnershipComponent_eventSetPokemonTrainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonOwnershipComponent::execSetPokemonTrainer)
{
	P_GET_OBJECT(AActor,Z_Param_NewTrainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPokemonTrainer(Z_Param_NewTrainer);
	P_NATIVE_END;
}
// ********** End Class UPokemonOwnershipComponent Function SetPokemonTrainer **********************

// ********** Begin Class UPokemonOwnershipComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonOwnershipComponent;
UClass* UPokemonOwnershipComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonOwnershipComponent;
	if (!Z_Registration_Info_UClass_UPokemonOwnershipComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonOwnershipComponent"),
			Z_Registration_Info_UClass_UPokemonOwnershipComponent.InnerSingleton,
			StaticRegisterNativesUPokemonOwnershipComponent,
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
	return Z_Registration_Info_UClass_UPokemonOwnershipComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonOwnershipComponent_NoRegister()
{
	return UPokemonOwnershipComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonOwnershipComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pokemon" },
		{ "IncludePath", "ActorComponents/PokemonOwnershipComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrainer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatus_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCaught_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Ownership" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonOwnershipComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonOwnershipComponent constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTrainer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PokemonStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PokemonStatus;
	static void NewProp_bIsCaught_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCaught;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonOwnershipComponent constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearTrainerBindings"), .Pointer = &UPokemonOwnershipComponent::execClearTrainerBindings },
		{ .NameUTF8 = UTF8TEXT("GetCurrentTrainer"), .Pointer = &UPokemonOwnershipComponent::execGetCurrentTrainer },
		{ .NameUTF8 = UTF8TEXT("GetPokemonStatus"), .Pointer = &UPokemonOwnershipComponent::execGetPokemonStatus },
		{ .NameUTF8 = UTF8TEXT("HasTrainer"), .Pointer = &UPokemonOwnershipComponent::execHasTrainer },
		{ .NameUTF8 = UTF8TEXT("IsCaught"), .Pointer = &UPokemonOwnershipComponent::execIsCaught },
		{ .NameUTF8 = UTF8TEXT("IsOwnedByTrainer"), .Pointer = &UPokemonOwnershipComponent::execIsOwnedByTrainer },
		{ .NameUTF8 = UTF8TEXT("SetIsCaught"), .Pointer = &UPokemonOwnershipComponent::execSetIsCaught },
		{ .NameUTF8 = UTF8TEXT("SetPokemonTrainer"), .Pointer = &UPokemonOwnershipComponent::execSetPokemonTrainer },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_ClearTrainerBindings, "ClearTrainerBindings" }, // 2268299692
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_GetCurrentTrainer, "GetCurrentTrainer" }, // 1837324572
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_GetPokemonStatus, "GetPokemonStatus" }, // 1395627309
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_HasTrainer, "HasTrainer" }, // 723559508
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_IsCaught, "IsCaught" }, // 1942318225
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_IsOwnedByTrainer, "IsOwnedByTrainer" }, // 2314638054
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_SetIsCaught, "SetIsCaught" }, // 4031129680
		{ &Z_Construct_UFunction_UPokemonOwnershipComponent_SetPokemonTrainer, "SetPokemonTrainer" }, // 3462903437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonOwnershipComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonOwnershipComponent_Statics

// ********** Begin Class UPokemonOwnershipComponent Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_OwnerPokemon = { "OwnerPokemon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonOwnershipComponent, OwnerPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPokemon_MetaData), NewProp_OwnerPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_CurrentTrainer = { "CurrentTrainer", nullptr, (EPropertyFlags)0x0144000000020035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonOwnershipComponent, CurrentTrainer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrainer_MetaData), NewProp_CurrentTrainer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_PokemonStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_PokemonStatus = { "PokemonStatus", nullptr, (EPropertyFlags)0x0040000000020035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonOwnershipComponent, PokemonStatus), Z_Construct_UEnum_ProjectMimikyu_EPokemonStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonStatus_MetaData), NewProp_PokemonStatus_MetaData) }; // 1292692463
void Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_bIsCaught_SetBit(void* Obj)
{
	((UPokemonOwnershipComponent*)Obj)->bIsCaught = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_bIsCaught = { "bIsCaught", nullptr, (EPropertyFlags)0x0040000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonOwnershipComponent), &Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_bIsCaught_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCaught_MetaData), NewProp_bIsCaught_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonOwnershipComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_OwnerPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_CurrentTrainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_PokemonStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_PokemonStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonOwnershipComponent_Statics::NewProp_bIsCaught,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonOwnershipComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokemonOwnershipComponent Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPokemonOwnershipComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonOwnershipComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonOwnershipComponent_Statics::ClassParams = {
	&UPokemonOwnershipComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonOwnershipComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonOwnershipComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonOwnershipComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonOwnershipComponent_Statics::Class_MetaDataParams)
};
void UPokemonOwnershipComponent::StaticRegisterNativesUPokemonOwnershipComponent()
{
	UClass* Class = UPokemonOwnershipComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonOwnershipComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonOwnershipComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonOwnershipComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonOwnershipComponent.OuterSingleton, Z_Construct_UClass_UPokemonOwnershipComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonOwnershipComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UPokemonOwnershipComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentTrainer(TEXT("CurrentTrainer"));
	static FName Name_PokemonStatus(TEXT("PokemonStatus"));
	static FName Name_bIsCaught(TEXT("bIsCaught"));
	const bool bIsValid = true
		&& Name_CurrentTrainer == ClassReps[(int32)ENetFields_Private::CurrentTrainer].Property->GetFName()
		&& Name_PokemonStatus == ClassReps[(int32)ENetFields_Private::PokemonStatus].Property->GetFName()
		&& Name_bIsCaught == ClassReps[(int32)ENetFields_Private::bIsCaught].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPokemonOwnershipComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonOwnershipComponent);
UPokemonOwnershipComponent::~UPokemonOwnershipComponent() {}
// ********** End Class UPokemonOwnershipComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonOwnershipComponent, UPokemonOwnershipComponent::StaticClass, TEXT("UPokemonOwnershipComponent"), &Z_Registration_Info_UClass_UPokemonOwnershipComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonOwnershipComponent), 443099704U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h__Script_ProjectMimikyu_3048649846{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonOwnershipComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
