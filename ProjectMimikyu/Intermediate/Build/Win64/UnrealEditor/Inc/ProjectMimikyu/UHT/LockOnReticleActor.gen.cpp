// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/LockOnReticleActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLockOnReticleActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ALockOnReticleActor();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ALockOnReticleActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALockOnReticleActor ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ALockOnReticleActor;
UClass* ALockOnReticleActor::GetPrivateStaticClass()
{
	using TClass = ALockOnReticleActor;
	if (!Z_Registration_Info_UClass_ALockOnReticleActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LockOnReticleActor"),
			Z_Registration_Info_UClass_ALockOnReticleActor.InnerSingleton,
			StaticRegisterNativesALockOnReticleActor,
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
	return Z_Registration_Info_UClass_ALockOnReticleActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ALockOnReticleActor_NoRegister()
{
	return ALockOnReticleActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALockOnReticleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/LockOnReticleActor.h" },
		{ "ModuleRelativePath", "Public/Actors/LockOnReticleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleWidgetComponent_MetaData[] = {
		{ "Category", "LockOnReticleActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/LockOnReticleActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALockOnReticleActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReticleWidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ALockOnReticleActor constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALockOnReticleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ALockOnReticleActor_Statics

// ********** Begin Class ALockOnReticleActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockOnReticleActor_Statics::NewProp_ReticleWidgetComponent = { "ReticleWidgetComponent", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockOnReticleActor, ReticleWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleWidgetComponent_MetaData), NewProp_ReticleWidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALockOnReticleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockOnReticleActor_Statics::NewProp_ReticleWidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockOnReticleActor_Statics::PropPointers) < 2048);
// ********** End Class ALockOnReticleActor Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_ALockOnReticleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockOnReticleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALockOnReticleActor_Statics::ClassParams = {
	&ALockOnReticleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALockOnReticleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALockOnReticleActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALockOnReticleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALockOnReticleActor_Statics::Class_MetaDataParams)
};
void ALockOnReticleActor::StaticRegisterNativesALockOnReticleActor()
{
}
UClass* Z_Construct_UClass_ALockOnReticleActor()
{
	if (!Z_Registration_Info_UClass_ALockOnReticleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALockOnReticleActor.OuterSingleton, Z_Construct_UClass_ALockOnReticleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALockOnReticleActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALockOnReticleActor);
ALockOnReticleActor::~ALockOnReticleActor() {}
// ********** End Class ALockOnReticleActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Actors_LockOnReticleActor_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALockOnReticleActor, ALockOnReticleActor::StaticClass, TEXT("ALockOnReticleActor"), &Z_Registration_Info_UClass_ALockOnReticleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALockOnReticleActor), 340888426U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Actors_LockOnReticleActor_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Actors_LockOnReticleActor_h__Script_ProjectMimikyu_2733762437{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Actors_LockOnReticleActor_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Actors_LockOnReticleActor_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
