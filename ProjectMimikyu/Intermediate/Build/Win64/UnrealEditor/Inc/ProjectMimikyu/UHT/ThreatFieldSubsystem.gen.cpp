// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQS/Subsystems/ThreatFieldSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThreatFieldSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UThreatFieldSubsystem();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UThreatFieldSubsystem_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FEnvAreaCenterEntry();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FThreatEntry();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEnvAreaCenterEntry ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry;
class UScriptStruct* FEnvAreaCenterEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvAreaCenterEntry, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EnvAreaCenterEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEnvAreaCenterEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// EQS World Subsystem\n" },
#endif
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EQS World Subsystem" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvAreaCenterEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvAreaCenterEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"EnvAreaCenterEntry",
	nullptr,
	0,
	sizeof(FEnvAreaCenterEntry),
	alignof(FEnvAreaCenterEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvAreaCenterEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvAreaCenterEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvAreaCenterEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry.InnerSingleton, Z_Construct_UScriptStruct_FEnvAreaCenterEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry.InnerSingleton;
}
// ********** End ScriptStruct FEnvAreaCenterEntry *************************************************

// ********** Begin ScriptStruct FThreatEntry ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FThreatEntry;
class UScriptStruct* FThreatEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FThreatEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FThreatEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreatEntry, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("ThreatEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FThreatEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FThreatEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThreatEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThreatEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"ThreatEntry",
	nullptr,
	0,
	sizeof(FThreatEntry),
	alignof(FThreatEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreatEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FThreatEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FThreatEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FThreatEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FThreatEntry.InnerSingleton, Z_Construct_UScriptStruct_FThreatEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FThreatEntry.InnerSingleton;
}
// ********** End ScriptStruct FThreatEntry ********************************************************

// ********** Begin Class UThreatFieldSubsystem Function ClearCenterByActivationId *****************
struct Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics
{
	struct ThreatFieldSubsystem_eventClearCenterByActivationId_Parms
	{
		UAbilitySystemComponent* OwnerASC;
		int32 ActivationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threat Field Subsystem" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerASC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::NewProp_OwnerASC = { "OwnerASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventClearCenterByActivationId_Parms, OwnerASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerASC_MetaData), NewProp_OwnerASC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventClearCenterByActivationId_Parms, ActivationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::NewProp_OwnerASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::NewProp_ActivationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThreatFieldSubsystem, nullptr, "ClearCenterByActivationId", Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::ThreatFieldSubsystem_eventClearCenterByActivationId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::ThreatFieldSubsystem_eventClearCenterByActivationId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreatFieldSubsystem::execClearCenterByActivationId)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_OwnerASC);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActivationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCenterByActivationId(Z_Param_OwnerASC,Z_Param_ActivationId);
	P_NATIVE_END;
}
// ********** End Class UThreatFieldSubsystem Function ClearCenterByActivationId *******************

// ********** Begin Class UThreatFieldSubsystem Function ClearThreatsByActivationId ****************
struct Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics
{
	struct ThreatFieldSubsystem_eventClearThreatsByActivationId_Parms
	{
		UAbilitySystemComponent* OwnerASC;
		int32 ActivationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threat Field Subsystem" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerASC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::NewProp_OwnerASC = { "OwnerASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventClearThreatsByActivationId_Parms, OwnerASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerASC_MetaData), NewProp_OwnerASC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventClearThreatsByActivationId_Parms, ActivationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::NewProp_OwnerASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::NewProp_ActivationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThreatFieldSubsystem, nullptr, "ClearThreatsByActivationId", Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::ThreatFieldSubsystem_eventClearThreatsByActivationId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::ThreatFieldSubsystem_eventClearThreatsByActivationId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreatFieldSubsystem::execClearThreatsByActivationId)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_OwnerASC);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActivationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearThreatsByActivationId(Z_Param_OwnerASC,Z_Param_ActivationId);
	P_NATIVE_END;
}
// ********** End Class UThreatFieldSubsystem Function ClearThreatsByActivationId ******************

