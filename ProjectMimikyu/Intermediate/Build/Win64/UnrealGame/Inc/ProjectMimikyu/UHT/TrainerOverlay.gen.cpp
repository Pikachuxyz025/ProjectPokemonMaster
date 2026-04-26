// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/TrainerOverlay.h"
#include "Characters/CharacterTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainerOverlay() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveList_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlay();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlay_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ESlotType();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FSlotInfo();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTrainerOverlay Function SetCurrentPokemonUI *****************************
struct Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentPokemonUI constinit property declarations *******************
// ********** End Function SetCurrentPokemonUI constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrainerOverlay, nullptr, "SetCurrentPokemonUI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrainerOverlay::execSetCurrentPokemonUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentPokemonUI();
	P_NATIVE_END;
}
// ********** End Class UTrainerOverlay Function SetCurrentPokemonUI *******************************

// ********** Begin Class UTrainerOverlay Function SetupInventoryInfo ******************************
struct Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupInventoryInfo constinit property declarations ********************
// ********** End Function SetupInventoryInfo constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrainerOverlay, nullptr, "SetupInventoryInfo", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrainerOverlay::execSetupInventoryInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupInventoryInfo();
	P_NATIVE_END;
}
// ********** End Class UTrainerOverlay Function SetupInventoryInfo ********************************

// ********** Begin Class UTrainerOverlay Function SetupPartyInfo **********************************
struct Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics
{
	struct TrainerOverlay_eventSetupPartyInfo_Parms
	{
		TArray<APokemon_Parent*> PokemonParty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupPartyInfo constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonParty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonParty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupPartyInfo constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupPartyInfo Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::NewProp_PokemonParty_Inner = { "PokemonParty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::NewProp_PokemonParty = { "PokemonParty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerOverlay_eventSetupPartyInfo_Parms, PokemonParty), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::NewProp_PokemonParty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::NewProp_PokemonParty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::PropPointers) < 2048);
