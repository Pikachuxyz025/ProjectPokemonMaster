// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PokemonMoveList.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonMoveList() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMove_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveList();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveList_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonMoveList *********************************************************
void UPokemonMoveList::StaticRegisterNativesUPokemonMoveList()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonMoveList;
UClass* UPokemonMoveList::GetPrivateStaticClass()
{
	using TClass = UPokemonMoveList;
	if (!Z_Registration_Info_UClass_UPokemonMoveList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonMoveList"),
			Z_Registration_Info_UClass_UPokemonMoveList.InnerSingleton,
			StaticRegisterNativesUPokemonMoveList,
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
	return Z_Registration_Info_UClass_UPokemonMoveList.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonMoveList_NoRegister()
{
	return UPokemonMoveList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonMoveList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonMoveList.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonMoveList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonMoves_MetaData[] = {
		{ "Category", "PokemonMoveList" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonMoveList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonMoves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonMoves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonMoveList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves_Inner = { "PokemonMoves", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokemonMove_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves = { "PokemonMoves", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveList, PokemonMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonMoves_MetaData), NewProp_PokemonMoves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonMoveList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveList_Statics::NewProp_PokemonMoves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonMoveList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveList_Statics::DependentSingletons) < 16);
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
UClass* Z_Construct_UClass_UPokemonMoveList()
{
	if (!Z_Registration_Info_UClass_UPokemonMoveList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonMoveList.OuterSingleton, Z_Construct_UClass_UPokemonMoveList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonMoveList.OuterSingleton;
}
UPokemonMoveList::UPokemonMoveList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonMoveList);
UPokemonMoveList::~UPokemonMoveList() {}
// ********** End Class UPokemonMoveList ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonMoveList, UPokemonMoveList::StaticClass, TEXT("UPokemonMoveList"), &Z_Registration_Info_UClass_UPokemonMoveList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonMoveList), 3032646645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h__Script_ProjectMimikyu_2355652633(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMoveList_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
