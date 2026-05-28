// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/TrainerQuickSlotComponent.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "Characters/CharacterTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainerQuickSlotComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerPlayerState_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UInventorySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerQuickSlotComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerQuickSlotComponent_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_ESlotType();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDisplayInfo();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnQuickSlotModeChanged ***********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnQuickSlotModeChanged_Parms
	{
		ESlotType NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnQuickSlotModeChanged constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnQuickSlotModeChanged constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnQuickSlotModeChanged Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnQuickSlotModeChanged_Parms, NewMode), Z_Construct_UEnum_ProjectMimikyu_ESlotType, METADATA_PARAMS(0, nullptr) }; // 819695976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnQuickSlotModeChanged Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnQuickSlotModeChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnQuickSlotModeChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnQuickSlotModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuickSlotModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuickSlotModeChanged, ESlotType NewMode)
{
	struct _Script_ProjectMimikyu_eventOnQuickSlotModeChanged_Parms
	{
		ESlotType NewMode;
	};
	_Script_ProjectMimikyu_eventOnQuickSlotModeChanged_Parms Parms;
	Parms.NewMode=NewMode;
	OnQuickSlotModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnQuickSlotModeChanged *************************************************

// ********** Begin Delegate FOnQuickSlotSelectionChanged ******************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnQuickSlotSelectionChanged constinit property declarations **********
// ********** End Delegate FOnQuickSlotSelectionChanged constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnQuickSlotSelectionChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuickSlotSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuickSlotSelectionChanged)
{
	OnQuickSlotSelectionChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnQuickSlotSelectionChanged ********************************************

// ********** Begin Class UTrainerQuickSlotComponent Function RefreshInventory *********************
struct Z_Construct_UFunction_UTrainerQuickSlotComponent_RefreshInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshInventory constinit property declarations **********************
// ********** End Function RefreshInventory constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerQuickSlotComponent_RefreshInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrainerQuickSlotComponent, nullptr, "RefreshInventory", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerQuickSlotComponent_RefreshInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerQuickSlotComponent_RefreshInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTrainerQuickSlotComponent_RefreshInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerQuickSlotComponent_RefreshInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrainerQuickSlotComponent::execRefreshInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshInventory();
	P_NATIVE_END;
}
// ********** End Class UTrainerQuickSlotComponent Function RefreshInventory ***********************

// ********** Begin Class UTrainerQuickSlotComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainerQuickSlotComponent;
UClass* UTrainerQuickSlotComponent::GetPrivateStaticClass()
{
	using TClass = UTrainerQuickSlotComponent;
	if (!Z_Registration_Info_UClass_UTrainerQuickSlotComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TrainerQuickSlotComponent"),
			Z_Registration_Info_UClass_UTrainerQuickSlotComponent.InnerSingleton,
			StaticRegisterNativesUTrainerQuickSlotComponent,
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
	return Z_Registration_Info_UClass_UTrainerQuickSlotComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTrainerQuickSlotComponent_NoRegister()
{
	return UTrainerQuickSlotComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTrainerQuickSlotComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/TrainerQuickSlotComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSlotMode_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyIndex_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPartyInfo_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedThrowableContent_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPokemonInfo_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSelectedPokemonInfo_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedThrowableInfo_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedThrowableItemID_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedThrowableProjectileClass_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuickSlotModeChanged_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuickSlotSelectionChanged_MetaData[] = {
		{ "Category", "Quick Slots" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerQuickSlotComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTrainerQuickSlotComponent constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainerPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySystem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentSlotMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentSlotMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartyIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPartyInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPartyInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedThrowableContent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedThrowableContent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPokemonInfo;
	static void NewProp_bHasSelectedPokemonInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSelectedPokemonInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedThrowableInfo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedThrowableItemID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedThrowableProjectileClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuickSlotModeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuickSlotSelectionChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTrainerQuickSlotComponent constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RefreshInventory"), .Pointer = &UTrainerQuickSlotComponent::execRefreshInventory },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainerQuickSlotComponent_RefreshInventory, "RefreshInventory" }, // 568382118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainerQuickSlotComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTrainerQuickSlotComponent_Statics

// ********** Begin Class UTrainerQuickSlotComponent Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, OwnerCharacter), Z_Construct_UClass_AProjectMimikyuCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_TrainerPlayerState = { "TrainerPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, TrainerPlayerState), Z_Construct_UClass_ATrainerPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerPlayerState_MetaData), NewProp_TrainerPlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_InventorySystem = { "InventorySystem", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, InventorySystem), Z_Construct_UClass_UInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySystem_MetaData), NewProp_InventorySystem_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CurrentSlotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CurrentSlotMode = { "CurrentSlotMode", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, CurrentSlotMode), Z_Construct_UEnum_ProjectMimikyu_ESlotType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSlotMode_MetaData), NewProp_CurrentSlotMode_MetaData) }; // 819695976
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_PartyIndex = { "PartyIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, PartyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyIndex_MetaData), NewProp_PartyIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, InventoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryIndex_MetaData), NewProp_InventoryIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedPartyInfo_Inner = { "CachedPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 2094424460
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedPartyInfo = { "CachedPartyInfo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, CachedPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPartyInfo_MetaData), NewProp_CachedPartyInfo_MetaData) }; // 2094424460
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedThrowableContent_Inner = { "CachedThrowableContent", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDisplayInfo, METADATA_PARAMS(0, nullptr) }; // 1866984579
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedThrowableContent = { "CachedThrowableContent", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, CachedThrowableContent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedThrowableContent_MetaData), NewProp_CachedThrowableContent_MetaData) }; // 1866984579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedPokemonInfo = { "SelectedPokemonInfo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, SelectedPokemonInfo), Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPokemonInfo_MetaData), NewProp_SelectedPokemonInfo_MetaData) }; // 2094424460
void Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_bHasSelectedPokemonInfo_SetBit(void* Obj)
{
	((UTrainerQuickSlotComponent*)Obj)->bHasSelectedPokemonInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_bHasSelectedPokemonInfo = { "bHasSelectedPokemonInfo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTrainerQuickSlotComponent), &Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_bHasSelectedPokemonInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSelectedPokemonInfo_MetaData), NewProp_bHasSelectedPokemonInfo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedThrowableInfo = { "SelectedThrowableInfo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, SelectedThrowableInfo), Z_Construct_UScriptStruct_FInventoryDisplayInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedThrowableInfo_MetaData), NewProp_SelectedThrowableInfo_MetaData) }; // 1866984579
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedThrowableItemID = { "SelectedThrowableItemID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, SelectedThrowableItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedThrowableItemID_MetaData), NewProp_SelectedThrowableItemID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedThrowableProjectileClass = { "SelectedThrowableProjectileClass", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, SelectedThrowableProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedThrowableProjectileClass_MetaData), NewProp_SelectedThrowableProjectileClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_OnQuickSlotModeChanged = { "OnQuickSlotModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, OnQuickSlotModeChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuickSlotModeChanged_MetaData), NewProp_OnQuickSlotModeChanged_MetaData) }; // 2698894198
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_OnQuickSlotSelectionChanged = { "OnQuickSlotSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerQuickSlotComponent, OnQuickSlotSelectionChanged), Z_Construct_UDelegateFunction_ProjectMimikyu_OnQuickSlotSelectionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuickSlotSelectionChanged_MetaData), NewProp_OnQuickSlotSelectionChanged_MetaData) }; // 4291432152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_TrainerPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_InventorySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CurrentSlotMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CurrentSlotMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_PartyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_InventoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedPartyInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedPartyInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedThrowableContent_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_CachedThrowableContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedPokemonInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_bHasSelectedPokemonInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedThrowableInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedThrowableItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_SelectedThrowableProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_OnQuickSlotModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::NewProp_OnQuickSlotSelectionChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::PropPointers) < 2048);
// ********** End Class UTrainerQuickSlotComponent Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::ClassParams = {
	&UTrainerQuickSlotComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::Class_MetaDataParams)
};
void UTrainerQuickSlotComponent::StaticRegisterNativesUTrainerQuickSlotComponent()
{
	UClass* Class = UTrainerQuickSlotComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTrainerQuickSlotComponent()
{
	if (!Z_Registration_Info_UClass_UTrainerQuickSlotComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainerQuickSlotComponent.OuterSingleton, Z_Construct_UClass_UTrainerQuickSlotComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainerQuickSlotComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrainerQuickSlotComponent);
UTrainerQuickSlotComponent::~UTrainerQuickSlotComponent() {}
// ********** End Class UTrainerQuickSlotComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainerQuickSlotComponent, UTrainerQuickSlotComponent::StaticClass, TEXT("UTrainerQuickSlotComponent"), &Z_Registration_Info_UClass_UTrainerQuickSlotComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainerQuickSlotComponent), 3135028941U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h__Script_ProjectMimikyu_2863943908{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerQuickSlotComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
