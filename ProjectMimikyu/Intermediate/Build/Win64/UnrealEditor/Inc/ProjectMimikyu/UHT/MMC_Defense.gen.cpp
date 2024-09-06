// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/MMC/MMC_Defense.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_Defense() {}
// Cross Module References
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Defense();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Defense_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UMMC_Defense::StaticRegisterNativesUMMC_Defense()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_Defense);
	UClass* Z_Construct_UClass_UMMC_Defense_NoRegister()
	{
		return UMMC_Defense::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_Defense_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_Defense_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Defense_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_Defense_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_Defense.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_Defense.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_Defense_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_Defense>::IsAbstract,
	};
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
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UMMC_Defense>()
	{
		return UMMC_Defense::StaticClass();
	}
	UMMC_Defense::UMMC_Defense(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_Defense);
	UMMC_Defense::~UMMC_Defense() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_Defense, UMMC_Defense::StaticClass, TEXT("UMMC_Defense"), &Z_Registration_Info_UClass_UMMC_Defense, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_Defense), 2883873692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h_4259596630(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Defense_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
