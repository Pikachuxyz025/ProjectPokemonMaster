// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MMC/MMC_StatCalculation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMMC_StatCalculation() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_StatCalculation *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_StatCalculation;
UClass* UMMC_StatCalculation::GetPrivateStaticClass()
{
	using TClass = UMMC_StatCalculation;
	if (!Z_Registration_Info_UClass_UMMC_StatCalculation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MMC_StatCalculation"),
			Z_Registration_Info_UClass_UMMC_StatCalculation.InnerSingleton,
			StaticRegisterNativesUMMC_StatCalculation,
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
	return Z_Registration_Info_UClass_UMMC_StatCalculation.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_StatCalculation_NoRegister()
{
	return UMMC_StatCalculation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_StatCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_StatCalculation.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_StatCalculation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMMC_StatCalculation constinit property declarations *********************
// ********** End Class UMMC_StatCalculation constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_StatCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMMC_StatCalculation_Statics
UObject* (*const Z_Construct_UClass_UMMC_StatCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_StatCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_StatCalculation_Statics::ClassParams = {
	&UMMC_StatCalculation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_StatCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_StatCalculation_Statics::Class_MetaDataParams)
};
void UMMC_StatCalculation::StaticRegisterNativesUMMC_StatCalculation()
{
}
UClass* Z_Construct_UClass_UMMC_StatCalculation()
{
	if (!Z_Registration_Info_UClass_UMMC_StatCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_StatCalculation.OuterSingleton, Z_Construct_UClass_UMMC_StatCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_StatCalculation.OuterSingleton;
}
UMMC_StatCalculation::UMMC_StatCalculation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMMC_StatCalculation);
UMMC_StatCalculation::~UMMC_StatCalculation() {}
// ********** End Class UMMC_StatCalculation *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_StatCalculation_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_StatCalculation, UMMC_StatCalculation::StaticClass, TEXT("UMMC_StatCalculation"), &Z_Registration_Info_UClass_UMMC_StatCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_StatCalculation), 3427879371U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_StatCalculation_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_StatCalculation_h__Script_ProjectMimikyu_1777028335{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_StatCalculation_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_StatCalculation_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
