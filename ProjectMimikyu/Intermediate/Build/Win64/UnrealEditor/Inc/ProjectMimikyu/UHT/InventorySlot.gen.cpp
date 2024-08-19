// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/InventorySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlot() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySlot();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UInventorySlot::StaticRegisterNativesUInventorySlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventorySlot);
	UClass* Z_Construct_UClass_UInventorySlot_NoRegister()
	{
		return UInventorySlot::StaticClass();
	}
	struct Z_Construct_UClass_UInventorySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemQuantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantityBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuantityBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventorySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/InventorySlot.h" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, ItemImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemImage_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ArrowImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ArrowImage = { "ArrowImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, ArrowImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ArrowImage_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_ArrowImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, ItemQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemQuantity_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemQuantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_QuantityBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_QuantityBox = { "QuantityBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, QuantityBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_QuantityBox_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_QuantityBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemID_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_Quantity_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_Quantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex = { "ContentIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, ContentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemDataTable_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, InventoryComponent), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ArrowImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemQuantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_QuantityBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ItemDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventoryComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventorySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlot_Statics::ClassParams = {
		&UInventorySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventorySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventorySlot()
	{
		if (!Z_Registration_Info_UClass_UInventorySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlot.OuterSingleton, Z_Construct_UClass_UInventorySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventorySlot.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UInventorySlot>()
	{
		return UInventorySlot::StaticClass();
	}
	UInventorySlot::UInventorySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlot);
	UInventorySlot::~UInventorySlot() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventorySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventorySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlot, UInventorySlot::StaticClass, TEXT("UInventorySlot"), &Z_Registration_Info_UClass_UInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlot), 1705023711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventorySlot_h_1674525673(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventorySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventorySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
