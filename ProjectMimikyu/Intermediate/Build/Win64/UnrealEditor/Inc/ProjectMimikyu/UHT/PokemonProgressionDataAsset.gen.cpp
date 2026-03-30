// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/PokemonProgressionDataAsset.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonProgressionDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonProgressionDataAsset();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonProgressionDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonProgressionDataAsset Function GetExperienceAtLevel ***************
struct Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics
{
	struct PokemonProgressionDataAsset_eventGetExperienceAtLevel_Parms
	{
		FGameplayTag XPType;
		int32 Level;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataAssets/PokemonProgressionDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XPType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExperienceAtLevel constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_XPType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExperienceAtLevel constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExperienceAtLevel Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::NewProp_XPType = { "XPType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProgressionDataAsset_eventGetExperienceAtLevel_Parms, XPType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XPType_MetaData), NewProp_XPType_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProgressionDataAsset_eventGetExperienceAtLevel_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProgressionDataAsset_eventGetExperienceAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::NewProp_XPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::PropPointers) < 2048);
// ********** End Function GetExperienceAtLevel Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonProgressionDataAsset, nullptr, "GetExperienceAtLevel", 	Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::PokemonProgressionDataAsset_eventGetExperienceAtLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::PokemonProgressionDataAsset_eventGetExperienceAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonProgressionDataAsset::execGetExperienceAtLevel)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_XPType);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetExperienceAtLevel(Z_Param_Out_XPType,Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class UPokemonProgressionDataAsset Function GetExperienceAtLevel *****************

// ********** Begin Class UPokemonProgressionDataAsset Function GetExperienceNeededToLevelUp *******
struct Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics
{
	struct PokemonProgressionDataAsset_eventGetExperienceNeededToLevelUp_Parms
	{
		FGameplayTag XPType;
		int32 CurrentLevel;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataAssets/PokemonProgressionDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XPType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExperienceNeededToLevelUp constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_XPType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExperienceNeededToLevelUp constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExperienceNeededToLevelUp Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::NewProp_XPType = { "XPType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProgressionDataAsset_eventGetExperienceNeededToLevelUp_Parms, XPType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XPType_MetaData), NewProp_XPType_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProgressionDataAsset_eventGetExperienceNeededToLevelUp_Parms, CurrentLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonProgressionDataAsset_eventGetExperienceNeededToLevelUp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::NewProp_XPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::PropPointers) < 2048);
// ********** End Function GetExperienceNeededToLevelUp Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonProgressionDataAsset, nullptr, "GetExperienceNeededToLevelUp", 	Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::PokemonProgressionDataAsset_eventGetExperienceNeededToLevelUp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::PokemonProgressionDataAsset_eventGetExperienceNeededToLevelUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonProgressionDataAsset::execGetExperienceNeededToLevelUp)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_XPType);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetExperienceNeededToLevelUp(Z_Param_Out_XPType,Z_Param_CurrentLevel);
	P_NATIVE_END;
}
// ********** End Class UPokemonProgressionDataAsset Function GetExperienceNeededToLevelUp *********

// ********** Begin Class UPokemonProgressionDataAsset *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonProgressionDataAsset;
UClass* UPokemonProgressionDataAsset::GetPrivateStaticClass()
{
	using TClass = UPokemonProgressionDataAsset;
	if (!Z_Registration_Info_UClass_UPokemonProgressionDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonProgressionDataAsset"),
			Z_Registration_Info_UClass_UPokemonProgressionDataAsset.InnerSingleton,
			StaticRegisterNativesUPokemonProgressionDataAsset,
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
	return Z_Registration_Info_UClass_UPokemonProgressionDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonProgressionDataAsset_NoRegister()
{
	return UPokemonProgressionDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonProgressionDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/PokemonProgressionDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonProgressionDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonProgressionDataAsset constinit property declarations *************
// ********** End Class UPokemonProgressionDataAsset constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetExperienceAtLevel"), .Pointer = &UPokemonProgressionDataAsset::execGetExperienceAtLevel },
		{ .NameUTF8 = UTF8TEXT("GetExperienceNeededToLevelUp"), .Pointer = &UPokemonProgressionDataAsset::execGetExperienceNeededToLevelUp },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceAtLevel, "GetExperienceAtLevel" }, // 292750349
		{ &Z_Construct_UFunction_UPokemonProgressionDataAsset_GetExperienceNeededToLevelUp, "GetExperienceNeededToLevelUp" }, // 2205785108
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonProgressionDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonProgressionDataAsset_Statics
UObject* (*const Z_Construct_UClass_UPokemonProgressionDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonProgressionDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonProgressionDataAsset_Statics::ClassParams = {
	&UPokemonProgressionDataAsset::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonProgressionDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonProgressionDataAsset_Statics::Class_MetaDataParams)
};
void UPokemonProgressionDataAsset::StaticRegisterNativesUPokemonProgressionDataAsset()
{
	UClass* Class = UPokemonProgressionDataAsset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonProgressionDataAsset_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonProgressionDataAsset()
{
	if (!Z_Registration_Info_UClass_UPokemonProgressionDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonProgressionDataAsset.OuterSingleton, Z_Construct_UClass_UPokemonProgressionDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonProgressionDataAsset.OuterSingleton;
}
UPokemonProgressionDataAsset::UPokemonProgressionDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonProgressionDataAsset);
UPokemonProgressionDataAsset::~UPokemonProgressionDataAsset() {}
// ********** End Class UPokemonProgressionDataAsset ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonProgressionDataAsset_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonProgressionDataAsset, UPokemonProgressionDataAsset::StaticClass, TEXT("UPokemonProgressionDataAsset"), &Z_Registration_Info_UClass_UPokemonProgressionDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonProgressionDataAsset), 3657862819U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonProgressionDataAsset_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonProgressionDataAsset_h__Script_ProjectMimikyu_1687119018{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonProgressionDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonProgressionDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
