// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/PokemonProjectileTagLibrary.h"
#include "Characters/CharacterTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonProjectileTagLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonProjectileTagLibrary();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonProjectileTagLibrary_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FSequentialShotParams();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonProjectileTagLibrary Function ComputeSequentialShotRotation ******
struct Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics
{
	struct PokemonProjectileTagLibrary_eventComputeSequentialShotRotation_Parms
	{
		FGameplayTagContainer ResolvedTags;
		FSequentialShotParams SequentialShotParams;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MoveHelper" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonProjectileTagLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequentialShotParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequentialShotParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::NewProp_ResolvedTags = { "ResolvedTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventComputeSequentialShotRotation_Parms, ResolvedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedTags_MetaData), NewProp_ResolvedTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::NewProp_SequentialShotParams = { "SequentialShotParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventComputeSequentialShotRotation_Parms, SequentialShotParams), Z_Construct_UScriptStruct_FSequentialShotParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequentialShotParams_MetaData), NewProp_SequentialShotParams_MetaData) }; // 1706502883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventComputeSequentialShotRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::NewProp_ResolvedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::NewProp_SequentialShotParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonProjectileTagLibrary, nullptr, "ComputeSequentialShotRotation", Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::PokemonProjectileTagLibrary_eventComputeSequentialShotRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::PokemonProjectileTagLibrary_eventComputeSequentialShotRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonProjectileTagLibrary::execComputeSequentialShotRotation)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ResolvedTags);
	P_GET_STRUCT_REF(FSequentialShotParams,Z_Param_Out_SequentialShotParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UPokemonProjectileTagLibrary::ComputeSequentialShotRotation(Z_Param_Out_ResolvedTags,Z_Param_Out_SequentialShotParams);
	P_NATIVE_END;
}
// ********** End Class UPokemonProjectileTagLibrary Function ComputeSequentialShotRotation ********

// ********** Begin Class UPokemonProjectileTagLibrary Function GetBestTagForCategory **************
struct Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics
{
	struct PokemonProjectileTagLibrary_eventGetBestTagForCategory_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTagContainer TagContainer;
		FName CategoryName;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TagCategory" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonProjectileTagLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetBestTagForCategory_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetBestTagForCategory_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 2104890724
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetBestTagForCategory_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetBestTagForCategory_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonProjectileTagLibrary, nullptr, "GetBestTagForCategory", Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::PokemonProjectileTagLibrary_eventGetBestTagForCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::PokemonProjectileTagLibrary_eventGetBestTagForCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonProjectileTagLibrary::execGetBestTagForCategory)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UPokemonProjectileTagLibrary::GetBestTagForCategory(Z_Param_WorldContextObject,Z_Param_Out_TagContainer,Z_Param_Out_CategoryName);
	P_NATIVE_END;
}
// ********** End Class UPokemonProjectileTagLibrary Function GetBestTagForCategory ****************

// ********** Begin Class UPokemonProjectileTagLibrary Function GetFunctionNameForCategory *********
struct Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics
{
	struct PokemonProjectileTagLibrary_eventGetFunctionNameForCategory_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag Tag;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TagCategory" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonProjectileTagLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetFunctionNameForCategory_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetFunctionNameForCategory_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetFunctionNameForCategory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonProjectileTagLibrary, nullptr, "GetFunctionNameForCategory", Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::PokemonProjectileTagLibrary_eventGetFunctionNameForCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::PokemonProjectileTagLibrary_eventGetFunctionNameForCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonProjectileTagLibrary::execGetFunctionNameForCategory)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UPokemonProjectileTagLibrary::GetFunctionNameForCategory(Z_Param_WorldContextObject,Z_Param_Out_Tag);
	P_NATIVE_END;
}
// ********** End Class UPokemonProjectileTagLibrary Function GetFunctionNameForCategory ***********

// ********** Begin Class UPokemonProjectileTagLibrary Function GetScatterSphereRotation ***********
struct Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics
{
	struct PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms
	{
		FVector StartLocation;
		FVector TargetLocation;
		float DistanceToSphere;
		float SphereRadius;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MoveHelper" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonProjectileTagLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms, DistanceToSphere), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms, SphereRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_DistanceToSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonProjectileTagLibrary, nullptr, "GetScatterSphereRotation", Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::PokemonProjectileTagLibrary_eventGetScatterSphereRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonProjectileTagLibrary::execGetScatterSphereRotation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToSphere);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SphereRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UPokemonProjectileTagLibrary::GetScatterSphereRotation(Z_Param_Out_StartLocation,Z_Param_Out_TargetLocation,Z_Param_DistanceToSphere,Z_Param_SphereRadius);
	P_NATIVE_END;
}
// ********** End Class UPokemonProjectileTagLibrary Function GetScatterSphereRotation *************

// ********** Begin Class UPokemonProjectileTagLibrary Function ResolveTagContainer ****************
struct Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics
{
	struct PokemonProjectileTagLibrary_eventResolveTagContainer_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTagContainer TagContainer;
		TArray<FGameplayTag> OutTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TagCategory" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonProjectileTagLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventResolveTagContainer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventResolveTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_OutTags_Inner = { "OutTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_OutTags = { "OutTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProjectileTagLibrary_eventResolveTagContainer_Parms, OutTags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_OutTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::NewProp_OutTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonProjectileTagLibrary, nullptr, "ResolveTagContainer", Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::PokemonProjectileTagLibrary_eventResolveTagContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::PokemonProjectileTagLibrary_eventResolveTagContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonProjectileTagLibrary::execResolveTagContainer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_OutTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonProjectileTagLibrary::ResolveTagContainer(Z_Param_WorldContextObject,Z_Param_Out_TagContainer,Z_Param_Out_OutTags);
	P_NATIVE_END;
}
// ********** End Class UPokemonProjectileTagLibrary Function ResolveTagContainer ******************

// ********** Begin Class UPokemonProjectileTagLibrary *********************************************
void UPokemonProjectileTagLibrary::StaticRegisterNativesUPokemonProjectileTagLibrary()
{
	UClass* Class = UPokemonProjectileTagLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeSequentialShotRotation", &UPokemonProjectileTagLibrary::execComputeSequentialShotRotation },
		{ "GetBestTagForCategory", &UPokemonProjectileTagLibrary::execGetBestTagForCategory },
		{ "GetFunctionNameForCategory", &UPokemonProjectileTagLibrary::execGetFunctionNameForCategory },
		{ "GetScatterSphereRotation", &UPokemonProjectileTagLibrary::execGetScatterSphereRotation },
		{ "ResolveTagContainer", &UPokemonProjectileTagLibrary::execResolveTagContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonProjectileTagLibrary;
UClass* UPokemonProjectileTagLibrary::GetPrivateStaticClass()
{
	using TClass = UPokemonProjectileTagLibrary;
	if (!Z_Registration_Info_UClass_UPokemonProjectileTagLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonProjectileTagLibrary"),
			Z_Registration_Info_UClass_UPokemonProjectileTagLibrary.InnerSingleton,
			StaticRegisterNativesUPokemonProjectileTagLibrary,
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
	return Z_Registration_Info_UClass_UPokemonProjectileTagLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonProjectileTagLibrary_NoRegister()
{
	return UPokemonProjectileTagLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/PokemonProjectileTagLibrary.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonProjectileTagLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonProjectileTagLibrary_ComputeSequentialShotRotation, "ComputeSequentialShotRotation" }, // 2434617188
		{ &Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetBestTagForCategory, "GetBestTagForCategory" }, // 1186970407
		{ &Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetFunctionNameForCategory, "GetFunctionNameForCategory" }, // 3313966222
		{ &Z_Construct_UFunction_UPokemonProjectileTagLibrary_GetScatterSphereRotation, "GetScatterSphereRotation" }, // 2180152070
		{ &Z_Construct_UFunction_UPokemonProjectileTagLibrary_ResolveTagContainer, "ResolveTagContainer" }, // 3665216991
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonProjectileTagLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics::ClassParams = {
	&UPokemonProjectileTagLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonProjectileTagLibrary()
{
	if (!Z_Registration_Info_UClass_UPokemonProjectileTagLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonProjectileTagLibrary.OuterSingleton, Z_Construct_UClass_UPokemonProjectileTagLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonProjectileTagLibrary.OuterSingleton;
}
UPokemonProjectileTagLibrary::UPokemonProjectileTagLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonProjectileTagLibrary);
UPokemonProjectileTagLibrary::~UPokemonProjectileTagLibrary() {}
// ********** End Class UPokemonProjectileTagLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonProjectileTagLibrary, UPokemonProjectileTagLibrary::StaticClass, TEXT("UPokemonProjectileTagLibrary"), &Z_Registration_Info_UClass_UPokemonProjectileTagLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonProjectileTagLibrary), 598263387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h__Script_ProjectMimikyu_805398539(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonProjectileTagLibrary_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
