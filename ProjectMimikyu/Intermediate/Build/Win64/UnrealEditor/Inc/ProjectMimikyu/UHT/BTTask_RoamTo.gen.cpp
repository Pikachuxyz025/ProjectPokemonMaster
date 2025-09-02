// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_RoamTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_RoamTo() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemonAIController_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_RoamTo();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_RoamTo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_RoamTo ***********************************************************
void UBTTask_RoamTo::StaticRegisterNativesUBTTask_RoamTo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_RoamTo;
UClass* UBTTask_RoamTo::GetPrivateStaticClass()
{
	using TClass = UBTTask_RoamTo;
	if (!Z_Registration_Info_UClass_UBTTask_RoamTo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_RoamTo"),
			Z_Registration_Info_UClass_UBTTask_RoamTo.InnerSingleton,
			StaticRegisterNativesUBTTask_RoamTo,
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
	return Z_Registration_Info_UClass_UBTTask_RoamTo.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_RoamTo_NoRegister()
{
	return UBTTask_RoamTo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_RoamTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_RoamTo.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RoamTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPointKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RoamTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RoamTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RoamTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTTask_RoamTo" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_RoamTo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPointKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocationKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RoamTo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_SpawnPointKey = { "SpawnPointKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RoamTo, SpawnPointKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPointKey_MetaData), NewProp_SpawnPointKey_MetaData) }; // 815030858
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RoamTo, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocationKey_MetaData), NewProp_TargetLocationKey_MetaData) }; // 815030858
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_PokemonController = { "PokemonController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RoamTo, PokemonController), Z_Construct_UClass_APokemonAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonController_MetaData), NewProp_PokemonController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RoamTo, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RoamTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_SpawnPointKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_TargetLocationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_PokemonController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RoamTo_Statics::NewProp_AcceptableRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RoamTo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_RoamTo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RoamTo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RoamTo_Statics::ClassParams = {
	&UBTTask_RoamTo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_RoamTo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RoamTo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RoamTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RoamTo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RoamTo()
{
	if (!Z_Registration_Info_UClass_UBTTask_RoamTo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RoamTo.OuterSingleton, Z_Construct_UClass_UBTTask_RoamTo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RoamTo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RoamTo);
UBTTask_RoamTo::~UBTTask_RoamTo() {}
// ********** End Class UBTTask_RoamTo *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RoamTo_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RoamTo, UBTTask_RoamTo::StaticClass, TEXT("UBTTask_RoamTo"), &Z_Registration_Info_UClass_UBTTask_RoamTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RoamTo), 2466714364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RoamTo_h__Script_ProjectMimikyu_1022176334(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RoamTo_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_RoamTo_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
