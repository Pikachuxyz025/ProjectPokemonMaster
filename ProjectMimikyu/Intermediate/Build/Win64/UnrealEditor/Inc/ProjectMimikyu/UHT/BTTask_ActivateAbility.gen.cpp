// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Tasks/BTTask_ActivateAbility.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ActivateAbility() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UBTTask_ActivateAbility::StaticRegisterNativesUBTTask_ActivateAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ActivateAbility);
	UClass* Z_Construct_UClass_UBTTask_ActivateAbility_NoRegister()
	{
		return UBTTask_ActivateAbility::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ActivateAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASCKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ASCKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ActivateAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ActivateAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_ActivateAbility.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ActivateAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ActivateAbility_Statics::NewProp_ASCKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ActivateAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ActivateAbility_Statics::NewProp_ASCKey = { "ASCKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ActivateAbility, ASCKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::NewProp_ASCKey_MetaData), Z_Construct_UClass_UBTTask_ActivateAbility_Statics::NewProp_ASCKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateAbility_Statics::NewProp_ASCKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ActivateAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ActivateAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ActivateAbility_Statics::ClassParams = {
		&UBTTask_ActivateAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ActivateAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_ActivateAbility()
	{
		if (!Z_Registration_Info_UClass_UBTTask_ActivateAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ActivateAbility.OuterSingleton, Z_Construct_UClass_UBTTask_ActivateAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_ActivateAbility.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UBTTask_ActivateAbility>()
	{
		return UBTTask_ActivateAbility::StaticClass();
	}
	UBTTask_ActivateAbility::UBTTask_ActivateAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ActivateAbility);
	UBTTask_ActivateAbility::~UBTTask_ActivateAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ActivateAbility, UBTTask_ActivateAbility::StaticClass, TEXT("UBTTask_ActivateAbility"), &Z_Registration_Info_UClass_UBTTask_ActivateAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ActivateAbility), 1656530667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h_1923632323(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
