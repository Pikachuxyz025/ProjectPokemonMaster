// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/BasicHealthBar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBasicHealthBar() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBasicHealthBar();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBasicHealthBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBasicHealthBar **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBasicHealthBar;
UClass* UBasicHealthBar::GetPrivateStaticClass()
{
	using TClass = UBasicHealthBar;
	if (!Z_Registration_Info_UClass_UBasicHealthBar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BasicHealthBar"),
			Z_Registration_Info_UClass_UBasicHealthBar.InnerSingleton,
			StaticRegisterNativesUBasicHealthBar,
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
	return Z_Registration_Info_UClass_UBasicHealthBar.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasicHealthBar_NoRegister()
{
	return UBasicHealthBar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasicHealthBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BasicHealthBar.h" },
		{ "ModuleRelativePath", "Public/UI/BasicHealthBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BasicHealthBar.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBasicHealthBar constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBasicHealthBar constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicHealthBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBasicHealthBar_Statics

// ********** Begin Class UBasicHealthBar Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicHealthBar_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicHealthBar, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicHealthBar_Statics::NewProp_HealthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicHealthBar_Statics::PropPointers) < 2048);
// ********** End Class UBasicHealthBar Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UBasicHealthBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicHealthBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicHealthBar_Statics::ClassParams = {
	&UBasicHealthBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBasicHealthBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasicHealthBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicHealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicHealthBar_Statics::Class_MetaDataParams)
};
void UBasicHealthBar::StaticRegisterNativesUBasicHealthBar()
{
}
UClass* Z_Construct_UClass_UBasicHealthBar()
{
	if (!Z_Registration_Info_UClass_UBasicHealthBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicHealthBar.OuterSingleton, Z_Construct_UClass_UBasicHealthBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasicHealthBar.OuterSingleton;
}
UBasicHealthBar::UBasicHealthBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBasicHealthBar);
UBasicHealthBar::~UBasicHealthBar() {}
// ********** End Class UBasicHealthBar ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_BasicHealthBar_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasicHealthBar, UBasicHealthBar::StaticClass, TEXT("UBasicHealthBar"), &Z_Registration_Info_UClass_UBasicHealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicHealthBar), 1580612167U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_BasicHealthBar_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_BasicHealthBar_h__Script_ProjectMimikyu_172021224{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_BasicHealthBar_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_BasicHealthBar_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
