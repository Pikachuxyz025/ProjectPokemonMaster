// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonGameplayAbilities() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FMoveTiming();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputInfo();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPokemonInputInfo *************************************************
struct Z_Construct_UScriptStruct_FPokemonInputInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPokemonInputInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPokemonInputInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonUpgradeTag_MetaData[] = {
		{ "Categories", "Abilities" },
		{ "Category", "PokemonInputInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirectionSequence_MetaData[] = {
		{ "Category", "PokemonInputInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPokemonInputInfo constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PokemonUpgradeTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyDirectionSequence_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyDirectionSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyDirectionSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPokemonInputInfo constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokemonInputInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPokemonInputInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPokemonInputInfo;
class UScriptStruct* FPokemonInputInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPokemonInputInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokemonInputInfo, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("PokemonInputInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPokemonInputInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FPokemonInputInfo Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_PokemonUpgradeTag = { "PokemonUpgradeTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputInfo, PokemonUpgradeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonUpgradeTag_MetaData), NewProp_PokemonUpgradeTag_MetaData) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner = { "KeyDirectionSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectMimikyu_EDirectionPoint, METADATA_PARAMS(0, nullptr) }; // 4250284492
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence = { "KeyDirectionSequence", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokemonInputInfo, KeyDirectionSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyDirectionSequence_MetaData), NewProp_KeyDirectionSequence_MetaData) }; // 4250284492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_PokemonUpgradeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewProp_KeyDirectionSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPokemonInputInfo Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"PokemonInputInfo",
	Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::PropPointers),
	sizeof(FPokemonInputInfo),
	alignof(FPokemonInputInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokemonInputInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPokemonInputInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPokemonInputInfo.InnerSingleton, Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPokemonInputInfo.InnerSingleton);
}
// ********** End ScriptStruct FPokemonInputInfo ***************************************************

// ********** Begin ScriptStruct FMoveTiming *******************************************************
struct Z_Construct_UScriptStruct_FMoveTiming_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMoveTiming); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMoveTiming); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandDelay_MetaData[] = {
		{ "Category", "MoveTiming" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnticipationDuration_MetaData[] = {
		{ "Category", "MoveTiming" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDuration_MetaData[] = {
		{ "Category", "MoveTiming" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryDuration_MetaData[] = {
		{ "Category", "MoveTiming" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeWindowStart_MetaData[] = {
		{ "Category", "MoveTiming" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeWindowEnd_MetaData[] = {
		{ "Category", "MoveTiming" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMoveTiming constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CommandDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnticipationDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeWindowStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeWindowEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMoveTiming constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveTiming>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMoveTiming_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoveTiming;
class UScriptStruct* FMoveTiming::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoveTiming.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoveTiming.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveTiming, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("MoveTiming"));
	}
	return Z_Registration_Info_UScriptStruct_FMoveTiming.OuterSingleton;
	}

// ********** Begin ScriptStruct FMoveTiming Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_CommandDelay = { "CommandDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveTiming, CommandDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandDelay_MetaData), NewProp_CommandDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_AnticipationDuration = { "AnticipationDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveTiming, AnticipationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnticipationDuration_MetaData), NewProp_AnticipationDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_ActiveDuration = { "ActiveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveTiming, ActiveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDuration_MetaData), NewProp_ActiveDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_RecoveryDuration = { "RecoveryDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveTiming, RecoveryDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryDuration_MetaData), NewProp_RecoveryDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_DodgeWindowStart = { "DodgeWindowStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveTiming, DodgeWindowStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeWindowStart_MetaData), NewProp_DodgeWindowStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_DodgeWindowEnd = { "DodgeWindowEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveTiming, DodgeWindowEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeWindowEnd_MetaData), NewProp_DodgeWindowEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoveTiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_CommandDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_AnticipationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_ActiveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_RecoveryDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_DodgeWindowStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveTiming_Statics::NewProp_DodgeWindowEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveTiming_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMoveTiming Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveTiming_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"MoveTiming",
	Z_Construct_UScriptStruct_FMoveTiming_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveTiming_Statics::PropPointers),
	sizeof(FMoveTiming),
	alignof(FMoveTiming),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveTiming_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoveTiming_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoveTiming()
{
	if (!Z_Registration_Info_UScriptStruct_FMoveTiming.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoveTiming.InnerSingleton, Z_Construct_UScriptStruct_FMoveTiming_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMoveTiming.InnerSingleton);
}
// ********** End ScriptStruct FMoveTiming *********************************************************

// ********** Begin Class UPokemonGameplayAbilities ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonGameplayAbilities;
UClass* UPokemonGameplayAbilities::GetPrivateStaticClass()
{
	using TClass = UPokemonGameplayAbilities;
	if (!Z_Registration_Info_UClass_UPokemonGameplayAbilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonGameplayAbilities"),
			Z_Registration_Info_UClass_UPokemonGameplayAbilities.InnerSingleton,
			StaticRegisterNativesUPokemonGameplayAbilities,
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
	return Z_Registration_Info_UClass_UPokemonGameplayAbilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister()
{
	return UPokemonGameplayAbilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonGameplayAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTimingSequence_MetaData[] = {
		{ "Category", "PokemonGameplayAbilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonGameplayAbilities constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveTimingSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonGameplayAbilities constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonGameplayAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonGameplayAbilities_Statics

// ********** Begin Class UPokemonGameplayAbilities Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveTimingSequence = { "MoveTimingSequence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonGameplayAbilities, MoveTimingSequence), Z_Construct_UScriptStruct_FMoveTiming, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTimingSequence_MetaData), NewProp_MoveTimingSequence_MetaData) }; // 973628420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonGameplayAbilities_Statics::NewProp_MoveTimingSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers) < 2048);
// ********** End Class UPokemonGameplayAbilities Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams = {
	&UPokemonGameplayAbilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonGameplayAbilities_Statics::Class_MetaDataParams)
};
void UPokemonGameplayAbilities::StaticRegisterNativesUPokemonGameplayAbilities()
{
}
UClass* Z_Construct_UClass_UPokemonGameplayAbilities()
{
	if (!Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton, Z_Construct_UClass_UPokemonGameplayAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonGameplayAbilities.OuterSingleton;
}
UPokemonGameplayAbilities::UPokemonGameplayAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonGameplayAbilities);
UPokemonGameplayAbilities::~UPokemonGameplayAbilities() {}
// ********** End Class UPokemonGameplayAbilities **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h__Script_ProjectMimikyu_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPokemonInputInfo::StaticStruct, Z_Construct_UScriptStruct_FPokemonInputInfo_Statics::NewStructOps, TEXT("PokemonInputInfo"),&Z_Registration_Info_UScriptStruct_FPokemonInputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokemonInputInfo), 2871426681U) },
		{ FMoveTiming::StaticStruct, Z_Construct_UScriptStruct_FMoveTiming_Statics::NewStructOps, TEXT("MoveTiming"),&Z_Registration_Info_UScriptStruct_FMoveTiming, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoveTiming), 973628420U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonGameplayAbilities, UPokemonGameplayAbilities::StaticClass, TEXT("UPokemonGameplayAbilities"), &Z_Registration_Info_UClass_UPokemonGameplayAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonGameplayAbilities), 559539675U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h__Script_ProjectMimikyu_1881639508{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h__Script_ProjectMimikyu_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_PokemonGameplayAbilities_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
