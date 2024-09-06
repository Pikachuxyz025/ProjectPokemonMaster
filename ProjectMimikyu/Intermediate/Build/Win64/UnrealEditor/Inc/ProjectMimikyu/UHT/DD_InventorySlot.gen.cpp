// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/DD_InventorySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDD_InventorySlot() {}
// Cross Module References
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDD_InventorySlot();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDD_InventorySlot_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UDD_InventorySlot::StaticRegisterNativesUDD_InventorySlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDD_InventorySlot);
	UClass* Z_Construct_UClass_UDD_InventorySlot_NoRegister()
	{
		return UDD_InventorySlot::StaticClass();
	}
	struct Z_Construct_UClass_UDD_InventorySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDD_InventorySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDD_InventorySlot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDD_InventorySlot_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/DD_InventorySlot.h" },
		{ "ModuleRelativePath", "Public/UI/DD_InventorySlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDD_InventorySlot_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "DD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DD_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDD_InventorySlot_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDD_InventorySlot, InventoryComponent), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDD_InventorySlot_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_UDD_InventorySlot_Statics::NewProp_InventoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDD_InventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDD_InventorySlot_Statics::NewProp_InventoryComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDD_InventorySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDD_InventorySlot>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDD_InventorySlot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDD_InventorySlot()
	{
		if (!Z_Registration_Info_UClass_UDD_InventorySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDD_InventorySlot.OuterSingleton, Z_Construct_UClass_UDD_InventorySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDD_InventorySlot.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UDD_InventorySlot>()
	{
		return UDD_InventorySlot::StaticClass();
	}
	UDD_InventorySlot::UDD_InventorySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDD_InventorySlot);
	UDD_InventorySlot::~UDD_InventorySlot() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDD_InventorySlot, UDD_InventorySlot::StaticClass, TEXT("UDD_InventorySlot"), &Z_Registration_Info_UClass_UDD_InventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDD_InventorySlot), 1265123166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h_1761129089(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_DD_InventorySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
