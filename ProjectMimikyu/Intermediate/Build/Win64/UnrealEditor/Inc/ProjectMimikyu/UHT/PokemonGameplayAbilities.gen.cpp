// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonGameplayAbilities() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPokemonGameplayAbilities::StaticRegisterNativesUPokemonGameplayAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonGameplayAbilities);
	UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister()
	{
		return UPokemonGameplayAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonGameplayAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonGameplayAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonGameplayAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams = {
		&UPokemonGameplayAbilities::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPokemonGameplayAbilities()
	{
		if (!Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton, Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonGameplayAbilities>()
	{
		return UPokemonGameplayAbilities::StaticClass();
	}
	UPokemonGameplayAbilities::UPokemonGameplayAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonGameplayAbilities);
	UPokemonGameplayAbilities::~UPokemonGameplayAbilities() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonGameplayAbilities, UPokemonGameplayAbilities::StaticClass, TEXT("UPokemonGameplayAbilities"), &Z_Registration_Info_UClass_UPokemonGameplayAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonGameplayAbilities), 998241006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_3273060519(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
