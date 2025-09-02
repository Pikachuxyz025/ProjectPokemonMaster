// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MMC/MMC_SpecialDefense.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMMC_SpecialDefense() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_SpecialDefense();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_SpecialDefense_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_SpecialDefense ******************************************************
void UMMC_SpecialDefense::StaticRegisterNativesUMMC_SpecialDefense()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_SpecialDefense;
UClass* UMMC_SpecialDefense::GetPrivateStaticClass()
{
	using TClass = UMMC_SpecialDefense;
	if (!Z_Registration_Info_UClass_UMMC_SpecialDefense.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MMC_SpecialDefense"),
			Z_Registration_Info_UClass_UMMC_SpecialDefense.InnerSingleton,
			StaticRegisterNativesUMMC_SpecialDefense,
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
	return Z_Registration_Info_UClass_UMMC_SpecialDefense.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_SpecialDefense_NoRegister()
{
	return UMMC_SpecialDefense::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_SpecialDefense_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_SpecialDefense.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_SpecialDefense.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_SpecialDefense>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_SpecialDefense_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_SpecialDefense_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_SpecialDefense_Statics::ClassParams = {
	&UMMC_SpecialDefense::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_SpecialDefense_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_SpecialDefense_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_SpecialDefense()
{
	if (!Z_Registration_Info_UClass_UMMC_SpecialDefense.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_SpecialDefense.OuterSingleton, Z_Construct_UClass_UMMC_SpecialDefense_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_SpecialDefense.OuterSingleton;
}
UMMC_SpecialDefense::UMMC_SpecialDefense(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_SpecialDefense);
UMMC_SpecialDefense::~UMMC_SpecialDefense() {}
// ********** End Class UMMC_SpecialDefense ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialDefense_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_SpecialDefense, UMMC_SpecialDefense::StaticClass, TEXT("UMMC_SpecialDefense"), &Z_Registration_Info_UClass_UMMC_SpecialDefense, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_SpecialDefense), 220727690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialDefense_h__Script_ProjectMimikyu_2791570447(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialDefense_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialDefense_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