// ********** Begin Class UThreatFieldSubsystem Function GetAreaCenter *****************************
struct Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics
{
	struct ThreatFieldSubsystem_eventGetAreaCenter_Parms
	{
		UAbilitySystemComponent* OwnerASC;
		int32 ActivationId;
		FVector OutAreaCenter;
		float OutAreaRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threat Field Subsystem" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerASC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAreaCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAreaRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_OwnerASC = { "OwnerASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventGetAreaCenter_Parms, OwnerASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerASC_MetaData), NewProp_OwnerASC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventGetAreaCenter_Parms, ActivationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_OutAreaCenter = { "OutAreaCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventGetAreaCenter_Parms, OutAreaCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_OutAreaRadius = { "OutAreaRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventGetAreaCenter_Parms, OutAreaRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ThreatFieldSubsystem_eventGetAreaCenter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ThreatFieldSubsystem_eventGetAreaCenter_Parms), &Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_OwnerASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_ActivationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_OutAreaCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_OutAreaRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThreatFieldSubsystem, nullptr, "GetAreaCenter", Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::ThreatFieldSubsystem_eventGetAreaCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::ThreatFieldSubsystem_eventGetAreaCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreatFieldSubsystem::execGetAreaCenter)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_OwnerASC);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActivationId);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAreaCenter);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAreaRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAreaCenter(Z_Param_OwnerASC,Z_Param_ActivationId,Z_Param_Out_OutAreaCenter,Z_Param_Out_OutAreaRadius);
	P_NATIVE_END;
}
// ********** End Class UThreatFieldSubsystem Function GetAreaCenter *******************************

// ********** Begin Class UThreatFieldSubsystem Function QueryThreats ******************************
struct Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics
{
	struct ThreatFieldSubsystem_eventQueryThreats_Parms
	{
		FVector Near;
		float MaxRadius;
		double TimeHorizon;
		TArray<FThreatEntry> OutThreats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threat Field Subsystem" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Near_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Near;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeHorizon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutThreats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutThreats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_Near = { "Near", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventQueryThreats_Parms, Near), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Near_MetaData), NewProp_Near_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventQueryThreats_Parms, MaxRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_TimeHorizon = { "TimeHorizon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventQueryThreats_Parms, TimeHorizon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_OutThreats_Inner = { "OutThreats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FThreatEntry, METADATA_PARAMS(0, nullptr) }; // 1265474285
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_OutThreats = { "OutThreats", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventQueryThreats_Parms, OutThreats), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1265474285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_Near,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_MaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_TimeHorizon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_OutThreats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::NewProp_OutThreats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThreatFieldSubsystem, nullptr, "QueryThreats", Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::ThreatFieldSubsystem_eventQueryThreats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::ThreatFieldSubsystem_eventQueryThreats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreatFieldSubsystem::execQueryThreats)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Near);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRadius);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_TimeHorizon);
	P_GET_TARRAY_REF(FThreatEntry,Z_Param_Out_OutThreats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryThreats(Z_Param_Out_Near,Z_Param_MaxRadius,Z_Param_TimeHorizon,Z_Param_Out_OutThreats);
	P_NATIVE_END;
}
// ********** End Class UThreatFieldSubsystem Function QueryThreats ********************************

// ********** Begin Class UThreatFieldSubsystem Function RegisterAreaCenter ************************
struct Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics
{
	struct ThreatFieldSubsystem_eventRegisterAreaCenter_Parms
	{
		UAbilitySystemComponent* OwnerASC;
		int32 ActivationId;
		FVector AreaCenter;
		float AreaRadius;
		double TimeToLive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threat Field Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Centers\n" },
#endif
		{ "CPP_Default_TimeToLive", "0.000000" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Centers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerASC_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerASC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AreaCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaRadius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeToLive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_OwnerASC = { "OwnerASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterAreaCenter_Parms, OwnerASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerASC_MetaData), NewProp_OwnerASC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterAreaCenter_Parms, ActivationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_AreaCenter = { "AreaCenter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterAreaCenter_Parms, AreaCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaCenter_MetaData), NewProp_AreaCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_AreaRadius = { "AreaRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterAreaCenter_Parms, AreaRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_TimeToLive = { "TimeToLive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterAreaCenter_Parms, TimeToLive), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_OwnerASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_ActivationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_AreaCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_AreaRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::NewProp_TimeToLive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThreatFieldSubsystem, nullptr, "RegisterAreaCenter", Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::ThreatFieldSubsystem_eventRegisterAreaCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::ThreatFieldSubsystem_eventRegisterAreaCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreatFieldSubsystem::execRegisterAreaCenter)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_OwnerASC);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActivationId);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AreaCenter);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AreaRadius);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_TimeToLive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAreaCenter(Z_Param_OwnerASC,Z_Param_ActivationId,Z_Param_Out_AreaCenter,Z_Param_AreaRadius,Z_Param_TimeToLive);
	P_NATIVE_END;
}
// ********** End Class UThreatFieldSubsystem Function RegisterAreaCenter **************************

