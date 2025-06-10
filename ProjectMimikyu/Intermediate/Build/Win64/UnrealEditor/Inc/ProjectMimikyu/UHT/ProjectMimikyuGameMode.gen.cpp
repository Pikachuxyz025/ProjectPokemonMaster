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
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuGameMode();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuGameMode_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeChartDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeChartDataTable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MultiplierMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeResponse_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeResponse_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeResponse_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TypeResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeChartDataTable_MetaData[] = {
		{ "Category", "ProjectMimikyuGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeChartDataTable = { "TypeChartDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuGameMode, TypeChartDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeChartDataTable_MetaData), Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeChartDataTable_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_ValueProp = { "MultiplierMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_Key_KeyProp = { "MultiplierMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap = { "MultiplierMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuGameMode, MultiplierMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_MetaData), Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_ValueProp = { "TypeResponse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp = { "TypeResponse_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(0, nullptr) }; // 3798297509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/ProjectMimikyuGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse = { "TypeResponse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectMimikyuGameMode, TypeResponse), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_MetaData), Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_MetaData) }; // 3798297509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeChartDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_MultiplierMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectMimikyuGameMode_Statics::NewProp_TypeResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectMimikyuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectMimikyuGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectMimikyuGameMode_Statics::ClassParams = {
		&AProjectMimikyuGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectMimikyuGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMimikyuGameMode_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AProjectMimikyuGameMode, AProjectMimikyuGameMode::StaticClass, TEXT("AProjectMimikyuGameMode"), &Z_Registration_Info_UClass_AProjectMimikyuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectMimikyuGameMode), 2975104637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_3114477158(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_GameModes_ProjectMimikyuGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
