// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/PlayerMenuOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMenuOverlay() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerMenuOverlay();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerMenuOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPlayerMenuOverlay::StaticRegisterNativesUPlayerMenuOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMenuOverlay);
	UClass* Z_Construct_UClass_UPlayerMenuOverlay_NoRegister()
	{
		return UPlayerMenuOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMenuOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrainerOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MenuOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatInfoOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PokemonStatInfoOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMenuOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMenuOverlay_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PlayerMenuOverlay.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenuOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenuClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenuClass = { "InventoryMenuClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMenuOverlay, InventoryMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenuClass_MetaData), Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_TrainerOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_TrainerOverlayClass = { "TrainerOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMenuOverlay, TrainerOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_TrainerOverlayClass_MetaData), Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_TrainerOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_MenuOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_MenuOverlayClass = { "MenuOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMenuOverlay, MenuOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_MenuOverlayClass_MetaData), Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_MenuOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_PokemonStatInfoOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_PokemonStatInfoOverlayClass = { "PokemonStatInfoOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMenuOverlay, PokemonStatInfoOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_PokemonStatInfoOverlayClass_MetaData), Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_PokemonStatInfoOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenu_MetaData[] = {
		{ "Category", "PlayerMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenu = { "InventoryMenu", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMenuOverlay, InventoryMenu), Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenu_MetaData), Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenu_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMenuOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_TrainerOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_MenuOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_PokemonStatInfoOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMenuOverlay_Statics::NewProp_InventoryMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMenuOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMenuOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMenuOverlay_Statics::ClassParams = {
		&UPlayerMenuOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerMenuOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMenuOverlay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMenuOverlay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerMenuOverlay()
	{
		if (!Z_Registration_Info_UClass_UPlayerMenuOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMenuOverlay.OuterSingleton, Z_Construct_UClass_UPlayerMenuOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerMenuOverlay.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPlayerMenuOverlay>()
	{
		return UPlayerMenuOverlay::StaticClass();
	}
	UPlayerMenuOverlay::UPlayerMenuOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMenuOverlay);
	UPlayerMenuOverlay::~UPlayerMenuOverlay() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerMenuOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerMenuOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMenuOverlay, UPlayerMenuOverlay::StaticClass, TEXT("UPlayerMenuOverlay"), &Z_Registration_Info_UClass_UPlayerMenuOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMenuOverlay), 1580453142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerMenuOverlay_h_2312121203(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerMenuOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerMenuOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
