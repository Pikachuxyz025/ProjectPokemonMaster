// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AbilityTasks/AT_CombatApproach.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAT_CombatApproach() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_CombatApproach();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UAT_CombatApproach_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FCombatApproachSimpleDelegate *****************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCombatApproachSimpleDelegate constinit property declarations *********
// ********** End Delegate FCombatApproachSimpleDelegate constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "CombatApproachSimpleDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCombatApproachSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& CombatApproachSimpleDelegate)
{
	CombatApproachSimpleDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FCombatApproachSimpleDelegate *******************************************

// ********** Begin Class UAT_CombatApproach Function CreateCombatApproachTask *********************
struct Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics
{
	struct AT_CombatApproach_eventCreateCombatApproachTask_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		AActor* InTargetActor;
		float InDesiredRange;
		float InMoveSpeedMultiplier;
		float ReachBeforeThisTimeLimit;
		bool bInFaceTarget;
		UAT_CombatApproach* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Pokemon|AbilityTasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start approaching a target until within DesiredRange*/" },
#endif
		{ "CPP_Default_bInFaceTarget", "true" },
		{ "CPP_Default_InMoveSpeedMultiplier", "1.000000" },
		{ "CPP_Default_ReachBeforeThisTimeLimit", "3.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Combat Approach" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start approaching a target until within DesiredRange" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CreateCombatApproachTask constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDesiredRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMoveSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachBeforeThisTimeLimit;
	static void NewProp_bInFaceTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInFaceTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateCombatApproachTask constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateCombatApproachTask Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_CombatApproach_eventCreateCombatApproachTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_CombatApproach_eventCreateCombatApproachTask_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_CombatApproach_eventCreateCombatApproachTask_Parms, InTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_InDesiredRange = { "InDesiredRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_CombatApproach_eventCreateCombatApproachTask_Parms, InDesiredRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_InMoveSpeedMultiplier = { "InMoveSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_CombatApproach_eventCreateCombatApproachTask_Parms, InMoveSpeedMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_ReachBeforeThisTimeLimit = { "ReachBeforeThisTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_CombatApproach_eventCreateCombatApproachTask_Parms, ReachBeforeThisTimeLimit), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_bInFaceTarget_SetBit(void* Obj)
{
	((AT_CombatApproach_eventCreateCombatApproachTask_Parms*)Obj)->bInFaceTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_bInFaceTarget = { "bInFaceTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AT_CombatApproach_eventCreateCombatApproachTask_Parms), &Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_bInFaceTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_CombatApproach_eventCreateCombatApproachTask_Parms, ReturnValue), Z_Construct_UClass_UAT_CombatApproach_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_InDesiredRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_InMoveSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_ReachBeforeThisTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_bInFaceTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::PropPointers) < 2048);
// ********** End Function CreateCombatApproachTask Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAT_CombatApproach, nullptr, "CreateCombatApproachTask", 	Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::AT_CombatApproach_eventCreateCombatApproachTask_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::AT_CombatApproach_eventCreateCombatApproachTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAT_CombatApproach::execCreateCombatApproachTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDesiredRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMoveSpeedMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReachBeforeThisTimeLimit);
	P_GET_UBOOL(Z_Param_bInFaceTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAT_CombatApproach**)Z_Param__Result=UAT_CombatApproach::CreateCombatApproachTask(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_InTargetActor,Z_Param_InDesiredRange,Z_Param_InMoveSpeedMultiplier,Z_Param_ReachBeforeThisTimeLimit,Z_Param_bInFaceTarget);
	P_NATIVE_END;
}
// ********** End Class UAT_CombatApproach Function CreateCombatApproachTask ***********************

// ********** Begin Class UAT_CombatApproach *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAT_CombatApproach;
UClass* UAT_CombatApproach::GetPrivateStaticClass()
{
	using TClass = UAT_CombatApproach;
	if (!Z_Registration_Info_UClass_UAT_CombatApproach.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AT_CombatApproach"),
			Z_Registration_Info_UClass_UAT_CombatApproach.InnerSingleton,
			StaticRegisterNativesUAT_CombatApproach,
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
	return Z_Registration_Info_UClass_UAT_CombatApproach.InnerSingleton;
}
UClass* Z_Construct_UClass_UAT_CombatApproach_NoRegister()
{
	return UAT_CombatApproach::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAT_CombatApproach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReachedRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AT_CombatApproach.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAT_CombatApproach constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReachedRange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAT_CombatApproach constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateCombatApproachTask"), .Pointer = &UAT_CombatApproach::execCreateCombatApproachTask },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_CombatApproach_CreateCombatApproachTask, "CreateCombatApproachTask" }, // 206119504
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAT_CombatApproach>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAT_CombatApproach_Statics

// ********** Begin Class UAT_CombatApproach Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_OnReachedRange = { "OnReachedRange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_CombatApproach, OnReachedRange), Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReachedRange_MetaData), NewProp_OnReachedRange_MetaData) }; // 1007493074
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_CombatApproach, OnFailed), Z_Construct_UDelegateFunction_ProjectMimikyu_CombatApproachSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 1007493074
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_CombatApproach, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_AvatarPawn = { "AvatarPawn", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_CombatApproach, AvatarPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarPawn_MetaData), NewProp_AvatarPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_AvatarCharacter = { "AvatarCharacter", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_CombatApproach, AvatarCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarCharacter_MetaData), NewProp_AvatarCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_AvatarController = { "AvatarController", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_CombatApproach, AvatarController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarController_MetaData), NewProp_AvatarController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_CombatApproach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_OnReachedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_AvatarPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_AvatarCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_CombatApproach_Statics::NewProp_AvatarController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_CombatApproach_Statics::PropPointers) < 2048);
// ********** End Class UAT_CombatApproach Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UAT_CombatApproach_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_CombatApproach_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAT_CombatApproach_Statics::ClassParams = {
	&UAT_CombatApproach::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAT_CombatApproach_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAT_CombatApproach_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_CombatApproach_Statics::Class_MetaDataParams), Z_Construct_UClass_UAT_CombatApproach_Statics::Class_MetaDataParams)
};
void UAT_CombatApproach::StaticRegisterNativesUAT_CombatApproach()
{
	UClass* Class = UAT_CombatApproach::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAT_CombatApproach_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAT_CombatApproach()
{
	if (!Z_Registration_Info_UClass_UAT_CombatApproach.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAT_CombatApproach.OuterSingleton, Z_Construct_UClass_UAT_CombatApproach_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAT_CombatApproach.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAT_CombatApproach);
UAT_CombatApproach::~UAT_CombatApproach() {}
// ********** End Class UAT_CombatApproach *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAT_CombatApproach, UAT_CombatApproach::StaticClass, TEXT("UAT_CombatApproach"), &Z_Registration_Info_UClass_UAT_CombatApproach, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_CombatApproach), 3660958253U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h__Script_ProjectMimikyu_575829375{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_AbilityTasks_AT_CombatApproach_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
