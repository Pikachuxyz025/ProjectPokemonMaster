// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PokemonAssetManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonAssetManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAssetManager();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonAssetManager *****************************************************
void UPokemonAssetManager::StaticRegisterNativesUPokemonAssetManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonAssetManager;
UClass* UPokemonAssetManager::GetPrivateStaticClass()
{
	using TClass = UPokemonAssetManager;
	if (!Z_Registration_Info_UClass_UPokemonAssetManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonAssetManager"),
			Z_Registration_Info_UClass_UPokemonAssetManager.InnerSingleton,
			StaticRegisterNativesUPokemonAssetManager,
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
	return Z_Registration_Info_UClass_UPokemonAssetManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonAssetManager_NoRegister()
{
	return UPokemonAssetManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PokemonAssetManager.h" },
		{ "ModuleRelativePath", "Public/PokemonAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPokemonAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonAssetManager_Statics::ClassParams = {
	&UPokemonAssetManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonAssetManager()
{
	if (!Z_Registration_Info_UClass_UPokemonAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAssetManager.OuterSingleton, Z_Construct_UClass_UPokemonAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonAssetManager.OuterSingleton;
}
UPokemonAssetManager::UPokemonAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonAssetManager);
UPokemonAssetManager::~UPokemonAssetManager() {}
// ********** End Class UPokemonAssetManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAssetManager_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAssetManager, UPokemonAssetManager::StaticClass, TEXT("UPokemonAssetManager"), &Z_Registration_Info_UClass_UPokemonAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAssetManager), 3880301472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAssetManager_h__Script_ProjectMimikyu_3360266764(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAssetManager_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonAssetManager_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
