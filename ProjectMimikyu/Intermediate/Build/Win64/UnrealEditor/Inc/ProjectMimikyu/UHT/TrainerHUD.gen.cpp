// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/TrainerHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTrainerHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerHUD();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerHUD_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerMenuOverlay_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATrainerHUD Function SwitchOverlays **************************************
struct Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics
{
	struct TrainerHUD_eventSwitchOverlays_Parms
	{
		UUserWidget* CurrentWidget;
		UUserWidget* NewWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerHUD_eventSwitchOverlays_Parms, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerHUD_eventSwitchOverlays_Parms, NewWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewWidget_MetaData), NewProp_NewWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::NewProp_CurrentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::NewProp_NewWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerHUD, nullptr, "SwitchOverlays", Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::TrainerHUD_eventSwitchOverlays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::TrainerHUD_eventSwitchOverlays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerHUD_SwitchOverlays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerHUD_SwitchOverlays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerHUD::execSwitchOverlays)
{
	P_GET_OBJECT(UUserWidget,Z_Param_CurrentWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_NewWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchOverlays(Z_Param_CurrentWidget,Z_Param_NewWidget);
	P_NATIVE_END;
}
// ********** End Class ATrainerHUD Function SwitchOverlays ****************************************

// ********** Begin Class ATrainerHUD **************************************************************
void ATrainerHUD::StaticRegisterNativesATrainerHUD()
{
	UClass* Class = ATrainerHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwitchOverlays", &ATrainerHUD::execSwitchOverlays },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATrainerHUD;
UClass* ATrainerHUD::GetPrivateStaticClass()
{
	using TClass = ATrainerHUD;
	if (!Z_Registration_Info_UClass_ATrainerHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TrainerHUD"),
			Z_Registration_Info_UClass_ATrainerHUD.InnerSingleton,
			StaticRegisterNativesATrainerHUD,
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
	return Z_Registration_Info_UClass_ATrainerHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_ATrainerHUD_NoRegister()
{
	return ATrainerHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATrainerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/TrainerHUD.h" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonStatInfoOverlayClass_MetaData[] = {
		{ "Category", "Widget Classes" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMenuWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMenuWidgetControllerClass_MetaData[] = {
		{ "Category", "TrainerHUD" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "TrainerHUD" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOverlay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//,bool bRemoveMouse);\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ",bool bRemoveMouse);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TrainerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryOverlayClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrainerOverlayClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuOverlayClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PokemonStatInfoOverlayClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMenuWidgetController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PokemonMenuWidgetControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerOverlayWidgetController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrainerOverlayWidgetControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrainerHUD_SwitchOverlays, "SwitchOverlays" }, // 2870952845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlayClass = { "InventoryOverlayClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, InventoryOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryOverlayClass_MetaData), NewProp_InventoryOverlayClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayClass = { "TrainerOverlayClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, TrainerOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPokemonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerOverlayClass_MetaData), NewProp_TrainerOverlayClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlayClass = { "MenuOverlayClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, MenuOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuOverlayClass_MetaData), NewProp_MenuOverlayClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_PokemonStatInfoOverlayClass = { "PokemonStatInfoOverlayClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, PokemonStatInfoOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonStatInfoOverlayClass_MetaData), NewProp_PokemonStatInfoOverlayClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_PokemonMenuWidgetController = { "PokemonMenuWidgetController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, PokemonMenuWidgetController), Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMenuWidgetController_MetaData), NewProp_PokemonMenuWidgetController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_PokemonMenuWidgetControllerClass = { "PokemonMenuWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, PokemonMenuWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMenuWidgetControllerClass_MetaData), NewProp_PokemonMenuWidgetControllerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayWidgetController = { "TrainerOverlayWidgetController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, TrainerOverlayWidgetController), Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerOverlayWidgetController_MetaData), NewProp_TrainerOverlayWidgetController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayWidgetControllerClass = { "TrainerOverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, TrainerOverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTrainerOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerOverlayWidgetControllerClass_MetaData), NewProp_TrainerOverlayWidgetControllerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlay = { "InventoryOverlay", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, InventoryOverlay), Z_Construct_UClass_UPlayerInventoryMenuOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryOverlay_MetaData), NewProp_InventoryOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlay = { "MenuOverlay", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, MenuOverlay), Z_Construct_UClass_UPlayerMenuOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuOverlay_MetaData), NewProp_MenuOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlay = { "TrainerOverlay", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerHUD, TrainerOverlay), Z_Construct_UClass_UPokemonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerOverlay_MetaData), NewProp_TrainerOverlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_PokemonStatInfoOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_PokemonMenuWidgetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_PokemonMenuWidgetControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayWidgetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlayWidgetControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_InventoryOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_MenuOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerHUD_Statics::NewProp_TrainerOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATrainerHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainerHUD_Statics::ClassParams = {
	&ATrainerHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATrainerHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainerHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrainerHUD()
{
	if (!Z_Registration_Info_UClass_ATrainerHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerHUD.OuterSingleton, Z_Construct_UClass_ATrainerHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrainerHUD.OuterSingleton;
}
ATrainerHUD::ATrainerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainerHUD);
ATrainerHUD::~ATrainerHUD() {}
// ********** End Class ATrainerHUD ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerHUD, ATrainerHUD::StaticClass, TEXT("ATrainerHUD"), &Z_Registration_Info_UClass_ATrainerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerHUD), 2874255127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h__Script_ProjectMimikyu_108656492(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TrainerHUD_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
