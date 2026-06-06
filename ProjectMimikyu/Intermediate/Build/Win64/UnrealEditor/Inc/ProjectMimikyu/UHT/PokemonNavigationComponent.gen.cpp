// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonNavigationComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonNavigationComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonNavigationComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonNavigationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonNavigationComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonNavigationComponent;
UClass* UPokemonNavigationComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonNavigationComponent;
	if (!Z_Registration_Info_UClass_UPokemonNavigationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonNavigationComponent"),
			Z_Registration_Info_UClass_UPokemonNavigationComponent.InnerSingleton,
			StaticRegisterNativesUPokemonNavigationComponent,
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
	return Z_Registration_Info_UClass_UPokemonNavigationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonNavigationComponent_NoRegister()
{
	return UPokemonNavigationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonNavigationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/PokemonNavigationComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonNavigationComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonNavigationComponent constinit property declarations **************
// ********** End Class UPokemonNavigationComponent constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonNavigationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonNavigationComponent_Statics
UObject* (*const Z_Construct_UClass_UPokemonNavigationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonNavigationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonNavigationComponent_Statics::ClassParams = {
	&UPokemonNavigationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonNavigationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonNavigationComponent_Statics::Class_MetaDataParams)
};
void UPokemonNavigationComponent::StaticRegisterNativesUPokemonNavigationComponent()
{
}
UClass* Z_Construct_UClass_UPokemonNavigationComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonNavigationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonNavigationComponent.OuterSingleton, Z_Construct_UClass_UPokemonNavigationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonNavigationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonNavigationComponent);
UPokemonNavigationComponent::~UPokemonNavigationComponent() {}
// ********** End Class UPokemonNavigationComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonNavigationComponent, UPokemonNavigationComponent::StaticClass, TEXT("UPokemonNavigationComponent"), &Z_Registration_Info_UClass_UPokemonNavigationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonNavigationComponent), 2574513670U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_999070988{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonNavigationComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
