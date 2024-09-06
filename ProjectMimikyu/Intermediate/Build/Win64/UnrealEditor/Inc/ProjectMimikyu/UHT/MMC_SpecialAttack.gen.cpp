// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/MMC/MMC_SpecialAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_SpecialAttack() {}
// Cross Module References
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_SpecialAttack();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_SpecialAttack_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UMMC_SpecialAttack::StaticRegisterNativesUMMC_SpecialAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_SpecialAttack);
	UClass* Z_Construct_UClass_UMMC_SpecialAttack_NoRegister()
	{
		return UMMC_SpecialAttack::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_SpecialAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_SpecialAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_SpecialAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_SpecialAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_SpecialAttack.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_SpecialAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_SpecialAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_SpecialAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_SpecialAttack_Statics::ClassParams = {
		&UMMC_SpecialAttack::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_SpecialAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_SpecialAttack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_SpecialAttack()
	{
		if (!Z_Registration_Info_UClass_UMMC_SpecialAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_SpecialAttack.OuterSingleton, Z_Construct_UClass_UMMC_SpecialAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_SpecialAttack.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UMMC_SpecialAttack>()
	{
		return UMMC_SpecialAttack::StaticClass();
	}
	UMMC_SpecialAttack::UMMC_SpecialAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_SpecialAttack);
	UMMC_SpecialAttack::~UMMC_SpecialAttack() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_SpecialAttack, UMMC_SpecialAttack::StaticClass, TEXT("UMMC_SpecialAttack"), &Z_Registration_Info_UClass_UMMC_SpecialAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_SpecialAttack), 725586535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h_3741100234(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
