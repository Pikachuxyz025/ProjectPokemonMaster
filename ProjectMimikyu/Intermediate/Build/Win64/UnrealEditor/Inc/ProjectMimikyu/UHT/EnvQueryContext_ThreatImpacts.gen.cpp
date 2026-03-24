// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQS/Context/EnvQueryContext_ThreatImpacts.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_ThreatImpacts() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryContext_ThreatImpacts();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryContext_ThreatImpacts *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts;
UClass* UEnvQueryContext_ThreatImpacts::GetPrivateStaticClass()
{
	using TClass = UEnvQueryContext_ThreatImpacts;
	if (!Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnvQueryContext_ThreatImpacts"),
			Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts.InnerSingleton,
			StaticRegisterNativesUEnvQueryContext_ThreatImpacts,
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
	return Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_NoRegister()
{
	return UEnvQueryContext_ThreatImpacts::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EQS/Context/EnvQueryContext_ThreatImpacts.h" },
		{ "ModuleRelativePath", "Public/EQS/Context/EnvQueryContext_ThreatImpacts.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnvQueryContext_ThreatImpacts constinit property declarations ***********
// ********** End Class UEnvQueryContext_ThreatImpacts constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_ThreatImpacts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics
UObject* (*const Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics::ClassParams = {
	&UEnvQueryContext_ThreatImpacts::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics::Class_MetaDataParams)
};
void UEnvQueryContext_ThreatImpacts::StaticRegisterNativesUEnvQueryContext_ThreatImpacts()
{
}
UClass* Z_Construct_UClass_UEnvQueryContext_ThreatImpacts()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_ThreatImpacts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts.OuterSingleton;
}
UEnvQueryContext_ThreatImpacts::UEnvQueryContext_ThreatImpacts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnvQueryContext_ThreatImpacts);
UEnvQueryContext_ThreatImpacts::~UEnvQueryContext_ThreatImpacts() {}
// ********** End Class UEnvQueryContext_ThreatImpacts *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_ThreatImpacts_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_ThreatImpacts, UEnvQueryContext_ThreatImpacts::StaticClass, TEXT("UEnvQueryContext_ThreatImpacts"), &Z_Registration_Info_UClass_UEnvQueryContext_ThreatImpacts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_ThreatImpacts), 3661784601U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_ThreatImpacts_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_ThreatImpacts_h__Script_ProjectMimikyu_1159316885{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_ThreatImpacts_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_EQS_Context_EnvQueryContext_ThreatImpacts_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
