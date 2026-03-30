// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PokemonChartSummary.h"
#include "Characters/CharacterTypes.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonChartSummary() {}

// ********** Begin Cross Module References ********************************************************
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonChartSummary();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonChartSummary_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonChartSummary Function AddMouseCursor *****************************
struct Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddMouseCursor constinit property declarations ************************
// ********** End Function AddMouseCursor constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "AddMouseCursor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonChartSummary::execAddMouseCursor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMouseCursor();
	P_NATIVE_END;
}
// ********** End Class UPokemonChartSummary Function AddMouseCursor *******************************

// ********** Begin Class UPokemonChartSummary Function RemoveMouseCursor **************************
struct Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveMouseCursor constinit property declarations *********************
// ********** End Function RemoveMouseCursor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "RemoveMouseCursor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonChartSummary::execRemoveMouseCursor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMouseCursor();
	P_NATIVE_END;
}
// ********** End Class UPokemonChartSummary Function RemoveMouseCursor ****************************

// ********** Begin Class UPokemonChartSummary Function SetPokemonIndex ****************************
struct Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics
{
	struct PokemonChartSummary_eventSetPokemonIndex_Parms
	{
		FPokemonInfo SelectedPokemon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPokemon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPokemonIndex constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPokemonIndex constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPokemonIndex Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::NewProp_SelectedPokemon = { "SelectedPokemon", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonChartSummary_eventSetPokemonIndex_Parms, SelectedPokemon), Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPokemon_MetaData), NewProp_SelectedPokemon_MetaData) }; // 2094424460
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::NewProp_SelectedPokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers) < 2048);
// ********** End Function SetPokemonIndex Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "SetPokemonIndex", 	Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::PokemonChartSummary_eventSetPokemonIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex_Statics::Function_MetaDataParams)},  };
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
DEFINE_FUNCTION(UPokemonChartSummary::execSetPokemonIndex)
{
	P_GET_STRUCT(FPokemonInfo,Z_Param_SelectedPokemon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPokemonIndex(Z_Param_SelectedPokemon);
	P_NATIVE_END;
}
// ********** End Class UPokemonChartSummary Function SetPokemonIndex ******************************

// ********** Begin Class UPokemonChartSummary Function SetPokemonParty ****************************
struct Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics
{
	struct PokemonChartSummary_eventSetPokemonParty_Parms
	{
		TArray<FPokemonInfo> PokemonParty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonParty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPokemonParty constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonParty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonParty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPokemonParty constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPokemonParty Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty_Inner = { "PokemonParty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 2094424460
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty = { "PokemonParty", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonChartSummary_eventSetPokemonParty_Parms, PokemonParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonParty_MetaData), NewProp_PokemonParty_MetaData) }; // 2094424460
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::NewProp_PokemonParty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers) < 2048);
// ********** End Function SetPokemonParty Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "SetPokemonParty", 	Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::PokemonChartSummary_eventSetPokemonParty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty_Statics::Function_MetaDataParams)},  };
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
DEFINE_FUNCTION(UPokemonChartSummary::execSetPokemonParty)
{
	P_GET_TARRAY(FPokemonInfo,Z_Param_PokemonParty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPokemonParty(Z_Param_PokemonParty);
	P_NATIVE_END;
}
// ********** End Class UPokemonChartSummary Function SetPokemonParty ******************************

// ********** Begin Class UPokemonChartSummary Function SetReturnWidget ****************************
struct Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics
{
	struct PokemonChartSummary_eventSetReturnWidget_Parms
	{
		UUserWidget* ReturnToWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnWidget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnWidget constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnWidget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::NewProp_ReturnToWidget = { "ReturnToWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonChartSummary_eventSetReturnWidget_Parms, ReturnToWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToWidget_MetaData), NewProp_ReturnToWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::NewProp_ReturnToWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers) < 2048);
// ********** End Function SetReturnWidget Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonChartSummary, nullptr, "SetReturnWidget", 	Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::PokemonChartSummary_eventSetReturnWidget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget_Statics::Function_MetaDataParams)},  };
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
DEFINE_FUNCTION(UPokemonChartSummary::execSetReturnWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ReturnToWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReturnWidget(Z_Param_ReturnToWidget);
	P_NATIVE_END;
}
// ********** End Class UPokemonChartSummary Function SetReturnWidget ******************************

// ********** Begin Class UPokemonChartSummary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonChartSummary;
UClass* UPokemonChartSummary::GetPrivateStaticClass()
{
	using TClass = UPokemonChartSummary;
	if (!Z_Registration_Info_UClass_UPokemonChartSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonChartSummary"),
			Z_Registration_Info_UClass_UPokemonChartSummary.InnerSingleton,
			StaticRegisterNativesUPokemonChartSummary,
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
	return Z_Registration_Info_UClass_UPokemonChartSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonChartSummary_NoRegister()
{
	return UPokemonChartSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonChartSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonChartSummary.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonPartyInfo_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPartyIndex_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnWidget_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitKey_MetaData[] = {
		{ "Category", "PokemonChartSummary" },
		{ "ModuleRelativePath", "Public/UI/PokemonChartSummary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonChartSummary constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonPartyInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PokemonPartyInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPartyIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonChartSummary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddMouseCursor"), .Pointer = &UPokemonChartSummary::execAddMouseCursor },
		{ .NameUTF8 = UTF8TEXT("RemoveMouseCursor"), .Pointer = &UPokemonChartSummary::execRemoveMouseCursor },
		{ .NameUTF8 = UTF8TEXT("SetPokemonIndex"), .Pointer = &UPokemonChartSummary::execSetPokemonIndex },
		{ .NameUTF8 = UTF8TEXT("SetPokemonParty"), .Pointer = &UPokemonChartSummary::execSetPokemonParty },
		{ .NameUTF8 = UTF8TEXT("SetReturnWidget"), .Pointer = &UPokemonChartSummary::execSetReturnWidget },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonChartSummary_AddMouseCursor, "AddMouseCursor" }, // 2198210463
		{ &Z_Construct_UFunction_UPokemonChartSummary_RemoveMouseCursor, "RemoveMouseCursor" }, // 2147063037
		{ &Z_Construct_UFunction_UPokemonChartSummary_SetPokemonIndex, "SetPokemonIndex" }, // 3948033739
		{ &Z_Construct_UFunction_UPokemonChartSummary_SetPokemonParty, "SetPokemonParty" }, // 3675050307
		{ &Z_Construct_UFunction_UPokemonChartSummary_SetReturnWidget, "SetReturnWidget" }, // 1014026289
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonChartSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonChartSummary_Statics

// ********** Begin Class UPokemonChartSummary Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo_Inner = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 2094424460
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo = { "PokemonPartyInfo", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, PokemonPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonPartyInfo_MetaData), NewProp_PokemonPartyInfo_MetaData) }; // 2094424460
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_CurrentPartyIndex = { "CurrentPartyIndex", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, CurrentPartyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPartyIndex_MetaData), NewProp_CurrentPartyIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ReturnWidget = { "ReturnWidget", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, ReturnWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnWidget_MetaData), NewProp_ReturnWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ExitKey = { "ExitKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonChartSummary, ExitKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitKey_MetaData), NewProp_ExitKey_MetaData) }; // 2693575693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonChartSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_PokemonPartyInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_CurrentPartyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ReturnWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonChartSummary_Statics::NewProp_ExitKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::PropPointers) < 2048);
// ********** End Class UPokemonChartSummary Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UPokemonChartSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonChartSummary_Statics::DependentSingletons) < 16);
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
void UPokemonChartSummary::StaticRegisterNativesUPokemonChartSummary()
{
	UClass* Class = UPokemonChartSummary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonChartSummary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonChartSummary()
{
	if (!Z_Registration_Info_UClass_UPokemonChartSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonChartSummary.OuterSingleton, Z_Construct_UClass_UPokemonChartSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonChartSummary.OuterSingleton;
}
UPokemonChartSummary::UPokemonChartSummary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonChartSummary);
UPokemonChartSummary::~UPokemonChartSummary() {}
// ********** End Class UPokemonChartSummary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonChartSummary, UPokemonChartSummary::StaticClass, TEXT("UPokemonChartSummary"), &Z_Registration_Info_UClass_UPokemonChartSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonChartSummary), 4069507877U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h__Script_ProjectMimikyu_90383715{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonChartSummary_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
