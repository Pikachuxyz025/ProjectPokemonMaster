// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQS/Generators/EnvQueryGenerator_ImpactPattern.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ImpactPattern() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryGenerator_ImpactPattern *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern;
UClass* UEnvQueryGenerator_ImpactPattern::GetPrivateStaticClass()
{
	using TClass = UEnvQueryGenerator_ImpactPattern;
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnvQueryGenerator_ImpactPattern"),
			Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.InnerSingleton,
			StaticRegisterNativesUEnvQueryGenerator_ImpactPattern,
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
	return Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_NoRegister()
{
	return UEnvQueryGenerator_ImpactPattern::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterContext_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNamedPatternOverride_MetaData[] = {
		{ "Category", "Pattern" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allow task to override via Named Param \"LandingPattern\" (float -> int -> enum)\n" },
#endif
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow task to override via Named Param \"LandingPattern\" (float -> int -> enum)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedAreaRadiusNamedParam_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAreaRadius_MetaData[] = {
		{ "Category", "Pattern" },
		{ "EditCondition", "!bUsedAreaRadiusNamedParam" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingPointCount_MetaData[] = {
		{ "Category", "Ring" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingJitter_MetaData[] = {
		{ "Category", "Ring" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatterCount_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSeparation_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridX_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternYawDeg_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/EQS/Generators/EnvQueryGenerator_ImpactPattern.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnvQueryGenerator_ImpactPattern constinit property declarations *********
	static const UECodeGen_Private::FClassPropertyParams NewProp_CenterContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Pattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Pattern;
	static void NewProp_bAllowNamedPatternOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNamedPatternOverride;
	static void NewProp_bUsedAreaRadiusNamedParam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedAreaRadiusNamedParam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAreaRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RingPointCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RingJitter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScatterCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSeparation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatternYawDeg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEnvQueryGenerator_ImpactPattern constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_ImpactPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics

// ********** Begin Class UEnvQueryGenerator_ImpactPattern Property Definitions ********************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_CenterContext = { "CenterContext", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, CenterContext), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterContext_MetaData), NewProp_CenterContext_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_Pattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, Pattern), Z_Construct_UEnum_ProjectMimikyu_EEnvironmentLandingPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) }; // 4256400058
void Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bAllowNamedPatternOverride_SetBit(void* Obj)
{
	((UEnvQueryGenerator_ImpactPattern*)Obj)->bAllowNamedPatternOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bAllowNamedPatternOverride = { "bAllowNamedPatternOverride", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryGenerator_ImpactPattern), &Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bAllowNamedPatternOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNamedPatternOverride_MetaData), NewProp_bAllowNamedPatternOverride_MetaData) };
void Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bUsedAreaRadiusNamedParam_SetBit(void* Obj)
{
	((UEnvQueryGenerator_ImpactPattern*)Obj)->bUsedAreaRadiusNamedParam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bUsedAreaRadiusNamedParam = { "bUsedAreaRadiusNamedParam", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryGenerator_ImpactPattern), &Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bUsedAreaRadiusNamedParam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedAreaRadiusNamedParam_MetaData), NewProp_bUsedAreaRadiusNamedParam_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_DefaultAreaRadius = { "DefaultAreaRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, DefaultAreaRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAreaRadius_MetaData), NewProp_DefaultAreaRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_RingPointCount = { "RingPointCount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, RingPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingPointCount_MetaData), NewProp_RingPointCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_RingJitter = { "RingJitter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, RingJitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingJitter_MetaData), NewProp_RingJitter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_ScatterCount = { "ScatterCount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, ScatterCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatterCount_MetaData), NewProp_ScatterCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_MinSeparation = { "MinSeparation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, MinSeparation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSeparation_MetaData), NewProp_MinSeparation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, GridX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridX_MetaData), NewProp_GridX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, GridY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridY_MetaData), NewProp_GridY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_PatternYawDeg = { "PatternYawDeg", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ImpactPattern, PatternYawDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternYawDeg_MetaData), NewProp_PatternYawDeg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_CenterContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_Pattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_Pattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bAllowNamedPatternOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_bUsedAreaRadiusNamedParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_DefaultAreaRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_RingPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_RingJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_ScatterCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_MinSeparation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::NewProp_PatternYawDeg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::PropPointers) < 2048);
// ********** End Class UEnvQueryGenerator_ImpactPattern Property Definitions **********************
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::ClassParams = {
	&UEnvQueryGenerator_ImpactPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::Class_MetaDataParams)
};
void UEnvQueryGenerator_ImpactPattern::StaticRegisterNativesUEnvQueryGenerator_ImpactPattern()
{
}
UClass* Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnvQueryGenerator_ImpactPattern);
UEnvQueryGenerator_ImpactPattern::~UEnvQueryGenerator_ImpactPattern() {}
// ********** End Class UEnvQueryGenerator_ImpactPattern *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern, UEnvQueryGenerator_ImpactPattern::StaticClass, TEXT("UEnvQueryGenerator_ImpactPattern"), &Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_ImpactPattern), 3605843874U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_1605935069{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
