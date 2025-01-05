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
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(ATrainerController::execFocusNewWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_NewWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusNewWidget(Z_Param_NewWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerController::execRemoveMouseCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMouseCursor();
		P_NATIVE_END;
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
	struct Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics
	{
		struct TrainerController_eventAddMouseCursor_Parms
		{
			UUserWidget* CurrentWidget;
			bool bSetUpMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static void NewProp_bSetUpMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetUpMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerController_eventAddMouseCursor_Parms, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_CurrentWidget_MetaData), Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_CurrentWidget_MetaData) };
	void Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode_SetBit(void* Obj)
	{
		((TrainerController_eventAddMouseCursor_Parms*)Obj)->bSetUpMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode = { "bSetUpMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainerController_eventAddMouseCursor_Parms), &Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_CurrentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::NewProp_bSetUpMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerController, nullptr, "AddMouseCursor", nullptr, nullptr, Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::TrainerController_eventAddMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_AddMouseCursor_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics
	{
		struct TrainerController_eventFocusNewWidget_Parms
		{
			UUserWidget* NewWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerController_eventFocusNewWidget_Parms, NewWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::NewProp_NewWidget_MetaData), Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::NewProp_NewWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::NewProp_NewWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerController, nullptr, "FocusNewWidget", nullptr, nullptr, Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::TrainerController_eventFocusNewWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_FocusNewWidget_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIControllers/TrainerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerController, nullptr, "RemoveMouseCursor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATrainerController_RemoveMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerController_RemoveMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrainerController);
	UClass* Z_Construct_UClass_ATrainerController_NoRegister()
	{
		return ATrainerController::StaticClass();
	}
	struct Z_Construct_UClass_ATrainerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrainerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrainerController_AddMouseCursor, "AddMouseCursor" }, // 1824456848
		{ &Z_Construct_UFunction_ATrainerController_FocusNewWidget, "FocusNewWidget" }, // 1949897324
		{ &Z_Construct_UFunction_ATrainerController_RemoveMouseCursor, "RemoveMouseCursor" }, // 4253794016
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerController_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		Z_Construct_UClass_ATrainerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ATrainerController, ATrainerController::StaticClass, TEXT("ATrainerController"), &Z_Registration_Info_UClass_ATrainerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerController), 267710997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_3747168691(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
