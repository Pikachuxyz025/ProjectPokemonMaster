// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/PokemonUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UPokemonUserWidget::execUpdateBoxSize)
	{
		P_GET_OBJECT(USizeBox,Z_Param_SizeBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBoxSize(Z_Param_SizeBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonUserWidget::execSetWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_InWidgetController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetController(Z_Param_InWidgetController);
		P_NATIVE_END;
	}
	static FName NAME_UPokemonUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
	void UPokemonUserWidget::WidgetControllerSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPokemonUserWidget_WidgetControllerSet),NULL);
	}
	void UPokemonUserWidget::StaticRegisterNativesUPokemonUserWidget()
	{
		UClass* Class = UPokemonUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetController", &UPokemonUserWidget::execSetWidgetController },
			{ "UpdateBoxSize", &UPokemonUserWidget::execUpdateBoxSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics
	{
		struct PokemonUserWidget_eventSetWidgetController_Parms
		{
			UObject* InWidgetController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonUserWidget, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PokemonUserWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::PokemonUserWidget_eventSetWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics
	{
		struct PokemonUserWidget_eventUpdateBoxSize_Parms
		{
			USizeBox* SizeBox;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::NewProp_SizeBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonUserWidget_eventUpdateBoxSize_Parms, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::NewProp_SizeBox_MetaData), Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::NewProp_SizeBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::NewProp_SizeBox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonUserWidget, nullptr, "UpdateBoxSize", nullptr, nullptr, Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PokemonUserWidget_eventUpdateBoxSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::PokemonUserWidget_eventUpdateBoxSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonUserWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonUserWidget);
	UClass* Z_Construct_UClass_UPokemonUserWidget_NoRegister()
	{
		return UPokemonUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonUserWidget_SetWidgetController, "SetWidgetController" }, // 1483213039
		{ &Z_Construct_UFunction_UPokemonUserWidget_UpdateBoxSize, "UpdateBoxSize" }, // 3460643632
		{ &Z_Construct_UFunction_UPokemonUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 1711494143
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_WidgetController_MetaData[] = {
		{ "Category", "PokemonUserWidget" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_WidgetController_MetaData), Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_WidgetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "PokemonUserWidget" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, OwnerCharacter), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_OwnerCharacter_MetaData), Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_OwnerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxWidth_MetaData[] = {
		{ "Category", "Box Properties" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxWidth = { "BoxWidth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, BoxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxWidth_MetaData), Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxHeight_MetaData[] = {
		{ "Category", "Box Properties" },
		{ "ModuleRelativePath", "Public/UI/PokemonUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxHeight = { "BoxHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonUserWidget, BoxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxHeight_MetaData), Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxHeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_WidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonUserWidget_Statics::NewProp_BoxHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonUserWidget_Statics::ClassParams = {
		&UPokemonUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonUserWidget()
	{
		if (!Z_Registration_Info_UClass_UPokemonUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonUserWidget.OuterSingleton, Z_Construct_UClass_UPokemonUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonUserWidget.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonUserWidget>()
	{
		return UPokemonUserWidget::StaticClass();
	}
	UPokemonUserWidget::UPokemonUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonUserWidget);
	UPokemonUserWidget::~UPokemonUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonUserWidget, UPokemonUserWidget::StaticClass, TEXT("UPokemonUserWidget"), &Z_Registration_Info_UClass_UPokemonUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonUserWidget), 2038072136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h_833578635(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
