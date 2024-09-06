// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/TrainerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainerHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerHUD();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerHUD_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerMenuOverlay_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void ATrainerHUD::StaticRegisterNativesATrainerHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrainerHUD);
	UClass* Z_Construct_UClass_ATrainerHUD_NoRegister()
	{
		return ATrainerHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATrainerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrainerOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MenuOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrainerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/TrainerHUD.h" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlayClass = { "InventoryOverlayClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, InventoryOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlayClass_MetaData), Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayClass = { "TrainerOverlayClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, TrainerOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayClass_MetaData), Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlayClass = { "MenuOverlayClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, MenuOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlayClass_MetaData), Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlay = { "InventoryOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, InventoryOverlay), Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlay_MetaData), Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlay = { "MenuOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, MenuOverlay), Z_Construct_UClass_UPlayerMenuOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlay_MetaData), Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlay = { "TrainerOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, TrainerOverlay), Z_Construct_UClass_UTrainerOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlay_MetaData), Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrainerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainerHUD_Statics::ClassParams = {
		&ATrainerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrainerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainerHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATrainerHUD()
	{
		if (!Z_Registration_Info_UClass_ATrainerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerHUD.OuterSingleton, Z_Construct_UClass_ATrainerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrainerHUD.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<ATrainerHUD>()
	{
		return ATrainerHUD::StaticClass();
	}
	ATrainerHUD::ATrainerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainerHUD);
	ATrainerHUD::~ATrainerHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerHUD, ATrainerHUD::StaticClass, TEXT("ATrainerHUD"), &Z_Registration_Info_UClass_ATrainerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerHUD), 1606984009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h_2473560923(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
