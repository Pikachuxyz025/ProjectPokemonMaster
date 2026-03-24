// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AsyncTasks/WaitCooldownChange.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWaitCooldownChange() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UWaitCooldownChange();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UWaitCooldownChange_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FCooldownChangeSignature **********************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventCooldownChangeSignature_Parms
	{
		float TimeRemaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCooldownChangeSignature constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FCooldownChangeSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FCooldownChangeSignature Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventCooldownChangeSignature_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::NewProp_TimeRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FCooldownChangeSignature Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "CooldownChangeSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventCooldownChangeSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventCooldownChangeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCooldownChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& CooldownChangeSignature, float TimeRemaining)
{
	struct _Script_ProjectMimikyu_eventCooldownChangeSignature_Parms
	{
		float TimeRemaining;
	};
	_Script_ProjectMimikyu_eventCooldownChangeSignature_Parms Parms;
	Parms.TimeRemaining=TimeRemaining;
	CooldownChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCooldownChangeSignature ************************************************

// ********** Begin Class UWaitCooldownChange Function EndTask *************************************
struct Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndTask constinit property declarations *******************************
// ********** End Function EndTask constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWaitCooldownChange, nullptr, "EndTask", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWaitCooldownChange_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaitCooldownChange::execEndTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTask();
	P_NATIVE_END;
}
// ********** End Class UWaitCooldownChange Function EndTask ***************************************

// ********** Begin Class UWaitCooldownChange Function WaitForCooldownChange ***********************
struct Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics
{
	struct WaitCooldownChange_eventWaitForCooldownChange_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayTag InCooldownTag;
		UWaitCooldownChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCooldownTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WaitForCooldownChange constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCooldownTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WaitForCooldownChange constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WaitForCooldownChange Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaitCooldownChange_eventWaitForCooldownChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_InCooldownTag = { "InCooldownTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaitCooldownChange_eventWaitForCooldownChange_Parms, InCooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCooldownTag_MetaData), NewProp_InCooldownTag_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaitCooldownChange_eventWaitForCooldownChange_Parms, ReturnValue), Z_Construct_UClass_UWaitCooldownChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_InCooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::PropPointers) < 2048);
// ********** End Function WaitForCooldownChange Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWaitCooldownChange, nullptr, "WaitForCooldownChange", 	Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::WaitCooldownChange_eventWaitForCooldownChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::WaitCooldownChange_eventWaitForCooldownChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaitCooldownChange::execWaitForCooldownChange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InCooldownTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWaitCooldownChange**)Z_Param__Result=UWaitCooldownChange::WaitForCooldownChange(Z_Param_AbilitySystemComponent,Z_Param_Out_InCooldownTag);
	P_NATIVE_END;
}
// ********** End Class UWaitCooldownChange Function WaitForCooldownChange *************************

// ********** Begin Class UWaitCooldownChange ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWaitCooldownChange;
UClass* UWaitCooldownChange::GetPrivateStaticClass()
{
	using TClass = UWaitCooldownChange;
	if (!Z_Registration_Info_UClass_UWaitCooldownChange.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WaitCooldownChange"),
			Z_Registration_Info_UClass_UWaitCooldownChange.InnerSingleton,
			StaticRegisterNativesUWaitCooldownChange,
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
	return Z_Registration_Info_UClass_UWaitCooldownChange.InnerSingleton;
}
UClass* Z_Construct_UClass_UWaitCooldownChange_NoRegister()
{
	return UWaitCooldownChange::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWaitCooldownChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWaitCooldownChange constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CooldownStart;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CooldownEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWaitCooldownChange constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EndTask"), .Pointer = &UWaitCooldownChange::execEndTask },
		{ .NameUTF8 = UTF8TEXT("WaitForCooldownChange"), .Pointer = &UWaitCooldownChange::execWaitForCooldownChange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaitCooldownChange_EndTask, "EndTask" }, // 69643103
		{ &Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange, "WaitForCooldownChange" }, // 4209955767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaitCooldownChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWaitCooldownChange_Statics

// ********** Begin Class UWaitCooldownChange Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownStart = { "CooldownStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaitCooldownChange, CooldownStart), Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownStart_MetaData), NewProp_CooldownStart_MetaData) }; // 3560070260
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownEnd = { "CooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaitCooldownChange, CooldownEnd), Z_Construct_UDelegateFunction_ProjectMimikyu_CooldownChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownEnd_MetaData), NewProp_CooldownEnd_MetaData) }; // 3560070260
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaitCooldownChange, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaitCooldownChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::PropPointers) < 2048);
// ********** End Class UWaitCooldownChange Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UWaitCooldownChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaitCooldownChange_Statics::ClassParams = {
	&UWaitCooldownChange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaitCooldownChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaitCooldownChange_Statics::Class_MetaDataParams)
};
void UWaitCooldownChange::StaticRegisterNativesUWaitCooldownChange()
{
	UClass* Class = UWaitCooldownChange::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWaitCooldownChange_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWaitCooldownChange()
{
	if (!Z_Registration_Info_UClass_UWaitCooldownChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaitCooldownChange.OuterSingleton, Z_Construct_UClass_UWaitCooldownChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaitCooldownChange.OuterSingleton;
}
UWaitCooldownChange::UWaitCooldownChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWaitCooldownChange);
UWaitCooldownChange::~UWaitCooldownChange() {}
// ********** End Class UWaitCooldownChange ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaitCooldownChange, UWaitCooldownChange::StaticClass, TEXT("UWaitCooldownChange"), &Z_Registration_Info_UClass_UWaitCooldownChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaitCooldownChange), 3132224345U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h__Script_ProjectMimikyu_1976523231{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
