// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_ChargingAttack.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_ChargingAttack() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChargingAttack();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChargingAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ChargingAttack Function AttackComplete ***************************
struct Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttackComplete constinit property declarations ************************
// ********** End Function AttackComplete constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBTTask_ChargingAttack, nullptr, "AttackComplete", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_ChargingAttack::execAttackComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackComplete();
	P_NATIVE_END;
}
// ********** End Class UBTTask_ChargingAttack Function AttackComplete *****************************

// ********** Begin Class UBTTask_ChargingAttack ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ChargingAttack;
UClass* UBTTask_ChargingAttack::GetPrivateStaticClass()
{
	using TClass = UBTTask_ChargingAttack;
	if (!Z_Registration_Info_UClass_UBTTask_ChargingAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_ChargingAttack"),
			Z_Registration_Info_UClass_UBTTask_ChargingAttack.InnerSingleton,
			StaticRegisterNativesUBTTask_ChargingAttack,
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
	return Z_Registration_Info_UClass_UBTTask_ChargingAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ChargingAttack_NoRegister()
{
	return UBTTask_ChargingAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ChargingAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_ChargingAttack.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTargetKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoveKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_ChargingAttack constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTargetKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonMoveKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_ChargingAttack constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AttackComplete"), .Pointer = &UBTTask_ChargingAttack::execAttackComplete },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete, "AttackComplete" }, // 3190780561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChargingAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_ChargingAttack_Statics

// ********** Begin Class UBTTask_ChargingAttack Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTargetKey = { "AttackTargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, AttackTargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTargetKey_MetaData), NewProp_AttackTargetKey_MetaData) }; // 3145079323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonMoveKey = { "PokemonMoveKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, PokemonMoveKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMoveKey_MetaData), NewProp_PokemonMoveKey_MetaData) }; // 3145079323
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonController_MetaData), NewProp_PokemonController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_Pokemon = { "Pokemon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, Pokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pokemon_MetaData), NewProp_Pokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonASC = { "PokemonASC", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, PokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonASC_MetaData), NewProp_PokemonASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonMove = { "PokemonMove", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, PokemonMove), Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMove_MetaData), NewProp_PokemonMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTarget = { "AttackTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, AttackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTarget_MetaData), NewProp_AttackTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ChargingAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonMoveKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_Pokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_ChargingAttack Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UBTTask_ChargingAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_ActivateAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::ClassParams = {
	&UBTTask_ChargingAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_ChargingAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChargingAttack_Statics::Class_MetaDataParams)
};
void UBTTask_ChargingAttack::StaticRegisterNativesUBTTask_ChargingAttack()
{
	UClass* Class = UBTTask_ChargingAttack::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBTTask_ChargingAttack()
{
	if (!Z_Registration_Info_UClass_UBTTask_ChargingAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChargingAttack.OuterSingleton, Z_Construct_UClass_UBTTask_ChargingAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ChargingAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_ChargingAttack);
UBTTask_ChargingAttack::~UBTTask_ChargingAttack() {}
// ********** End Class UBTTask_ChargingAttack *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChargingAttack, UBTTask_ChargingAttack::StaticClass, TEXT("UBTTask_ChargingAttack"), &Z_Registration_Info_UClass_UBTTask_ChargingAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChargingAttack), 1990883345U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h__Script_ProjectMimikyu_2266202667{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
