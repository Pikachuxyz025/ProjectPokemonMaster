// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debugging/PokemonDebugWorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "PokemonDebugTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonDebugWorldSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDebugWorldSubsystem();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonDebugWorldSubsystem_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonDebugMessage();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonDebugWorldSubsystem **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem;
UClass* UPokemonDebugWorldSubsystem::GetPrivateStaticClass()
{
	using TClass = UPokemonDebugWorldSubsystem;
	if (!Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonDebugWorldSubsystem"),
			Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem.InnerSingleton,
			StaticRegisterNativesUPokemonDebugWorldSubsystem,
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
	return Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonDebugWorldSubsystem_NoRegister()
{
	return UPokemonDebugWorldSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Debugging/PokemonDebugWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalDebugEnabled_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultEnableAllCategories_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStoredMessages_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentMessages_MetaData[] = {
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerbosity_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Debugging/PokemonDebugWorldSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonDebugWorldSubsystem constinit property declarations **************
	static void NewProp_bGlobalDebugEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalDebugEnabled;
	static void NewProp_bDefaultEnableAllCategories_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultEnableAllCategories;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStoredMessages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecentMessages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RecentMessages;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxVerbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxVerbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonDebugWorldSubsystem constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonDebugWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics

// ********** Begin Class UPokemonDebugWorldSubsystem Property Definitions *************************
void Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bGlobalDebugEnabled_SetBit(void* Obj)
{
	((UPokemonDebugWorldSubsystem*)Obj)->bGlobalDebugEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bGlobalDebugEnabled = { "bGlobalDebugEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonDebugWorldSubsystem), &Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bGlobalDebugEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGlobalDebugEnabled_MetaData), NewProp_bGlobalDebugEnabled_MetaData) };
void Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bDefaultEnableAllCategories_SetBit(void* Obj)
{
	((UPokemonDebugWorldSubsystem*)Obj)->bDefaultEnableAllCategories = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bDefaultEnableAllCategories = { "bDefaultEnableAllCategories", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonDebugWorldSubsystem), &Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bDefaultEnableAllCategories_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultEnableAllCategories_MetaData), NewProp_bDefaultEnableAllCategories_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_MaxStoredMessages = { "MaxStoredMessages", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDebugWorldSubsystem, MaxStoredMessages), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStoredMessages_MetaData), NewProp_MaxStoredMessages_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_EnabledCategories = { "EnabledCategories", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDebugWorldSubsystem, EnabledCategories), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledCategories_MetaData), NewProp_EnabledCategories_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_RecentMessages_Inner = { "RecentMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonDebugMessage, METADATA_PARAMS(0, nullptr) }; // 1821803622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_RecentMessages = { "RecentMessages", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDebugWorldSubsystem, RecentMessages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentMessages_MetaData), NewProp_RecentMessages_MetaData) }; // 1821803622
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_MaxVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_MaxVerbosity = { "MaxVerbosity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonDebugWorldSubsystem, MaxVerbosity), Z_Construct_UEnum_ProjectMimikyu_EPokemonDebugVerbosity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVerbosity_MetaData), NewProp_MaxVerbosity_MetaData) }; // 3016341990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bGlobalDebugEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_bDefaultEnableAllCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_MaxStoredMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_EnabledCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_RecentMessages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_RecentMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_MaxVerbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::NewProp_MaxVerbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UPokemonDebugWorldSubsystem Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::ClassParams = {
	&UPokemonDebugWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::Class_MetaDataParams)
};
void UPokemonDebugWorldSubsystem::StaticRegisterNativesUPokemonDebugWorldSubsystem()
{
}
UClass* Z_Construct_UClass_UPokemonDebugWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem.OuterSingleton, Z_Construct_UClass_UPokemonDebugWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem.OuterSingleton;
}
UPokemonDebugWorldSubsystem::UPokemonDebugWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonDebugWorldSubsystem);
UPokemonDebugWorldSubsystem::~UPokemonDebugWorldSubsystem() {}
// ********** End Class UPokemonDebugWorldSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugWorldSubsystem_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonDebugWorldSubsystem, UPokemonDebugWorldSubsystem::StaticClass, TEXT("UPokemonDebugWorldSubsystem"), &Z_Registration_Info_UClass_UPokemonDebugWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonDebugWorldSubsystem), 2466169444U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugWorldSubsystem_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugWorldSubsystem_h__Script_ProjectMimikyu_2505953686{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugWorldSubsystem_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Debugging_PokemonDebugWorldSubsystem_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
