// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Interfaces/CraftableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UCraftableInterface();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UCraftableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UCraftableInterface::StaticRegisterNativesUCraftableInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCraftableInterface);
	UClass* Z_Construct_UClass_UCraftableInterface_NoRegister()
	{
		return UCraftableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCraftableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCraftableInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CraftableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICraftableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCraftableInterface_Statics::ClassParams = {
		&UCraftableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCraftableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCraftableInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCraftableInterface()
	{
		if (!Z_Registration_Info_UClass_UCraftableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCraftableInterface.OuterSingleton, Z_Construct_UClass_UCraftableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCraftableInterface.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UCraftableInterface>()
	{
		return UCraftableInterface::StaticClass();
	}
	UCraftableInterface::UCraftableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftableInterface);
	UCraftableInterface::~UCraftableInterface() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCraftableInterface, UCraftableInterface::StaticClass, TEXT("UCraftableInterface"), &Z_Registration_Info_UClass_UCraftableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCraftableInterface), 1536193651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h_3045974607(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_CraftableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
