// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "World/RegionVolume.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRegionVolume() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ARegionVolume();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ARegionVolume_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_URegionPopulationData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARegionVolume Function GetBiomeTags **************************************
struct Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics
{
	struct RegionVolume_eventGetBiomeTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBiomeTags constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBiomeTags constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBiomeTags Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventGetBiomeTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::PropPointers) < 2048);
// ********** End Function GetBiomeTags Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARegionVolume, nullptr, "GetBiomeTags", 	Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::RegionVolume_eventGetBiomeTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::RegionVolume_eventGetBiomeTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARegionVolume_GetBiomeTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARegionVolume_GetBiomeTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARegionVolume::execGetBiomeTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetBiomeTags();
	P_NATIVE_END;
}
// ********** End Class ARegionVolume Function GetBiomeTags ****************************************

// ********** Begin Class ARegionVolume Function GetEnvironmentTags ********************************
struct Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics
{
	struct RegionVolume_eventGetEnvironmentTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnvironmentTags constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnvironmentTags constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnvironmentTags Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventGetEnvironmentTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::PropPointers) < 2048);
// ********** End Function GetEnvironmentTags Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARegionVolume, nullptr, "GetEnvironmentTags", 	Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::RegionVolume_eventGetEnvironmentTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::RegionVolume_eventGetEnvironmentTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARegionVolume::execGetEnvironmentTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetEnvironmentTags();
	P_NATIVE_END;
}
// ********** End Class ARegionVolume Function GetEnvironmentTags **********************************

// ********** Begin Class ARegionVolume Function GetRegionPopulationData ***************************
struct Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics
{
	struct RegionVolume_eventGetRegionPopulationData_Parms
	{
		URegionPopulationData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRegionPopulationData constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRegionPopulationData constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRegionPopulationData Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventGetRegionPopulationData_Parms, ReturnValue), Z_Construct_UClass_URegionPopulationData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::PropPointers) < 2048);
// ********** End Function GetRegionPopulationData Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARegionVolume, nullptr, "GetRegionPopulationData", 	Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::RegionVolume_eventGetRegionPopulationData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::RegionVolume_eventGetRegionPopulationData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARegionVolume::execGetRegionPopulationData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URegionPopulationData**)Z_Param__Result=P_THIS->GetRegionPopulationData();
	P_NATIVE_END;
}
// ********** End Class ARegionVolume Function GetRegionPopulationData *****************************

// ********** Begin Class ARegionVolume Function GetRegionTag **************************************
struct Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics
{
	struct RegionVolume_eventGetRegionTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRegionTag constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRegionTag constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRegionTag Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventGetRegionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::PropPointers) < 2048);
// ********** End Function GetRegionTag Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARegionVolume, nullptr, "GetRegionTag", 	Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::RegionVolume_eventGetRegionTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::RegionVolume_eventGetRegionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARegionVolume_GetRegionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARegionVolume_GetRegionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARegionVolume::execGetRegionTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetRegionTag();
	P_NATIVE_END;
}
// ********** End Class ARegionVolume Function GetRegionTag ****************************************

