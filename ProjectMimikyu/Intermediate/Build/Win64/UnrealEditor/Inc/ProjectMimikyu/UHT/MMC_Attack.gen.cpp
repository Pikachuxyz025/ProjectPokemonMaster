// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/MMC/MMC_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_Attack() {}
// Cross Module References
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Attack();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Attack_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UMMC_Attack::StaticRegisterNativesUMMC_Attack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_Attack);
	UClass* Z_Construct_UClass_UMMC_Attack_NoRegister()
	{
		return UMMC_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Attack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_Attack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_Attack.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_Attack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_Attack_Statics::ClassParams = {
		&UMMC_Attack::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Attack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_Attack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_Attack()
	{
		if (!Z_Registration_Info_UClass_UMMC_Attack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_Attack.OuterSingleton, Z_Construct_UClass_UMMC_Attack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_Attack.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UMMC_Attack>()
	{
		return UMMC_Attack::StaticClass();
	}
	UMMC_Attack::UMMC_Attack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_Attack);
	UMMC_Attack::~UMMC_Attack() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_Attack, UMMC_Attack::StaticClass, TEXT("UMMC_Attack"), &Z_Registration_Info_UClass_UMMC_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_Attack), 422264229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h_1570370334(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
