// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/TrainerThrowableComponent.h"
#include "ActorComponents/TargetingType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainerThrowableComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerCharacter_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerThrowableComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTrainerThrowableComponent_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FAimData();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTrainerThrowableComponent Function ServerThrowSelectedInventoryItem *****
struct TrainerThrowableComponent_eventServerThrowSelectedInventoryItem_Parms
{
	FName ItemID;
	FAimData AimData;
};
static FName NAME_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem = FName(TEXT("ServerThrowSelectedInventoryItem"));
void UTrainerThrowableComponent::ServerThrowSelectedInventoryItem(FName ItemID, FAimData const& AimData)
{
	TrainerThrowableComponent_eventServerThrowSelectedInventoryItem_Parms Parms;
	Parms.ItemID=ItemID;
	Parms.AimData=AimData;
	UFunction* Func = FindFunctionChecked(NAME_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerThrowableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerThrowSelectedInventoryItem constinit property declarations ******
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerThrowSelectedInventoryItem constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerThrowSelectedInventoryItem Property Definitions *****************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerThrowableComponent_eventServerThrowSelectedInventoryItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerThrowableComponent_eventServerThrowSelectedInventoryItem_Parms, AimData), Z_Construct_UScriptStruct_FAimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimData_MetaData), NewProp_AimData_MetaData) }; // 713287180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::NewProp_AimData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::PropPointers) < 2048);
// ********** End Function ServerThrowSelectedInventoryItem Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrainerThrowableComponent, nullptr, "ServerThrowSelectedInventoryItem", 	Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::PropPointers), 
sizeof(TrainerThrowableComponent_eventServerThrowSelectedInventoryItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrainerThrowableComponent_eventServerThrowSelectedInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrainerThrowableComponent::execServerThrowSelectedInventoryItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_GET_STRUCT(FAimData,Z_Param_AimData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerThrowSelectedInventoryItem_Implementation(Z_Param_ItemID,Z_Param_AimData);
	P_NATIVE_END;
}
// ********** End Class UTrainerThrowableComponent Function ServerThrowSelectedInventoryItem *******

// ********** Begin Class UTrainerThrowableComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainerThrowableComponent;
UClass* UTrainerThrowableComponent::GetPrivateStaticClass()
{
	using TClass = UTrainerThrowableComponent;
	if (!Z_Registration_Info_UClass_UTrainerThrowableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TrainerThrowableComponent"),
			Z_Registration_Info_UClass_UTrainerThrowableComponent.InnerSingleton,
			StaticRegisterNativesUTrainerThrowableComponent,
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
	return Z_Registration_Info_UClass_UTrainerThrowableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTrainerThrowableComponent_NoRegister()
{
	return UTrainerThrowableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTrainerThrowableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Trainer" },
		{ "IncludePath", "ActorComponents/TrainerThrowableComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerThrowableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTrainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerThrowableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowSpeed_MetaData[] = {
		{ "Category", "Throwable" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerThrowableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnForwardOffset_MetaData[] = {
		{ "Category", "Throwable" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerThrowableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnUpOffset_MetaData[] = {
		{ "Category", "Throwable" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerThrowableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "Throwable" },
		{ "ModuleRelativePath", "Public/ActorComponents/TrainerThrowableComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTrainerThrowableComponent constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTrainer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnForwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnUpOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTrainerThrowableComponent constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ServerThrowSelectedInventoryItem"), .Pointer = &UTrainerThrowableComponent::execServerThrowSelectedInventoryItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainerThrowableComponent_ServerThrowSelectedInventoryItem, "ServerThrowSelectedInventoryItem" }, // 723997488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainerThrowableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTrainerThrowableComponent_Statics

// ********** Begin Class UTrainerThrowableComponent Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_OwnerTrainer = { "OwnerTrainer", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerThrowableComponent, OwnerTrainer), Z_Construct_UClass_ATrainerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTrainer_MetaData), NewProp_OwnerTrainer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_ThrowSpeed = { "ThrowSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerThrowableComponent, ThrowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowSpeed_MetaData), NewProp_ThrowSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_SpawnForwardOffset = { "SpawnForwardOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerThrowableComponent, SpawnForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnForwardOffset_MetaData), NewProp_SpawnForwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_SpawnUpOffset = { "SpawnUpOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerThrowableComponent, SpawnUpOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnUpOffset_MetaData), NewProp_SpawnUpOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainerThrowableComponent, CollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadius_MetaData), NewProp_CollisionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrainerThrowableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_OwnerTrainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_ThrowSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_SpawnForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_SpawnUpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainerThrowableComponent_Statics::NewProp_CollisionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerThrowableComponent_Statics::PropPointers) < 2048);
// ********** End Class UTrainerThrowableComponent Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UTrainerThrowableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerThrowableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrainerThrowableComponent_Statics::ClassParams = {
	&UTrainerThrowableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTrainerThrowableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerThrowableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainerThrowableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrainerThrowableComponent_Statics::Class_MetaDataParams)
};
void UTrainerThrowableComponent::StaticRegisterNativesUTrainerThrowableComponent()
{
	UClass* Class = UTrainerThrowableComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTrainerThrowableComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTrainerThrowableComponent()
{
	if (!Z_Registration_Info_UClass_UTrainerThrowableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainerThrowableComponent.OuterSingleton, Z_Construct_UClass_UTrainerThrowableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainerThrowableComponent.OuterSingleton;
}
UTrainerThrowableComponent::UTrainerThrowableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrainerThrowableComponent);
UTrainerThrowableComponent::~UTrainerThrowableComponent() {}
// ********** End Class UTrainerThrowableComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainerThrowableComponent, UTrainerThrowableComponent::StaticClass, TEXT("UTrainerThrowableComponent"), &Z_Registration_Info_UClass_UTrainerThrowableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainerThrowableComponent), 3435278480U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h__Script_ProjectMimikyu_941633333{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TrainerThrowableComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
