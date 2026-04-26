// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/PokemonStatInfoDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonStatInfoDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonStatInfoDataAsset ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonStatInfoDataAsset;
UClass* UPokemonStatInfoDataAsset::GetPrivateStaticClass()
{
	using TClass = UPokemonStatInfoDataAsset;
	if (!Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonStatInfoDataAsset"),
			Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.InnerSingleton,
			StaticRegisterNativesUPokemonStatInfoDataAsset,
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
	return Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset_NoRegister()
{
	return UPokemonStatInfoDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/PokemonStatInfoDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonStatInfoDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonStatInfoDataAsset constinit property declarations ****************
// ********** End Class UPokemonStatInfoDataAsset constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonStatInfoDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics
UObject* (*const Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::ClassParams = {
	&UPokemonStatInfoDataAsset::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::Class_MetaDataParams)
};
void UPokemonStatInfoDataAsset::StaticRegisterNativesUPokemonStatInfoDataAsset()
{
}
UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset()
{
	if (!Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.OuterSingleton, Z_Construct_UClass_UPokemonStatInfoDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonStatInfoDataAsset.OuterSingleton;
}
UPokemonStatInfoDataAsset::UPokemonStatInfoDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonStatInfoDataAsset);
UPokemonStatInfoDataAsset::~UPokemonStatInfoDataAsset() {}
// ********** End Class UPokemonStatInfoDataAsset **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonStatInfoDataAsset, UPokemonStatInfoDataAsset::StaticClass, TEXT("UPokemonStatInfoDataAsset"), &Z_Registration_Info_UClass_UPokemonStatInfoDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonStatInfoDataAsset), 422944977U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h__Script_ProjectMimikyu_541574751{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonStatInfoDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
