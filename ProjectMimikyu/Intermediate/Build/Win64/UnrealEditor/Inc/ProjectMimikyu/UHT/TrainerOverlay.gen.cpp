// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/TrainerOverlay.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainerOverlay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlay();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlay_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ESlotType();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FSlotInfo();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UTrainerOverlay::execSetupInventoryInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInventoryInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrainerOverlay::execSetupPartyInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPartyInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrainerOverlay::execSetCurrentPokemonUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPokemonUI();
		P_NATIVE_END;
	}
	void UTrainerOverlay::StaticRegisterNativesUTrainerOverlay()
	{
		UClass* Class = UTrainerOverlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentPokemonUI", &UTrainerOverlay::execSetCurrentPokemonUI },
			{ "SetupInventoryInfo", &UTrainerOverlay::execSetupInventoryInfo },
			{ "SetupPartyInfo", &UTrainerOverlay::execSetupPartyInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrainerOverlay, nullptr, "SetCurrentPokemonUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrainerOverlay, nullptr, "SetupInventoryInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrainerOverlay, nullptr, "SetupPartyInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrainerOverlay);
	UClass* Z_Construct_UClass_UTrainerOverlay_NoRegister()
	{
		return UTrainerOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UTrainerOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPokemonImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPokemonImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLeftImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonLeftImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonRightImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonRightImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonHealth_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentSlotMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSlotMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentSlotMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonPartyInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonPartyInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonPartyInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMovesetOptions_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PokemonMovesetOptions_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PokemonMovesetOptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMovesetOptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PokemonMovesetOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowableContent_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableContent_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ThrowableContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrainerOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrainerOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI, "SetCurrentPokemonUI" }, // 1754690384
		{ &Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo, "SetupInventoryInfo" }, // 2983321186
		{ &Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo, "SetupPartyInfo" }, // 1512157569
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UI/TrainerOverlay.h" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_SelectedPokemonImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_SelectedPokemonImage = { "SelectedPokemonImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, SelectedPokemonImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_SelectedPokemonImage_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_SelectedPokemonImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLeftImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLeftImage = { "PokemonLeftImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonLeftImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLeftImage_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLeftImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonRightImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonRightImage = { "PokemonRightImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonRightImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonRightImage_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonRightImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonName = { "PokemonName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonName_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLevel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLevel = { "PokemonLevel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLevel_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_DefaultImage_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_DefaultImage_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_DefaultImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonHealth_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonHealth = { "PokemonHealth", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonHealth), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonHealth_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, OwnerCharacter), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_OwnerCharacter_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_OwnerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventorySystem_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventorySystem = { "InventorySystem", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, InventorySystem), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventorySystem_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventorySystem_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode = { "CurrentSlotMode", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, CurrentSlotMode), Z_Construct_UEnum_ProjectMimikyu_ESlotType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode_MetaData) }; // 3571776813
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo_Inner = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_ValueProp = { "PokemonMovesetOptions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_Key_KeyProp = { "PokemonMovesetOptions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(0, nullptr) }; // 493927155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_MetaData[] = {
		{ "Category", "TrainerOverlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TMap<int32, APokemon_Parent*> PokemonPartyInfo;\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TMap<int32, APokemon_Parent*> PokemonPartyInfo;" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions = { "PokemonMovesetOptions", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonMovesetOptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_MetaData) }; // 493927155
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent_Inner = { "ThrowableContent", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlotInfo, METADATA_PARAMS(0, nullptr) }; // 97073435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent = { "ThrowableContent", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, ThrowableContent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent_MetaData) }; // 97073435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ItemDataTable_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ItemDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PartyIndex_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PartyIndex = { "PartyIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PartyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PartyIndex_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PartyIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, InventoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventoryIndex_MetaData), Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventoryIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrainerOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_SelectedPokemonImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLeftImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonRightImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_DefaultImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventorySystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ItemDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PartyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventoryIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrainerOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainerOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrainerOverlay_Statics::ClassParams = {
		&UTrainerOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTrainerOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrainerOverlay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTrainerOverlay()
	{
		if (!Z_Registration_Info_UClass_UTrainerOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainerOverlay.OuterSingleton, Z_Construct_UClass_UTrainerOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrainerOverlay.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UTrainerOverlay>()
	{
		return UTrainerOverlay::StaticClass();
	}
	UTrainerOverlay::UTrainerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrainerOverlay);
	UTrainerOverlay::~UTrainerOverlay() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrainerOverlay, UTrainerOverlay::StaticClass, TEXT("UTrainerOverlay"), &Z_Registration_Info_UClass_UTrainerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainerOverlay), 3014054805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_1410404062(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
