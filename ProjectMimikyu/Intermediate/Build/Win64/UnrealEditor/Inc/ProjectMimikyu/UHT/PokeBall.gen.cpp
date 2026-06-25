// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/PokeBall.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokeBall() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokeballCaptureComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokeballSummonComponent_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokeballType();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokeballUseMode();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APokeBall Function DestroyPokeball ***************************************
struct Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyPokeball constinit property declarations ***********************
// ********** End Function DestroyPokeball constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "DestroyPokeball", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokeBall_DestroyPokeball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execDestroyPokeball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPokeball();
	P_NATIVE_END;
}
// ********** End Class APokeBall Function DestroyPokeball *****************************************

// ********** Begin Class APokeBall Function GetPokeballType ***************************************
struct Z_Construct_UFunction_APokeBall_GetPokeballType_Statics
{
	struct PokeBall_eventGetPokeballType_Parms
	{
		EPokeballType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokeball" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokeballType constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokeballType constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokeballType Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventGetPokeballType_Parms, ReturnValue), Z_Construct_UEnum_ProjectMimikyu_EPokeballType, METADATA_PARAMS(0, nullptr) }; // 2498691174
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::PropPointers) < 2048);
// ********** End Function GetPokeballType Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "GetPokeballType", 	Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::PokeBall_eventGetPokeballType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::PokeBall_eventGetPokeballType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokeBall_GetPokeballType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_GetPokeballType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execGetPokeballType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPokeballType*)Z_Param__Result=P_THIS->GetPokeballType();
	P_NATIVE_END;
}
// ********** End Class APokeBall Function GetPokeballType *****************************************

// ********** Begin Class APokeBall Function InitializeForCapture **********************************
struct Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics
{
	struct PokeBall_eventInitializeForCapture_Parms
	{
		AActor* InSourceActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokeball" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeForCapture constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSourceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeForCapture constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeForCapture Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::NewProp_InSourceActor = { "InSourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventInitializeForCapture_Parms, InSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::NewProp_InSourceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::PropPointers) < 2048);
