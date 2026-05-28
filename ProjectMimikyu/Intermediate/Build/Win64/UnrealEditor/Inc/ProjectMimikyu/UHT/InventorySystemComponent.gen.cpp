// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "Characters/CharacterTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInventorySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryUpdated__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDisplayInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnInventoryUpdated constinit property declarations *******************
// ********** End Delegate FOnInventoryUpdated constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnInventoryUpdated__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated)
{
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryUpdated *****************************************************

// ********** Begin ScriptStruct FInventoryDisplayInfo *********************************************
struct Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInventoryDisplayInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInventoryDisplayInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsThrowable_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "InventoryDisplayInfo" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInventoryDisplayInfo constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static void NewProp_bIsThrowable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThrowable;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FInventoryDisplayInfo constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryDisplayInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo;
class UScriptStruct* FInventoryDisplayInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryDisplayInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("InventoryDisplayInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FInventoryDisplayInfo Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDisplayInfo, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDisplayInfo, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDisplayInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDisplayInfo, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDisplayInfo, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDisplayInfo, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
void Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_bIsThrowable_SetBit(void* Obj)
{
	((FInventoryDisplayInfo*)Obj)->bIsThrowable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_bIsThrowable = { "bIsThrowable", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryDisplayInfo), &Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_bIsThrowable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsThrowable_MetaData), NewProp_bIsThrowable_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDisplayInfo, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_bIsThrowable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FInventoryDisplayInfo Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"InventoryDisplayInfo",
	Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::PropPointers),
	sizeof(FInventoryDisplayInfo),
	alignof(FInventoryDisplayInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryDisplayInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo.InnerSingleton, Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo.InnerSingleton);
}
// ********** End ScriptStruct FInventoryDisplayInfo ***********************************************

// ********** Begin Class UInventorySystemComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInventorySystemComponent;
UClass* UInventorySystemComponent::GetPrivateStaticClass()
{
	using TClass = UInventorySystemComponent;
	if (!Z_Registration_Info_UClass_UInventorySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InventorySystemComponent"),
			Z_Registration_Info_UClass_UInventorySystemComponent.InnerSingleton,
			StaticRegisterNativesUInventorySystemComponent,
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
	return Z_Registration_Info_UClass_UInventorySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister()
{
	return UInventorySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventorySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/InventorySystemComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[] = {
		{ "Category", "InventorySystemComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "InventorySystemComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "InventorySystemComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/InventorySystemComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInventorySystemComponent constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInventorySystemComponent constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInventorySystemComponent_Statics

// ********** Begin Class UInventorySystemComponent Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySystemComponent, OwnerCharacter), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySystemComponent, InventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySize_MetaData), NewProp_InventorySize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventorySlotInfo, METADATA_PARAMS(0, nullptr) }; // 3008218128
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySystemComponent, Content), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) }; // 3008218128
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySystemComponent, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataTable_MetaData), NewProp_ItemDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_InventorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySystemComponent_Statics::NewProp_ItemDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemComponent_Statics::PropPointers) < 2048);
// ********** End Class UInventorySystemComponent Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UInventorySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySystemComponent_Statics::ClassParams = {
	&UInventorySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventorySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySystemComponent_Statics::Class_MetaDataParams)
};
void UInventorySystemComponent::StaticRegisterNativesUInventorySystemComponent()
{
}
UClass* Z_Construct_UClass_UInventorySystemComponent()
{
	if (!Z_Registration_Info_UClass_UInventorySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySystemComponent.OuterSingleton, Z_Construct_UClass_UInventorySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInventorySystemComponent);
UInventorySystemComponent::~UInventorySystemComponent() {}
// ********** End Class UInventorySystemComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_InventorySystemComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryDisplayInfo::StaticStruct, Z_Construct_UScriptStruct_FInventoryDisplayInfo_Statics::NewStructOps, TEXT("InventoryDisplayInfo"),&Z_Registration_Info_UScriptStruct_FInventoryDisplayInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryDisplayInfo), 1866984579U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySystemComponent, UInventorySystemComponent::StaticClass, TEXT("UInventorySystemComponent"), &Z_Registration_Info_UClass_UInventorySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySystemComponent), 4231985838U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_InventorySystemComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_InventorySystemComponent_h__Script_ProjectMimikyu_2679991251{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_InventorySystemComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_InventorySystemComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_InventorySystemComponent_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_InventorySystemComponent_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
