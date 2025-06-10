// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/PokemonAbilitySystemComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UPokemonAbilitySystemComponent::execActivateAbilityByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAbilityByTag(Z_Param_Out_InputTag);
		P_NATIVE_END;
	}
	void UPokemonAbilitySystemComponent::StaticRegisterNativesUPokemonAbilitySystemComponent()
	{
		UClass* Class = UPokemonAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbilityByTag", &UPokemonAbilitySystemComponent::execActivateAbilityByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics
	{
		struct PokemonAbilitySystemComponent_eventActivateAbilityByTag_Parms
		{
			FGameplayTag InputTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemComponent_eventActivateAbilityByTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::NewProp_InputTag_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::NewProp_InputTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::NewProp_InputTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemComponent, nullptr, "ActivateAbilityByTag", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PokemonAbilitySystemComponent_eventActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonAbilitySystemComponent);
	UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister()
	{
		return UPokemonAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonAttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PokemonAttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonAbilitySystemComponent_ActivateAbilityByTag, "ActivateAbilityByTag" }, // 3176406749
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/PokemonAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::NewProp_PokemonAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::NewProp_PokemonAttributeSet = { "PokemonAttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonAbilitySystemComponent, PokemonAttributeSet), Z_Construct_UClass_UPokemonBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::NewProp_PokemonAttributeSet_MetaData), Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::NewProp_PokemonAttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::NewProp_PokemonAttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAbilitySystemComponent>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UPokemonAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonAbilitySystemComponent.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonAbilitySystemComponent>()
	{
		return UPokemonAbilitySystemComponent::StaticClass();
	}
	UPokemonAbilitySystemComponent::UPokemonAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonAbilitySystemComponent);
	UPokemonAbilitySystemComponent::~UPokemonAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAbilitySystemComponent, UPokemonAbilitySystemComponent::StaticClass, TEXT("UPokemonAbilitySystemComponent"), &Z_Registration_Info_UClass_UPokemonAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAbilitySystemComponent), 2840025245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h_1112084889(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
