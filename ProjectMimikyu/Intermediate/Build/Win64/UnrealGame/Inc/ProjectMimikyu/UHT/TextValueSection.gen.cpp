// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/TextValueSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTextValueSection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTextValueSection();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTextValueSection_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTextValueSection Function SetInfoEvent **********************************
struct TextValueSection_eventSetInfoEvent_Parms
{
	AActor* ObjectActor;
};
static FName NAME_UTextValueSection_SetInfoEvent = FName(TEXT("SetInfoEvent"));
void UTextValueSection::SetInfoEvent(AActor* ObjectActor)
{
	TextValueSection_eventSetInfoEvent_Parms Parms;
	Parms.ObjectActor=ObjectActor;
	UFunction* Func = FindFunctionChecked(NAME_UTextValueSection_SetInfoEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TextValueSection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInfoEvent constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInfoEvent constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInfoEvent Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::NewProp_ObjectActor = { "ObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextValueSection_eventSetInfoEvent_Parms, ObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::NewProp_ObjectActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers) < 2048);
// ********** End Function SetInfoEvent Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextValueSection, nullptr, "SetInfoEvent", 	Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::PropPointers), 
sizeof(TextValueSection_eventSetInfoEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextValueSection_SetInfoEvent_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UTextValueSection Function SetInfoEvent ************************************

// ********** Begin Class UTextValueSection ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTextValueSection;
UClass* UTextValueSection::GetPrivateStaticClass()
{
	using TClass = UTextValueSection;
	if (!Z_Registration_Info_UClass_UTextValueSection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TextValueSection"),
			Z_Registration_Info_UClass_UTextValueSection.InnerSingleton,
			StaticRegisterNativesUTextValueSection,
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
	return Z_Registration_Info_UClass_UTextValueSection.InnerSingleton;
}
UClass* Z_Construct_UClass_UTextValueSection_NoRegister()
{
	return UTextValueSection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTextValueSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/TextValueSection.h" },
		{ "ModuleRelativePath", "Public/UI/TextValueSection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTextValueSection constinit property declarations ************************
// ********** End Class UTextValueSection constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextValueSection_SetInfoEvent, "SetInfoEvent" }, // 2683877929
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextValueSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTextValueSection_Statics
UObject* (*const Z_Construct_UClass_UTextValueSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextValueSection_Statics::DependentSingletons) < 16);
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
void UTextValueSection::StaticRegisterNativesUTextValueSection()
{
}
UClass* Z_Construct_UClass_UTextValueSection()
{
	if (!Z_Registration_Info_UClass_UTextValueSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextValueSection.OuterSingleton, Z_Construct_UClass_UTextValueSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextValueSection.OuterSingleton;
}
UTextValueSection::UTextValueSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTextValueSection);
UTextValueSection::~UTextValueSection() {}
// ********** End Class UTextValueSection **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextValueSection, UTextValueSection::StaticClass, TEXT("UTextValueSection"), &Z_Registration_Info_UClass_UTextValueSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextValueSection), 2694920390U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h__Script_ProjectMimikyu_1744684906{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_TextValueSection_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
