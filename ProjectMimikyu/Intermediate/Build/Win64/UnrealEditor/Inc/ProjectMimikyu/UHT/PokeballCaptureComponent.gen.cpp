// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokeballCaptureComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokeballCaptureComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokeballCaptureComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokeballCaptureComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokeballCaptureComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokeballCaptureComponent;
UClass* UPokeballCaptureComponent::GetPrivateStaticClass()
{
	using TClass = UPokeballCaptureComponent;
	if (!Z_Registration_Info_UClass_UPokeballCaptureComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokeballCaptureComponent"),
			Z_Registration_Info_UClass_UPokeballCaptureComponent.InnerSingleton,
			StaticRegisterNativesUPokeballCaptureComponent,
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
	return Z_Registration_Info_UClass_UPokeballCaptureComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokeballCaptureComponent_NoRegister()
{
	return UPokeballCaptureComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokeballCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pokeball" },
		{ "IncludePath", "ActorComponents/PokeballCaptureComponent.h" },
		{ "ModuleRelativePath", "Private/ActorComponents/PokeballCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPokeBall_MetaData[] = {
		{ "ModuleRelativePath", "Private/ActorComponents/PokeballCaptureComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokeballCaptureComponent constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPokeBall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokeballCaptureComponent constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokeballCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokeballCaptureComponent_Statics

// ********** Begin Class UPokeballCaptureComponent Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokeballCaptureComponent_Statics::NewProp_OwningPokeBall = { "OwningPokeBall", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokeballCaptureComponent, OwningPokeBall), Z_Construct_UClass_APokeBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPokeBall_MetaData), NewProp_OwningPokeBall_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokeballCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokeballCaptureComponent_Statics::NewProp_OwningPokeBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballCaptureComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokeballCaptureComponent Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPokeballCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokeballCaptureComponent_Statics::ClassParams = {
	&UPokeballCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPokeballCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballCaptureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokeballCaptureComponent_Statics::Class_MetaDataParams)
};
void UPokeballCaptureComponent::StaticRegisterNativesUPokeballCaptureComponent()
{
}
UClass* Z_Construct_UClass_UPokeballCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UPokeballCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokeballCaptureComponent.OuterSingleton, Z_Construct_UClass_UPokeballCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokeballCaptureComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokeballCaptureComponent);
UPokeballCaptureComponent::~UPokeballCaptureComponent() {}
// ********** End Class UPokeballCaptureComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Private_ActorComponents_PokeballCaptureComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokeballCaptureComponent, UPokeballCaptureComponent::StaticClass, TEXT("UPokeballCaptureComponent"), &Z_Registration_Info_UClass_UPokeballCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokeballCaptureComponent), 1384163848U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Private_ActorComponents_PokeballCaptureComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Private_ActorComponents_PokeballCaptureComponent_h__Script_ProjectMimikyu_3537759395{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Private_ActorComponents_PokeballCaptureComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Private_ActorComponents_PokeballCaptureComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
