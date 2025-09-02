// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/ExecCalc/ExecCalc_Damage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExecCalc_Damage() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UExecCalc_Damage();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UExecCalc_Damage *********************************************************
void UExecCalc_Damage::StaticRegisterNativesUExecCalc_Damage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExecCalc_Damage;
UClass* UExecCalc_Damage::GetPrivateStaticClass()
{
	using TClass = UExecCalc_Damage;
	if (!Z_Registration_Info_UClass_UExecCalc_Damage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExecCalc_Damage"),
			Z_Registration_Info_UClass_UExecCalc_Damage.InnerSingleton,
			StaticRegisterNativesUExecCalc_Damage,
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
	return Z_Registration_Info_UClass_UExecCalc_Damage.InnerSingleton;
}
UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister()
{
	return UExecCalc_Damage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExecCalc_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/ExecCalc/ExecCalc_Damage.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ExecCalc/ExecCalc_Damage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecCalc_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExecCalc_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecCalc_Damage_Statics::ClassParams = {
	&UExecCalc_Damage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UExecCalc_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExecCalc_Damage()
{
	if (!Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton, Z_Construct_UClass_UExecCalc_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExecCalc_Damage);
UExecCalc_Damage::~UExecCalc_Damage() {}
// ********** End Class UExecCalc_Damage ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExecCalc_Damage, UExecCalc_Damage::StaticClass, TEXT("UExecCalc_Damage"), &Z_Registration_Info_UClass_UExecCalc_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecCalc_Damage), 794255052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h__Script_ProjectMimikyu_3589606769(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
