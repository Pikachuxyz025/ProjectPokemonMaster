// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/ItemDataComponent.h"
#include "Engine/DataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemDataComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UItemDataComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UItemDataComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemDataComponent *******************************************************
void UItemDataComponent::StaticRegisterNativesUItemDataComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemDataComponent;
UClass* UItemDataComponent::GetPrivateStaticClass()
{
	using TClass = UItemDataComponent;
	if (!Z_Registration_Info_UClass_UItemDataComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemDataComponent"),
			Z_Registration_Info_UClass_UItemDataComponent.InnerSingleton,
			StaticRegisterNativesUItemDataComponent,
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
	return Z_Registration_Info_UClass_UItemDataComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemDataComponent_NoRegister()
{
	return UItemDataComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemDataComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/ItemDataComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/ItemDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemDataComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//class UDataTable* ItemDataTable;\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponents/ItemDataComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nclass UDataTable* ItemDataTable;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quanitity_MetaData[] = {
		{ "Category", "ItemDataComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/ItemDataComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quanitity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDataComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDataComponent_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataComponent, ItemID), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) }; // 4101738896
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemDataComponent_Statics::NewProp_Quanitity = { "Quanitity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataComponent, Quanitity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quanitity_MetaData), NewProp_Quanitity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDataComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataComponent_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataComponent_Statics::NewProp_Quanitity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemDataComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDataComponent_Statics::ClassParams = {
	&UItemDataComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemDataComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDataComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDataComponent()
{
	if (!Z_Registration_Info_UClass_UItemDataComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDataComponent.OuterSingleton, Z_Construct_UClass_UItemDataComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDataComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDataComponent);
UItemDataComponent::~UItemDataComponent() {}
// ********** End Class UItemDataComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_ItemDataComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDataComponent, UItemDataComponent::StaticClass, TEXT("UItemDataComponent"), &Z_Registration_Info_UClass_UItemDataComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDataComponent), 2880324753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_ItemDataComponent_h__Script_ProjectMimikyu_2310534561(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_ItemDataComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_ItemDataComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
