// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/PokemonDataAsset.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonMovesetList();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonStatInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPokemonMovesetList ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonMovesetList;
class UScriptStruct* FPokemonMovesetList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonMovesetList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonMovesetList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonMovesetList, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonMovesetList"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonMovesetList.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPokemonMovesetList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelLearned_MetaData[] = {
		{ "Category", "PokemonMovesetList" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMovesLearntAtLevel_MetaData[] = {
		{ "Category", "PokemonMovesetList" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelLearned;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMovesLearntAtLevel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonMovesLearntAtLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonMovesetList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::NewProp_LevelLearned = { "LevelLearned", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonMovesetList, LevelLearned), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelLearned_MetaData), NewProp_LevelLearned_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::NewProp_PokemonMovesLearntAtLevel_Inner = { "PokemonMovesLearntAtLevel", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::NewProp_PokemonMovesLearntAtLevel = { "PokemonMovesLearntAtLevel", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonMovesetList, PokemonMovesLearntAtLevel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMovesLearntAtLevel_MetaData), NewProp_PokemonMovesLearntAtLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::NewProp_LevelLearned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::NewProp_PokemonMovesLearntAtLevel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::NewProp_PokemonMovesLearntAtLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonMovesetList",
	Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::PropPointers),
	sizeof(FPokemonMovesetList),
	alignof(FPokemonMovesetList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonMovesetList()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonMovesetList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonMovesetList.InnerSingleton, Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPokemonMovesetList.InnerSingleton;
}
// ********** End ScriptStruct FPokemonMovesetList *************************************************

// ********** Begin ScriptStruct FPokemonStatInfo **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonStatInfo;
class UScriptStruct* FPokemonStatInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonStatInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonStatInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonStatInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonStatInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonStatInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPokemonStatInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatValue_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatBaseValue_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffortLevelValue_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatBaseValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffortLevelValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonStatInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTag_MetaData), NewProp_StatTag_MetaData) }; // 133831994
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatValue_MetaData), NewProp_StatValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatBaseValue = { "StatBaseValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatBaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatBaseValue_MetaData), NewProp_StatBaseValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_EffortLevelValue = { "EffortLevelValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, EffortLevelValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffortLevelValue_MetaData), NewProp_EffortLevelValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatBaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_EffortLevelValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonStatInfo",
	Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::PropPointers),
	sizeof(FPokemonStatInfo),
	alignof(FPokemonStatInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonStatInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonStatInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonStatInfo.InnerSingleton, Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPokemonStatInfo.InnerSingleton;
}
// ********** End ScriptStruct FPokemonStatInfo ****************************************************

// ********** Begin Class UPokemonDataAsset Function CreateStatInfo ********************************
struct Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics
{
	struct PokemonDataAsset_eventCreateStatInfo_Parms
	{
		FGameplayTag StatTag;
		float PokemonStatValue;
		FPokemonStatInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PokemonStatValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDataAsset_eventCreateStatInfo_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTag_MetaData), NewProp_StatTag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::NewProp_PokemonStatValue = { "PokemonStatValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDataAsset_eventCreateStatInfo_Parms, PokemonStatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonStatValue_MetaData), NewProp_PokemonStatValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDataAsset_eventCreateStatInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FPokemonStatInfo, METADATA_PARAMS(0, nullptr) }; // 1381508548
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::NewProp_PokemonStatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDataAsset, nullptr, "CreateStatInfo", Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::PokemonDataAsset_eventCreateStatInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::PokemonDataAsset_eventCreateStatInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDataAsset::execCreateStatInfo)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PokemonStatValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPokemonStatInfo*)Z_Param__Result=P_THIS->CreateStatInfo(Z_Param_StatTag,Z_Param_PokemonStatValue);
	P_NATIVE_END;
}
// ********** End Class UPokemonDataAsset Function CreateStatInfo **********************************

