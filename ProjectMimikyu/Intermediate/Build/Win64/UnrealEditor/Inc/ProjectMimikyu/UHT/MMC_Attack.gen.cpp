// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MMC/MMC_Attack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMMC_Attack() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Attack();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_Attack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMMC_StatCalculation();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_Attack **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_Attack;
UClass* UMMC_Attack::GetPrivateStaticClass()
{
	using TClass = UMMC_Attack;
	if (!Z_Registration_Info_UClass_UMMC_Attack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MMC_Attack"),
			Z_Registration_Info_UClass_UMMC_Attack.InnerSingleton,
			StaticRegisterNativesUMMC_Attack,
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
	return Z_Registration_Info_UClass_UMMC_Attack.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_Attack_NoRegister()
{
	return UMMC_Attack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_Attack.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MMC/MMC_Attack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMMC_Attack constinit property declarations ******************************
// ********** End Class UMMC_Attack constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_Attack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMMC_Attack_Statics
UObject* (*const Z_Construct_UClass_UMMC_Attack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMMC_StatCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Attack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_Attack_Statics::ClassParams = {
	&UMMC_Attack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Attack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_Attack_Statics::Class_MetaDataParams)
};
void UMMC_Attack::StaticRegisterNativesUMMC_Attack()
{
}
UClass* Z_Construct_UClass_UMMC_Attack()
{
	if (!Z_Registration_Info_UClass_UMMC_Attack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_Attack.OuterSingleton, Z_Construct_UClass_UMMC_Attack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_Attack.OuterSingleton;
}
UMMC_Attack::UMMC_Attack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMMC_Attack);
UMMC_Attack::~UMMC_Attack() {}
// ********** End Class UMMC_Attack ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_Attack, UMMC_Attack::StaticClass, TEXT("UMMC_Attack"), &Z_Registration_Info_UClass_UMMC_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_Attack), 3010778570U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h__Script_ProjectMimikyu_925183413{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_MMC_MMC_Attack_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
