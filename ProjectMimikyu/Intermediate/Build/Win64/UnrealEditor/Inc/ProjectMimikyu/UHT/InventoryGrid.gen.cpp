// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/InventoryGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryGrid() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryGrid();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryGrid_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryGrid::execUpdateInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInventory();
		P_NATIVE_END;
	}
	void UInventoryGrid::StaticRegisterNativesUInventoryGrid()
	{
		UClass* Class = UInventoryGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateInventory", &UInventoryGrid::execUpdateInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGrid, nullptr, "UpdateInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryGrid_UpdateInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryGrid);
	UClass* Z_Construct_UClass_UInventoryGrid_NoRegister()
	{
		return UInventoryGrid::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventorySlotClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryGrid_UpdateInventory, "UpdateInventory" }, // 1150151865
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/InventoryGrid.h" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::NewProp_BoxGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_BoxGrid = { "BoxGrid", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGrid, BoxGrid), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_BoxGrid_MetaData), Z_Construct_UClass_UInventoryGrid_Statics::NewProp_BoxGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "InventoryGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGrid, InventoryComponent), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventoryComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass_MetaData[] = {
		{ "Category", "InventoryGrid" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass = { "InventorySlotClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGrid, InventorySlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass_MetaData), Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_BoxGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryGrid_Statics::ClassParams = {
		&UInventoryGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryGrid_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryGrid()
	{
		if (!Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton, Z_Construct_UClass_UInventoryGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UInventoryGrid>()
	{
		return UInventoryGrid::StaticClass();
	}
	UInventoryGrid::UInventoryGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryGrid);
	UInventoryGrid::~UInventoryGrid() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryGrid, UInventoryGrid::StaticClass, TEXT("UInventoryGrid"), &Z_Registration_Info_UClass_UInventoryGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryGrid), 2410707167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h_3475444944(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