// ********** Begin Class UPokemonDataAsset ********************************************************
void UPokemonDataAsset::StaticRegisterNativesUPokemonDataAsset()
{
	UClass* Class = UPokemonDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateStatInfo", &UPokemonDataAsset::execCreateStatInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonDataAsset;
UClass* UPokemonDataAsset::GetPrivateStaticClass()
{
	using TClass = UPokemonDataAsset;
	if (!Z_Registration_Info_UClass_UPokemonDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonDataAsset"),
			Z_Registration_Info_UClass_UPokemonDataAsset.InnerSingleton,
			StaticRegisterNativesUPokemonDataAsset,
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
	return Z_Registration_Info_UClass_UPokemonDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister()
{
	return UPokemonDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/PokemonDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredPokemonClass_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteImage_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToBaseStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseXPReward_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XpStyle_MetaData[] = {
		{ "Categories", "XP" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToNames_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstType_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondType_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoveInfo_MetaData[] = {
		{ "Category", "Moves" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StoredPokemonClass;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagsToBaseStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToBaseStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagsToBaseStats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseXPReward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XpStyle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TagsToNames_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagsToNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirstType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FirstType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonMoveInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonMoveInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonDataAsset_CreateStatInfo, "CreateStatInfo" }, // 770455000
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_StoredPokemonClass = { "StoredPokemonClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, StoredPokemonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredPokemonClass_MetaData), NewProp_StoredPokemonClass_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, Model), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SpriteImage = { "SpriteImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, SpriteImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteImage_MetaData), NewProp_SpriteImage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToBaseStats_ValueProp = { "TagsToBaseStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToBaseStats_Key_KeyProp = { "TagsToBaseStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToBaseStats = { "TagsToBaseStats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, TagsToBaseStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToBaseStats_MetaData), NewProp_TagsToBaseStats_MetaData) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseXPReward = { "BaseXPReward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, BaseXPReward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseXPReward_MetaData), NewProp_BaseXPReward_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_XpStyle = { "XpStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, XpStyle), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XpStyle_MetaData), NewProp_XpStyle_MetaData) }; // 133831994
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToNames_ValueProp = { "TagsToNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToNames_Key_KeyProp = { "TagsToNames_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToNames = { "TagsToNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, TagsToNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToNames_MetaData), NewProp_TagsToNames_MetaData) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType = { "FirstType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, FirstType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstType_MetaData), NewProp_FirstType_MetaData) }; // 630780709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType = { "SecondType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, SecondType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondType_MetaData), NewProp_SecondType_MetaData) }; // 630780709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_PokemonMoveInfo_Inner = { "PokemonMoveInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonMovesetList, METADATA_PARAMS(0, nullptr) }; // 2095818545
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_PokemonMoveInfo = { "PokemonMoveInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, PokemonMoveInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMoveInfo_MetaData), NewProp_PokemonMoveInfo_MetaData) }; // 2095818545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_StoredPokemonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SpriteImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToBaseStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToBaseStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToBaseStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseXPReward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_XpStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_TagsToNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_PokemonMoveInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_PokemonMoveInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonDataAsset_Statics::ClassParams = {
	&UPokemonDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonDataAsset()
{
	if (!Z_Registration_Info_UClass_UPokemonDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonDataAsset.OuterSingleton, Z_Construct_UClass_UPokemonDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonDataAsset.OuterSingleton;
}
UPokemonDataAsset::UPokemonDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonDataAsset);
UPokemonDataAsset::~UPokemonDataAsset() {}
// ********** End Class UPokemonDataAsset **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPokemonMovesetList::StaticStruct, Z_Construct_UScriptStruct_FPokemonMovesetList_Statics::NewStructOps, TEXT("PokemonMovesetList"), &Z_Registration_Info_UScriptStruct_FPokemonMovesetList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonMovesetList), 2095818545U) },
		{ FPokemonStatInfo::StaticStruct, Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewStructOps, TEXT("PokemonStatInfo"), &Z_Registration_Info_UScriptStruct_FPokemonStatInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonStatInfo), 1381508548U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonDataAsset, UPokemonDataAsset::StaticClass, TEXT("UPokemonDataAsset"), &Z_Registration_Info_UClass_UPokemonDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonDataAsset), 1413407570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h__Script_ProjectMimikyu_1636667554(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
