// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/DataTables/TypeDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypeDataTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTypeDataTable();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTypeDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UTypeDataTable::StaticRegisterNativesUTypeDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypeDataTable);
	UClass* Z_Construct_UClass_UTypeDataTable_NoRegister()
	{
		return UTypeDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UTypeDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypeDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeDataTable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypeDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataTables/TypeDataTable.h" },
		{ "ModuleRelativePath", "Public/DataTables/TypeDataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypeDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypeDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypeDataTable_Statics::ClassParams = {
		&UTypeDataTable::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypeDataTable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypeDataTable()
	{
		if (!Z_Registration_Info_UClass_UTypeDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypeDataTable.OuterSingleton, Z_Construct_UClass_UTypeDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypeDataTable.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UTypeDataTable>()
	{
		return UTypeDataTable::StaticClass();
	}
	UTypeDataTable::UTypeDataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypeDataTable);
	UTypeDataTable::~UTypeDataTable() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypeDataTable, UTypeDataTable::StaticClass, TEXT("UTypeDataTable"), &Z_Registration_Info_UClass_UTypeDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypeDataTable), 737850642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h_134408397(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
