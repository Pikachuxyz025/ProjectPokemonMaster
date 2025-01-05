// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/PokemonMoveList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonMoveList() {}
// Cross Module References
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMove_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveList();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveList_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPokemonMoveList::StaticRegisterNativesUPokemonMoveList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonMoveList);
	UClass* Z_Construct_UClass_UPokemonMoveList_NoRegister()
	{
		return UPokemonMoveList::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonMoveList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMoves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonMoves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonMoveList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveList_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonMoveList.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonMoveList.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves_Inner = { "PokemonMoves", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokemonMove_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves_MetaData[] = {
		{ "Category", "PokemonMoveList" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonMoveList.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves = { "PokemonMoves", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveList, PokemonMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves_MetaData), Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonMoveList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonMoveList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonMoveList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonMoveList_Statics::ClassParams = {
		&UPokemonMoveList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPokemonMoveList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveList_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveList_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonMoveList_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveList_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonMoveList()
	{
		if (!Z_Registration_Info_UClass_UPokemonMoveList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonMoveList.OuterSingleton, Z_Construct_UClass_UPokemonMoveList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonMoveList.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonMoveList>()
	{
		return UPokemonMoveList::StaticClass();
	}
	UPokemonMoveList::UPokemonMoveList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonMoveList);
	UPokemonMoveList::~UPokemonMoveList() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonMoveList, UPokemonMoveList::StaticClass, TEXT("UPokemonMoveList"), &Z_Registration_Info_UClass_UPokemonMoveList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonMoveList), 1784304989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h_3663947249(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
