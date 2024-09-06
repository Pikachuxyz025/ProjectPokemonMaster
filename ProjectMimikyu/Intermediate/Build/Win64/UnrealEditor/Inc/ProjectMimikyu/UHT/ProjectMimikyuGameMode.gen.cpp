// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/GameModes/ProjectMimikyuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectMimikyuGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuGameMode();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void AProjectMimikyuGameMode::StaticRegisterNativesAProjectMimikyuGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectMimikyuGameMode);
	UClass* Z_Construct_UClass_AProjectMimikyuGameMode_NoRegister()
	{
		return AProjectMimikyuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectMimikyuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectMimikyuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/ProjectMimikyuGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectMimikyuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectMimikyuGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::ClassParams = {
		&AProjectMimikyuGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProjectMimikyuGameMode()
	{
		if (!Z_Registration_Info_UClass_AProjectMimikyuGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectMimikyuGameMode.OuterSingleton, Z_Construct_UClass_AProjectMimikyuGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectMimikyuGameMode.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<AProjectMimikyuGameMode>()
	{
		return AProjectMimikyuGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectMimikyuGameMode);
	AProjectMimikyuGameMode::~AProjectMimikyuGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectMimikyuGameMode, AProjectMimikyuGameMode::StaticClass, TEXT("AProjectMimikyuGameMode"), &Z_Registration_Info_UClass_AProjectMimikyuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectMimikyuGameMode), 4094681101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_250461249(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
