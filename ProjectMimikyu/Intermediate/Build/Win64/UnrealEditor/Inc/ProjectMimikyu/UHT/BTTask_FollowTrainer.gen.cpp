// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_FollowTrainer.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_FollowTrainer() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_FollowTrainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_FollowTrainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_FollowTrainer ****************************************************
void UBTTask_FollowTrainer::StaticRegisterNativesUBTTask_FollowTrainer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_FollowTrainer;
UClass* UBTTask_FollowTrainer::GetPrivateStaticClass()
{
	using TClass = UBTTask_FollowTrainer;
	if (!Z_Registration_Info_UClass_UBTTask_FollowTrainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_FollowTrainer"),
			Z_Registration_Info_UClass_UBTTask_FollowTrainer.InnerSingleton,
			StaticRegisterNativesUBTTask_FollowTrainer,
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
	return Z_Registration_Info_UClass_UBTTask_FollowTrainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_FollowTrainer_NoRegister()
{
	return UBTTask_FollowTrainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_FollowTrainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_FollowTrainer.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FollowTrainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTTask_FollowTrainer" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FollowTrainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainerKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FollowTrainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FollowTrainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FollowTrainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FollowTrainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FollowTrainer, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_TrainerKey = { "TrainerKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FollowTrainer, TrainerKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainerKey_MetaData), NewProp_TrainerKey_MetaData) }; // 815030858
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FollowTrainer, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonController_MetaData), NewProp_PokemonController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_Pokemon = { "Pokemon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FollowTrainer, Pokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pokemon_MetaData), NewProp_Pokemon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FollowTrainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_AcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_TrainerKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_PokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FollowTrainer_Statics::NewProp_Pokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FollowTrainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FollowTrainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FollowTrainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FollowTrainer_Statics::ClassParams = {
	&UBTTask_FollowTrainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FollowTrainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FollowTrainer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FollowTrainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FollowTrainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FollowTrainer()
{
	if (!Z_Registration_Info_UClass_UBTTask_FollowTrainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FollowTrainer.OuterSingleton, Z_Construct_UClass_UBTTask_FollowTrainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FollowTrainer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FollowTrainer);
UBTTask_FollowTrainer::~UBTTask_FollowTrainer() {}
// ********** End Class UBTTask_FollowTrainer ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_FollowTrainer_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FollowTrainer, UBTTask_FollowTrainer::StaticClass, TEXT("UBTTask_FollowTrainer"), &Z_Registration_Info_UClass_UBTTask_FollowTrainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FollowTrainer), 1376606724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_FollowTrainer_h__Script_ProjectMimikyu_2869099578(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_FollowTrainer_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_FollowTrainer_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
