// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_MeleeAttack.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_MeleeAttack() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_MeleeAttack();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_MeleeAttack_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDamageGameplayAbilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_MeleeAttack Function AttackComplete ******************************
struct Z_Construct_UFunction_UBTTask_MeleeAttack_AttackComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttackComplete constinit property declarations ************************
// ********** End Function AttackComplete constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_MeleeAttack_AttackComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBTTask_MeleeAttack, nullptr, "AttackComplete", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_MeleeAttack_AttackComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_MeleeAttack_AttackComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBTTask_MeleeAttack_AttackComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_MeleeAttack_AttackComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_MeleeAttack::execAttackComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackComplete();
	P_NATIVE_END;
}
// ********** End Class UBTTask_MeleeAttack Function AttackComplete ********************************

// ********** Begin Class UBTTask_MeleeAttack ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_MeleeAttack;
UClass* UBTTask_MeleeAttack::GetPrivateStaticClass()
{
	using TClass = UBTTask_MeleeAttack;
	if (!Z_Registration_Info_UClass_UBTTask_MeleeAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_MeleeAttack"),
			Z_Registration_Info_UClass_UBTTask_MeleeAttack.InnerSingleton,
			StaticRegisterNativesUBTTask_MeleeAttack,
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
	return Z_Registration_Info_UClass_UBTTask_MeleeAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_MeleeAttack_NoRegister()
{
	return UBTTask_MeleeAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_MeleeAttack.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTargetKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoveKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MeleeAttack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_MeleeAttack constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTargetKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonMoveKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_MeleeAttack constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AttackComplete"), .Pointer = &UBTTask_MeleeAttack::execAttackComplete },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_MeleeAttack_AttackComplete, "AttackComplete" }, // 1418645335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_MeleeAttack_Statics

// ********** Begin Class UBTTask_MeleeAttack Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_AttackTargetKey = { "AttackTargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MeleeAttack, AttackTargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTargetKey_MetaData), NewProp_AttackTargetKey_MetaData) }; // 3145079323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonMoveKey = { "PokemonMoveKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MeleeAttack, PokemonMoveKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMoveKey_MetaData), NewProp_PokemonMoveKey_MetaData) }; // 3145079323
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MeleeAttack, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonController_MetaData), NewProp_PokemonController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_Pokemon = { "Pokemon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MeleeAttack, Pokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pokemon_MetaData), NewProp_Pokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonASC = { "PokemonASC", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MeleeAttack, PokemonASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonASC_MetaData), NewProp_PokemonASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonMove = { "PokemonMove", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MeleeAttack, PokemonMove), Z_Construct_UClass_UPokemonDamageGameplayAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMove_MetaData), NewProp_PokemonMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_AttackTarget = { "AttackTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MeleeAttack, AttackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTarget_MetaData), NewProp_AttackTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MeleeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_AttackTargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonMoveKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_Pokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_PokemonMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MeleeAttack_Statics::NewProp_AttackTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MeleeAttack_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_MeleeAttack Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UBTTask_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_ActivateAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MeleeAttack_Statics::ClassParams = {
	&UBTTask_MeleeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_MeleeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MeleeAttack_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_MeleeAttack_Statics::Class_MetaDataParams)
};
void UBTTask_MeleeAttack::StaticRegisterNativesUBTTask_MeleeAttack()
{
	UClass* Class = UBTTask_MeleeAttack::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBTTask_MeleeAttack_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBTTask_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UBTTask_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MeleeAttack.OuterSingleton, Z_Construct_UClass_UBTTask_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_MeleeAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_MeleeAttack);
UBTTask_MeleeAttack::~UBTTask_MeleeAttack() {}
// ********** End Class UBTTask_MeleeAttack ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_MeleeAttack_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MeleeAttack, UBTTask_MeleeAttack::StaticClass, TEXT("UBTTask_MeleeAttack"), &Z_Registration_Info_UClass_UBTTask_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MeleeAttack), 1940795761U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_MeleeAttack_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_MeleeAttack_h__Script_ProjectMimikyu_58796873{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_MeleeAttack_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_MeleeAttack_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