// ********** Begin Class UThreatFieldSubsystem Function RegisterThreat ****************************
struct Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics
{
	struct ThreatFieldSubsystem_eventRegisterThreat_Parms
	{
		UAbilitySystemComponent* OwnerASC;
		int32 ActivationId;
		FVector Location;
		float ImpactRadius;
		double TelegraphedAt;
		double ETA;
		double EndAt;
		AActor* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threat Field Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Threats\n" },
#endif
		{ "CPP_Default_Instigator", "None" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Threats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerASC_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerASC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactRadius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TelegraphedAt;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ETA;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndAt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_OwnerASC = { "OwnerASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, OwnerASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerASC_MetaData), NewProp_OwnerASC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, ActivationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_ImpactRadius = { "ImpactRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, ImpactRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_TelegraphedAt = { "TelegraphedAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, TelegraphedAt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_ETA = { "ETA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, ETA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_EndAt = { "EndAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, EndAt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventRegisterThreat_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_OwnerASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_ActivationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_ImpactRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_TelegraphedAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_ETA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_EndAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThreatFieldSubsystem, nullptr, "RegisterThreat", Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::ThreatFieldSubsystem_eventRegisterThreat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::ThreatFieldSubsystem_eventRegisterThreat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreatFieldSubsystem::execRegisterThreat)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_OwnerASC);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActivationId);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ImpactRadius);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_TelegraphedAt);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ETA);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_EndAt);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterThreat(Z_Param_OwnerASC,Z_Param_ActivationId,Z_Param_Out_Location,Z_Param_ImpactRadius,Z_Param_TelegraphedAt,Z_Param_ETA,Z_Param_EndAt,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class UThreatFieldSubsystem Function RegisterThreat ******************************

// ********** Begin Class UThreatFieldSubsystem Function UpdateAreaCenter **************************
struct Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics
{
	struct ThreatFieldSubsystem_eventUpdateAreaCenter_Parms
	{
		UAbilitySystemComponent* OwnerASC;
		int32 ActivationId;
		FVector NewAreaCenter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threat Field Subsystem" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerASC_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAreaCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerASC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAreaCenter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::NewProp_OwnerASC = { "OwnerASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventUpdateAreaCenter_Parms, OwnerASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerASC_MetaData), NewProp_OwnerASC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::NewProp_ActivationId = { "ActivationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventUpdateAreaCenter_Parms, ActivationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::NewProp_NewAreaCenter = { "NewAreaCenter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreatFieldSubsystem_eventUpdateAreaCenter_Parms, NewAreaCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAreaCenter_MetaData), NewProp_NewAreaCenter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::NewProp_OwnerASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::NewProp_ActivationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::NewProp_NewAreaCenter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThreatFieldSubsystem, nullptr, "UpdateAreaCenter", Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::ThreatFieldSubsystem_eventUpdateAreaCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::ThreatFieldSubsystem_eventUpdateAreaCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreatFieldSubsystem::execUpdateAreaCenter)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_OwnerASC);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActivationId);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAreaCenter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAreaCenter(Z_Param_OwnerASC,Z_Param_ActivationId,Z_Param_Out_NewAreaCenter);
	P_NATIVE_END;
}
// ********** End Class UThreatFieldSubsystem Function UpdateAreaCenter ****************************

// ********** Begin Class UThreatFieldSubsystem ****************************************************
void UThreatFieldSubsystem::StaticRegisterNativesUThreatFieldSubsystem()
{
	UClass* Class = UThreatFieldSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCenterByActivationId", &UThreatFieldSubsystem::execClearCenterByActivationId },
		{ "ClearThreatsByActivationId", &UThreatFieldSubsystem::execClearThreatsByActivationId },
		{ "GetAreaCenter", &UThreatFieldSubsystem::execGetAreaCenter },
		{ "QueryThreats", &UThreatFieldSubsystem::execQueryThreats },
		{ "RegisterAreaCenter", &UThreatFieldSubsystem::execRegisterAreaCenter },
		{ "RegisterThreat", &UThreatFieldSubsystem::execRegisterThreat },
		{ "UpdateAreaCenter", &UThreatFieldSubsystem::execUpdateAreaCenter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UThreatFieldSubsystem;
UClass* UThreatFieldSubsystem::GetPrivateStaticClass()
{
	using TClass = UThreatFieldSubsystem;
	if (!Z_Registration_Info_UClass_UThreatFieldSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ThreatFieldSubsystem"),
			Z_Registration_Info_UClass_UThreatFieldSubsystem.InnerSingleton,
			StaticRegisterNativesUThreatFieldSubsystem,
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
	return Z_Registration_Info_UClass_UThreatFieldSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UThreatFieldSubsystem_NoRegister()
{
	return UThreatFieldSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UThreatFieldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EQS/Subsystems/ThreatFieldSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EQS/Subsystems/ThreatFieldSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UThreatFieldSubsystem_ClearCenterByActivationId, "ClearCenterByActivationId" }, // 1599059426
		{ &Z_Construct_UFunction_UThreatFieldSubsystem_ClearThreatsByActivationId, "ClearThreatsByActivationId" }, // 2247695501
		{ &Z_Construct_UFunction_UThreatFieldSubsystem_GetAreaCenter, "GetAreaCenter" }, // 3019776766
		{ &Z_Construct_UFunction_UThreatFieldSubsystem_QueryThreats, "QueryThreats" }, // 3500027915
		{ &Z_Construct_UFunction_UThreatFieldSubsystem_RegisterAreaCenter, "RegisterAreaCenter" }, // 3027345682
		{ &Z_Construct_UFunction_UThreatFieldSubsystem_RegisterThreat, "RegisterThreat" }, // 1850300682
		{ &Z_Construct_UFunction_UThreatFieldSubsystem_UpdateAreaCenter, "UpdateAreaCenter" }, // 127976565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThreatFieldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThreatFieldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThreatFieldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThreatFieldSubsystem_Statics::ClassParams = {
	&UThreatFieldSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThreatFieldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UThreatFieldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThreatFieldSubsystem()
{
	if (!Z_Registration_Info_UClass_UThreatFieldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThreatFieldSubsystem.OuterSingleton, Z_Construct_UClass_UThreatFieldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThreatFieldSubsystem.OuterSingleton;
}
UThreatFieldSubsystem::UThreatFieldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThreatFieldSubsystem);
UThreatFieldSubsystem::~UThreatFieldSubsystem() {}
// ********** End Class UThreatFieldSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnvAreaCenterEntry::StaticStruct, Z_Construct_UScriptStruct_FEnvAreaCenterEntry_Statics::NewStructOps, TEXT("EnvAreaCenterEntry"), &Z_Registration_Info_UScriptStruct_FEnvAreaCenterEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvAreaCenterEntry), 2075844892U) },
		{ FThreatEntry::StaticStruct, Z_Construct_UScriptStruct_FThreatEntry_Statics::NewStructOps, TEXT("ThreatEntry"), &Z_Registration_Info_UScriptStruct_FThreatEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreatEntry), 1265474285U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThreatFieldSubsystem, UThreatFieldSubsystem::StaticClass, TEXT("UThreatFieldSubsystem"), &Z_Registration_Info_UClass_UThreatFieldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThreatFieldSubsystem), 3376041063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h__Script_ProjectMimikyu_2920211164(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Subsystems_ThreatFieldSubsystem_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