// ********** End Function InitializeForCapture Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "InitializeForCapture", 	Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::PokeBall_eventInitializeForCapture_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::PokeBall_eventInitializeForCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokeBall_InitializeForCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_InitializeForCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execInitializeForCapture)
{
	P_GET_OBJECT(AActor,Z_Param_InSourceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeForCapture(Z_Param_InSourceActor);
	P_NATIVE_END;
}
// ********** End Class APokeBall Function InitializeForCapture ************************************

// ********** Begin Class APokeBall Function InitializeForSummon ***********************************
struct Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics
{
	struct PokeBall_eventInitializeForSummon_Parms
	{
		AActor* InSourceActor;
		FVector InTargetLocation;
		int32 InPartySlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokeball" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeForSummon constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSourceActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPartySlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeForSummon constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeForSummon Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::NewProp_InSourceActor = { "InSourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventInitializeForSummon_Parms, InSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventInitializeForSummon_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetLocation_MetaData), NewProp_InTargetLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::NewProp_InPartySlotIndex = { "InPartySlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventInitializeForSummon_Parms, InPartySlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::NewProp_InSourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::NewProp_InTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::NewProp_InPartySlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::PropPointers) < 2048);
// ********** End Function InitializeForSummon Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "InitializeForSummon", 	Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::PokeBall_eventInitializeForSummon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::PokeBall_eventInitializeForSummon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokeBall_InitializeForSummon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_InitializeForSummon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execInitializeForSummon)
{
	P_GET_OBJECT(AActor,Z_Param_InSourceActor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InTargetLocation);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPartySlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeForSummon(Z_Param_InSourceActor,Z_Param_Out_InTargetLocation,Z_Param_InPartySlotIndex);
	P_NATIVE_END;
}
// ********** End Class APokeBall Function InitializeForSummon *************************************

// ********** Begin Class APokeBall Function OnBeginOverlap ****************************************
struct Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics
{
	struct PokeBall_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnBeginOverlap constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnBeginOverlap constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnBeginOverlap Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PokeBall_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokeBall_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnBeginOverlap Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "OnBeginOverlap", 	Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::PokeBall_eventOnBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::PokeBall_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokeBall_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APokeBall Function OnBeginOverlap ******************************************

// ********** Begin Class APokeBall Function OnPokeballStop ****************************************
struct Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics
{
	struct PokeBall_eventOnPokeballStop_Parms
	{
		FHitResult ImpactResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPokeballStop constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPokeballStop constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPokeballStop Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventOnPokeballStop_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::NewProp_ImpactResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers) < 2048);
// ********** End Function OnPokeballStop Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "OnPokeballStop", 	Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PokeBall_eventOnPokeballStop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PokeBall_eventOnPokeballStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokeBall_OnPokeballStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execOnPokeballStop)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPokeballStop(Z_Param_Out_ImpactResult);
	P_NATIVE_END;
}
// ********** End Class APokeBall Function OnPokeballStop ******************************************

// ********** Begin Class APokeBall Function SetPokeballType ***************************************
struct Z_Construct_UFunction_APokeBall_SetPokeballType_Statics
{
	struct PokeBall_eventSetPokeballType_Parms
	{
		EPokeballType NewPokeballType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokeball" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPokeballType constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPokeballType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPokeballType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPokeballType constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPokeballType Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::NewProp_NewPokeballType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::NewProp_NewPokeballType = { "NewPokeballType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventSetPokeballType_Parms, NewPokeballType), Z_Construct_UEnum_ProjectMimikyu_EPokeballType, METADATA_PARAMS(0, nullptr) }; // 2498691174
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::NewProp_NewPokeballType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::NewProp_NewPokeballType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::PropPointers) < 2048);
// ********** End Function SetPokeballType Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "SetPokeballType", 	Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::PokeBall_eventSetPokeballType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::PokeBall_eventSetPokeballType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokeBall_SetPokeballType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_SetPokeballType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execSetPokeballType)
{
	P_GET_ENUM(EPokeballType,Z_Param_NewPokeballType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPokeballType(EPokeballType(Z_Param_NewPokeballType));
	P_NATIVE_END;
}
// ********** End Class APokeBall Function SetPokeballType *****************************************

// ********** Begin Class APokeBall ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APokeBall;
UClass* APokeBall::GetPrivateStaticClass()
{
	using TClass = APokeBall;
	if (!Z_Registration_Info_UClass_APokeBall.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokeBall"),
			Z_Registration_Info_UClass_APokeBall.InnerSingleton,
			StaticRegisterNativesAPokeBall,
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
	return Z_Registration_Info_UClass_APokeBall.InnerSingleton;
}
UClass* Z_Construct_UClass_APokeBall_NoRegister()
{
	return APokeBall::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APokeBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/PokeBall.h" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "Pokeball|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonComponent_MetaData[] = {
		{ "Category", "Pokeball|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveUseMode_MetaData[] = {
		{ "Category", "Pokeball|Mode" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyAfterStopDelay_MetaData[] = {
		{ "Category", "Pokeball" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokeball_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseModifier_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostedModifier_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APokeBall constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SummonComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveUseMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveUseMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyAfterStopDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPokeball_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPokeball;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostedModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APokeBall constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DestroyPokeball"), .Pointer = &APokeBall::execDestroyPokeball },
		{ .NameUTF8 = UTF8TEXT("GetPokeballType"), .Pointer = &APokeBall::execGetPokeballType },
		{ .NameUTF8 = UTF8TEXT("InitializeForCapture"), .Pointer = &APokeBall::execInitializeForCapture },
		{ .NameUTF8 = UTF8TEXT("InitializeForSummon"), .Pointer = &APokeBall::execInitializeForSummon },
		{ .NameUTF8 = UTF8TEXT("OnBeginOverlap"), .Pointer = &APokeBall::execOnBeginOverlap },
		{ .NameUTF8 = UTF8TEXT("OnPokeballStop"), .Pointer = &APokeBall::execOnPokeballStop },
		{ .NameUTF8 = UTF8TEXT("SetPokeballType"), .Pointer = &APokeBall::execSetPokeballType },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APokeBall_DestroyPokeball, "DestroyPokeball" }, // 459954646
		{ &Z_Construct_UFunction_APokeBall_GetPokeballType, "GetPokeballType" }, // 1120088706
		{ &Z_Construct_UFunction_APokeBall_InitializeForCapture, "InitializeForCapture" }, // 1009026790
		{ &Z_Construct_UFunction_APokeBall_InitializeForSummon, "InitializeForSummon" }, // 1995402389
		{ &Z_Construct_UFunction_APokeBall_OnBeginOverlap, "OnBeginOverlap" }, // 3040017189
		{ &Z_Construct_UFunction_APokeBall_OnPokeballStop, "OnPokeballStop" }, // 2171056402
		{ &Z_Construct_UFunction_APokeBall_SetPokeballType, "SetPokeballType" }, // 2380213761
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokeBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APokeBall_Statics

// ********** Begin Class APokeBall Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, CaptureComponent), Z_Construct_UClass_UPokeballCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_SummonComponent = { "SummonComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, SummonComponent), Z_Construct_UClass_UPokeballSummonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonComponent_MetaData), NewProp_SummonComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_ActiveUseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_ActiveUseMode = { "ActiveUseMode", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, ActiveUseMode), Z_Construct_UEnum_ProjectMimikyu_EPokeballUseMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveUseMode_MetaData), NewProp_ActiveUseMode_MetaData) }; // 3521838252
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_DestroyAfterStopDelay = { "DestroyAfterStopDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, DestroyAfterStopDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyAfterStopDelay_MetaData), NewProp_DestroyAfterStopDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, ProjectileMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball = { "CurrentPokeball", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, CurrentPokeball), Z_Construct_UEnum_ProjectMimikyu_EPokeballType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokeball_MetaData), NewProp_CurrentPokeball_MetaData) }; // 2498691174
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_BaseModifier = { "BaseModifier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, BaseModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseModifier_MetaData), NewProp_BaseModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_BoostedModifier = { "BoostedModifier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, BoostedModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostedModifier_MetaData), NewProp_BoostedModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokeBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_SummonComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_ActiveUseMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_ActiveUseMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_DestroyAfterStopDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_ProjectileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_BaseModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_BoostedModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::PropPointers) < 2048);
// ********** End Class APokeBall Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_APokeBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokeBall_Statics::ClassParams = {
	&APokeBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APokeBall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::Class_MetaDataParams), Z_Construct_UClass_APokeBall_Statics::Class_MetaDataParams)
};
void APokeBall::StaticRegisterNativesAPokeBall()
{
	UClass* Class = APokeBall::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APokeBall_Statics::Funcs));
}
UClass* Z_Construct_UClass_APokeBall()
{
	if (!Z_Registration_Info_UClass_APokeBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokeBall.OuterSingleton, Z_Construct_UClass_APokeBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokeBall.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APokeBall);
APokeBall::~APokeBall() {}
// ********** End Class APokeBall ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokeBall, APokeBall::StaticClass, TEXT("APokeBall"), &Z_Registration_Info_UClass_APokeBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokeBall), 2290263857U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_3190344858{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
