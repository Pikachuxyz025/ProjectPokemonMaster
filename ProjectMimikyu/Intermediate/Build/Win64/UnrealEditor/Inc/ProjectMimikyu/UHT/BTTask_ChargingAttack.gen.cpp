// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Tasks/BTTask_ChargingAttack.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ChargingAttack() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChargingAttack();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChargingAttack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UBTTask_ChargingAttack::execAttackComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackComplete();
		P_NATIVE_END;
	}
	void UBTTask_ChargingAttack::StaticRegisterNativesUBTTask_ChargingAttack()
	{
		UClass* Class = UBTTask_ChargingAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackComplete", &UBTTask_ChargingAttack::execAttackComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_ChargingAttack, nullptr, "AttackComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ChargingAttack);
	UClass* Z_Construct_UClass_UBTTask_ChargingAttack_NoRegister()
	{
		return UBTTask_ChargingAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ChargingAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTargetKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTargetKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pokemon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pokemon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ChargingAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_ChargingAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_ChargingAttack_AttackComplete, "AttackComplete" }, // 1982719098
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargingAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_ChargingAttack.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTargetKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTargetKey = { "AttackTargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, AttackTargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTargetKey_MetaData), Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTargetKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonController_MetaData), Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_Pokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_Pokemon = { "Pokemon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, Pokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_Pokemon_MetaData), Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_Pokemon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChargingAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTarget = { "AttackTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChargingAttack, AttackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTarget_MetaData), Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ChargingAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_PokemonController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_Pokemon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChargingAttack_Statics::NewProp_AttackTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ChargingAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChargingAttack>::IsAbstract,
	};
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChargingAttack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingAttack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_ChargingAttack()
	{
		if (!Z_Registration_Info_UClass_UBTTask_ChargingAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChargingAttack.OuterSingleton, Z_Construct_UClass_UBTTask_ChargingAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_ChargingAttack.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UBTTask_ChargingAttack>()
	{
		return UBTTask_ChargingAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChargingAttack);
	UBTTask_ChargingAttack::~UBTTask_ChargingAttack() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChargingAttack, UBTTask_ChargingAttack::StaticClass, TEXT("UBTTask_ChargingAttack"), &Z_Registration_Info_UClass_UBTTask_ChargingAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChargingAttack), 3365128009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h_3060999742(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChargingAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
