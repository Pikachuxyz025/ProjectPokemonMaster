// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MMC/MMC_Defense.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMMC_Defense() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Defense();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Defense_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_Defense *************************************************************
void UMMC_Defense::StaticRegisterNativesUMMC_Defense()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_Defense;
UClass* UMMC_Defense::GetPrivateStaticClass()
{
	using TClass = UMMC_Defense;
	if (!Z_Registration_Info_UClass_UMMC_Defense.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MMC_Defense"),
			Z_Registration_Info_UClass_UMMC_Defense.InnerSingleton,
			StaticRegisterNativesUMMC_Defense,
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
	return Z_Registration_Info_UClass_UMMC_Defense.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_Defense_NoRegister()
{
	return UMMC_Defense::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_Defense_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_Defense.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_Defense.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_Defense>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_Defense_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Defense_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_Defense_Statics::ClassParams = {
	&UMMC_Defense::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Defense_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_Defense_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_Defense()
{
	if (!Z_Registration_Info_UClass_UMMC_Defense.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_Defense.OuterSingleton, Z_Construct_UClass_UMMC_Defense_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_Defense.OuterSingleton;
}
UMMC_Defense::UMMC_Defense(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_Defense);
UMMC_Defense::~UMMC_Defense() {}
// ********** End Class UMMC_Defense ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_Defense, UMMC_Defense::StaticClass, TEXT("UMMC_Defense"), &Z_Registration_Info_UClass_UMMC_Defense, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_Defense), 4145435765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h__Script_ProjectMimikyu_2180304182(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
