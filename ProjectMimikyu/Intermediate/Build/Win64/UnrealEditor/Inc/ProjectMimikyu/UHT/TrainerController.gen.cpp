// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AIControllers/TrainerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerController();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerController_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void ATrainerController::StaticRegisterNativesATrainerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrainerController);
	UClass* Z_Construct_UClass_ATrainerController_NoRegister()
	{
		return ATrainerController::StaticClass();
	}
	struct Z_Construct_UClass_ATrainerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Swap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Swap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_MoveSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_MoveSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrainerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllers/TrainerController.h" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::NewProp_TrainerHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_TrainerHUD = { "TrainerHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, TrainerHUD), Z_Construct_UClass_ATrainerHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::NewProp_TrainerHUD_MetaData), Z_Construct_UClass_ATrainerController_Statics::NewProp_TrainerHUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ATrainerController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Inventory = { "IA_Inventory", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Inventory), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Inventory_MetaData), Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Inventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Swap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Swap = { "IA_Swap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Swap), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Swap_MetaData), Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Swap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Left_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Left = { "IA_Left", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Left), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Left_MetaData), Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Right_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Right = { "IA_Right", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Right), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Right_MetaData), Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Right_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_MoveSelection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_MoveSelection = { "IA_MoveSelection", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_MoveSelection), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_MoveSelection_MetaData), Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_MoveSelection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_TrainerHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Swap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_MoveSelection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrainerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainerController_Statics::ClassParams = {
		&ATrainerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrainerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATrainerController()
	{
		if (!Z_Registration_Info_UClass_ATrainerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerController.OuterSingleton, Z_Construct_UClass_ATrainerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrainerController.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<ATrainerController>()
	{
		return ATrainerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainerController);
	ATrainerController::~ATrainerController() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerController, ATrainerController::StaticClass, TEXT("ATrainerController"), &Z_Registration_Info_UClass_ATrainerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerController), 3066588699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_2637766449(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
