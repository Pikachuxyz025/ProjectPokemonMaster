// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/ExecCalc/ExecCalc_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecCalc_Damage() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UExecCalc_Damage();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UExecCalc_Damage::StaticRegisterNativesUExecCalc_Damage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExecCalc_Damage);
	UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister()
	{
		return UExecCalc_Damage::StaticClass();
	}
	struct Z_Construct_UClass_UExecCalc_Damage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExecCalc_Damage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_Damage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecCalc_Damage_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/ExecCalc/ExecCalc_Damage.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ExecCalc/ExecCalc_Damage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecCalc_Damage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecCalc_Damage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecCalc_Damage_Statics::ClassParams = {
		&UExecCalc_Damage::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UExecCalc_Damage_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UExecCalc_Damage()
	{
		if (!Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton, Z_Construct_UClass_UExecCalc_Damage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UExecCalc_Damage>()
	{
		return UExecCalc_Damage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecCalc_Damage);
	UExecCalc_Damage::~UExecCalc_Damage() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExecCalc_Damage, UExecCalc_Damage::StaticClass, TEXT("UExecCalc_Damage"), &Z_Registration_Info_UClass_UExecCalc_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecCalc_Damage), 3182302028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h_847090944(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_ExecCalc_ExecCalc_Damage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