// ********** Begin Class ARegionVolume Function OnRegionBeginOverlap ******************************
struct Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics
{
	struct RegionVolume_eventOnRegionBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRegionBeginOverlap constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRegionBeginOverlap constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRegionBeginOverlap Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((RegionVolume_eventOnRegionBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RegionVolume_eventOnRegionBeginOverlap_Parms), &Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnRegionBeginOverlap Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARegionVolume, nullptr, "OnRegionBeginOverlap", 	Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::RegionVolume_eventOnRegionBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::RegionVolume_eventOnRegionBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARegionVolume::execOnRegionBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRegionBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ARegionVolume Function OnRegionBeginOverlap ********************************

// ********** Begin Class ARegionVolume Function OnRegionEndOverlap ********************************
struct Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics
{
	struct RegionVolume_eventOnRegionEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRegionEndOverlap constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRegionEndOverlap constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRegionEndOverlap Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegionVolume_eventOnRegionEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnRegionEndOverlap Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARegionVolume, nullptr, "OnRegionEndOverlap", 	Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::RegionVolume_eventOnRegionEndOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::RegionVolume_eventOnRegionEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARegionVolume::execOnRegionEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRegionEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class ARegionVolume Function OnRegionEndOverlap **********************************

// ********** Begin Class ARegionVolume ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARegionVolume;
UClass* ARegionVolume::GetPrivateStaticClass()
{
	using TClass = ARegionVolume;
	if (!Z_Registration_Info_UClass_ARegionVolume.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RegionVolume"),
			Z_Registration_Info_UClass_ARegionVolume.InnerSingleton,
			StaticRegisterNativesARegionVolume,
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
	return Z_Registration_Info_UClass_ARegionVolume.InnerSingleton;
}
UClass* Z_Construct_UClass_ARegionVolume_NoRegister()
{
	return ARegionVolume::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARegionVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ARegionVolume\n *\n * Placed in the world to define a gameplay region.\n *\n * Early prototype responsibilities:\n * - Define Region/Biome/Environment tags.\n * - Optionally reference region population data.\n * - Detect player entry/exit.\n * - Print debug info.\n *\n * Later responsibilities:\n * - Notify UWorldPopulationSubsystem.\n * - Drive spawn rules, despawn rules, region reputation, and persistence.\n */" },
#endif
		{ "IncludePath", "World/RegionVolume.h" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ARegionVolume\n\nPlaced in the world to define a gameplay region.\n\nEarly prototype responsibilities:\n- Define Region/Biome/Environment tags.\n- Optionally reference region population data.\n- Detect player entry/exit.\n- Print debug info.\n\nLater responsibilities:\n- Notify UWorldPopulationSubsystem.\n- Drive spawn rules, despawn rules, region reputation, and persistence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionBounds_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionTag_MetaData[] = {
		{ "Categories", "Region" },
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomeTags_MetaData[] = {
		{ "Categories", "Biome" },
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentTags_MetaData[] = {
		{ "Categories", "Environment" },
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionPopulationData_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugRegionOverlap_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMessageDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnterColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugExitColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/World/RegionVolume.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARegionVolume constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegionBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiomeTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvironmentTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegionPopulationData;
	static void NewProp_bDebugRegionOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugRegionOverlap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugMessageDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugEnterColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugExitColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARegionVolume constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBiomeTags"), .Pointer = &ARegionVolume::execGetBiomeTags },
		{ .NameUTF8 = UTF8TEXT("GetEnvironmentTags"), .Pointer = &ARegionVolume::execGetEnvironmentTags },
		{ .NameUTF8 = UTF8TEXT("GetRegionPopulationData"), .Pointer = &ARegionVolume::execGetRegionPopulationData },
		{ .NameUTF8 = UTF8TEXT("GetRegionTag"), .Pointer = &ARegionVolume::execGetRegionTag },
		{ .NameUTF8 = UTF8TEXT("OnRegionBeginOverlap"), .Pointer = &ARegionVolume::execOnRegionBeginOverlap },
		{ .NameUTF8 = UTF8TEXT("OnRegionEndOverlap"), .Pointer = &ARegionVolume::execOnRegionEndOverlap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARegionVolume_GetBiomeTags, "GetBiomeTags" }, // 2309046009
		{ &Z_Construct_UFunction_ARegionVolume_GetEnvironmentTags, "GetEnvironmentTags" }, // 2511025645
		{ &Z_Construct_UFunction_ARegionVolume_GetRegionPopulationData, "GetRegionPopulationData" }, // 2024034177
		{ &Z_Construct_UFunction_ARegionVolume_GetRegionTag, "GetRegionTag" }, // 3553042108
		{ &Z_Construct_UFunction_ARegionVolume_OnRegionBeginOverlap, "OnRegionBeginOverlap" }, // 2552400131
		{ &Z_Construct_UFunction_ARegionVolume_OnRegionEndOverlap, "OnRegionEndOverlap" }, // 3105324053
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARegionVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARegionVolume_Statics

// ********** Begin Class ARegionVolume Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_RegionBounds = { "RegionBounds", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, RegionBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionBounds_MetaData), NewProp_RegionBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_RegionTag = { "RegionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, RegionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionTag_MetaData), NewProp_RegionTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_BiomeTags = { "BiomeTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, BiomeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomeTags_MetaData), NewProp_BiomeTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_EnvironmentTags = { "EnvironmentTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, EnvironmentTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentTags_MetaData), NewProp_EnvironmentTags_MetaData) }; // 3438578166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_RegionPopulationData = { "RegionPopulationData", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, RegionPopulationData), Z_Construct_UClass_URegionPopulationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionPopulationData_MetaData), NewProp_RegionPopulationData_MetaData) };
void Z_Construct_UClass_ARegionVolume_Statics::NewProp_bDebugRegionOverlap_SetBit(void* Obj)
{
	((ARegionVolume*)Obj)->bDebugRegionOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_bDebugRegionOverlap = { "bDebugRegionOverlap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARegionVolume), &Z_Construct_UClass_ARegionVolume_Statics::NewProp_bDebugRegionOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugRegionOverlap_MetaData), NewProp_bDebugRegionOverlap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_DebugMessageDuration = { "DebugMessageDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, DebugMessageDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMessageDuration_MetaData), NewProp_DebugMessageDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_DebugEnterColor = { "DebugEnterColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, DebugEnterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnterColor_MetaData), NewProp_DebugEnterColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARegionVolume_Statics::NewProp_DebugExitColor = { "DebugExitColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARegionVolume, DebugExitColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugExitColor_MetaData), NewProp_DebugExitColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARegionVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_RegionBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_RegionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_BiomeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_EnvironmentTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_RegionPopulationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_bDebugRegionOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_DebugMessageDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_DebugEnterColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegionVolume_Statics::NewProp_DebugExitColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARegionVolume_Statics::PropPointers) < 2048);
// ********** End Class ARegionVolume Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_ARegionVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARegionVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARegionVolume_Statics::ClassParams = {
	&ARegionVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARegionVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARegionVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARegionVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ARegionVolume_Statics::Class_MetaDataParams)
};
void ARegionVolume::StaticRegisterNativesARegionVolume()
{
	UClass* Class = ARegionVolume::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ARegionVolume_Statics::Funcs));
}
UClass* Z_Construct_UClass_ARegionVolume()
{
	if (!Z_Registration_Info_UClass_ARegionVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARegionVolume.OuterSingleton, Z_Construct_UClass_ARegionVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARegionVolume.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARegionVolume);
ARegionVolume::~ARegionVolume() {}
// ********** End Class ARegionVolume **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARegionVolume, ARegionVolume::StaticClass, TEXT("ARegionVolume"), &Z_Registration_Info_UClass_ARegionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARegionVolume), 3581351691U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h__Script_ProjectMimikyu_3875115102{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_World_RegionVolume_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
