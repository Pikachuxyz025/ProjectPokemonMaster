// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/DataAssets/EffortLevelBaseDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffortLevelBaseDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UEffortLevelBaseDataAsset::StaticRegisterNativesUEffortLevelBaseDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEffortLevelBaseDataAsset);
	UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset_NoRegister()
	{
		return UEffortLevelBaseDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/EffortLevelBaseDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/EffortLevelBaseDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffortLevelBaseDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::ClassParams = {
		&UEffortLevelBaseDataAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset()
	{
		if (!Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.OuterSingleton, Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UEffortLevelBaseDataAsset>()
	{
		return UEffortLevelBaseDataAsset::StaticClass();
	}
	UEffortLevelBaseDataAsset::UEffortLevelBaseDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffortLevelBaseDataAsset);
	UEffortLevelBaseDataAsset::~UEffortLevelBaseDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEffortLevelBaseDataAsset, UEffortLevelBaseDataAsset::StaticClass, TEXT("UEffortLevelBaseDataAsset"), &Z_Registration_Info_UClass_UEffortLevelBaseDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffortLevelBaseDataAsset), 3118287038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h_2986819252(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
