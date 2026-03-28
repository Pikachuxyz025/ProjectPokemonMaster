// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/ProjectMimikyuGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectMimikyuGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuGameMode();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuGameMode_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTagCategoryDataAsset_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectMimikyuGameMode Function GetTagCategoryData **********************
struct Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics
{
	struct ProjectMimikyuGameMode_eventGetTagCategoryData_Parms
	{
		UTagCategoryDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TagData" },
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTagCategoryData constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTagCategoryData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTagCategoryData Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectMimikyuGameMode_eventGetTagCategoryData_Parms, ReturnValue), Z_Construct_UClass_UTagCategoryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::PropPointers) < 2048);
// ********** End Function GetTagCategoryData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectMimikyuGameMode, nullptr, "GetTagCategoryData", 	Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::ProjectMimikyuGameMode_eventGetTagCategoryData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::ProjectMimikyuGameMode_eventGetTagCategoryData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectMimikyuGameMode::execGetTagCategoryData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTagCategoryDataAsset**)Z_Param__Result=P_THIS->GetTagCategoryData();
	P_NATIVE_END;
}
// ********** End Class AProjectMimikyuGameMode Function GetTagCategoryData ************************

// ********** Begin Class AProjectMimikyuGameMode **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectMimikyuGameMode;
UClass* AProjectMimikyuGameMode::GetPrivateStaticClass()
{
	using TClass = AProjectMimikyuGameMode;
	if (!Z_Registration_Info_UClass_AProjectMimikyuGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectMimikyuGameMode"),
			Z_Registration_Info_UClass_AProjectMimikyuGameMode.InnerSingleton,
			StaticRegisterNativesAProjectMimikyuGameMode,
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
	return Z_Registration_Info_UClass_AProjectMimikyuGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectMimikyuGameMode_NoRegister()
{
	return AProjectMimikyuGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectMimikyuGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/ProjectMimikyuGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeChartDataTable_MetaData[] = {
		{ "Category", "ProjectMimikyuGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagCategoryData_MetaData[] = {
		{ "Category", "TagData" },
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectMimikyuGameMode constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeChartDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagCategoryData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MultiplierMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeResponse_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeResponse_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeResponse_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TypeResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectMimikyuGameMode constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTagCategoryData"), .Pointer = &AProjectMimikyuGameMode::execGetTagCategoryData },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectMimikyuGameMode_GetTagCategoryData, "GetTagCategoryData" }, // 1898234490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectMimikyuGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectMimikyuGameMode_Statics

// ********** Begin Class AProjectMimikyuGameMode Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeChartDataTable = { "TypeChartDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuGameMode, TypeChartDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeChartDataTable_MetaData), NewProp_TypeChartDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TagCategoryData = { "TagCategoryData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuGameMode, TagCategoryData), Z_Construct_UClass_UTagCategoryDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagCategoryData_MetaData), NewProp_TagCategoryData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_ValueProp = { "MultiplierMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_Key_KeyProp = { "MultiplierMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap = { "MultiplierMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuGameMode, MultiplierMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplierMap_MetaData), NewProp_MultiplierMap_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_ValueProp = { "TypeResponse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp = { "TypeResponse_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(0, nullptr) }; // 1457640518
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse = { "TypeResponse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuGameMode, TypeResponse), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeResponse_MetaData), NewProp_TypeResponse_MetaData) }; // 1457640518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeChartDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TagCategoryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers) < 2048);
// ********** End Class AProjectMimikyuGameMode Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AProjectMimikyuGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::ClassParams = {
	&AProjectMimikyuGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Class_MetaDataParams)
};
void AProjectMimikyuGameMode::StaticRegisterNativesAProjectMimikyuGameMode()
{
	UClass* Class = AProjectMimikyuGameMode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Funcs));
}
UClass* Z_Construct_UClass_AProjectMimikyuGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectMimikyuGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectMimikyuGameMode.OuterSingleton, Z_Construct_UClass_AProjectMimikyuGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectMimikyuGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectMimikyuGameMode);
AProjectMimikyuGameMode::~AProjectMimikyuGameMode() {}
// ********** End Class AProjectMimikyuGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectMimikyuGameMode, AProjectMimikyuGameMode::StaticClass, TEXT("AProjectMimikyuGameMode"), &Z_Registration_Info_UClass_AProjectMimikyuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectMimikyuGameMode), 14322018U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h__Script_ProjectMimikyu_1164254636{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
