// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AT_TargetDataLocation.h"
#include "Abilities/GameplayAbilityTargetTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAT_TargetDataLocation() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TargetDataLocation();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TargetDataLocation_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FTargetDataLocationSignature ******************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventTargetDataLocationSignature_Parms
	{
		FGameplayAbilityTargetDataHandle DataHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AT_TargetDataLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventTargetDataLocationSignature_Parms, DataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataHandle_MetaData), NewProp_DataHandle_MetaData) }; // 2587778715
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::NewProp_DataHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "TargetDataLocationSignature__DelegateSignature", Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventTargetDataLocationSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventTargetDataLocationSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTargetDataLocationSignature_DelegateWrapper(const FMulticastScriptDelegate& TargetDataLocationSignature, const FGameplayAbilityTargetDataHandle DataHandle)
{
	struct _Script_ProjectMimikyu_eventTargetDataLocationSignature_Parms
	{
		FGameplayAbilityTargetDataHandle DataHandle;
	};
	_Script_ProjectMimikyu_eventTargetDataLocationSignature_Parms Parms;
	Parms.DataHandle=DataHandle;
	TargetDataLocationSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FTargetDataLocationSignature ********************************************

// ********** Begin Class UAT_TargetDataLocation Function CreateTargetDataLocation *****************
struct Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics
{
	struct AT_TargetDataLocation_eventCreateTargetDataLocation_Parms
	{
		UGameplayAbility* OwningAbility;
		UAT_TargetDataLocation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Task" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "TargetDataLocation" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AT_TargetDataLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TargetDataLocation_eventCreateTargetDataLocation_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TargetDataLocation_eventCreateTargetDataLocation_Parms, ReturnValue), Z_Construct_UClass_UAT_TargetDataLocation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_TargetDataLocation, nullptr, "CreateTargetDataLocation", Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::AT_TargetDataLocation_eventCreateTargetDataLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::AT_TargetDataLocation_eventCreateTargetDataLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_TargetDataLocation::execCreateTargetDataLocation)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_TargetDataLocation**)Z_Param__Result=UAT_TargetDataLocation::CreateTargetDataLocation(Z_Param_OwningAbility);
	P_NATIVE_END;
}
// ********** End Class UAT_TargetDataLocation Function CreateTargetDataLocation *******************

// ********** Begin Class UAT_TargetDataLocation ***************************************************
void UAT_TargetDataLocation::StaticRegisterNativesUAT_TargetDataLocation()
{
	UClass* Class = UAT_TargetDataLocation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTargetDataLocation", &UAT_TargetDataLocation::execCreateTargetDataLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAT_TargetDataLocation;
UClass* UAT_TargetDataLocation::GetPrivateStaticClass()
{
	using TClass = UAT_TargetDataLocation;
	if (!Z_Registration_Info_UClass_UAT_TargetDataLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AT_TargetDataLocation"),
			Z_Registration_Info_UClass_UAT_TargetDataLocation.InnerSingleton,
			StaticRegisterNativesUAT_TargetDataLocation,
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
	return Z_Registration_Info_UClass_UAT_TargetDataLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UAT_TargetDataLocation_NoRegister()
{
	return UAT_TargetDataLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAT_TargetDataLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AT_TargetDataLocation.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AT_TargetDataLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AT_TargetDataLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_TargetDataLocation_CreateTargetDataLocation, "CreateTargetDataLocation" }, // 121046570
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAT_TargetDataLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_TargetDataLocation_Statics::NewProp_ValidData = { "ValidData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_TargetDataLocation, ValidData), Z_Construct_UDelegateFunction_ProjectMimikyu_TargetDataLocationSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidData_MetaData), NewProp_ValidData_MetaData) }; // 692900845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_TargetDataLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_TargetDataLocation_Statics::NewProp_ValidData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TargetDataLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAT_TargetDataLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TargetDataLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAT_TargetDataLocation_Statics::ClassParams = {
	&UAT_TargetDataLocation::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAT_TargetDataLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TargetDataLocation_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TargetDataLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAT_TargetDataLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAT_TargetDataLocation()
{
	if (!Z_Registration_Info_UClass_UAT_TargetDataLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAT_TargetDataLocation.OuterSingleton, Z_Construct_UClass_UAT_TargetDataLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAT_TargetDataLocation.OuterSingleton;
}
UAT_TargetDataLocation::UAT_TargetDataLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAT_TargetDataLocation);
UAT_TargetDataLocation::~UAT_TargetDataLocation() {}
// ********** End Class UAT_TargetDataLocation *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAT_TargetDataLocation, UAT_TargetDataLocation::StaticClass, TEXT("UAT_TargetDataLocation"), &Z_Registration_Info_UClass_UAT_TargetDataLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_TargetDataLocation), 2880096490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h__Script_ProjectMimikyu_743627254(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AT_TargetDataLocation_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
