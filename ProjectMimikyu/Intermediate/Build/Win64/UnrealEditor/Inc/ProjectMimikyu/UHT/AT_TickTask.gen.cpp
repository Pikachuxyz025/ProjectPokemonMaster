// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AbilityTasks/AT_TickTask.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAT_TickTask() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TickTask();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TickTask_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTickTaskDelegate ***************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTickTaskDelegate constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTickTaskDelegate constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTickTaskDelegate Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTickTaskDelegate Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnTickTaskDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTickTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTickTaskDelegate, float DeltaTime)
{
	struct _Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms
	{
		float DeltaTime;
	};
	_Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	OnTickTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTickTaskDelegate *****************************************************

// ********** Begin Class UAT_TickTask Function CreateTickTaskNode *********************************
struct Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics
{
	struct AT_TickTask_eventCreateTickTaskNode_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		UAT_TickTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Task" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "TickTask" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateTickTaskNode constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateTickTaskNode constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateTickTaskNode Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TickTask_eventCreateTickTaskNode_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TickTask_eventCreateTickTaskNode_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TickTask_eventCreateTickTaskNode_Parms, ReturnValue), Z_Construct_UClass_UAT_TickTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers) < 2048);
// ********** End Function CreateTickTaskNode Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_TickTask, nullptr, "CreateTickTaskNode", 	Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::AT_TickTask_eventCreateTickTaskNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::AT_TickTask_eventCreateTickTaskNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_TickTask::execCreateTickTaskNode)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_TickTask**)Z_Param__Result=UAT_TickTask::CreateTickTaskNode(Z_Param_OwningAbility,Z_Param_TaskInstanceName);
	P_NATIVE_END;
}
// ********** End Class UAT_TickTask Function CreateTickTaskNode ***********************************

// ********** Begin Class UAT_TickTask *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAT_TickTask;
UClass* UAT_TickTask::GetPrivateStaticClass()
{
	using TClass = UAT_TickTask;
	if (!Z_Registration_Info_UClass_UAT_TickTask.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AT_TickTask"),
			Z_Registration_Info_UClass_UAT_TickTask.InnerSingleton,
			StaticRegisterNativesUAT_TickTask,
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
	return Z_Registration_Info_UClass_UAT_TickTask.InnerSingleton;
}
UClass* Z_Construct_UClass_UAT_TickTask_NoRegister()
{
	return UAT_TickTask::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAT_TickTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AbilityTasks/AT_TickTask.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAT_TickTask constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAT_TickTask constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateTickTaskNode"), .Pointer = &UAT_TickTask::execCreateTickTaskNode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode, "CreateTickTaskNode" }, // 50329095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAT_TickTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAT_TickTask_Statics

// ********** Begin Class UAT_TickTask Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_TickTask_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_TickTask, OnTick), Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTick_MetaData), NewProp_OnTick_MetaData) }; // 995931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_TickTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_TickTask_Statics::NewProp_OnTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::PropPointers) < 2048);
// ********** End Class UAT_TickTask Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UAT_TickTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAT_TickTask_Statics::ClassParams = {
	&UAT_TickTask::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAT_TickTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UAT_TickTask_Statics::Class_MetaDataParams)
};
void UAT_TickTask::StaticRegisterNativesUAT_TickTask()
{
	UClass* Class = UAT_TickTask::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAT_TickTask_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAT_TickTask()
{
	if (!Z_Registration_Info_UClass_UAT_TickTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAT_TickTask.OuterSingleton, Z_Construct_UClass_UAT_TickTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAT_TickTask.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAT_TickTask);
UAT_TickTask::~UAT_TickTask() {}
// ********** End Class UAT_TickTask ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAT_TickTask, UAT_TickTask::StaticClass, TEXT("UAT_TickTask"), &Z_Registration_Info_UClass_UAT_TickTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_TickTask), 297971223U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h__Script_ProjectMimikyu_379237051{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
