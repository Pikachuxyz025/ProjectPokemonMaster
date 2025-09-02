// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_RangedAttack.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_RangedAttack() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_RangedAttack();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_RangedAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_RangedAttack Function AttackComplete *****************************
struct Z_Construct_UFunction_UBTTask_RangedAttack_AttackComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_RangedAttack_AttackComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBTTask_RangedAttack, nullptr, "AttackComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_RangedAttack_AttackComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_RangedAttack_AttackComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBTTask_RangedAttack_AttackComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_RangedAttack_AttackComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_RangedAttack::execAttackComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackComplete();
	P_NATIVE_END;
}
// ********** End Class UBTTask_RangedAttack Function AttackComplete *******************************

// ********** Begin Class UBTTask_RangedAttack *****************************************************
void UBTTask_RangedAttack::StaticRegisterNativesUBTTask_RangedAttack()
{
	UClass* Class = UBTTask_RangedAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackComplete", &UBTTask_RangedAttack::execAttackComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_RangedAttack;
UClass* UBTTask_RangedAttack::GetPrivateStaticClass()
{
	using TClass = UBTTask_RangedAttack;
	if (!Z_Registration_Info_UClass_UBTTask_RangedAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_RangedAttack"),
			Z_Registration_Info_UClass_UBTTask_RangedAttack.InnerSingleton,
			StaticRegisterNativesUBTTask_RangedAttack,
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
	return Z_Registration_Info_UClass_UBTTask_RangedAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_RangedAttack_NoRegister()
{
	return UBTTask_RangedAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_RangedAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_RangedAttack.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTargetKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoveKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RangedAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTargetKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonMoveKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_RangedAttack_AttackComplete, "AttackComplete" }, // 3967867558
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RangedAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_AttackTargetKey = { "AttackTargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RangedAttack, AttackTargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTargetKey_MetaData), NewProp_AttackTargetKey_MetaData) }; // 815030858
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_PokemonMoveKey = { "PokemonMoveKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RangedAttack, PokemonMoveKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMoveKey_MetaData), NewProp_PokemonMoveKey_MetaData) }; // 815030858
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RangedAttack, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonController_MetaData), NewProp_PokemonController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_PokemonMove = { "PokemonMove", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RangedAttack, PokemonMove), Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMove_MetaData), NewProp_PokemonMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_Pokemon = { "Pokemon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RangedAttack, Pokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pokemon_MetaData), NewProp_Pokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_AttackTarget = { "AttackTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RangedAttack, AttackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTarget_MetaData), NewProp_AttackTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RangedAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_AttackTargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_PokemonMoveKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_PokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_PokemonMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_Pokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangedAttack_Statics::NewProp_AttackTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangedAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_RangedAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_ActivateAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangedAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RangedAttack_Statics::ClassParams = {
	&UBTTask_RangedAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_RangedAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangedAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangedAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RangedAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RangedAttack()
{
	if (!Z_Registration_Info_UClass_UBTTask_RangedAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RangedAttack.OuterSingleton, Z_Construct_UClass_UBTTask_RangedAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RangedAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RangedAttack);
UBTTask_RangedAttack::~UBTTask_RangedAttack() {}
// ********** End Class UBTTask_RangedAttack *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RangedAttack_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RangedAttack, UBTTask_RangedAttack::StaticClass, TEXT("UBTTask_RangedAttack"), &Z_Registration_Info_UClass_UBTTask_RangedAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RangedAttack), 3354374526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RangedAttack_h__Script_ProjectMimikyu_1953281735(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RangedAttack_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RangedAttack_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
