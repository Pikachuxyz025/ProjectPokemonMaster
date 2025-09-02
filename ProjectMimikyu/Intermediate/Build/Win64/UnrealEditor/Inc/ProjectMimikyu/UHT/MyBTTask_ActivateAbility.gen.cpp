// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MyBTTask_ActivateAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyBTTask_ActivateAbility() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMyBTTask_ActivateAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMyBTTask_ActivateAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyBTTask_ActivateAbility ************************************************
void UMyBTTask_ActivateAbility::StaticRegisterNativesUMyBTTask_ActivateAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyBTTask_ActivateAbility;
UClass* UMyBTTask_ActivateAbility::GetPrivateStaticClass()
{
	using TClass = UMyBTTask_ActivateAbility;
	if (!Z_Registration_Info_UClass_UMyBTTask_ActivateAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyBTTask_ActivateAbility"),
			Z_Registration_Info_UClass_UMyBTTask_ActivateAbility.InnerSingleton,
			StaticRegisterNativesUMyBTTask_ActivateAbility,
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
	return Z_Registration_Info_UClass_UMyBTTask_ActivateAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyBTTask_ActivateAbility_NoRegister()
{
	return UMyBTTask_ActivateAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyBTTask_ActivateAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/MyBTTask_ActivateAbility.h" },
		{ "ModuleRelativePath", "Public/Tasks/MyBTTask_ActivateAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_ActivateAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBTTask_ActivateAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_ActivateAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_ActivateAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_ActivateAbility_Statics::ClassParams = {
	&UMyBTTask_ActivateAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_ActivateAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_ActivateAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_ActivateAbility()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_ActivateAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_ActivateAbility.OuterSingleton, Z_Construct_UClass_UMyBTTask_ActivateAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_ActivateAbility.OuterSingleton;
}
UMyBTTask_ActivateAbility::UMyBTTask_ActivateAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_ActivateAbility);
UMyBTTask_ActivateAbility::~UMyBTTask_ActivateAbility() {}
// ********** End Class UMyBTTask_ActivateAbility **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_MyBTTask_ActivateAbility_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_ActivateAbility, UMyBTTask_ActivateAbility::StaticClass, TEXT("UMyBTTask_ActivateAbility"), &Z_Registration_Info_UClass_UMyBTTask_ActivateAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_ActivateAbility), 3803170481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_MyBTTask_ActivateAbility_h__Script_ProjectMimikyu_1316126505(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_MyBTTask_ActivateAbility_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_MyBTTask_ActivateAbility_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