// ********** End Function SetupPartyInfo Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrainerOverlay, nullptr, "SetupPartyInfo", 	Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::TrainerOverlay_eventSetupPartyInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::TrainerOverlay_eventSetupPartyInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrainerOverlay::execSetupPartyInfo)
{
	P_GET_TARRAY(APokemon_Parent*,Z_Param_PokemonParty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPartyInfo(Z_Param_PokemonParty);
	P_NATIVE_END;
}
// ********** End Class UTrainerOverlay Function SetupPartyInfo ************************************

// ********** Begin Class UTrainerOverlay **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainerOverlay;
UClass* UTrainerOverlay::GetPrivateStaticClass()
{
	using TClass = UTrainerOverlay;
	if (!Z_Registration_Info_UClass_UTrainerOverlay.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TrainerOverlay"),
			Z_Registration_Info_UClass_UTrainerOverlay.InnerSingleton,
			StaticRegisterNativesUTrainerOverlay,
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
	return Z_Registration_Info_UClass_UTrainerOverlay.InnerSingleton;
}
UClass* Z_Construct_UClass_UTrainerOverlay_NoRegister()
{
	return UTrainerOverlay::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTrainerOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UI/TrainerOverlay.h" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPokemonImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLeftImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonRightImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLevel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonHealth_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySystem_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoveList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlayWidgetController_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSlotMode_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonPartyInfo_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMovesetOptions_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableContent_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyIndex_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "TrainerOverlay" },
		{ "ModuleRelativePath", "Public/UI/TrainerOverlay.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTrainerOverlay constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPokemonImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonLeftImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonRightImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMoveList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerOverlayWidgetController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentSlotMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentSlotMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonPartyInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonPartyInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMovesetOptions_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PokemonMovesetOptions_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PokemonMovesetOptions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PokemonMovesetOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowableContent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThrowableContent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartyIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTrainerOverlay constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetCurrentPokemonUI"), .Pointer = &UTrainerOverlay::execSetCurrentPokemonUI },
		{ .NameUTF8 = UTF8TEXT("SetupInventoryInfo"), .Pointer = &UTrainerOverlay::execSetupInventoryInfo },
		{ .NameUTF8 = UTF8TEXT("SetupPartyInfo"), .Pointer = &UTrainerOverlay::execSetupPartyInfo },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainerOverlay_SetCurrentPokemonUI, "SetCurrentPokemonUI" }, // 2806987325
		{ &Z_Construct_UFunction_UTrainerOverlay_SetupInventoryInfo, "SetupInventoryInfo" }, // 1765922956
		{ &Z_Construct_UFunction_UTrainerOverlay_SetupPartyInfo, "SetupPartyInfo" }, // 1723313575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainerOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTrainerOverlay_Statics

// ********** Begin Class UTrainerOverlay Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_SelectedPokemonImage = { "SelectedPokemonImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, SelectedPokemonImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPokemonImage_MetaData), NewProp_SelectedPokemonImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLeftImage = { "PokemonLeftImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonLeftImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonLeftImage_MetaData), NewProp_PokemonLeftImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonRightImage = { "PokemonRightImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonRightImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonRightImage_MetaData), NewProp_PokemonRightImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonName = { "PokemonName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonName_MetaData), NewProp_PokemonName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLevel = { "PokemonLevel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonLevel_MetaData), NewProp_PokemonLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultImage_MetaData), NewProp_DefaultImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonHealth = { "PokemonHealth", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonHealth), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonHealth_MetaData), NewProp_PokemonHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventorySystem = { "InventorySystem", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, InventorySystem), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySystem_MetaData), NewProp_InventorySystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMoveList = { "PokemonMoveList", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonMoveList), Z_Construct_UClass_UPokemonMoveList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMoveList_MetaData), NewProp_PokemonMoveList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_TrainerOverlayWidgetController = { "TrainerOverlayWidgetController", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, TrainerOverlayWidgetController), Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerOverlayWidgetController_MetaData), NewProp_TrainerOverlayWidgetController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_CurrentSlotMode = { "CurrentSlotMode", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, CurrentSlotMode), Z_Construct_UEnum_ProjectMimikyu_ESlotType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSlotMode_MetaData), NewProp_CurrentSlotMode_MetaData) }; // 819695976
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo_Inner = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonPartyInfo = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonPartyInfo_MetaData), NewProp_PokemonPartyInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_ValueProp = { "PokemonMovesetOptions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions_Key_KeyProp = { "PokemonMovesetOptions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(0, nullptr) }; // 4250284492
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMovesetOptions = { "PokemonMovesetOptions", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PokemonMovesetOptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMovesetOptions_MetaData), NewProp_PokemonMovesetOptions_MetaData) }; // 4250284492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent_Inner = { "ThrowableContent", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlotInfo, METADATA_PARAMS(0, nullptr) }; // 211375262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ThrowableContent = { "ThrowableContent", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, ThrowableContent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableContent_MetaData), NewProp_ThrowableContent_MetaData) }; // 211375262
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataTable_MetaData), NewProp_ItemDataTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PartyIndex = { "PartyIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, PartyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyIndex_MetaData), NewProp_PartyIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerOverlay, InventoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryIndex_MetaData), NewProp_InventoryIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrainerOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_SelectedPokemonImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLeftImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonRightImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_DefaultImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_InventorySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_PokemonMoveList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerOverlay_Statics::NewProp_TrainerOverlayWidgetController,
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::PropPointers) < 2048);
// ********** End Class UTrainerOverlay Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UTrainerOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerOverlay_Statics::DependentSingletons) < 16);
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
void UTrainerOverlay::StaticRegisterNativesUTrainerOverlay()
{
	UClass* Class = UTrainerOverlay::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTrainerOverlay_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTrainerOverlay()
{
	if (!Z_Registration_Info_UClass_UTrainerOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainerOverlay.OuterSingleton, Z_Construct_UClass_UTrainerOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainerOverlay.OuterSingleton;
}
UTrainerOverlay::UTrainerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrainerOverlay);
UTrainerOverlay::~UTrainerOverlay() {}
// ********** End Class UTrainerOverlay ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainerOverlay, UTrainerOverlay::StaticClass, TEXT("UTrainerOverlay"), &Z_Registration_Info_UClass_UTrainerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainerOverlay), 4292652396U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h__Script_ProjectMimikyu_3589824318{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerOverlay_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
