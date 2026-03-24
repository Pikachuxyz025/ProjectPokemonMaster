// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/EffortLevelBaseDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEffortLevelBaseDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEffortLevelBaseDataAsset ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEffortLevelBaseDataAsset;
UClass* UEffortLevelBaseDataAsset::GetPrivateStaticClass()
{
	using TClass = UEffortLevelBaseDataAsset;
	if (!Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EffortLevelBaseDataAsset"),
			Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.InnerSingleton,
			StaticRegisterNativesUEffortLevelBaseDataAsset,
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
	return Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset_NoRegister()
{
	return UEffortLevelBaseDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/EffortLevelBaseDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/EffortLevelBaseDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEffortLevelBaseDataAsset constinit property declarations ****************
// ********** End Class UEffortLevelBaseDataAsset constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffortLevelBaseDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics
UObject* (*const Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::DependentSingletons) < 16);
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
void UEffortLevelBaseDataAsset::StaticRegisterNativesUEffortLevelBaseDataAsset()
{
}
UClass* Z_Construct_UClass_UEffortLevelBaseDataAsset()
{
	if (!Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.OuterSingleton, Z_Construct_UClass_UEffortLevelBaseDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEffortLevelBaseDataAsset.OuterSingleton;
}
UEffortLevelBaseDataAsset::UEffortLevelBaseDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEffortLevelBaseDataAsset);
UEffortLevelBaseDataAsset::~UEffortLevelBaseDataAsset() {}
// ********** End Class UEffortLevelBaseDataAsset **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffortLevelBaseDataAsset, UEffortLevelBaseDataAsset::StaticClass, TEXT("UEffortLevelBaseDataAsset"), &Z_Registration_Info_UClass_UEffortLevelBaseDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffortLevelBaseDataAsset), 1310261946U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h__Script_ProjectMimikyu_4281759710{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_EffortLevelBaseDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
