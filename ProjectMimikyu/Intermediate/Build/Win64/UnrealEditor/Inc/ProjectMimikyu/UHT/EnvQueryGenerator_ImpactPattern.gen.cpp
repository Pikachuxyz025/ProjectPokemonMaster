// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQS/Generators/EnvQueryGenerator_ImpactPattern.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ImpactPattern() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryGenerator_ImpactPattern *****************************************
void UEnvQueryGenerator_ImpactPattern::StaticRegisterNativesUEnvQueryGenerator_ImpactPattern()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern;
UClass* UEnvQueryGenerator_ImpactPattern::GetPrivateStaticClass()
{
	using TClass = UEnvQueryGenerator_ImpactPattern;
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_ImpactPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern.OuterSingleton;
}
UEnvQueryGenerator_ImpactPattern::UEnvQueryGenerator_ImpactPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_ImpactPattern);
UEnvQueryGenerator_ImpactPattern::~UEnvQueryGenerator_ImpactPattern() {}
// ********** End Class UEnvQueryGenerator_ImpactPattern *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_ImpactPattern, UEnvQueryGenerator_ImpactPattern::StaticClass, TEXT("UEnvQueryGenerator_ImpactPattern"), &Z_Registration_Info_UClass_UEnvQueryGenerator_ImpactPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_ImpactPattern), 1524793180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_1792527905(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Generators_EnvQueryGenerator_ImpactPattern_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
