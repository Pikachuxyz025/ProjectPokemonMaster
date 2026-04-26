// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/DD_InventorySlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDD_InventorySlot() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDD_InventorySlot();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDD_InventorySlot_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDD_InventorySlot ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDD_InventorySlot;
UClass* UDD_InventorySlot::GetPrivateStaticClass()
{
	using TClass = UDD_InventorySlot;
	if (!Z_Registration_Info_UClass_UDD_InventorySlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DD_InventorySlot"),
			Z_Registration_Info_UClass_UDD_InventorySlot.InnerSingleton,
			StaticRegisterNativesUDD_InventorySlot,
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
	return Z_Registration_Info_UClass_UDD_InventorySlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UDD_InventorySlot_NoRegister()
{
	return UDD_InventorySlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDD_InventorySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/DD_InventorySlot.h" },
		{ "ModuleRelativePath", "Public/UI/DD_InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "DD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DD_InventorySlot.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDD_InventorySlot constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDD_InventorySlot constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDD_InventorySlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDD_InventorySlot_Statics

// ********** Begin Class UDD_InventorySlot Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDD_InventorySlot_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDD_InventorySlot, InventoryComponent), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDD_InventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDD_InventorySlot_Statics::NewProp_InventoryComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDD_InventorySlot_Statics::PropPointers) < 2048);
// ********** End Class UDD_InventorySlot Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UDD_InventorySlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDD_InventorySlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDD_InventorySlot_Statics::ClassParams = {
	&UDD_InventorySlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDD_InventorySlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDD_InventorySlot_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDD_InventorySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UDD_InventorySlot_Statics::Class_MetaDataParams)
};
void UDD_InventorySlot::StaticRegisterNativesUDD_InventorySlot()
{
}
UClass* Z_Construct_UClass_UDD_InventorySlot()
{
	if (!Z_Registration_Info_UClass_UDD_InventorySlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDD_InventorySlot.OuterSingleton, Z_Construct_UClass_UDD_InventorySlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDD_InventorySlot.OuterSingleton;
}
UDD_InventorySlot::UDD_InventorySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDD_InventorySlot);
UDD_InventorySlot::~UDD_InventorySlot() {}
// ********** End Class UDD_InventorySlot **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDD_InventorySlot, UDD_InventorySlot::StaticClass, TEXT("UDD_InventorySlot"), &Z_Registration_Info_UClass_UDD_InventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDD_InventorySlot), 1146641965U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h__Script_ProjectMimikyu_2663223279{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
