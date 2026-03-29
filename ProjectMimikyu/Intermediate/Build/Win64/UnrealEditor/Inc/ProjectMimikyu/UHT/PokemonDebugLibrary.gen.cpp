// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debugging/PokemonDebugLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonDebugLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDebugLibrary();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDebugLibrary_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonDebugLibrary Function ClearObserverdActor ************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics
{
	struct PokemonDebugLibrary_eventClearObserverdActor_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearObserverdActor constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearObserverdActor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearObserverdActor Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventClearObserverdActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::PropPointers) < 2048);
// ********** End Function ClearObserverdActor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "ClearObserverdActor", 	Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::PokemonDebugLibrary_eventClearObserverdActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::PokemonDebugLibrary_eventClearObserverdActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execClearObserverdActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonDebugLibrary::ClearObserverdActor(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function ClearObserverdActor **************************

// ********** Begin Class UPokemonDebugLibrary Function DrawLine ***********************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics
{
	struct PokemonDebugLibrary_eventDrawLine_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag CategoryTag;
		FVector Start;
		FVector End;
		float Duration;
		FLinearColor Color;
		float Thickness;
		EPokemonDebugVerbosity Verbosity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Duration", "3.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "CPP_Default_Verbosity", "Basic" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawLine constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawLine constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawLine Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawLine_Parms, Verbosity), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity, METADATA_PARAMS(0, nullptr) }; // 3016341990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::PropPointers) < 2048);
// ********** End Function DrawLine Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "DrawLine", 	Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::PokemonDebugLibrary_eventDrawLine_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::PokemonDebugLibrary_eventDrawLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execDrawLine)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_ENUM(EPokemonDebugVerbosity,Z_Param_Verbosity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonDebugLibrary::DrawLine(Z_Param_WorldContextObject,Z_Param_CategoryTag,Z_Param_Start,Z_Param_End,Z_Param_Duration,Z_Param_Color,Z_Param_Thickness,EPokemonDebugVerbosity(Z_Param_Verbosity));
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function DrawLine *************************************

// ********** Begin Class UPokemonDebugLibrary Function DrawSphere *********************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics
{
	struct PokemonDebugLibrary_eventDrawSphere_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag CategoryTag;
		FVector Center;
		float Radius;
		float Duration;
		FLinearColor Color;
		int32 Segments;
		float Thickness;
		EPokemonDebugVerbosity Verbosity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "CPP_Default_Color", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Duration", "3.000000" },
		{ "CPP_Default_Segments", "12" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "CPP_Default_Verbosity", "Basic" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawSphere constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawSphere constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawSphere Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, Segments), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventDrawSphere_Parms, Verbosity), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity, METADATA_PARAMS(0, nullptr) }; // 3016341990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::PropPointers) < 2048);
// ********** End Function DrawSphere Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "DrawSphere", 	Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::PokemonDebugLibrary_eventDrawSphere_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::PokemonDebugLibrary_eventDrawSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execDrawSphere)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_ENUM(EPokemonDebugVerbosity,Z_Param_Verbosity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonDebugLibrary::DrawSphere(Z_Param_WorldContextObject,Z_Param_CategoryTag,Z_Param_Center,Z_Param_Radius,Z_Param_Duration,Z_Param_Color,Z_Param_Segments,Z_Param_Thickness,EPokemonDebugVerbosity(Z_Param_Verbosity));
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function DrawSphere ***********************************

// ********** Begin Class UPokemonDebugLibrary Function IsCategoryEnabled **************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics
{
	struct PokemonDebugLibrary_eventIsCategoryEnabled_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag CategoryTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCategoryEnabled constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCategoryEnabled constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCategoryEnabled Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventIsCategoryEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventIsCategoryEnabled_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonDebugLibrary_eventIsCategoryEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonDebugLibrary_eventIsCategoryEnabled_Parms), &Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsCategoryEnabled Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "IsCategoryEnabled", 	Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::PokemonDebugLibrary_eventIsCategoryEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::PokemonDebugLibrary_eventIsCategoryEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execIsCategoryEnabled)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPokemonDebugLibrary::IsCategoryEnabled(Z_Param_WorldContextObject,Z_Param_CategoryTag);
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function IsCategoryEnabled ****************************

