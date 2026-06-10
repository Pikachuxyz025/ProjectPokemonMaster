// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonFieldPresenceComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonFieldPresenceComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonFieldPresenceComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonFieldPresenceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonFieldPresenceComponent Function IsPreparedForFieldRemoval ********
struct Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics
{
	struct PokemonFieldPresenceComponent_eventIsPreparedForFieldRemoval_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Field Presence" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPreparedForFieldRemoval constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPreparedForFieldRemoval constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPreparedForFieldRemoval Property Definitions ************************
void Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonFieldPresenceComponent_eventIsPreparedForFieldRemoval_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonFieldPresenceComponent_eventIsPreparedForFieldRemoval_Parms), &Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::PropPointers) < 2048);
// ********** End Function IsPreparedForFieldRemoval Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonFieldPresenceComponent, nullptr, "IsPreparedForFieldRemoval", 	Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::PokemonFieldPresenceComponent_eventIsPreparedForFieldRemoval_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::PokemonFieldPresenceComponent_eventIsPreparedForFieldRemoval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonFieldPresenceComponent::execIsPreparedForFieldRemoval)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreparedForFieldRemoval();
	P_NATIVE_END;
}
// ********** End Class UPokemonFieldPresenceComponent Function IsPreparedForFieldRemoval **********

// ********** Begin Class UPokemonFieldPresenceComponent Function MulticastPlayReturnEffects *******
static FName NAME_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects = FName(TEXT("MulticastPlayReturnEffects"));
void UPokemonFieldPresenceComponent::MulticastPlayReturnEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastPlayReturnEffects constinit property declarations ************
// ********** End Function MulticastPlayReturnEffects constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonFieldPresenceComponent, nullptr, "MulticastPlayReturnEffects", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonFieldPresenceComponent::execMulticastPlayReturnEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPlayReturnEffects_Implementation();
	P_NATIVE_END;
}
// ********** End Class UPokemonFieldPresenceComponent Function MulticastPlayReturnEffects *********

// ********** Begin Class UPokemonFieldPresenceComponent Function PrepareForFieldRemoval ***********
struct Z_Construct_UFunction_UPokemonFieldPresenceComponent_PrepareForFieldRemoval_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Field Presence" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PrepareForFieldRemoval constinit property declarations ****************
// ********** End Function PrepareForFieldRemoval constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonFieldPresenceComponent_PrepareForFieldRemoval_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonFieldPresenceComponent, nullptr, "PrepareForFieldRemoval", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonFieldPresenceComponent_PrepareForFieldRemoval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonFieldPresenceComponent_PrepareForFieldRemoval_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonFieldPresenceComponent_PrepareForFieldRemoval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonFieldPresenceComponent_PrepareForFieldRemoval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonFieldPresenceComponent::execPrepareForFieldRemoval)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareForFieldRemoval();
	P_NATIVE_END;
}
// ********** End Class UPokemonFieldPresenceComponent Function PrepareForFieldRemoval *************

// ********** Begin Class UPokemonFieldPresenceComponent Function ReturnToFieldStorage *************
struct Z_Construct_UFunction_UPokemonFieldPresenceComponent_ReturnToFieldStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Field Presence" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnToFieldStorage constinit property declarations ******************
// ********** End Function ReturnToFieldStorage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonFieldPresenceComponent_ReturnToFieldStorage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonFieldPresenceComponent, nullptr, "ReturnToFieldStorage", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonFieldPresenceComponent_ReturnToFieldStorage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonFieldPresenceComponent_ReturnToFieldStorage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonFieldPresenceComponent_ReturnToFieldStorage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonFieldPresenceComponent_ReturnToFieldStorage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonFieldPresenceComponent::execReturnToFieldStorage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnToFieldStorage();
	P_NATIVE_END;
}
// ********** End Class UPokemonFieldPresenceComponent Function ReturnToFieldStorage ***************

