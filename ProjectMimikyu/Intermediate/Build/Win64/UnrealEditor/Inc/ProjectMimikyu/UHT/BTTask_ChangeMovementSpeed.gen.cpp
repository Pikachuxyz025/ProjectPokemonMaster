// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/BTTask_ChangeMovementSpeed.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_ChangeMovementSpeed() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ChangeMovementSpeed **********************************************
void UBTTask_ChangeMovementSpeed::StaticRegisterNativesUBTTask_ChangeMovementSpeed()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed;
UClass* UBTTask_ChangeMovementSpeed::GetPrivateStaticClass()
{
	using TClass = UBTTask_ChangeMovementSpeed;
	if (!Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_ChangeMovementSpeed"),
			Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.InnerSingleton,
			StaticRegisterNativesUBTTask_ChangeMovementSpeed,
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
	return Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed_NoRegister()
{
	return UBTTask_ChangeMovementSpeed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_ChangeMovementSpeed.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChangeMovementSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMovement_MetaData[] = {
		{ "Category", "BTTask_ChangeMovementSpeed" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChangeMovementSpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChangeMovementSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement = { "NewMovement", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChangeMovementSpeed, NewMovement), Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMovement_MetaData), NewProp_NewMovement_MetaData) }; // 3421225849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::ClassParams = {
	&UBTTask_ChangeMovementSpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed()
{
	if (!Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.OuterSingleton, Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChangeMovementSpeed);
UBTTask_ChangeMovementSpeed::~UBTTask_ChangeMovementSpeed() {}
// ********** End Class UBTTask_ChangeMovementSpeed ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChangeMovementSpeed, UBTTask_ChangeMovementSpeed::StaticClass, TEXT("UBTTask_ChangeMovementSpeed"), &Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChangeMovementSpeed), 3929462863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h__Script_ProjectMimikyu_1913799868(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
