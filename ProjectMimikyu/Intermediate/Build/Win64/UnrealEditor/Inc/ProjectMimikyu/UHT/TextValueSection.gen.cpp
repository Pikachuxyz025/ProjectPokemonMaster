// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/TextValueSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextValueSection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTextValueSection();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTextValueSection_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	struct TextValueSection_eventSetInfoEvent_Parms
	{
		AActor* ObjectActor;
	};
	static FName NAME_UTextValueSection_SetInfoEvent = FName(TEXT("SetInfoEvent"));
	void UTextValueSection::SetInfoEvent(AActor* ObjectActor)
	{
		TextValueSection_eventSetInfoEvent_Parms Parms;
		Parms.ObjectActor=ObjectActor;
		ProcessEvent(FindFunctionChecked(NAME_UTextValueSection_SetInfoEvent),&Parms);
	}
	void UTextValueSection::StaticRegisterNativesUTextValueSection()
	{
	}
	struct Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::NewProp_ObjectActor = { "ObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextValueSection_eventSetInfoEvent_Parms, ObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::NewProp_ObjectActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TextValueSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextValueSection, nullptr, "SetInfoEvent", nullptr, nullptr, Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers), sizeof(TextValueSection_eventSetInfoEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(TextValueSection_eventSetInfoEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTextValueSection_SetInfoEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextValueSection);
	UClass* Z_Construct_UClass_UTextValueSection_NoRegister()
	{
		return UTextValueSection::StaticClass();
	}
	struct Z_Construct_UClass_UTextValueSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextValueSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextValueSection_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextValueSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextValueSection_SetInfoEvent, "SetInfoEvent" }, // 464909100
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextValueSection_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextValueSection_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/TextValueSection.h" },
		{ "ModuleRelativePath", "Public/UI/TextValueSection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextValueSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextValueSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextValueSection_Statics::ClassParams = {
		&UTextValueSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextValueSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextValueSection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTextValueSection()
	{
		if (!Z_Registration_Info_UClass_UTextValueSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextValueSection.OuterSingleton, Z_Construct_UClass_UTextValueSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextValueSection.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UTextValueSection>()
	{
		return UTextValueSection::StaticClass();
	}
	UTextValueSection::UTextValueSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextValueSection);
	UTextValueSection::~UTextValueSection() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextValueSection, UTextValueSection::StaticClass, TEXT("UTextValueSection"), &Z_Registration_Info_UClass_UTextValueSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextValueSection), 3506069378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h_428873260(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
