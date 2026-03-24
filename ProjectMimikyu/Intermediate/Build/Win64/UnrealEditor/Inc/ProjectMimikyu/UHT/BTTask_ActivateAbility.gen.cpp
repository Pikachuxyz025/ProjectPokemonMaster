// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_ActivateAbility.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBTTask_ActivateAbility() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ActivateAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ActivateAbility **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ActivateAbility;
UClass* UBTTask_ActivateAbility::GetPrivateStaticClass()
{
	using TClass = UBTTask_ActivateAbility;
	if (!Z_Registration_Info_UClass_UBTTask_ActivateAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_ActivateAbility"),
			Z_Registration_Info_UClass_UBTTask_ActivateAbility.InnerSingleton,
			StaticRegisterNativesUBTTask_ActivateAbility,
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
	return Z_Registration_Info_UClass_UBTTask_ActivateAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ActivateAbility_NoRegister()
{
	return UBTTask_ActivateAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ActivateAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_ActivateAbility.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ActivateAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASCKey_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ActivateAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBTTask_ActivateAbility constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ASCKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBTTask_ActivateAbility constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ActivateAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBTTask_ActivateAbility_Statics

// ********** Begin Class UBTTask_ActivateAbility Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ActivateAbility_Statics::NewProp_ASCKey = { "ASCKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ActivateAbility, ASCKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASCKey_MetaData), NewProp_ASCKey_MetaData) }; // 3145079323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateAbility_Statics::NewProp_ASCKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers) < 2048);
// ********** End Class UBTTask_ActivateAbility Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UBTTask_ActivateAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ActivateAbility_Statics::ClassParams = {
	&UBTTask_ActivateAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ActivateAbility_Statics::Class_MetaDataParams)
};
void UBTTask_ActivateAbility::StaticRegisterNativesUBTTask_ActivateAbility()
{
}
UClass* Z_Construct_UClass_UBTTask_ActivateAbility()
{
	if (!Z_Registration_Info_UClass_UBTTask_ActivateAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ActivateAbility.OuterSingleton, Z_Construct_UClass_UBTTask_ActivateAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ActivateAbility.OuterSingleton;
}
UBTTask_ActivateAbility::UBTTask_ActivateAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_ActivateAbility);
UBTTask_ActivateAbility::~UBTTask_ActivateAbility() {}
// ********** End Class UBTTask_ActivateAbility ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ActivateAbility, UBTTask_ActivateAbility::StaticClass, TEXT("UBTTask_ActivateAbility"), &Z_Registration_Info_UClass_UBTTask_ActivateAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ActivateAbility), 2719723420U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h__Script_ProjectMimikyu_3935133892{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ActivateAbility_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
