// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonAbilitySystemLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UPokemonAbilitySystemLibrary::execActivateAbilityByTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPokemonAbilitySystemComponent,Z_Param_ASC);
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPokemonAbilitySystemLibrary::ActivateAbilityByTag(Z_Param_WorldContextObject,Z_Param_ASC,Z_Param_AbilityTag);
		P_NATIVE_END;
	}
	void UPokemonAbilitySystemLibrary::StaticRegisterNativesUPokemonAbilitySystemLibrary()
	{
		UClass* Class = UPokemonAbilitySystemLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbilityByTag", &UPokemonAbilitySystemLibrary::execActivateAbilityByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics
	{
		struct PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms
		{
			const UObject* WorldContextObject;
			UPokemonAbilitySystemComponent* ASC;
			FGameplayTag AbilityTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, ASC), Z_Construct_UClass_UPokemonAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC_MetaData), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "PokemonAbilitySystemLibrary|AbilitySystemCalls" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonAbilitySystemLibrary, nullptr, "ActivateAbilityByTag", nullptr, nullptr, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::PokemonAbilitySystemLibrary_eventActivateAbilityByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonAbilitySystemLibrary);
	UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary_NoRegister()
	{
		return UPokemonAbilitySystemLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonAbilitySystemLibrary_ActivateAbilityByTag, "ActivateAbilityByTag" }, // 1806656304
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AbilitySystem/PokemonAbilitySystemLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/PokemonAbilitySystemLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonAbilitySystemLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::ClassParams = {
		&UPokemonAbilitySystemLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPokemonAbilitySystemLibrary()
	{
		if (!Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton, Z_Construct_UClass_UPokemonAbilitySystemLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonAbilitySystemLibrary>()
	{
		return UPokemonAbilitySystemLibrary::StaticClass();
	}
	UPokemonAbilitySystemLibrary::UPokemonAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonAbilitySystemLibrary);
	UPokemonAbilitySystemLibrary::~UPokemonAbilitySystemLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonAbilitySystemLibrary, UPokemonAbilitySystemLibrary::StaticClass, TEXT("UPokemonAbilitySystemLibrary"), &Z_Registration_Info_UClass_UPokemonAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonAbilitySystemLibrary), 2428324315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_2535252060(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_PokemonAbilitySystemLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
