// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/PokemonChartSummary.h"
#include "InputCoreTypes.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonChartSummary() {}
// Cross Module References
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonChartSummary();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonChartSummary_NoRegister();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UPokemonChartSummary::execSetReturnWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_ReturnToWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReturnWidget(Z_Param_ReturnToWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonChartSummary::execSetPokemonIndex)
	{
		P_GET_STRUCT(FPokemonInfo,Z_Param_SelectedPokemon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPokemonIndex(Z_Param_SelectedPokemon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonChartSummary::execSetPokemonParty)
	{
		P_GET_TARRAY(FPokemonInfo,Z_Param_PokemonParty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPokemonParty(Z_Param_PokemonParty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonChartSummary::execRemoveMouseCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMouseCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPokemonChartSummary::execAddMouseCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMouseCursor();
		P_NATIVE_END;
	}
	void UPokemonChartSummary::StaticRegisterNativesUPokemonChartSummary()
	{
		UClass* Class = UPokemonChartSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMouseCursor", &UPokemonChartSummary::execAddMouseCursor },
			{ "RemoveMouseCursor", &UPokemonChartSummary::execRemoveMouseCursor },
			{ "SetPokemonIndex", &UPokemonChartSummary::execSetPokemonIndex },
			{ "SetPokemonParty", &UPokemonChartSummary::execSetPokemonParty },
			{ "SetReturnWidget", &UPokemonChartSummary::execSetReturnWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "AddMouseCursor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "RemoveMouseCursor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics
	{
		struct PokemonChartSummary_eventSetPokemonIndex_Parms
		{
			FPokemonInfo SelectedPokemon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPokemon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPokemon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::NewProp_SelectedPokemon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::NewProp_SelectedPokemon = { "SelectedPokemon", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonChartSummary_eventSetPokemonIndex_Parms, SelectedPokemon), Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::NewProp_SelectedPokemon_MetaData), Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::NewProp_SelectedPokemon_MetaData) }; // 1826758845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::NewProp_SelectedPokemon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "SetPokemonIndex", nullptr, nullptr, Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PokemonChartSummary_eventSetPokemonIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PokemonChartSummary_eventSetPokemonIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics
	{
		struct PokemonChartSummary_eventSetPokemonParty_Parms
		{
			TArray<FPokemonInfo> PokemonParty;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonParty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonParty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonParty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty_Inner = { "PokemonParty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 1826758845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty = { "PokemonParty", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonChartSummary_eventSetPokemonParty_Parms, PokemonParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty_MetaData), Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty_MetaData) }; // 1826758845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "SetPokemonParty", nullptr, nullptr, Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PokemonChartSummary_eventSetPokemonParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PokemonChartSummary_eventSetPokemonParty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics
	{
		struct PokemonChartSummary_eventSetReturnWidget_Parms
		{
			UUserWidget* ReturnToWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::NewProp_ReturnToWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::NewProp_ReturnToWidget = { "ReturnToWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonChartSummary_eventSetReturnWidget_Parms, ReturnToWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::NewProp_ReturnToWidget_MetaData), Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::NewProp_ReturnToWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::NewProp_ReturnToWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "SetReturnWidget", nullptr, nullptr, Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PokemonChartSummary_eventSetReturnWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PokemonChartSummary_eventSetReturnWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonChartSummary);
	UClass* Z_Construct_UClass_UPokemonChartSummary_NoRegister()
	{
		return UPokemonChartSummary::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonChartSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonPartyInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonPartyInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonPartyInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPartyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPartyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReturnWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExitKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonChartSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonChartSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor, "AddMouseCursor" }, // 4199932182
		{ &Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor, "RemoveMouseCursor" }, // 3313240156
		{ &Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex, "SetPokemonIndex" }, // 3099431955
		{ &Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty, "SetPokemonParty" }, // 1058310779
		{ &Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget, "SetReturnWidget" }, // 3721603676
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonChartSummary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonChartSummary.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo_Inner = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 1826758845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, PokemonPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo_MetaData), Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo_MetaData) }; // 1826758845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_CurrentPartyIndex_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_CurrentPartyIndex = { "CurrentPartyIndex", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, CurrentPartyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_CurrentPartyIndex_MetaData), Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_CurrentPartyIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ReturnWidget_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ReturnWidget = { "ReturnWidget", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, ReturnWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ReturnWidget_MetaData), Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ReturnWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ExitKey_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ExitKey = { "ExitKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, ExitKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ExitKey_MetaData), Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ExitKey_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonChartSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_CurrentPartyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ReturnWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ExitKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonChartSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonChartSummary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonChartSummary_Statics::ClassParams = {
		&UPokemonChartSummary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonChartSummary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonChartSummary_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonChartSummary()
	{
		if (!Z_Registration_Info_UClass_UPokemonChartSummary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonChartSummary.OuterSingleton, Z_Construct_UClass_UPokemonChartSummary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonChartSummary.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonChartSummary>()
	{
		return UPokemonChartSummary::StaticClass();
	}
	UPokemonChartSummary::UPokemonChartSummary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonChartSummary);
	UPokemonChartSummary::~UPokemonChartSummary() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonChartSummary, UPokemonChartSummary::StaticClass, TEXT("UPokemonChartSummary"), &Z_Registration_Info_UClass_UPokemonChartSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonChartSummary), 2799716304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h_1841800350(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
