// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/DataAssets/PokemonDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EElementalType();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPokemonDataAsset::StaticRegisterNativesUPokemonDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonDataAsset);
	UClass* Z_Construct_UClass_UPokemonDataAsset_NoRegister()
	{
		return UPokemonDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseHealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseHealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDefense_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseDefense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpecialAttack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseSpecialAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpecialDefense_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseSpecialDefense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FirstType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FirstType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SecondType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/PokemonDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, Model), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Model_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Model_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SpriteImage_MetaData[] = {
		{ "Category", "PokemonDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SpriteImage = { "SpriteImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, SpriteImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SpriteImage_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SpriteImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseHealthPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseHealthPoints = { "BaseHealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, BaseHealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseHealthPoints_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseHealthPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseAttack_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseAttack = { "BaseAttack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, BaseAttack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseAttack_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseAttack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseDefense_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseDefense = { "BaseDefense", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, BaseDefense), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseDefense_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseDefense_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialAttack_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialAttack = { "BaseSpecialAttack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, BaseSpecialAttack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialAttack_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialAttack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialDefense_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialDefense = { "BaseSpecialDefense", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, BaseSpecialDefense), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialDefense_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialDefense_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, BaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpeed_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpeed_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType = { "FirstType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, FirstType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType_MetaData) }; // 3798297509
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType = { "SecondType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDataAsset, SecondType), Z_Construct_UEnum_ProjectMimikyu_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType_MetaData), Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType_MetaData) }; // 3798297509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SpriteImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseHealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseDefense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpecialDefense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_BaseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_FirstType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDataAsset_Statics::NewProp_SecondType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonDataAsset_Statics::ClassParams = {
		&UPokemonDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonDataAsset()
	{
		if (!Z_Registration_Info_UClass_UPokemonDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonDataAsset.OuterSingleton, Z_Construct_UClass_UPokemonDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonDataAsset.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonDataAsset>()
	{
		return UPokemonDataAsset::StaticClass();
	}
	UPokemonDataAsset::UPokemonDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonDataAsset);
	UPokemonDataAsset::~UPokemonDataAsset() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonDataAsset, UPokemonDataAsset::StaticClass, TEXT("UPokemonDataAsset"), &Z_Registration_Info_UClass_UPokemonDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonDataAsset), 150225752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_2964481810(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
