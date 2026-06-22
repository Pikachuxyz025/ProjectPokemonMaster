// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonCombatSocketComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonCombatSocketComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatSocketComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatSocketComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonCombatSocketComponent Function GetCombatSocketLocation ***********
struct Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics
{
	struct PokemonCombatSocketComponent_eventGetCombatSocketLocation_Parms
	{
		FGameplayTag SocketTag;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Combat Socket" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCombatSocketLocation constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCombatSocketLocation constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCombatSocketLocation Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatSocketComponent_eventGetCombatSocketLocation_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTag_MetaData), NewProp_SocketTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatSocketComponent_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::NewProp_SocketTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::PropPointers) < 2048);
// ********** End Function GetCombatSocketLocation Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCombatSocketComponent, nullptr, "GetCombatSocketLocation", 	Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::PokemonCombatSocketComponent_eventGetCombatSocketLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::PokemonCombatSocketComponent_eventGetCombatSocketLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCombatSocketComponent::execGetCombatSocketLocation)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SocketTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation(Z_Param_Out_SocketTag);
	P_NATIVE_END;
}
// ********** End Class UPokemonCombatSocketComponent Function GetCombatSocketLocation *************

// ********** Begin Class UPokemonCombatSocketComponent Function GetSocketNameFromTag **************
struct Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics
{
	struct PokemonCombatSocketComponent_eventGetSocketNameFromTag_Parms
	{
		FGameplayTag SocketTag;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Combat Socket" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSocketNameFromTag constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSocketNameFromTag constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSocketNameFromTag Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatSocketComponent_eventGetSocketNameFromTag_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTag_MetaData), NewProp_SocketTag_MetaData) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatSocketComponent_eventGetSocketNameFromTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::NewProp_SocketTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::PropPointers) < 2048);
// ********** End Function GetSocketNameFromTag Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCombatSocketComponent, nullptr, "GetSocketNameFromTag", 	Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::PokemonCombatSocketComponent_eventGetSocketNameFromTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::PokemonCombatSocketComponent_eventGetSocketNameFromTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCombatSocketComponent::execGetSocketNameFromTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SocketTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSocketNameFromTag(Z_Param_Out_SocketTag);
	P_NATIVE_END;
}
// ********** End Class UPokemonCombatSocketComponent Function GetSocketNameFromTag ****************

// ********** Begin Class UPokemonCombatSocketComponent ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonCombatSocketComponent;
UClass* UPokemonCombatSocketComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonCombatSocketComponent;
	if (!Z_Registration_Info_UClass_UPokemonCombatSocketComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonCombatSocketComponent"),
			Z_Registration_Info_UClass_UPokemonCombatSocketComponent.InnerSingleton,
			StaticRegisterNativesUPokemonCombatSocketComponent,
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
	return Z_Registration_Info_UClass_UPokemonCombatSocketComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonCombatSocketComponent_NoRegister()
{
	return UPokemonCombatSocketComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonCombatSocketComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pokemon" },
		{ "IncludePath", "ActorComponents/PokemonCombatSocketComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSocketName_MetaData[] = {
		{ "Category", "Pokemon|Combat Socket" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeSocketName_MetaData[] = {
		{ "Category", "Pokemon|Combat Socket" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TailSocketName_MetaData[] = {
		{ "Category", "Pokemon|Combat Socket" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "Pokemon|Combat Socket" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "Pokemon|Combat Socket" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCombatSocketComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonCombatSocketComponent constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPokemon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MeleeSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TailSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonCombatSocketComponent constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCombatSocketLocation"), .Pointer = &UPokemonCombatSocketComponent::execGetCombatSocketLocation },
		{ .NameUTF8 = UTF8TEXT("GetSocketNameFromTag"), .Pointer = &UPokemonCombatSocketComponent::execGetSocketNameFromTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonCombatSocketComponent_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 4093081316
		{ &Z_Construct_UFunction_UPokemonCombatSocketComponent_GetSocketNameFromTag, "GetSocketNameFromTag" }, // 4224439601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonCombatSocketComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonCombatSocketComponent_Statics

// ********** Begin Class UPokemonCombatSocketComponent Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_OwnerPokemon = { "OwnerPokemon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCombatSocketComponent, OwnerPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPokemon_MetaData), NewProp_OwnerPokemon_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_ProjectileSocketName = { "ProjectileSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCombatSocketComponent, ProjectileSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSocketName_MetaData), NewProp_ProjectileSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_MeleeSocketName = { "MeleeSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCombatSocketComponent, MeleeSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeSocketName_MetaData), NewProp_MeleeSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_TailSocketName = { "TailSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCombatSocketComponent, TailSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TailSocketName_MetaData), NewProp_TailSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCombatSocketComponent, LeftHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandSocketName_MetaData), NewProp_LeftHandSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCombatSocketComponent, RightHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandSocketName_MetaData), NewProp_RightHandSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_OwnerPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_ProjectileSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_MeleeSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_TailSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_LeftHandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::NewProp_RightHandSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokemonCombatSocketComponent Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::ClassParams = {
	&UPokemonCombatSocketComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::Class_MetaDataParams)
};
void UPokemonCombatSocketComponent::StaticRegisterNativesUPokemonCombatSocketComponent()
{
	UClass* Class = UPokemonCombatSocketComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonCombatSocketComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonCombatSocketComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonCombatSocketComponent.OuterSingleton, Z_Construct_UClass_UPokemonCombatSocketComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonCombatSocketComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonCombatSocketComponent);
UPokemonCombatSocketComponent::~UPokemonCombatSocketComponent() {}
// ********** End Class UPokemonCombatSocketComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCombatSocketComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonCombatSocketComponent, UPokemonCombatSocketComponent::StaticClass, TEXT("UPokemonCombatSocketComponent"), &Z_Registration_Info_UClass_UPokemonCombatSocketComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonCombatSocketComponent), 665337924U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCombatSocketComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCombatSocketComponent_h__Script_ProjectMimikyu_4050090627{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCombatSocketComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCombatSocketComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
