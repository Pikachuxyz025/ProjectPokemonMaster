// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Input/PokemonInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonInputComponent() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputComponent();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPokemonInputComponent::StaticRegisterNativesUPokemonInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonInputComponent);
	UClass* Z_Construct_UClass_UPokemonInputComponent_NoRegister()
	{
		return UPokemonInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonInputComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/PokemonInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/PokemonInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonInputComponent_Statics::ClassParams = {
		&UPokemonInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonInputComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPokemonInputComponent()
	{
		if (!Z_Registration_Info_UClass_UPokemonInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonInputComponent.OuterSingleton, Z_Construct_UClass_UPokemonInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonInputComponent.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonInputComponent>()
	{
		return UPokemonInputComponent::StaticClass();
	}
	UPokemonInputComponent::UPokemonInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonInputComponent);
	UPokemonInputComponent::~UPokemonInputComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_PokemonInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_PokemonInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonInputComponent, UPokemonInputComponent::StaticClass, TEXT("UPokemonInputComponent"), &Z_Registration_Info_UClass_UPokemonInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonInputComponent), 1625755916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_PokemonInputComponent_h_55236757(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_PokemonInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_PokemonInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
