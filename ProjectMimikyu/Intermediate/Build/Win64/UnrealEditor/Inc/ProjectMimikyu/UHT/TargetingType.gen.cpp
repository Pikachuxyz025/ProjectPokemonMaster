// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/TargetingType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTargetingType() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EAimContext();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FAimData();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPokemonAimMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokemonAimMode;
static UEnum* EPokemonAimMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokemonAimMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokemonAimMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EPokemonAimMode"));
	}
	return Z_Registration_Info_UEnum_EPokemonAimMode.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EPokemonAimMode>()
{
	return EPokemonAimMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FreeAim.DisplayName", "Free Aim" },
		{ "FreeAim.Name", "EPokemonAimMode::FreeAim" },
		{ "LockOn.DisplayName", "Lock On" },
		{ "LockOn.Name", "EPokemonAimMode::LockOn" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokemonAimMode::LockOn", (int64)EPokemonAimMode::LockOn },
		{ "EPokemonAimMode::FreeAim", (int64)EPokemonAimMode::FreeAim },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EPokemonAimMode",
	"EPokemonAimMode",
	Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode()
{
	if (!Z_Registration_Info_UEnum_EPokemonAimMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokemonAimMode.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokemonAimMode.InnerSingleton;
}
// ********** End Enum EPokemonAimMode *************************************************************

// ********** Begin Enum EAimContext ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAimContext;
static UEnum* EAimContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAimContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAimContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectMimikyu_EAimContext, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("EAimContext"));
	}
	return Z_Registration_Info_UEnum_EAimContext.OuterSingleton;
}
template<> PROJECTMIMIKYU_NON_ATTRIBUTED_API UEnum* StaticEnum<EAimContext>()
{
	return EAimContext_StaticEnum();
}
struct Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Capture.DisplayName", "Capture" },
		{ "Capture.Name", "EAimContext::Capture" },
		{ "Combat.DisplayName", "Combat" },
		{ "Combat.Name", "EAimContext::Combat" },
		{ "CommandMove.DisplayName", "Command Move" },
		{ "CommandMove.Name", "EAimContext::CommandMove" },
		{ "Interaction.DisplayName", "Interaction" },
		{ "Interaction.Name", "EAimContext::Interaction" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAimContext::Combat", (int64)EAimContext::Combat },
		{ "EAimContext::Capture", (int64)EAimContext::Capture },
		{ "EAimContext::Interaction", (int64)EAimContext::Interaction },
		{ "EAimContext::CommandMove", (int64)EAimContext::CommandMove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	"EAimContext",
	"EAimContext",
	Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectMimikyu_EAimContext()
{
	if (!Z_Registration_Info_UEnum_EAimContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAimContext.InnerSingleton, Z_Construct_UEnum_ProjectMimikyu_EAimContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAimContext.InnerSingleton;
}
// ********** End Enum EAimContext *****************************************************************

// ********** Begin ScriptStruct FAimData **********************************************************
struct Z_Construct_UScriptStruct_FAimData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAimData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAimData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimMode_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimContext_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimWorldLocation_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimDirection_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLaunchVelocity_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasProjectileSolution_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidTarget_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingAimAssist_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectileAtMaxSpeed_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLaunchSpeed_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Public/ActorComponents/TargetingType.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAimData constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AimMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AimMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AimContext_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AimContext;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimWorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileLaunchVelocity;
	static void NewProp_bHasProjectileSolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasProjectileSolution;
	static void NewProp_bHasValidTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidTarget;
	static void NewProp_bUsingAimAssist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingAimAssist;
	static void NewProp_bProjectileAtMaxSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectileAtMaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileLaunchSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAimData constinit property declarations ****************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAimData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAimData;
class UScriptStruct* FAimData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAimData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAimData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimData, (UObject*)Z_Construct_UPackage__Script_ProjectMimikyu(), TEXT("AimData"));
	}
	return Z_Registration_Info_UScriptStruct_FAimData.OuterSingleton;
	}

// ********** Begin ScriptStruct FAimData Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimMode = { "AimMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, AimMode), Z_Construct_UEnum_ProjectMimikyu_EPokemonAimMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimMode_MetaData), NewProp_AimMode_MetaData) }; // 3126381474
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimContext = { "AimContext", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, AimContext), Z_Construct_UEnum_ProjectMimikyu_EAimContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimContext_MetaData), NewProp_AimContext_MetaData) }; // 726377209
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimWorldLocation = { "AimWorldLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, AimWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimWorldLocation_MetaData), NewProp_AimWorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimDirection = { "AimDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, AimDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimDirection_MetaData), NewProp_AimDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_ProjectileLaunchVelocity = { "ProjectileLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, ProjectileLaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLaunchVelocity_MetaData), NewProp_ProjectileLaunchVelocity_MetaData) };
void Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasProjectileSolution_SetBit(void* Obj)
{
	((FAimData*)Obj)->bHasProjectileSolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasProjectileSolution = { "bHasProjectileSolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAimData), &Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasProjectileSolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasProjectileSolution_MetaData), NewProp_bHasProjectileSolution_MetaData) };
void Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasValidTarget_SetBit(void* Obj)
{
	((FAimData*)Obj)->bHasValidTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasValidTarget = { "bHasValidTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAimData), &Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasValidTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasValidTarget_MetaData), NewProp_bHasValidTarget_MetaData) };
void Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bUsingAimAssist_SetBit(void* Obj)
{
	((FAimData*)Obj)->bUsingAimAssist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bUsingAimAssist = { "bUsingAimAssist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAimData), &Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bUsingAimAssist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingAimAssist_MetaData), NewProp_bUsingAimAssist_MetaData) };
void Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bProjectileAtMaxSpeed_SetBit(void* Obj)
{
	((FAimData*)Obj)->bProjectileAtMaxSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bProjectileAtMaxSpeed = { "bProjectileAtMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAimData), &Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bProjectileAtMaxSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectileAtMaxSpeed_MetaData), NewProp_bProjectileAtMaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_ProjectileLaunchSpeed = { "ProjectileLaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimData, ProjectileLaunchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLaunchSpeed_MetaData), NewProp_ProjectileLaunchSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimContext_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimWorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_AimDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_ProjectileLaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasProjectileSolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bHasValidTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bUsingAimAssist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bProjectileAtMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_ProjectileLaunchSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAimData Property Definitions ***************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	nullptr,
	&NewStructOps,
	"AimData",
	Z_Construct_UScriptStruct_FAimData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::PropPointers),
	sizeof(FAimData),
	alignof(FAimData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAimData()
{
	if (!Z_Registration_Info_UScriptStruct_FAimData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAimData.InnerSingleton, Z_Construct_UScriptStruct_FAimData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAimData.InnerSingleton);
}
// ********** End ScriptStruct FAimData ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h__Script_ProjectMimikyu_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPokemonAimMode_StaticEnum, TEXT("EPokemonAimMode"), &Z_Registration_Info_UEnum_EPokemonAimMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3126381474U) },
		{ EAimContext_StaticEnum, TEXT("EAimContext"), &Z_Registration_Info_UEnum_EAimContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 726377209U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAimData::StaticStruct, Z_Construct_UScriptStruct_FAimData_Statics::NewStructOps, TEXT("AimData"),&Z_Registration_Info_UScriptStruct_FAimData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAimData), 713287180U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h__Script_ProjectMimikyu_2785751405{
	TEXT("/Script/ProjectMimikyu"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h__Script_ProjectMimikyu_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h__Script_ProjectMimikyu_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h__Script_ProjectMimikyu_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_TargetingType_h__Script_ProjectMimikyu_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
