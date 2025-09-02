// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PlayerInventoryMenuOverlay.h"
#include "Characters/CharacterTypes.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerInventoryMenuOverlay() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerInventoryMenuOverlay Function AllocatePokemonInfo *****************
static FName NAME_UPlayerInventoryMenuOverlay_AllocatePokemonInfo = FName(TEXT("AllocatePokemonInfo"));
void UPlayerInventoryMenuOverlay::AllocatePokemonInfo()
{
	UFunction* Func = FindFunctionChecked(NAME_UPlayerInventoryMenuOverlay_AllocatePokemonInfo);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryMenuOverlay, nullptr, "AllocatePokemonInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerInventoryMenuOverlay Function AllocatePokemonInfo *******************

// ********** Begin Class UPlayerInventoryMenuOverlay **********************************************
void UPlayerInventoryMenuOverlay::StaticRegisterNativesUPlayerInventoryMenuOverlay()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay;
UClass* UPlayerInventoryMenuOverlay::GetPrivateStaticClass()
{
	using TClass = UPlayerInventoryMenuOverlay;
	if (!Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerInventoryMenuOverlay"),
			Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.InnerSingleton,
			StaticRegisterNativesUPlayerInventoryMenuOverlay,
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
	return Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister()
{
	return UPlayerInventoryMenuOverlay::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerInventoryMenuOverlay.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitKey_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonPartyInfo_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToWidget_MetaData[] = {
		{ "Category", "PlayerInventoryMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventoryMenuOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonPartyInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonPartyInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInventoryMenuOverlay_AllocatePokemonInfo, "AllocatePokemonInfo" }, // 1823635649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventoryMenuOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_InventoryGrid = { "InventoryGrid", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, InventoryGrid), Z_Construct_UClass_UInventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryGrid_MetaData), NewProp_InventoryGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, PlayerCharacter), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_CurrentController = { "CurrentController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, CurrentController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentController_MetaData), NewProp_CurrentController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ExitKey = { "ExitKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, ExitKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitKey_MetaData), NewProp_ExitKey_MetaData) }; // 3982742631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo_Inner = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 376880542
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, PokemonPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonPartyInfo_MetaData), NewProp_PokemonPartyInfo_MetaData) }; // 376880542
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ReturnToWidget = { "ReturnToWidget", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryMenuOverlay, ReturnToWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToWidget_MetaData), NewProp_ReturnToWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_InventoryGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_CurrentController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ExitKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_PokemonPartyInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::NewProp_ReturnToWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMouseInterface_NoRegister, (int32)VTABLE_OFFSET(UPlayerInventoryMenuOverlay, IMouseInterface), false },  // 3468215932
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
UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay()
{
	if (!Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.OuterSingleton, Z_Construct_UClass_UPlayerInventoryMenuOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay.OuterSingleton;
}
UPlayerInventoryMenuOverlay::UPlayerInventoryMenuOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventoryMenuOverlay);
UPlayerInventoryMenuOverlay::~UPlayerInventoryMenuOverlay() {}
// ********** End Class UPlayerInventoryMenuOverlay ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInventoryMenuOverlay, UPlayerInventoryMenuOverlay::StaticClass, TEXT("UPlayerInventoryMenuOverlay"), &Z_Registration_Info_UClass_UPlayerInventoryMenuOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInventoryMenuOverlay), 3176533834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h__Script_ProjectMimikyu_24126572(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PlayerInventoryMenuOverlay_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
