// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/AbilityTasks/AT_TickTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAT_TickTask() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TickTask();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_TickTask_NoRegister();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnTickTaskDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnTickTaskDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(UAT_TickTask::execCreateTickTaskNode)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAT_TickTask**)Z_Param__Result=UAT_TickTask::CreateTickTaskNode(Z_Param_OwningAbility,Z_Param_TaskInstanceName);
		P_NATIVE_END;
	}
	void UAT_TickTask::StaticRegisterNativesUAT_TickTask()
	{
		UClass* Class = UAT_TickTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTickTaskNode", &UAT_TickTask::execCreateTickTaskNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics
	{
		struct AT_TickTask_eventCreateTickTaskNode_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAT_TickTask* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TickTask_eventCreateTickTaskNode_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TickTask_eventCreateTickTaskNode_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TickTask_eventCreateTickTaskNode_Parms, ReturnValue), Z_Construct_UClass_UAT_TickTask_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Task" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "TickTask" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAT_TickTask, nullptr, "CreateTickTaskNode", nullptr, nullptr, Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::AT_TickTask_eventCreateTickTaskNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAT_TickTask);
	UClass* Z_Construct_UClass_UAT_TickTask_NoRegister()
	{
		return UAT_TickTask::StaticClass();
	}
	struct Z_Construct_UClass_UAT_TickTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAT_TickTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAT_TickTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_TickTask_CreateTickTaskNode, "CreateTickTaskNode" }, // 2603778569
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAT_TickTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AbilityTasks/AT_TickTask.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAT_TickTask_Statics::NewProp_OnTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_TickTask.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_TickTask_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_TickTask, OnTick), Z_Construct_UDelegateFunction_ProjectMimikyu_OnTickTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::NewProp_OnTick_MetaData), Z_Construct_UClass_UAT_TickTask_Statics::NewProp_OnTick_MetaData) }; // 1350660967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_TickTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_TickTask_Statics::NewProp_OnTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAT_TickTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAT_TickTask>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_TickTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAT_TickTask()
	{
		if (!Z_Registration_Info_UClass_UAT_TickTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAT_TickTask.OuterSingleton, Z_Construct_UClass_UAT_TickTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAT_TickTask.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UAT_TickTask>()
	{
		return UAT_TickTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAT_TickTask);
	UAT_TickTask::~UAT_TickTask() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAT_TickTask, UAT_TickTask::StaticClass, TEXT("UAT_TickTask"), &Z_Registration_Info_UClass_UAT_TickTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_TickTask), 716331272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_4217612068(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_TickTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
