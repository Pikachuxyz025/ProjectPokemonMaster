// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MMC/MMC_SpecialAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMMC_SpecialAttack() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_SpecialAttack();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_SpecialAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_SpecialAttack *******************************************************
void UMMC_SpecialAttack::StaticRegisterNativesUMMC_SpecialAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_SpecialAttack;
UClass* UMMC_SpecialAttack::GetPrivateStaticClass()
{
	using TClass = UMMC_SpecialAttack;
	if (!Z_Registration_Info_UClass_UMMC_SpecialAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MMC_SpecialAttack"),
			Z_Registration_Info_UClass_UMMC_SpecialAttack.InnerSingleton,
			StaticRegisterNativesUMMC_SpecialAttack,
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
	return Z_Registration_Info_UClass_UMMC_SpecialAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_SpecialAttack_NoRegister()
{
	return UMMC_SpecialAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_SpecialAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_SpecialAttack.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_SpecialAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_SpecialAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_SpecialAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_SpecialAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_SpecialAttack_Statics::ClassParams = {
	&UMMC_SpecialAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_SpecialAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_SpecialAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_SpecialAttack()
{
	if (!Z_Registration_Info_UClass_UMMC_SpecialAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_SpecialAttack.OuterSingleton, Z_Construct_UClass_UMMC_SpecialAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_SpecialAttack.OuterSingleton;
}
UMMC_SpecialAttack::UMMC_SpecialAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_SpecialAttack);
UMMC_SpecialAttack::~UMMC_SpecialAttack() {}
// ********** End Class UMMC_SpecialAttack *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_SpecialAttack, UMMC_SpecialAttack::StaticClass, TEXT("UMMC_SpecialAttack"), &Z_Registration_Info_UClass_UMMC_SpecialAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_SpecialAttack), 4294338726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h__Script_ProjectMimikyu_1534550168(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_SpecialAttack_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