// ********** Begin Class UPokemonFieldPresenceComponent *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonFieldPresenceComponent;
UClass* UPokemonFieldPresenceComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonFieldPresenceComponent;
	if (!Z_Registration_Info_UClass_UPokemonFieldPresenceComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonFieldPresenceComponent"),
			Z_Registration_Info_UClass_UPokemonFieldPresenceComponent.InnerSingleton,
			StaticRegisterNativesUPokemonFieldPresenceComponent,
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
	return Z_Registration_Info_UClass_UPokemonFieldPresenceComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonFieldPresenceComponent_NoRegister()
{
	return UPokemonFieldPresenceComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pokemon" },
		{ "IncludePath", "ActorComponents/PokemonFieldPresenceComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreparedForFieldRemoval_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Field Presence" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnLifeSpanAfterEffects_MetaData[] = {
		{ "Category", "Pokemon|Field Presence" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonFieldPresenceComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonFieldPresenceComponent constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPokemon;
	static void NewProp_bPreparedForFieldRemoval_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreparedForFieldRemoval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnLifeSpanAfterEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonFieldPresenceComponent constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsPreparedForFieldRemoval"), .Pointer = &UPokemonFieldPresenceComponent::execIsPreparedForFieldRemoval },
		{ .NameUTF8 = UTF8TEXT("MulticastPlayReturnEffects"), .Pointer = &UPokemonFieldPresenceComponent::execMulticastPlayReturnEffects },
		{ .NameUTF8 = UTF8TEXT("PrepareForFieldRemoval"), .Pointer = &UPokemonFieldPresenceComponent::execPrepareForFieldRemoval },
		{ .NameUTF8 = UTF8TEXT("ReturnToFieldStorage"), .Pointer = &UPokemonFieldPresenceComponent::execReturnToFieldStorage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonFieldPresenceComponent_IsPreparedForFieldRemoval, "IsPreparedForFieldRemoval" }, // 1317686726
		{ &Z_Construct_UFunction_UPokemonFieldPresenceComponent_MulticastPlayReturnEffects, "MulticastPlayReturnEffects" }, // 993565397
		{ &Z_Construct_UFunction_UPokemonFieldPresenceComponent_PrepareForFieldRemoval, "PrepareForFieldRemoval" }, // 985153001
		{ &Z_Construct_UFunction_UPokemonFieldPresenceComponent_ReturnToFieldStorage, "ReturnToFieldStorage" }, // 101645499
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonFieldPresenceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics

// ********** Begin Class UPokemonFieldPresenceComponent Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_OwnerPokemon = { "OwnerPokemon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonFieldPresenceComponent, OwnerPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPokemon_MetaData), NewProp_OwnerPokemon_MetaData) };
void Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_bPreparedForFieldRemoval_SetBit(void* Obj)
{
	((UPokemonFieldPresenceComponent*)Obj)->bPreparedForFieldRemoval = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_bPreparedForFieldRemoval = { "bPreparedForFieldRemoval", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonFieldPresenceComponent), &Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_bPreparedForFieldRemoval_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreparedForFieldRemoval_MetaData), NewProp_bPreparedForFieldRemoval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_ReturnLifeSpanAfterEffects = { "ReturnLifeSpanAfterEffects", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonFieldPresenceComponent, ReturnLifeSpanAfterEffects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnLifeSpanAfterEffects_MetaData), NewProp_ReturnLifeSpanAfterEffects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_OwnerPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_bPreparedForFieldRemoval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::NewProp_ReturnLifeSpanAfterEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokemonFieldPresenceComponent Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::ClassParams = {
	&UPokemonFieldPresenceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::Class_MetaDataParams)
};
void UPokemonFieldPresenceComponent::StaticRegisterNativesUPokemonFieldPresenceComponent()
{
	UClass* Class = UPokemonFieldPresenceComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonFieldPresenceComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonFieldPresenceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonFieldPresenceComponent.OuterSingleton, Z_Construct_UClass_UPokemonFieldPresenceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonFieldPresenceComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonFieldPresenceComponent);
UPokemonFieldPresenceComponent::~UPokemonFieldPresenceComponent() {}
// ********** End Class UPokemonFieldPresenceComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonFieldPresenceComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonFieldPresenceComponent, UPokemonFieldPresenceComponent::StaticClass, TEXT("UPokemonFieldPresenceComponent"), &Z_Registration_Info_UClass_UPokemonFieldPresenceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonFieldPresenceComponent), 1133544957U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonFieldPresenceComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonFieldPresenceComponent_h__Script_ProjectMimikyu_3992711933{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonFieldPresenceComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonFieldPresenceComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
