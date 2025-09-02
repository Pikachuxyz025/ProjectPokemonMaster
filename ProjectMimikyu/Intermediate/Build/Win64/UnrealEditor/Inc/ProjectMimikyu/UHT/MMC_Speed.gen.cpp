// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MMC/MMC_Speed.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMMC_Speed() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Speed();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Speed_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_Speed ***************************************************************
void UMMC_Speed::StaticRegisterNativesUMMC_Speed()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_Speed;
UClass* UMMC_Speed::GetPrivateStaticClass()
{
	using TClass = UMMC_Speed;
	if (!Z_Registration_Info_UClass_UMMC_Speed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MMC_Speed"),
			Z_Registration_Info_UClass_UMMC_Speed.InnerSingleton,
			StaticRegisterNativesUMMC_Speed,
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
	return Z_Registration_Info_UClass_UMMC_Speed.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_Speed_NoRegister()
{
	return UMMC_Speed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_Speed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_Speed.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_Speed.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_Speed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_Speed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Speed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_Speed_Statics::ClassParams = {
	&UMMC_Speed::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Speed_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_Speed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_Speed()
{
	if (!Z_Registration_Info_UClass_UMMC_Speed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_Speed.OuterSingleton, Z_Construct_UClass_UMMC_Speed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_Speed.OuterSingleton;
}
UMMC_Speed::UMMC_Speed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_Speed);
UMMC_Speed::~UMMC_Speed() {}
// ********** End Class UMMC_Speed *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Speed_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_Speed, UMMC_Speed::StaticClass, TEXT("UMMC_Speed"), &Z_Registration_Info_UClass_UMMC_Speed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_Speed), 2511759705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Speed_h__Script_ProjectMimikyu_208486848(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Speed_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Speed_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
