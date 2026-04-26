// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/TagCategoryDataAsset.h"
#include "Characters/CharacterTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTagCategoryDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTagCategoryDataAsset();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTagCategoryDataAsset_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FTagCategoryMap();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTagCategoryDataAsset Function FindCategoryForTag ************************
struct Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics
{
	struct TagCategoryDataAsset_eventFindCategoryForTag_Parms
	{
		FGameplayTag Tag;
		FTagCategoryMap ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tag Category" },
		{ "ModuleRelativePath", "Public/DataAssets/TagCategoryDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindCategoryForTag constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindCategoryForTag constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindCategoryForTag Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TagCategoryDataAsset_eventFindCategoryForTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TagCategoryDataAsset_eventFindCategoryForTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FTagCategoryMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3977061561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::PropPointers) < 2048);
// ********** End Function FindCategoryForTag Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTagCategoryDataAsset, nullptr, "FindCategoryForTag", 	Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::TagCategoryDataAsset_eventFindCategoryForTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::TagCategoryDataAsset_eventFindCategoryForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTagCategoryDataAsset::execFindCategoryForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTagCategoryMap*)Z_Param__Result=P_THIS->FindCategoryForTag(Z_Param_Out_Tag);
	P_NATIVE_END;
}
// ********** End Class UTagCategoryDataAsset Function FindCategoryForTag **************************

// ********** Begin Class UTagCategoryDataAsset ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTagCategoryDataAsset;
UClass* UTagCategoryDataAsset::GetPrivateStaticClass()
{
	using TClass = UTagCategoryDataAsset;
	if (!Z_Registration_Info_UClass_UTagCategoryDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TagCategoryDataAsset"),
			Z_Registration_Info_UClass_UTagCategoryDataAsset.InnerSingleton,
			StaticRegisterNativesUTagCategoryDataAsset,
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
	return Z_Registration_Info_UClass_UTagCategoryDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UTagCategoryDataAsset_NoRegister()
{
	return UTagCategoryDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTagCategoryDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/TagCategoryDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/TagCategoryDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "Category", "TagCategoryDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/TagCategoryDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTagCategoryDataAsset constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTagCategoryDataAsset constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindCategoryForTag"), .Pointer = &UTagCategoryDataAsset::execFindCategoryForTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTagCategoryDataAsset_FindCategoryForTag, "FindCategoryForTag" }, // 3111093068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTagCategoryDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTagCategoryDataAsset_Statics

// ********** Begin Class UTagCategoryDataAsset Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTagCategoryDataAsset_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTagCategoryMap, METADATA_PARAMS(0, nullptr) }; // 3977061561
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTagCategoryDataAsset_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTagCategoryDataAsset, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) }; // 3977061561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTagCategoryDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTagCategoryDataAsset_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTagCategoryDataAsset_Statics::NewProp_Categories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTagCategoryDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UTagCategoryDataAsset Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UTagCategoryDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTagCategoryDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTagCategoryDataAsset_Statics::ClassParams = {
	&UTagCategoryDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTagCategoryDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTagCategoryDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTagCategoryDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UTagCategoryDataAsset_Statics::Class_MetaDataParams)
};
void UTagCategoryDataAsset::StaticRegisterNativesUTagCategoryDataAsset()
{
	UClass* Class = UTagCategoryDataAsset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTagCategoryDataAsset_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTagCategoryDataAsset()
{
	if (!Z_Registration_Info_UClass_UTagCategoryDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTagCategoryDataAsset.OuterSingleton, Z_Construct_UClass_UTagCategoryDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTagCategoryDataAsset.OuterSingleton;
}
UTagCategoryDataAsset::UTagCategoryDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTagCategoryDataAsset);
UTagCategoryDataAsset::~UTagCategoryDataAsset() {}
// ********** End Class UTagCategoryDataAsset ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_TagCategoryDataAsset_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTagCategoryDataAsset, UTagCategoryDataAsset::StaticClass, TEXT("UTagCategoryDataAsset"), &Z_Registration_Info_UClass_UTagCategoryDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTagCategoryDataAsset), 1824779780U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_TagCategoryDataAsset_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_TagCategoryDataAsset_h__Script_ProjectMimikyu_3767887467{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_TagCategoryDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_TagCategoryDataAsset_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
