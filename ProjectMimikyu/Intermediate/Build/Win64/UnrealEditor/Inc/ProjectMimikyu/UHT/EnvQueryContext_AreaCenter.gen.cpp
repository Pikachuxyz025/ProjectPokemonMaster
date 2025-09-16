// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQS/Context/EnvQueryContext_AreaCenter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_AreaCenter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryContext_AreaCenter();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryContext_AreaCenter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryContext_AreaCenter **********************************************
void UEnvQueryContext_AreaCenter::StaticRegisterNativesUEnvQueryContext_AreaCenter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter;
UClass* UEnvQueryContext_AreaCenter::GetPrivateStaticClass()
{
	using TClass = UEnvQueryContext_AreaCenter;
	if (!Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvQueryContext_AreaCenter"),
			Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter.InnerSingleton,
			StaticRegisterNativesUEnvQueryContext_AreaCenter,
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
	return Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryContext_AreaCenter_NoRegister()
{
	return UEnvQueryContext_AreaCenter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_AreaCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Provides a single world-space location all generators/text can reference\n" },
#endif
		{ "IncludePath", "EQS/Context/EnvQueryContext_AreaCenter.h" },
		{ "ModuleRelativePath", "Public/EQS/Context/EnvQueryContext_AreaCenter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides a single world-space location all generators/text can reference" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_AreaCenter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryContext_AreaCenter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_AreaCenter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_AreaCenter_Statics::ClassParams = {
	&UEnvQueryContext_AreaCenter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_AreaCenter_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_AreaCenter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryContext_AreaCenter()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_AreaCenter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter.OuterSingleton;
}
UEnvQueryContext_AreaCenter::UEnvQueryContext_AreaCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_AreaCenter);
UEnvQueryContext_AreaCenter::~UEnvQueryContext_AreaCenter() {}
// ********** End Class UEnvQueryContext_AreaCenter ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_AreaCenter_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_AreaCenter, UEnvQueryContext_AreaCenter::StaticClass, TEXT("UEnvQueryContext_AreaCenter"), &Z_Registration_Info_UClass_UEnvQueryContext_AreaCenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_AreaCenter), 4208100031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_AreaCenter_h__Script_ProjectMimikyu_1055903018(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_AreaCenter_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_AreaCenter_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