// ********** Begin Class UPokemonDebugLibrary Function PrintMessage *******************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics
{
	struct PokemonDebugLibrary_eventPrintMessage_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag CategoryTag;
		FString Message;
		EPokemonDebugOutputMode OutputMode;
		FLinearColor Color;
		float ScreenDuration;
		EPokemonDebugVerbosity Verbosity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_OutputMode", "Log" },
		{ "CPP_Default_ScreenDuration", "3.000000" },
		{ "CPP_Default_Verbosity", "Basic" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PrintMessage constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PrintMessage constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PrintMessage Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventPrintMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventPrintMessage_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventPrintMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventPrintMessage_Parms, OutputMode), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode, METADATA_PARAMS(0, nullptr) }; // 343017423
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventPrintMessage_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_ScreenDuration = { "ScreenDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventPrintMessage_Parms, ScreenDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventPrintMessage_Parms, Verbosity), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity, METADATA_PARAMS(0, nullptr) }; // 3016341990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_ScreenDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::PropPointers) < 2048);
// ********** End Function PrintMessage Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "PrintMessage", 	Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::PokemonDebugLibrary_eventPrintMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::PokemonDebugLibrary_eventPrintMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execPrintMessage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_ENUM(EPokemonDebugOutputMode,Z_Param_OutputMode);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDuration);
	P_GET_ENUM(EPokemonDebugVerbosity,Z_Param_Verbosity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonDebugLibrary::PrintMessage(Z_Param_WorldContextObject,Z_Param_CategoryTag,Z_Param_Message,EPokemonDebugOutputMode(Z_Param_OutputMode),Z_Param_Color,Z_Param_ScreenDuration,EPokemonDebugVerbosity(Z_Param_Verbosity));
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function PrintMessage *********************************

// ********** Begin Class UPokemonDebugLibrary Function SetCategoryEnabled *************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics
{
	struct PokemonDebugLibrary_eventSetCategoryEnabled_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag CategoryTag;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCategoryEnabled constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCategoryEnabled constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCategoryEnabled Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventSetCategoryEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventSetCategoryEnabled_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((PokemonDebugLibrary_eventSetCategoryEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonDebugLibrary_eventSetCategoryEnabled_Parms), &Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetCategoryEnabled Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "SetCategoryEnabled", 	Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::PokemonDebugLibrary_eventSetCategoryEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::PokemonDebugLibrary_eventSetCategoryEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execSetCategoryEnabled)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonDebugLibrary::SetCategoryEnabled(Z_Param_WorldContextObject,Z_Param_CategoryTag,Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function SetCategoryEnabled ***************************

// ********** Begin Class UPokemonDebugLibrary Function SetMaxVerbosity ****************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics
{
	struct PokemonDebugLibrary_eventSetMaxVerbosity_Parms
	{
		const UObject* WorldContextObject;
		EPokemonDebugVerbosity Verbosity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaxVerbosity constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxVerbosity constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxVerbosity Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventSetMaxVerbosity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventSetMaxVerbosity_Parms, Verbosity), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity, METADATA_PARAMS(0, nullptr) }; // 3016341990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::PropPointers) < 2048);
// ********** End Function SetMaxVerbosity Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "SetMaxVerbosity", 	Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::PokemonDebugLibrary_eventSetMaxVerbosity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::PokemonDebugLibrary_eventSetMaxVerbosity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execSetMaxVerbosity)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EPokemonDebugVerbosity,Z_Param_Verbosity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonDebugLibrary::SetMaxVerbosity(Z_Param_WorldContextObject,EPokemonDebugVerbosity(Z_Param_Verbosity));
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function SetMaxVerbosity ******************************

// ********** Begin Class UPokemonDebugLibrary Function SetObserverActor ***************************
struct Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics
{
	struct PokemonDebugLibrary_eventSetObserverActor_Parms
	{
		const UObject* WorldContextObject;
		const AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetObserverActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetObserverActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetObserverActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventSetObserverActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonDebugLibrary_eventSetObserverActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::PropPointers) < 2048);
// ********** End Function SetObserverActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonDebugLibrary, nullptr, "SetObserverActor", 	Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::PokemonDebugLibrary_eventSetObserverActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::PokemonDebugLibrary_eventSetObserverActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonDebugLibrary::execSetObserverActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPokemonDebugLibrary::SetObserverActor(Z_Param_WorldContextObject,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UPokemonDebugLibrary Function SetObserverActor *****************************

// ********** Begin Class UPokemonDebugLibrary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonDebugLibrary;
UClass* UPokemonDebugLibrary::GetPrivateStaticClass()
{
	using TClass = UPokemonDebugLibrary;
	if (!Z_Registration_Info_UClass_UPokemonDebugLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonDebugLibrary"),
			Z_Registration_Info_UClass_UPokemonDebugLibrary.InnerSingleton,
			StaticRegisterNativesUPokemonDebugLibrary,
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
	return Z_Registration_Info_UClass_UPokemonDebugLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonDebugLibrary_NoRegister()
{
	return UPokemonDebugLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonDebugLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Debugging/PokemonDebugLibrary.h" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonDebugLibrary constinit property declarations *********************
// ********** End Class UPokemonDebugLibrary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearObserverdActor"), .Pointer = &UPokemonDebugLibrary::execClearObserverdActor },
		{ .NameUTF8 = UTF8TEXT("DrawLine"), .Pointer = &UPokemonDebugLibrary::execDrawLine },
		{ .NameUTF8 = UTF8TEXT("DrawSphere"), .Pointer = &UPokemonDebugLibrary::execDrawSphere },
		{ .NameUTF8 = UTF8TEXT("IsCategoryEnabled"), .Pointer = &UPokemonDebugLibrary::execIsCategoryEnabled },
		{ .NameUTF8 = UTF8TEXT("PrintMessage"), .Pointer = &UPokemonDebugLibrary::execPrintMessage },
		{ .NameUTF8 = UTF8TEXT("SetCategoryEnabled"), .Pointer = &UPokemonDebugLibrary::execSetCategoryEnabled },
		{ .NameUTF8 = UTF8TEXT("SetMaxVerbosity"), .Pointer = &UPokemonDebugLibrary::execSetMaxVerbosity },
		{ .NameUTF8 = UTF8TEXT("SetObserverActor"), .Pointer = &UPokemonDebugLibrary::execSetObserverActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_ClearObserverdActor, "ClearObserverdActor" }, // 4141542776
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_DrawLine, "DrawLine" }, // 1120641400
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_DrawSphere, "DrawSphere" }, // 2243613287
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_IsCategoryEnabled, "IsCategoryEnabled" }, // 3596143816
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_PrintMessage, "PrintMessage" }, // 2212292008
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_SetCategoryEnabled, "SetCategoryEnabled" }, // 2202572427
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_SetMaxVerbosity, "SetMaxVerbosity" }, // 1375371396
		{ &Z_Construct_UFunction_UPokemonDebugLibrary_SetObserverActor, "SetObserverActor" }, // 4090987184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonDebugLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonDebugLibrary_Statics
UObject* (*const Z_Construct_UClass_UPokemonDebugLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDebugLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonDebugLibrary_Statics::ClassParams = {
	&UPokemonDebugLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDebugLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonDebugLibrary_Statics::Class_MetaDataParams)
};
void UPokemonDebugLibrary::StaticRegisterNativesUPokemonDebugLibrary()
{
	UClass* Class = UPokemonDebugLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonDebugLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonDebugLibrary()
{
	if (!Z_Registration_Info_UClass_UPokemonDebugLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonDebugLibrary.OuterSingleton, Z_Construct_UClass_UPokemonDebugLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonDebugLibrary.OuterSingleton;
}
UPokemonDebugLibrary::UPokemonDebugLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonDebugLibrary);
UPokemonDebugLibrary::~UPokemonDebugLibrary() {}
// ********** End Class UPokemonDebugLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonDebugLibrary, UPokemonDebugLibrary::StaticClass, TEXT("UPokemonDebugLibrary"), &Z_Registration_Info_UClass_UPokemonDebugLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonDebugLibrary), 2431508561U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h__Script_ProjectMimikyu_1094385644{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugLibrary_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
