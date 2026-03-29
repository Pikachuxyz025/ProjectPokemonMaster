// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PokemonDebugTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonDebugTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonDebugMessage();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPokemonDebugOutputMode ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokemonDebugOutputMode;
static UEnum* EPokemonDebugOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokemonDebugOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokemonDebugOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokemonDebugOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPokemonDebugOutputMode.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonDebugOutputMode>()
{
	return EPokemonDebugOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Log.DisplayName", "Log" },
		{ "Log.Name", "EPokemonDebugOutputMode::Log" },
		{ "LogAndScreen.DisplayName", "Log And Screen" },
		{ "LogAndScreen.Name", "EPokemonDebugOutputMode::LogAndScreen" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPokemonDebugOutputMode::None" },
		{ "OnScreen.DisplayName", "On Screen" },
		{ "OnScreen.Name", "EPokemonDebugOutputMode::OnScreen" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokemonDebugOutputMode::None", (int64)EPokemonDebugOutputMode::None },
		{ "EPokemonDebugOutputMode::Log", (int64)EPokemonDebugOutputMode::Log },
		{ "EPokemonDebugOutputMode::OnScreen", (int64)EPokemonDebugOutputMode::OnScreen },
		{ "EPokemonDebugOutputMode::LogAndScreen", (int64)EPokemonDebugOutputMode::LogAndScreen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokemonDebugOutputMode",
	"EPokemonDebugOutputMode",
	Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPokemonDebugOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokemonDebugOutputMode.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokemonDebugOutputMode.InnerSingleton;
}
// ********** End Enum EPokemonDebugOutputMode *****************************************************

// ********** Begin Enum EPokemonDebugVerbosity ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokemonDebugVerbosity;
static UEnum* EPokemonDebugVerbosity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokemonDebugVerbosity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokemonDebugVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokemonDebugVerbosity"));
	}
	return Z_Registration_Info_UEnum_EPokemonDebugVerbosity.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonDebugVerbosity>()
{
	return EPokemonDebugVerbosity_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Basic.DisplayName", "Basic" },
		{ "Basic.Name", "EPokemonDebugVerbosity::Basic" },
		{ "BlueprintType", "true" },
		{ "Detailed.DisplayName", "Detailed" },
		{ "Detailed.Name", "EPokemonDebugVerbosity::Detailed" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
		{ "Verbose.DisplayName", "Verbose" },
		{ "Verbose.Name", "EPokemonDebugVerbosity::Verbose" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokemonDebugVerbosity::Basic", (int64)EPokemonDebugVerbosity::Basic },
		{ "EPokemonDebugVerbosity::Detailed", (int64)EPokemonDebugVerbosity::Detailed },
		{ "EPokemonDebugVerbosity::Verbose", (int64)EPokemonDebugVerbosity::Verbose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokemonDebugVerbosity",
	"EPokemonDebugVerbosity",
	Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity()
{
	if (!Z_Registration_Info_UEnum_EPokemonDebugVerbosity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokemonDebugVerbosity.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokemonDebugVerbosity.InnerSingleton;
}
// ********** End Enum EPokemonDebugVerbosity ******************************************************

// ********** Begin ScriptStruct FPokemonDebugMessage **********************************************
struct Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPokemonDebugMessage); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPokemonDebugMessage); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryTag_MetaData[] = {
		{ "Category", "PokemonDebugMessage" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "PokemonDebugMessage" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
		{ "Category", "PokemonDebugMessage" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStampInSeconds_MetaData[] = {
		{ "Category", "PokemonDebugMessage" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "PokemonDebugMessage" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[] = {
		{ "Category", "PokemonDebugMessage" },
		{ "ModuleRelativePath", "Public/PokemonDebugTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPokemonDebugMessage constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStampInSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPokemonDebugMessage constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonDebugMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonDebugMessage;
class UScriptStruct* FPokemonDebugMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonDebugMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonDebugMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonDebugMessage, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonDebugMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonDebugMessage.OuterSingleton;
	}

// ********** Begin ScriptStruct FPokemonDebugMessage Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonDebugMessage, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryTag_MetaData), NewProp_CategoryTag_MetaData) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonDebugMessage, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonDebugMessage, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_TimeStampInSeconds = { "TimeStampInSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonDebugMessage, TimeStampInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStampInSeconds_MetaData), NewProp_TimeStampInSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonDebugMessage, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonDebugMessage, Verbosity), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verbosity_MetaData), NewProp_Verbosity_MetaData) }; // 3016341990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_TimeStampInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPokemonDebugMessage Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonDebugMessage",
	Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::PropPointers),
	sizeof(FPokemonDebugMessage),
	alignof(FPokemonDebugMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonDebugMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonDebugMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonDebugMessage.InnerSingleton, Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPokemonDebugMessage.InnerSingleton);
}
// ********** End ScriptStruct FPokemonDebugMessage ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPokemonDebugOutputMode_StaticEnum, TEXT("EPokemonDebugOutputMode"), &Z_Registration_Info_UEnum_EPokemonDebugOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 343017423U) },
		{ EPokemonDebugVerbosity_StaticEnum, TEXT("EPokemonDebugVerbosity"), &Z_Registration_Info_UEnum_EPokemonDebugVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3016341990U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPokemonDebugMessage::StaticStruct, Z_Construct_UScriptStruct_FPokemonDebugMessage_Statics::NewStructOps, TEXT("PokemonDebugMessage"),&Z_Registration_Info_UScriptStruct_FPokemonDebugMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonDebugMessage), 1821803622U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h__Script_ProjectMimikyu_1407045357{
	TEXT("/Script/ProjectMimikyu"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_PokemonDebugTypes_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
