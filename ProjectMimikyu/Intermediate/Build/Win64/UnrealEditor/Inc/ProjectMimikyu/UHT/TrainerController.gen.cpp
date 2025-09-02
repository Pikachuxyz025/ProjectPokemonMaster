// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIControllers/TrainerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTrainerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerHUD_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATrainerController Function AddMouseCursor *******************************
struct Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics
{
	struct TrainerController_eventAddMouseCursor_Parms
	{
		UUserWidget* CurrentWidget;
		bool bSetUpMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static void NewProp_bSetUpMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetUpMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerController_eventAddMouseCursor_Parms, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
void Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode_SetBit(void* Obj)
{
	((TrainerController_eventAddMouseCursor_Parms*)Obj)->bSetUpMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode = { "bSetUpMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainerController_eventAddMouseCursor_Parms), &Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_CurrentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerController, nullptr, "AddMouseCursor", Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::TrainerController_eventAddMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::TrainerController_eventAddMouseCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerController_AddMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerController::execAddMouseCursor)
{
	P_GET_OBJECT(UUserWidget,Z_Param_CurrentWidget);
	P_GET_UBOOL(Z_Param_bSetUpMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMouseCursor(Z_Param_CurrentWidget,Z_Param_bSetUpMode);
	P_NATIVE_END;
}
// ********** End Class ATrainerController Function AddMouseCursor *********************************

// ********** Begin Class ATrainerController Function FocusNewWidget *******************************
struct Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics
{
	struct TrainerController_eventFocusNewWidget_Parms
	{
		UUserWidget* NewWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerController_eventFocusNewWidget_Parms, NewWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewWidget_MetaData), NewProp_NewWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::NewProp_NewWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerController, nullptr, "FocusNewWidget", Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::TrainerController_eventFocusNewWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::TrainerController_eventFocusNewWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainerController_FocusNewWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerController::execFocusNewWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_NewWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusNewWidget(Z_Param_NewWidget);
	P_NATIVE_END;
}
// ********** End Class ATrainerController Function FocusNewWidget *********************************

// ********** Begin Class ATrainerController Function RemoveMouseCursor ****************************
struct Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrainerController, nullptr, "RemoveMouseCursor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATrainerController_RemoveMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainerController::execRemoveMouseCursor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMouseCursor();
	P_NATIVE_END;
}
// ********** End Class ATrainerController Function RemoveMouseCursor ******************************

// ********** Begin Class ATrainerController *******************************************************
void ATrainerController::StaticRegisterNativesATrainerController()
{
	UClass* Class = ATrainerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMouseCursor", &ATrainerController::execAddMouseCursor },
		{ "FocusNewWidget", &ATrainerController::execFocusNewWidget },
		{ "RemoveMouseCursor", &ATrainerController::execRemoveMouseCursor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATrainerController;
UClass* ATrainerController::GetPrivateStaticClass()
{
	using TClass = ATrainerController;
	if (!Z_Registration_Info_UClass_ATrainerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TrainerController"),
			Z_Registration_Info_UClass_ATrainerController.InnerSingleton,
			StaticRegisterNativesATrainerController,
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
	return Z_Registration_Info_UClass_ATrainerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATrainerController_NoRegister()
{
	return ATrainerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATrainerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllers/TrainerController.h" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Swap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Left_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Right_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_MoveSelection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Swap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_MoveSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrainerController_AddMouseCursor, "AddMouseCursor" }, // 3812650032
		{ &Z_Construct_UFunction_ATrainerController_FocusNewWidget, "FocusNewWidget" }, // 3359622326
		{ &Z_Construct_UFunction_ATrainerController_RemoveMouseCursor, "RemoveMouseCursor" }, // 109040897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_TrainerHUD = { "TrainerHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, TrainerHUD), Z_Construct_UClass_ATrainerHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerHUD_MetaData), NewProp_TrainerHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, InputConfig), Z_Construct_UClass_UPokemonInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Inventory = { "IA_Inventory", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Inventory), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Inventory_MetaData), NewProp_IA_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Swap = { "IA_Swap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Swap), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Swap_MetaData), NewProp_IA_Swap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Left = { "IA_Left", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Left), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Left_MetaData), NewProp_IA_Left_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Right = { "IA_Right", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_Right), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Right_MetaData), NewProp_IA_Right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_MoveSelection = { "IA_MoveSelection", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerController, IA_MoveSelection), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_MoveSelection_MetaData), NewProp_IA_MoveSelection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_TrainerHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Swap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerController_Statics::NewProp_IA_MoveSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATrainerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainerController_Statics::ClassParams = {
	&ATrainerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATrainerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrainerController()
{
	if (!Z_Registration_Info_UClass_ATrainerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerController.OuterSingleton, Z_Construct_UClass_ATrainerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrainerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainerController);
ATrainerController::~ATrainerController() {}
// ********** End Class ATrainerController *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerController, ATrainerController::StaticClass, TEXT("ATrainerController"), &Z_Registration_Info_UClass_ATrainerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerController), 3003235545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h__Script_ProjectMimikyu_3022033068(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
