// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTables/TypeDataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTypeDataTable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTypeDataTable();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTypeDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTypeDataTable ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTypeDataTable;
UClass* UTypeDataTable::GetPrivateStaticClass()
{
	using TClass = UTypeDataTable;
	if (!Z_Registration_Info_UClass_UTypeDataTable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TypeDataTable"),
			Z_Registration_Info_UClass_UTypeDataTable.InnerSingleton,
			StaticRegisterNativesUTypeDataTable,
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
	return Z_Registration_Info_UClass_UTypeDataTable.InnerSingleton;
}
UClass* Z_Construct_UClass_UTypeDataTable_NoRegister()
{
	return UTypeDataTable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTypeDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataTables/TypeDataTable.h" },
		{ "ModuleRelativePath", "Public/DataTables/TypeDataTable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTypeDataTable constinit property declarations ***************************
// ********** End Class UTypeDataTable constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypeDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTypeDataTable_Statics
UObject* (*const Z_Construct_UClass_UTypeDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataTable,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeDataTable_Statics::DependentSingletons) < 16);
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
void UTypeDataTable::StaticRegisterNativesUTypeDataTable()
{
}
UClass* Z_Construct_UClass_UTypeDataTable()
{
	if (!Z_Registration_Info_UClass_UTypeDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypeDataTable.OuterSingleton, Z_Construct_UClass_UTypeDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypeDataTable.OuterSingleton;
}
UTypeDataTable::UTypeDataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTypeDataTable);
UTypeDataTable::~UTypeDataTable() {}
// ********** End Class UTypeDataTable *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypeDataTable, UTypeDataTable::StaticClass, TEXT("UTypeDataTable"), &Z_Registration_Info_UClass_UTypeDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypeDataTable), 4261247269U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h__Script_ProjectMimikyu_3899278126{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataTables_TypeDataTable_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
