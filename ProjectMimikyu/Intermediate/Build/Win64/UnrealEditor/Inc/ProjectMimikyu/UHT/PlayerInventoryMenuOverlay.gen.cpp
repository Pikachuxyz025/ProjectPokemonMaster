// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/PlayerInventoryMenuOverlay.h"
#include "InputCoreTypes.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventoryMenuOverlay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryGrid_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMouseInterface_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	static FName NAME_UPlayerInventoryMenuOverlay_AllocatePokemonInfo = FName(TEXT("AllocatePokemonInfo"));
	void UPlayerInventoryMenuOverlay::AllocatePokemonInfo()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInventoryMenuOverlay_AllocatePokemonInfo),NULL);
	}
	void UPlayerInventoryMenuOverlay::StaticRegisterNativesUPlayerInventoryMenuOverlay()
	{
	}
	struct Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryMenuOverlay, nullptr, "AllocatePokemonInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInventoryMenuOverlay);
	UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister()
	{
		return UPlayerInventoryMenuOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExitKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonPartyInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonPartyInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonPartyInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPokemonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo, "AllocatePokemonInfo" }, // 304413910
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerInventoryMenuOverlay.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_InventoryGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_InventoryGrid = { "InventoryGrid", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, InventoryGrid), Z_Construct_UClass_UInventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_InventoryGrid_MetaData), Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_InventoryGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, PlayerCharacter), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PlayerCharacter_MetaData), Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PlayerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_CurrentController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_CurrentController = { "CurrentController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, CurrentController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_CurrentController_MetaData), Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_CurrentController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ExitKey_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ExitKey = { "ExitKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, ExitKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ExitKey_MetaData), Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ExitKey_MetaData) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo_Inner = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 2839312099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, PokemonPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo_MetaData), Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo_MetaData) }; // 2839312099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ReturnToWidget_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ReturnToWidget = { "ReturnToWidget", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, ReturnToWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ReturnToWidget_MetaData), Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ReturnToWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_InventoryGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PlayerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_CurrentController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ExitKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ReturnToWidget,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMouseInterface_NoRegister, (int32)VTABLE_OFFSET(UPlayerInventoryMenuOverlay, IMouseInterface), false },  // 1896927998
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventoryMenuOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::ClassParams = {
		&UPlayerInventoryMenuOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay()
	{
		if (!Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.OuterSingleton, Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPlayerInventoryMenuOverlay>()
	{
		return UPlayerInventoryMenuOverlay::StaticClass();
	}
	UPlayerInventoryMenuOverlay::UPlayerInventoryMenuOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventoryMenuOverlay);
	UPlayerInventoryMenuOverlay::~UPlayerInventoryMenuOverlay() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInventoryMenuOverlay, UPlayerInventoryMenuOverlay::StaticClass, TEXT("UPlayerInventoryMenuOverlay"), &Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInventoryMenuOverlay), 1102583941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h_1222183338(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
