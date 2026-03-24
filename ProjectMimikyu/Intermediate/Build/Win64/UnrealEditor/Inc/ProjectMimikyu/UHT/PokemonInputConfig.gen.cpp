// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/PokemonInputConfig.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonInputConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputAction();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputDodgeAction();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPokemonInputAction ***********************************************
struct Z_Construct_UScriptStruct_FPokemonInputAction_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPokemonInputAction); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPokemonInputAction); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "PokemonInputAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "PokemonInputAction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly)\n//FGameplayTag InputTag = FGameplayTag();\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly)\nFGameplayTag InputTag = FGameplayTag();" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPokemonInputAction constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPokemonInputAction constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPokemonInputAction_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonInputAction;
class UScriptStruct* FPokemonInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInputAction, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonInputAction.OuterSingleton;
	}

// ********** Begin ScriptStruct FPokemonInputAction Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputAction, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPokemonInputAction Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonInputAction",
	Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::PropPointers),
	sizeof(FPokemonInputAction),
	alignof(FPokemonInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonInputAction.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInputAction_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPokemonInputAction.InnerSingleton);
}
// ********** End ScriptStruct FPokemonInputAction *************************************************

// ********** Begin ScriptStruct FPokemonInputKeySequenceAction ************************************
struct Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPokemonInputKeySequenceAction); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPokemonInputKeySequenceAction); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "PokemonInputKeySequenceAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirection_MetaData[] = {
		{ "Category", "PokemonInputKeySequenceAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPokemonInputKeySequenceAction constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPokemonInputKeySequenceAction constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInputKeySequenceAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction;
class UScriptStruct* FPokemonInputKeySequenceAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInputKeySequenceAction"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction.OuterSingleton;
	}

// ********** Begin ScriptStruct FPokemonInputKeySequenceAction Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputKeySequenceAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::NewProp_KeyDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::NewProp_KeyDirection = { "KeyDirection", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputKeySequenceAction, KeyDirection), Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyDirection_MetaData), NewProp_KeyDirection_MetaData) }; // 4250284492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::NewProp_KeyDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::NewProp_KeyDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPokemonInputKeySequenceAction Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonInputKeySequenceAction",
	Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::PropPointers),
	sizeof(FPokemonInputKeySequenceAction),
	alignof(FPokemonInputKeySequenceAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction.InnerSingleton);
}
// ********** End ScriptStruct FPokemonInputKeySequenceAction **************************************

// ********** Begin ScriptStruct FPokemonInputDodgeAction ******************************************
struct Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPokemonInputDodgeAction); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPokemonInputDodgeAction); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "PokemonInputDodgeAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "PokemonInputDodgeAction" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPokemonInputDodgeAction constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPokemonInputDodgeAction constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInputDodgeAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction;
class UScriptStruct* FPokemonInputDodgeAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInputDodgeAction, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInputDodgeAction"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction.OuterSingleton;
	}

// ********** Begin ScriptStruct FPokemonInputDodgeAction Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputDodgeAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputDodgeAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPokemonInputDodgeAction Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonInputDodgeAction",
	Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::PropPointers),
	sizeof(FPokemonInputDodgeAction),
	alignof(FPokemonInputDodgeAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputDodgeAction()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction.InnerSingleton);
}
// ********** End ScriptStruct FPokemonInputDodgeAction ********************************************

// ********** Begin Class UPokemonInputConfig ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonInputConfig;
UClass* UPokemonInputConfig::GetPrivateStaticClass()
{
	using TClass = UPokemonInputConfig;
	if (!Z_Registration_Info_UClass_UPokemonInputConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonInputConfig"),
			Z_Registration_Info_UClass_UPokemonInputConfig.InnerSingleton,
			StaticRegisterNativesUPokemonInputConfig,
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
	return Z_Registration_Info_UClass_UPokemonInputConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonInputConfig_NoRegister()
{
	return UPokemonInputConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/PokemonInputConfig.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "PokemonInputConfig" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeInputActions_MetaData[] = {
		{ "Category", "PokemonInputConfig" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySequenceInputActions_MetaData[] = {
		{ "Category", "PokemonInputConfig" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonInputConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonInputConfig constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DodgeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DodgeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeySequenceInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeySequenceInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonInputConfig constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonInputConfig_Statics

// ********** Begin Class UPokemonInputConfig Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInputAction, METADATA_PARAMS(0, nullptr) }; // 2656154033
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 2656154033
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions_Inner = { "DodgeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInputDodgeAction, METADATA_PARAMS(0, nullptr) }; // 1307539588
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions = { "DodgeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonInputConfig, DodgeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeInputActions_MetaData), NewProp_DodgeInputActions_MetaData) }; // 1307539588
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_KeySequenceInputActions_Inner = { "KeySequenceInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction, METADATA_PARAMS(0, nullptr) }; // 1169000086
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_KeySequenceInputActions = { "KeySequenceInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonInputConfig, KeySequenceInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySequenceInputActions_MetaData), NewProp_KeySequenceInputActions_MetaData) }; // 1169000086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_AbilityInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_DodgeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_KeySequenceInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonInputConfig_Statics::NewProp_KeySequenceInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers) < 2048);
// ********** End Class UPokemonInputConfig Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPokemonInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonInputConfig_Statics::ClassParams = {
	&UPokemonInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonInputConfig_Statics::Class_MetaDataParams)
};
void UPokemonInputConfig::StaticRegisterNativesUPokemonInputConfig()
{
}
UClass* Z_Construct_UClass_UPokemonInputConfig()
{
	if (!Z_Registration_Info_UClass_UPokemonInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonInputConfig.OuterSingleton, Z_Construct_UClass_UPokemonInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonInputConfig.OuterSingleton;
}
UPokemonInputConfig::UPokemonInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonInputConfig);
UPokemonInputConfig::~UPokemonInputConfig() {}
// ********** End Class UPokemonInputConfig ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPokemonInputAction::StaticStruct, Z_Construct_UScriptStruct_FPokemonInputAction_Statics::NewStructOps, TEXT("PokemonInputAction"),&Z_Registration_Info_UScriptStruct_FPokemonInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInputAction), 2656154033U) },
		{ FPokemonInputKeySequenceAction::StaticStruct, Z_Construct_UScriptStruct_FPokemonInputKeySequenceAction_Statics::NewStructOps, TEXT("PokemonInputKeySequenceAction"),&Z_Registration_Info_UScriptStruct_FPokemonInputKeySequenceAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInputKeySequenceAction), 1169000086U) },
		{ FPokemonInputDodgeAction::StaticStruct, Z_Construct_UScriptStruct_FPokemonInputDodgeAction_Statics::NewStructOps, TEXT("PokemonInputDodgeAction"),&Z_Registration_Info_UScriptStruct_FPokemonInputDodgeAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInputDodgeAction), 1307539588U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonInputConfig, UPokemonInputConfig::StaticClass, TEXT("UPokemonInputConfig"), &Z_Registration_Info_UClass_UPokemonInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonInputConfig), 273912851U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h__Script_ProjectMimikyu_316662406{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonInputConfig_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
