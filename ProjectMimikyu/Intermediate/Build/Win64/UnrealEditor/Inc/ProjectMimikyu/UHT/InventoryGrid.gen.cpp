// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/InventoryGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryGrid() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryGrid();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventoryGrid_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryGrid Function UpdateInventory **********************************
struct Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryGrid, nullptr, "UpdateInventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryGrid_UpdateInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGrid_UpdateInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGrid::execUpdateInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInventory();
	P_NATIVE_END;
}
// ********** End Class UInventoryGrid Function UpdateInventory ************************************

// ********** Begin Class UInventoryGrid ***********************************************************
void UInventoryGrid::StaticRegisterNativesUInventoryGrid()
{
	UClass* Class = UInventoryGrid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateInventory", &UInventoryGrid::execUpdateInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryGrid;
UClass* UInventoryGrid::GetPrivateStaticClass()
{
	using TClass = UInventoryGrid;
	if (!Z_Registration_Info_UClass_UInventoryGrid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryGrid"),
			Z_Registration_Info_UClass_UInventoryGrid.InnerSingleton,
			StaticRegisterNativesUInventoryGrid,
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
	return Z_Registration_Info_UClass_UInventoryGrid.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryGrid_NoRegister()
{
	return UInventoryGrid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/InventoryGrid.h" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "InventoryGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotClass_MetaData[] = {
		{ "Category", "InventoryGrid" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventorySlotClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryGrid_UpdateInventory, "UpdateInventory" }, // 2786708356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_BoxGrid = { "BoxGrid", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGrid, BoxGrid), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxGrid_MetaData), NewProp_BoxGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGrid, InventoryComponent), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass = { "InventorySlotClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGrid, InventorySlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotClass_MetaData), NewProp_InventorySlotClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_BoxGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::DependentSingletons) < 16);
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
UClass* Z_Construct_UClass_UInventoryGrid()
{
	if (!Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton, Z_Construct_UClass_UInventoryGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton;
}
UInventoryGrid::UInventoryGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryGrid);
UInventoryGrid::~UInventoryGrid() {}
// ********** End Class UInventoryGrid *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryGrid, UInventoryGrid::StaticClass, TEXT("UInventoryGrid"), &Z_Registration_Info_UClass_UInventoryGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryGrid), 3695266549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h__Script_ProjectMimikyu_3431698727(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_InventoryGrid_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
