// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AIControllers/TrainerAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainerAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerAIController();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void ATrainerAIController::StaticRegisterNativesATrainerAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrainerAIController);
	UClass* Z_Construct_UClass_ATrainerAIController_NoRegister()
	{
		return ATrainerAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATrainerAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrainerAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllers/TrainerAIController.h" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrainerAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainerAIController_Statics::ClassParams = {
		&ATrainerAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainerAIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATrainerAIController()
	{
		if (!Z_Registration_Info_UClass_ATrainerAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerAIController.OuterSingleton, Z_Construct_UClass_ATrainerAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrainerAIController.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<ATrainerAIController>()
	{
		return ATrainerAIController::StaticClass();
	}
	ATrainerAIController::ATrainerAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainerAIController);
	ATrainerAIController::~ATrainerAIController() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerAIController, ATrainerAIController::StaticClass, TEXT("ATrainerAIController"), &Z_Registration_Info_UClass_ATrainerAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerAIController), 3182096308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h_1114223223(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS