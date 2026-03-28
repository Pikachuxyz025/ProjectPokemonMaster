// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/CraftableInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCraftableInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UCraftableInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UCraftableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCraftableInterface **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCraftableInterface;
UClass* UCraftableInterface::GetPrivateStaticClass()
{
	using TClass = UCraftableInterface;
	if (!Z_Registration_Info_UClass_UCraftableInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CraftableInterface"),
			Z_Registration_Info_UClass_UCraftableInterface.InnerSingleton,
			StaticRegisterNativesUCraftableInterface,
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
	return Z_Registration_Info_UClass_UCraftableInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCraftableInterface_NoRegister()
{
	return UCraftableInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCraftableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CraftableInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UCraftableInterface constinit property declarations ******************
// ********** End Interface UCraftableInterface constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICraftableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCraftableInterface_Statics
UObject* (*const Z_Construct_UClass_UCraftableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCraftableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCraftableInterface_Statics::ClassParams = {
	&UCraftableInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCraftableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCraftableInterface_Statics::Class_MetaDataParams)
};
void UCraftableInterface::StaticRegisterNativesUCraftableInterface()
{
}
UClass* Z_Construct_UClass_UCraftableInterface()
{
	if (!Z_Registration_Info_UClass_UCraftableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCraftableInterface.OuterSingleton, Z_Construct_UClass_UCraftableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCraftableInterface.OuterSingleton;
}
UCraftableInterface::UCraftableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCraftableInterface);
// ********** End Interface UCraftableInterface ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCraftableInterface, UCraftableInterface::StaticClass, TEXT("UCraftableInterface"), &Z_Registration_Info_UClass_UCraftableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCraftableInterface), 2784620368U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h__Script_ProjectMimikyu_3737048468{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
