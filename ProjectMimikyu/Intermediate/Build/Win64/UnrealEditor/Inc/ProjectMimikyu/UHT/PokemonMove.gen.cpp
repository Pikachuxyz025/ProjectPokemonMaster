// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PokemonMove.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonMove() {}

// ********** Begin Cross Module References ********************************************************
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMove();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMove_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonMove *************************************************************
void UPokemonMove::StaticRegisterNativesUPokemonMove()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonMove;
UClass* UPokemonMove::GetPrivateStaticClass()
{
	using TClass = UPokemonMove;
	if (!Z_Registration_Info_UClass_UPokemonMove.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonMove"),
			Z_Registration_Info_UClass_UPokemonMove.InnerSingleton,
			StaticRegisterNativesUPokemonMove,
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
	return Z_Registration_Info_UClass_UPokemonMove.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonMove_NoRegister()
{
	return UPokemonMove::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonMove.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokemonMove_MetaData[] = {
		{ "Category", "PokemonMove" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n//UTextBlock* PokemonMoveName;\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/PokemonMove.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\nUTextBlock* PokemonMoveName;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPokemonMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonMove>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonMove_Statics::NewProp_CurrentPokemonMove = { "CurrentPokemonMove", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMove, CurrentPokemonMove), Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokemonMove_MetaData), NewProp_CurrentPokemonMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMove_Statics::NewProp_CurrentPokemonMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMove_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonMove_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMove_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonMove_Statics::ClassParams = {
	&UPokemonMove::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPokemonMove_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMove_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMove_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonMove_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonMove()
{
	if (!Z_Registration_Info_UClass_UPokemonMove.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonMove.OuterSingleton, Z_Construct_UClass_UPokemonMove_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonMove.OuterSingleton;
}
UPokemonMove::UPokemonMove(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonMove);
UPokemonMove::~UPokemonMove() {}
// ********** End Class UPokemonMove ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMove_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonMove, UPokemonMove::StaticClass, TEXT("UPokemonMove"), &Z_Registration_Info_UClass_UPokemonMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonMove), 1072734290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMove_h__Script_ProjectMimikyu_941670858(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMove_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonMove_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
