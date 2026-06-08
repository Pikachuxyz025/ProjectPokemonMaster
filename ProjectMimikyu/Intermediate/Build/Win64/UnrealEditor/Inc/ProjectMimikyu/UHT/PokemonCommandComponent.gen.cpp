// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonCommandComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonCommandComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCommandComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCommandComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonCommandComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonCommandComponent;
UClass* UPokemonCommandComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonCommandComponent;
	if (!Z_Registration_Info_UClass_UPokemonCommandComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonCommandComponent"),
			Z_Registration_Info_UClass_UPokemonCommandComponent.InnerSingleton,
			StaticRegisterNativesUPokemonCommandComponent,
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
	return Z_Registration_Info_UClass_UPokemonCommandComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonCommandComponent_NoRegister()
{
	return UPokemonCommandComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonCommandComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/PokemonCommandComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonCommandComponent constinit property declarations *****************
// ********** End Class UPokemonCommandComponent constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonCommandComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonCommandComponent_Statics
UObject* (*const Z_Construct_UClass_UPokemonCommandComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonCommandComponent_Statics::ClassParams = {
	&UPokemonCommandComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonCommandComponent_Statics::Class_MetaDataParams)
};
void UPokemonCommandComponent::StaticRegisterNativesUPokemonCommandComponent()
{
}
UClass* Z_Construct_UClass_UPokemonCommandComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton, Z_Construct_UClass_UPokemonCommandComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonCommandComponent);
UPokemonCommandComponent::~UPokemonCommandComponent() {}
// ********** End Class UPokemonCommandComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonCommandComponent, UPokemonCommandComponent::StaticClass, TEXT("UPokemonCommandComponent"), &Z_Registration_Info_UClass_UPokemonCommandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonCommandComponent), 16212328U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_1739364306{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
