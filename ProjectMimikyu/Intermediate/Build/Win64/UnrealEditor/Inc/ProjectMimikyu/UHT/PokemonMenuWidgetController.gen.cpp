// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/WidgetController/PokemonMenuWidgetController.h"
#include "ProjectMimikyu/Public/DataAssets/PokemonStatInfoDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonMenuWidgetController() {}
// Cross Module References
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonStatInfoDataAsset_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonWidgetController();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonStatInfo();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventStatInfoSignature_Parms
		{
			FPokemonStatInfo Info;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventStatInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FPokemonStatInfo, METADATA_PARAMS(0, nullptr) }; // 3322745617
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "StatInfoSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventStatInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::_Script_ProjectMimikyu_eventStatInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStatInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& StatInfoSignature, FPokemonStatInfo& Info)
{
	struct _Script_ProjectMimikyu_eventStatInfoSignature_Parms
	{
		FPokemonStatInfo Info;
	};
	_Script_ProjectMimikyu_eventStatInfoSignature_Parms Parms;
	Parms.Info=Info;
	StatInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
	Info=Parms.Info;
}
	DEFINE_FUNCTION(UPokemonMenuWidgetController::execBroadcastInitialValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInitialValues();
		P_NATIVE_END;
	}
	void UPokemonMenuWidgetController::StaticRegisterNativesUPokemonMenuWidgetController()
	{
		UClass* Class = UPokemonMenuWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInitialValues", &UPokemonMenuWidgetController::execBroadcastInitialValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonMenuWidgetController, nullptr, "BroadcastInitialValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonMenuWidgetController);
	UClass* Z_Construct_UClass_UPokemonMenuWidgetController_NoRegister()
	{
		return UPokemonMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StatInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StatInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPokemonWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonMenuWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonMenuWidgetController_BroadcastInitialValues, "BroadcastInitialValues" }, // 1403833704
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/WidgetController/PokemonMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfoDelegate_MetaData[] = {
		{ "Category", "Pokemon|Stats" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfoDelegate = { "StatInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMenuWidgetController, StatInfoDelegate), Z_Construct_UDelegateFunction_ProjectMimikyu_StatInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfoDelegate_MetaData), Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfoDelegate_MetaData) }; // 726373855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfo_MetaData[] = {
		{ "Category", "PokemonMenuWidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/PokemonMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfo = { "StatInfo", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMenuWidgetController, StatInfo), Z_Construct_UClass_UPokemonStatInfoDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfo_MetaData), Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfoDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMenuWidgetController_Statics::NewProp_StatInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonMenuWidgetController_Statics::ClassParams = {
		&UPokemonMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonMenuWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMenuWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_UPokemonMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonMenuWidgetController.OuterSingleton, Z_Construct_UClass_UPokemonMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonMenuWidgetController.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonMenuWidgetController>()
	{
		return UPokemonMenuWidgetController::StaticClass();
	}
	UPokemonMenuWidgetController::UPokemonMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonMenuWidgetController);
	UPokemonMenuWidgetController::~UPokemonMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonMenuWidgetController, UPokemonMenuWidgetController::StaticClass, TEXT("UPokemonMenuWidgetController"), &Z_Registration_Info_UClass_UPokemonMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonMenuWidgetController), 3422367257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_4091683956(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_WidgetController_PokemonMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
