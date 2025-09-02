// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/DamageSystemComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDamageSystemComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageSystemComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageSystemComponent_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDamageOutput();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDamageOutput *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageOutput;
static UEnum* EDamageOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EDamageOutput, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EDamageOutput"));
	}
	return Z_Registration_Info_UEnum_EDamageOutput.OuterSingleton;
}
template<> PROJECTMIMIKYU_API UEnum* StaticEnum<EDamageOutput>()
{
	return EDamageOutput_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EDamageOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EDO_BlockDamage.Name", "EDamageOutput::EDO_BlockDamage" },
		{ "EDO_DoDamage.Name", "EDamageOutput::EDO_DoDamage" },
		{ "EDO_NoDamage.Name", "EDamageOutput::EDO_NoDamage" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDamageOutput::EDO_BlockDamage", (int64)EDamageOutput::EDO_BlockDamage },
		{ "EDamageOutput::EDO_DoDamage", (int64)EDamageOutput::EDO_DoDamage },
		{ "EDamageOutput::EDO_NoDamage", (int64)EDamageOutput::EDO_NoDamage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EDamageOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EDamageOutput",
	"EDamageOutput",
	Z_Construct_UEnum_ProjectMimikyu_EDamageOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EDamageOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EDamageOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EDamageOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EDamageOutput()
{
	if (!Z_Registration_Info_UEnum_EDamageOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageOutput.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EDamageOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageOutput.InnerSingleton;
}
// ********** End Enum EDamageOutput ***************************************************************

// ********** Begin Class UDamageSystemComponent ***************************************************
void UDamageSystemComponent::StaticRegisterNativesUDamageSystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDamageSystemComponent;
UClass* UDamageSystemComponent::GetPrivateStaticClass()
{
	using TClass = UDamageSystemComponent;
	if (!Z_Registration_Info_UClass_UDamageSystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DamageSystemComponent"),
			Z_Registration_Info_UClass_UDamageSystemComponent.InnerSingleton,
			StaticRegisterNativesUDamageSystemComponent,
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
	return Z_Registration_Info_UClass_UDamageSystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDamageSystemComponent_NoRegister()
{
	return UDamageSystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDamageSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/DamageSystemComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeChartDataTable_MetaData[] = {
		{ "Category", "DamageSystemComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAttack_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialDefense_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffortLevelBaseMap_MetaData[] = {
		{ "Category", "DamageSystemComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstType_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondType_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInvincible_MetaData[] = {
		{ "Category", "Damage Responses" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "Damage Responses" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlocking_MetaData[] = {
		{ "Category", "Damage Responses" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInterruptable_MetaData[] = {
		{ "Category", "Damage Responses" },
		{ "ModuleRelativePath", "Public/ActorComponents/DamageSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeChartDataTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiplierMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MultiplierMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Attack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Defense;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpecialAttack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpecialDefense;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffortLevelBaseMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffortLevelBaseMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EffortLevelBaseMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirstType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FirstType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondType;
	static void NewProp_bIsInvincible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvincible;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static void NewProp_bIsBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocking;
	static void NewProp_bIsInterruptable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInterruptable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_TypeChartDataTable = { "TypeChartDataTable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, TypeChartDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeChartDataTable_MetaData), NewProp_TypeChartDataTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MultiplierMap_ValueProp = { "MultiplierMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MultiplierMap_Key_KeyProp = { "MultiplierMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MultiplierMap = { "MultiplierMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, MultiplierMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplierMap_MetaData), NewProp_MultiplierMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, Attack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attack_MetaData), NewProp_Attack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, Defense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defense_MetaData), NewProp_Defense_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SpecialAttack = { "SpecialAttack", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, SpecialAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialAttack_MetaData), NewProp_SpecialAttack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SpecialDefense = { "SpecialDefense", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, SpecialDefense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialDefense_MetaData), NewProp_SpecialDefense_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_EffortLevelBaseMap_ValueProp = { "EffortLevelBaseMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_EffortLevelBaseMap_Key_KeyProp = { "EffortLevelBaseMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_EffortLevelBaseMap = { "EffortLevelBaseMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, EffortLevelBaseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffortLevelBaseMap_MetaData), NewProp_EffortLevelBaseMap_MetaData) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_FirstType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_FirstType = { "FirstType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, FirstType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstType_MetaData), NewProp_FirstType_MetaData) }; // 630780709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SecondType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SecondType = { "SecondType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageSystemComponent, SecondType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondType_MetaData), NewProp_SecondType_MetaData) }; // 630780709
void Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInvincible_SetBit(void* Obj)
{
	((UDamageSystemComponent*)Obj)->bIsInvincible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInvincible = { "bIsInvincible", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageSystemComponent), &Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInvincible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInvincible_MetaData), NewProp_bIsInvincible_MetaData) };
void Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((UDamageSystemComponent*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageSystemComponent), &Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
void Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
{
	((UDamageSystemComponent*)Obj)->bIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsBlocking = { "bIsBlocking", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageSystemComponent), &Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlocking_MetaData), NewProp_bIsBlocking_MetaData) };
void Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInterruptable_SetBit(void* Obj)
{
	((UDamageSystemComponent*)Obj)->bIsInterruptable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInterruptable = { "bIsInterruptable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageSystemComponent), &Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInterruptable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInterruptable_MetaData), NewProp_bIsInterruptable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_TypeChartDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MultiplierMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MultiplierMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MultiplierMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_Defense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SpecialAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SpecialDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_EffortLevelBaseMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_EffortLevelBaseMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_EffortLevelBaseMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_FirstType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_FirstType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SecondType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_SecondType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInvincible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSystemComponent_Statics::NewProp_bIsInterruptable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageSystemComponent_Statics::ClassParams = {
	&UDamageSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDamageSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSystemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageSystemComponent()
{
	if (!Z_Registration_Info_UClass_UDamageSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageSystemComponent.OuterSingleton, Z_Construct_UClass_UDamageSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageSystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageSystemComponent);
UDamageSystemComponent::~UDamageSystemComponent() {}
// ********** End Class UDamageSystemComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDamageOutput_StaticEnum, TEXT("EDamageOutput"), &Z_Registration_Info_UEnum_EDamageOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1450275885U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageSystemComponent, UDamageSystemComponent::StaticClass, TEXT("UDamageSystemComponent"), &Z_Registration_Info_UClass_UDamageSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageSystemComponent), 438298995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h__Script_ProjectMimikyu_2018987651(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_DamageSystemComponent_h__Script_ProjectMimikyu_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
