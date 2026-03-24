// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/PokeBall.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokeBall() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokeballType();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APokeBall ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APokeBall;
UClass* APokeBall::GetPrivateStaticClass()
{
	using TClass = APokeBall;
	if (!Z_Registration_Info_UClass_APokeBall.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokeBall"),
			Z_Registration_Info_UClass_APokeBall.InnerSingleton,
			StaticRegisterNativesAPokeBall,
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
	return Z_Registration_Info_UClass_APokeBall.InnerSingleton;
}
UClass* Z_Construct_UClass_APokeBall_NoRegister()
{
	return APokeBall::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APokeBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/PokeBall.h" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokeball_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseModifier_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostedModifier_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APokeBall constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPokeball_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPokeball;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostedModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APokeBall constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokeBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APokeBall_Statics

// ********** Begin Class APokeBall Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, ProjectileMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball = { "CurrentPokeball", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, CurrentPokeball), Z_Construct_UEnum_ProjectMimikyu_EPokeballType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokeball_MetaData), NewProp_CurrentPokeball_MetaData) }; // 2498691174
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_BaseModifier = { "BaseModifier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, BaseModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseModifier_MetaData), NewProp_BaseModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_BoostedModifier = { "BoostedModifier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, BoostedModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostedModifier_MetaData), NewProp_BoostedModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokeBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_ProjectileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_BaseModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_BoostedModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::PropPointers) < 2048);
// ********** End Class APokeBall Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_APokeBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokeBall_Statics::ClassParams = {
	&APokeBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APokeBall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::Class_MetaDataParams), Z_Construct_UClass_APokeBall_Statics::Class_MetaDataParams)
};
void APokeBall::StaticRegisterNativesAPokeBall()
{
}
UClass* Z_Construct_UClass_APokeBall()
{
	if (!Z_Registration_Info_UClass_APokeBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokeBall.OuterSingleton, Z_Construct_UClass_APokeBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokeBall.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APokeBall);
APokeBall::~APokeBall() {}
// ********** End Class APokeBall ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokeBall, APokeBall::StaticClass, TEXT("APokeBall"), &Z_Registration_Info_UClass_APokeBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokeBall), 4165751487U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_2341481835{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
