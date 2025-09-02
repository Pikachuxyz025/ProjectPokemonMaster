// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonAbilitySystemComponent Function ActivateAbilityByTag *************
struct Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics
{
	struct PokemonAbilitySystemComponent_eventActivateAbilityByTag_Parms
	{
		FGameplayTag InputTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemComponent_eventActivateAbilityByTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemComponent, nullptr, "ActivateAbilityByTag", Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PokemonAbilitySystemComponent_eventActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PokemonAbilitySystemComponent_eventActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonAbilitySystemComponent::execActivateAbilityByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateAbilityByTag(Z_Param_Out_InputTag);
	P_NATIVE_END;
}
// ********** End Class UPokemonAbilitySystemComponent Function ActivateAbilityByTag ***************

// ********** Begin Class UPokemonAbilitySystemComponent *******************************************
void UPokemonAbilitySystemComponent::StaticRegisterNativesUPokemonAbilitySystemComponent()
{
	UClass* Class = UPokemonAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateAbilityByTag", &UPokemonAbilitySystemComponent::execActivateAbilityByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonAbilitySystemComponent;
UClass* UPokemonAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonAbilitySystemComponent"),
			Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUPokemonAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister()
{
	return UPokemonAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/PokemonAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag, "ActivateAbilityByTag" }, // 3460182882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::NewProp_PokemonAttributeSet = { "PokemonAttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAbilitySystemComponent, PokemonAttributeSet), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonAttributeSet_MetaData), NewProp_PokemonAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::NewProp_PokemonAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::ClassParams = {
	&UPokemonAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.OuterSingleton;
}
UPokemonAbilitySystemComponent::UPokemonAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonAbilitySystemComponent);
UPokemonAbilitySystemComponent::~UPokemonAbilitySystemComponent() {}
// ********** End Class UPokemonAbilitySystemComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAbilitySystemComponent, UPokemonAbilitySystemComponent::StaticClass, TEXT("UPokemonAbilitySystemComponent"), &Z_Registration_Info_UClass_UPokemonAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAbilitySystemComponent), 2992700275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h__Script_ProjectMimikyu_388074489(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
