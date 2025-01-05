// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/DataAssets/PokemonStatInfoDataAsset.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonStatInfoDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EStatsType();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonStatInfo();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PokemonStatInfo;
class UScriptStruct* FPokemonStatInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PokemonStatInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PokemonStatInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonStatInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonStatInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PokemonStatInfo.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UScriptStruct* StaticStruct<FPokemonStatInfo>()
{
	return FPokemonStatInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPokemonStatInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_StatName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_StatDescription;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatBaseValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatBaseValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffortLevelValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffortLevelValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonStatInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatTag_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatTag_MetaData), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatName_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatName_MetaData), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatDescription_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatDescription = { "StatDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatDescription_MetaData), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatDescription_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatType_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatType), Z_Construct_UEnum_ProjectMimikyu_EStatsType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatType_MetaData), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatType_MetaData) }; // 1516036036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatValue_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatValue_MetaData), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatBaseValue_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatBaseValue = { "StatBaseValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, StatBaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatBaseValue_MetaData), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatBaseValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_EffortLevelValue_MetaData[] = {
		{ "Category", "PokemonStatInfo" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_EffortLevelValue = { "EffortLevelValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonStatInfo, EffortLevelValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_EffortLevelValue_MetaData), Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_EffortLevelValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_StatBaseValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewProp_EffortLevelValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPokemonStatInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PokemonStatInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PokemonStatInfo.InnerSingleton, Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PokemonStatInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UPokemonStatInfoDataAsset::execFindStatInfoForTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_StatTag);
		P_GET_UBOOL(Z_Param_bLogNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPokemonStatInfo*)Z_Param__Result=P_THIS->FindStatInfoForTag(Z_Param_Out_StatTag,Z_Param_bLogNotFound);
		P_NATIVE_END;
	}
	void UPokemonStatInfoDataAsset::StaticRegisterNativesUPokemonStatInfoDataAsset()
	{
		UClass* Class = UPokemonStatInfoDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindStatInfoForTag", &UPokemonStatInfoDataAsset::execFindStatInfoForTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics
	{
		struct PokemonStatInfoDataAsset_eventFindStatInfoForTag_Parms
		{
			FGameplayTag StatTag;
			bool bLogNotFound;
			FPokemonStatInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
		static void NewProp_bLogNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_StatTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonStatInfoDataAsset_eventFindStatInfoForTag_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_StatTag_MetaData), Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_StatTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
	{
		((PokemonStatInfoDataAsset_eventFindStatInfoForTag_Parms*)Obj)->bLogNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonStatInfoDataAsset_eventFindStatInfoForTag_Parms), &Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonStatInfoDataAsset_eventFindStatInfoForTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FPokemonStatInfo, METADATA_PARAMS(0, nullptr) }; // 175903749
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_StatTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_bLogNotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bLogNotFound", "false" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonStatInfoDataAsset, nullptr, "FindStatInfoForTag", nullptr, nullptr, Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::PokemonStatInfoDataAsset_eventFindStatInfoForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::PokemonStatInfoDataAsset_eventFindStatInfoForTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonStatInfoDataAsset);
	UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset_NoRegister()
	{
		return UPokemonStatInfoDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatInformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PokemonAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonStatInfoDataAsset_FindStatInfoForTag, "FindStatInfoForTag" }, // 3564504745
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/PokemonStatInfoDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_StatInformation_Inner = { "StatInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonStatInfo, METADATA_PARAMS(0, nullptr) }; // 175903749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_StatInformation_MetaData[] = {
		{ "Category", "PokemonStatInfoDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_StatInformation = { "StatInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonStatInfoDataAsset, StatInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_StatInformation_MetaData), Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_StatInformation_MetaData) }; // 175903749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_PokemonAttributes_MetaData[] = {
		{ "Category", "PokemonStatInfoDataAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_PokemonAttributes = { "PokemonAttributes", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonStatInfoDataAsset, PokemonAttributes), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_PokemonAttributes_MetaData), Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_PokemonAttributes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_StatInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_StatInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::NewProp_PokemonAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonStatInfoDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::ClassParams = {
		&UPokemonStatInfoDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset()
	{
		if (!Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.OuterSingleton, Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonStatInfoDataAsset>()
	{
		return UPokemonStatInfoDataAsset::StaticClass();
	}
	UPokemonStatInfoDataAsset::UPokemonStatInfoDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonStatInfoDataAsset);
	UPokemonStatInfoDataAsset::~UPokemonStatInfoDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FPokemonStatInfo::StaticStruct, Z_Construct_UScriptStruct_FPokemonStatInfo_Statics::NewStructOps, TEXT("PokemonStatInfo"), &Z_Registration_Info_UScriptStruct_PokemonStatInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonStatInfo), 175903749U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonStatInfoDataAsset, UPokemonStatInfoDataAsset::StaticClass, TEXT("UPokemonStatInfoDataAsset"), &Z_Registration_Info_UClass_UPokemonStatInfoDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonStatInfoDataAsset), 1398983849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_11179979(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
