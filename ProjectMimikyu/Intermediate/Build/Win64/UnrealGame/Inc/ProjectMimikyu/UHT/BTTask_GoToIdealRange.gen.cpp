// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_GoToIdealRange.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_GoToIdealRange() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_GoToIdealRange();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_GoToIdealRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_GoToIdealRange Function AttackComplete ***************************
struct Z_Construct_UFunction_UBTTask_GoToIdealRange_AttackComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttackComplete constinit property declarations ************************
// ********** End Function AttackComplete constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_GoToIdealRange_AttackComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBTTask_GoToIdealRange, nullptr, "AttackComplete", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_GoToIdealRange_AttackComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_GoToIdealRange_AttackComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBTTask_GoToIdealRange_AttackComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_GoToIdealRange_AttackComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_GoToIdealRange::execAttackComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackComplete();
	P_NATIVE_END;
}
// ********** End Class UBTTask_GoToIdealRange Function AttackComplete *****************************

// ********** Begin Class UBTTask_GoToIdealRange ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_GoToIdealRange;
UClass* UBTTask_GoToIdealRange::GetPrivateStaticClass()
{
	using TClass = UBTTask_GoToIdealRange;
	if (!Z_Registration_Info_UClass_UBTTask_GoToIdealRange.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_GoToIdealRange"),
			Z_Registration_Info_UClass_UBTTask_GoToIdealRange.InnerSingleton,
			StaticRegisterNativesUBTTask_GoToIdealRange,
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
	return Z_Registration_Info_UClass_UBTTask_GoToIdealRange.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_GoToIdealRange_NoRegister()
{
	return UBTTask_GoToIdealRange::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_GoToIdealRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_GoToIdealRange.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRangeKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTargetKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoveKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_GoToIdealRange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_GoToIdealRange constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackRangeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTargetKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonMoveKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_GoToIdealRange constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AttackComplete"), .Pointer = &UBTTask_GoToIdealRange::execAttackComplete },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_GoToIdealRange_AttackComplete, "AttackComplete" }, // 645139166
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_GoToIdealRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_GoToIdealRange_Statics

// ********** Begin Class UBTTask_GoToIdealRange Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_AttackRangeKey = { "AttackRangeKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_GoToIdealRange, AttackRangeKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRangeKey_MetaData), NewProp_AttackRangeKey_MetaData) }; // 3145079323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_AttackTargetKey = { "AttackTargetKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_GoToIdealRange, AttackTargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTargetKey_MetaData), NewProp_AttackTargetKey_MetaData) }; // 3145079323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_PokemonMoveKey = { "PokemonMoveKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_GoToIdealRange, PokemonMoveKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMoveKey_MetaData), NewProp_PokemonMoveKey_MetaData) }; // 3145079323
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_AttackTarget = { "AttackTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_GoToIdealRange, AttackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTarget_MetaData), NewProp_AttackTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_GoToIdealRange, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonController_MetaData), NewProp_PokemonController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_Pokemon = { "Pokemon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_GoToIdealRange, Pokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pokemon_MetaData), NewProp_Pokemon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_AttackRangeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_AttackTargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_PokemonMoveKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_AttackTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_PokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::NewProp_Pokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_GoToIdealRange Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::ClassParams = {
	&UBTTask_GoToIdealRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::Class_MetaDataParams)
};
void UBTTask_GoToIdealRange::StaticRegisterNativesUBTTask_GoToIdealRange()
{
	UClass* Class = UBTTask_GoToIdealRange::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBTTask_GoToIdealRange()
{
	if (!Z_Registration_Info_UClass_UBTTask_GoToIdealRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_GoToIdealRange.OuterSingleton, Z_Construct_UClass_UBTTask_GoToIdealRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_GoToIdealRange.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_GoToIdealRange);
UBTTask_GoToIdealRange::~UBTTask_GoToIdealRange() {}
// ********** End Class UBTTask_GoToIdealRange *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_GoToIdealRange_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_GoToIdealRange, UBTTask_GoToIdealRange::StaticClass, TEXT("UBTTask_GoToIdealRange"), &Z_Registration_Info_UClass_UBTTask_GoToIdealRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_GoToIdealRange), 609956494U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_GoToIdealRange_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_GoToIdealRange_h__Script_ProjectMimikyu_3667284736{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_GoToIdealRange_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_GoToIdealRange_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
