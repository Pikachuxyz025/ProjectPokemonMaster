// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Tasks/BTTask_ChangeMovementSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ChangeMovementSpeed() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed_NoRegister();
	PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UBTTask_ChangeMovementSpeed::StaticRegisterNativesUBTTask_ChangeMovementSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ChangeMovementSpeed);
	UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed_NoRegister()
	{
		return UBTTask_ChangeMovementSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovement_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMovement_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_ChangeMovementSpeed.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChangeMovementSpeed.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement_MetaData[] = {
		{ "Category", "BTTask_ChangeMovementSpeed" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ChangeMovementSpeed.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement = { "NewMovement", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChangeMovementSpeed, NewMovement), Z_Construct_UEnum_ProjectMimikyu_EMovementSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement_MetaData), Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement_MetaData) }; // 3314933686
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::NewProp_NewMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChangeMovementSpeed>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_ChangeMovementSpeed()
	{
		if (!Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.OuterSingleton, Z_Construct_UClass_UBTTask_ChangeMovementSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UBTTask_ChangeMovementSpeed>()
	{
		return UBTTask_ChangeMovementSpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChangeMovementSpeed);
	UBTTask_ChangeMovementSpeed::~UBTTask_ChangeMovementSpeed() {}
	struct Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChangeMovementSpeed, UBTTask_ChangeMovementSpeed::StaticClass, TEXT("UBTTask_ChangeMovementSpeed"), &Z_Registration_Info_UClass_UBTTask_ChangeMovementSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChangeMovementSpeed), 1454569965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h_3497157586(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMimikyu_Source_ProjectMimikyu_Public_Tasks_BTTask_ChangeMovementSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
