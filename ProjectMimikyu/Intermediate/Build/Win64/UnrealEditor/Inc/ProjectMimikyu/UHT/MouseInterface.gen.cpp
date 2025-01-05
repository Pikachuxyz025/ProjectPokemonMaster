// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Interfaces/MouseInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMouseInterface();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMouseInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UMouseInterface::StaticRegisterNativesUMouseInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMouseInterface);
	UClass* Z_Construct_UClass_UMouseInterface_NoRegister()
	{
		return UMouseInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMouseInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMouseInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMouseInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMouseInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MouseInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMouseInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMouseInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMouseInterface_Statics::ClassParams = {
		&UMouseInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMouseInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMouseInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMouseInterface()
	{
		if (!Z_Registration_Info_UClass_UMouseInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMouseInterface.OuterSingleton, Z_Construct_UClass_UMouseInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMouseInterface.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UMouseInterface>()
	{
		return UMouseInterface::StaticClass();
	}
	UMouseInterface::UMouseInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseInterface);
	UMouseInterface::~UMouseInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_MouseInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_MouseInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMouseInterface, UMouseInterface::StaticClass, TEXT("UMouseInterface"), &Z_Registration_Info_UClass_UMouseInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMouseInterface), 1896927998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_MouseInterface_h_2233241913(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_MouseInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_MouseInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
