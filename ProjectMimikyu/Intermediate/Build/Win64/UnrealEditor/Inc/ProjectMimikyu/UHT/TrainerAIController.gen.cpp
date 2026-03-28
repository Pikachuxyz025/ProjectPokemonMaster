// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIControllers/TrainerAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainerAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerAIController();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATrainerAIController *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATrainerAIController;
UClass* ATrainerAIController::GetPrivateStaticClass()
{
	using TClass = ATrainerAIController;
	if (!Z_Registration_Info_UClass_ATrainerAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TrainerAIController"),
			Z_Registration_Info_UClass_ATrainerAIController.InnerSingleton,
			StaticRegisterNativesATrainerAIController,
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
	return Z_Registration_Info_UClass_ATrainerAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATrainerAIController_NoRegister()
{
	return ATrainerAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATrainerAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllers/TrainerAIController.h" },
		{ "ModuleRelativePath", "Public/AIControllers/TrainerAIController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATrainerAIController constinit property declarations *********************
// ********** End Class ATrainerAIController constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATrainerAIController_Statics
UObject* (*const Z_Construct_UClass_ATrainerAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerAIController_Statics::DependentSingletons) < 16);
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
void ATrainerAIController::StaticRegisterNativesATrainerAIController()
{
}
UClass* Z_Construct_UClass_ATrainerAIController()
{
	if (!Z_Registration_Info_UClass_ATrainerAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerAIController.OuterSingleton, Z_Construct_UClass_ATrainerAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrainerAIController.OuterSingleton;
}
ATrainerAIController::ATrainerAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATrainerAIController);
ATrainerAIController::~ATrainerAIController() {}
// ********** End Class ATrainerAIController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerAIController, ATrainerAIController::StaticClass, TEXT("ATrainerAIController"), &Z_Registration_Info_UClass_ATrainerAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerAIController), 3703715404U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h__Script_ProjectMimikyu_156208210{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AIControllers_TrainerAIController_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
