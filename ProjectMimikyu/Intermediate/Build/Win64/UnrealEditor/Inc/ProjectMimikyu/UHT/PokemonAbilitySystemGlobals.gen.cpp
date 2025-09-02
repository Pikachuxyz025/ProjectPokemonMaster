// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/PokemonAbilitySystemGlobals.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonAbilitySystemGlobals() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemGlobals();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemGlobals_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonAbilitySystemGlobals *********************************************
void UPokemonAbilitySystemGlobals::StaticRegisterNativesUPokemonAbilitySystemGlobals()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals;
UClass* UPokemonAbilitySystemGlobals::GetPrivateStaticClass()
{
	using TClass = UPokemonAbilitySystemGlobals;
	if (!Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonAbilitySystemGlobals"),
			Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals.InnerSingleton,
			StaticRegisterNativesUPokemonAbilitySystemGlobals,
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
	return Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonAbilitySystemGlobals_NoRegister()
{
	return UPokemonAbilitySystemGlobals::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/PokemonAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemGlobals.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPokemonAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonAbilitySystemGlobals_Statics::ClassParams = {
	&UPokemonAbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UPokemonAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals.OuterSingleton;
}
UPokemonAbilitySystemGlobals::UPokemonAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonAbilitySystemGlobals);
UPokemonAbilitySystemGlobals::~UPokemonAbilitySystemGlobals() {}
// ********** End Class UPokemonAbilitySystemGlobals ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemGlobals_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAbilitySystemGlobals, UPokemonAbilitySystemGlobals::StaticClass, TEXT("UPokemonAbilitySystemGlobals"), &Z_Registration_Info_UClass_UPokemonAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAbilitySystemGlobals), 3275998785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemGlobals_h__Script_ProjectMimikyu_1220647521(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemGlobals_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemGlobals_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
