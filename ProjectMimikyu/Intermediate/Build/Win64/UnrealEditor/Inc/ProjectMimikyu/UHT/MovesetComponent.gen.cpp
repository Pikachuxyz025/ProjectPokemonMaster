// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/ActorComponents/MovesetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesetComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMovesetComponent();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMovesetComponent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UMovesetComponent::StaticRegisterNativesUMovesetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovesetComponent);
	UClass* Z_Construct_UClass_UMovesetComponent_NoRegister()
	{
		return UMovesetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMovesetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonLevelUpMoveset_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PokemonLevelUpMoveset_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLevelUpMoveset_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PokemonLevelUpMoveset;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PokemonLevelUpAbilities_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PokemonLevelUpAbilities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLevelUpAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PokemonLevelUpAbilities;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AvailibleTMMoves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailibleTMMoves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailibleTMMoves;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPokemonMoves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokemonMoves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPokemonMoves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovesetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/MovesetComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/MovesetComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset_ValueProp = { "PokemonLevelUpMoveset", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset_Key_KeyProp = { "PokemonLevelUpMoveset_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset_MetaData[] = {
		{ "Category", "MovesetComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/MovesetComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset = { "PokemonLevelUpMoveset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovesetComponent, PokemonLevelUpMoveset), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset_MetaData), Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities_ValueProp = { "PokemonLevelUpAbilities", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities_Key_KeyProp = { "PokemonLevelUpAbilities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities_MetaData[] = {
		{ "Category", "MovesetComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/MovesetComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities = { "PokemonLevelUpAbilities", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovesetComponent, PokemonLevelUpAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities_MetaData), Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_AvailibleTMMoves_Inner = { "AvailibleTMMoves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetComponent_Statics::NewProp_AvailibleTMMoves_MetaData[] = {
		{ "Category", "MovesetComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/MovesetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_AvailibleTMMoves = { "AvailibleTMMoves", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovesetComponent, AvailibleTMMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::NewProp_AvailibleTMMoves_MetaData), Z_Construct_UClass_UMovesetComponent_Statics::NewProp_AvailibleTMMoves_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves_Inner = { "CurrentPokemonMoves", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves_MetaData[] = {
		{ "Category", "MovesetComponent" },
		{ "ModuleRelativePath", "Public/ActorComponents/MovesetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves = { "CurrentPokemonMoves", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovesetComponent, CurrentPokemonMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves_MetaData), Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovesetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpMoveset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_PokemonLevelUpAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_AvailibleTMMoves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_AvailibleTMMoves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovesetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovesetComponent_Statics::ClassParams = {
		&UMovesetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovesetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovesetComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovesetComponent()
	{
		if (!Z_Registration_Info_UClass_UMovesetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovesetComponent.OuterSingleton, Z_Construct_UClass_UMovesetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovesetComponent.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UMovesetComponent>()
	{
		return UMovesetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovesetComponent);
	UMovesetComponent::~UMovesetComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovesetComponent, UMovesetComponent::StaticClass, TEXT("UMovesetComponent"), &Z_Registration_Info_UClass_UMovesetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovesetComponent), 2699338627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h_3253293426(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
