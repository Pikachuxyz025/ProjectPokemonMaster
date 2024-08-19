// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/MMC/MMC_HealthCalculation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_HealthCalculation() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_HealthCalculation();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_HealthCalculation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UMMC_HealthCalculation::StaticRegisterNativesUMMC_HealthCalculation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_HealthCalculation);
	UClass* Z_Construct_UClass_UMMC_HealthCalculation_NoRegister()
	{
		return UMMC_HealthCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_HealthCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_HealthCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_HealthCalculation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_HealthCalculation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_HealthCalculation.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_HealthCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_HealthCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_HealthCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_HealthCalculation_Statics::ClassParams = {
		&UMMC_HealthCalculation::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_HealthCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_HealthCalculation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_HealthCalculation()
	{
		if (!Z_Registration_Info_UClass_UMMC_HealthCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_HealthCalculation.OuterSingleton, Z_Construct_UClass_UMMC_HealthCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_HealthCalculation.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UMMC_HealthCalculation>()
	{
		return UMMC_HealthCalculation::StaticClass();
	}
	UMMC_HealthCalculation::UMMC_HealthCalculation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_HealthCalculation);
	UMMC_HealthCalculation::~UMMC_HealthCalculation() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_HealthCalculation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_HealthCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_HealthCalculation, UMMC_HealthCalculation::StaticClass, TEXT("UMMC_HealthCalculation"), &Z_Registration_Info_UClass_UMMC_HealthCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_HealthCalculation), 1328382411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_HealthCalculation_h_4138721369(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_HealthCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_HealthCalculation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
