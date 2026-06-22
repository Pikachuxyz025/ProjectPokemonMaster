// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokeballSummonComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokeballSummonComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ASummonEnergyProjectile_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokeballSummonComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokeballSummonComponent_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPokeBallSummonLanded *************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventPokeBallSummonLanded_Parms
	{
		FVector LandingLocation;
		FVector LandingNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPokeBallSummonLanded constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPokeBallSummonLanded constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPokeBallSummonLanded Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::NewProp_LandingLocation = { "LandingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokeBallSummonLanded_Parms, LandingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::NewProp_LandingNormal = { "LandingNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventPokeBallSummonLanded_Parms, LandingNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::NewProp_LandingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::NewProp_LandingNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FPokeBallSummonLanded Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "PokeBallSummonLanded__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokeBallSummonLanded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::_Script_ProjectMimikyu_eventPokeBallSummonLanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPokeBallSummonLanded_DelegateWrapper(const FMulticastScriptDelegate& PokeBallSummonLanded, FVector LandingLocation, FVector LandingNormal)
{
	struct _Script_ProjectMimikyu_eventPokeBallSummonLanded_Parms
	{
		FVector LandingLocation;
		FVector LandingNormal;
	};
	_Script_ProjectMimikyu_eventPokeBallSummonLanded_Parms Parms;
	Parms.LandingLocation=LandingLocation;
	Parms.LandingNormal=LandingNormal;
	PokeBallSummonLanded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPokeBallSummonLanded ***************************************************

// ********** Begin Class UPokeballSummonComponent Function HandleSummonEnergyLanded ***************
struct Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics
{
	struct PokeballSummonComponent_eventHandleSummonEnergyLanded_Parms
	{
		FVector LandingLocation;
		FVector LandingNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSummonEnergyLanded constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSummonEnergyLanded constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSummonEnergyLanded Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::NewProp_LandingLocation = { "LandingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeballSummonComponent_eventHandleSummonEnergyLanded_Parms, LandingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::NewProp_LandingNormal = { "LandingNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeballSummonComponent_eventHandleSummonEnergyLanded_Parms, LandingNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::NewProp_LandingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::NewProp_LandingNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::PropPointers) < 2048);
// ********** End Function HandleSummonEnergyLanded Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokeballSummonComponent, nullptr, "HandleSummonEnergyLanded", 	Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::PokeballSummonComponent_eventHandleSummonEnergyLanded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::PokeballSummonComponent_eventHandleSummonEnergyLanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokeballSummonComponent::execHandleSummonEnergyLanded)
{
	P_GET_STRUCT(FVector,Z_Param_LandingLocation);
	P_GET_STRUCT(FVector,Z_Param_LandingNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSummonEnergyLanded(Z_Param_LandingLocation,Z_Param_LandingNormal);
	P_NATIVE_END;
}
// ********** End Class UPokeballSummonComponent Function HandleSummonEnergyLanded *****************

// ********** Begin Class UPokeballSummonComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokeballSummonComponent;
UClass* UPokeballSummonComponent::GetPrivateStaticClass()
{
	using TClass = UPokeballSummonComponent;
	if (!Z_Registration_Info_UClass_UPokeballSummonComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokeballSummonComponent"),
			Z_Registration_Info_UClass_UPokeballSummonComponent.InnerSingleton,
			StaticRegisterNativesUPokeballSummonComponent,
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
	return Z_Registration_Info_UClass_UPokeballSummonComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokeballSummonComponent_NoRegister()
{
	return UPokeballSummonComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokeballSummonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pokeball" },
		{ "IncludePath", "ActorComponents/PokeballSummonComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPokeBallSummonLanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenDistance_MetaData[] = {
		{ "Category", "Pokeball|Summon" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenBurstSystem_MetaData[] = {
		{ "Category", "Pokeball|Summon" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonEnergyProjectileClass_MetaData[] = {
		{ "Category", "Pokeball|Summon" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPokeBall_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokeballSummonComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokeballSummonComponent constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPokeBallSummonLanded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenBurstSystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SummonEnergyProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPokeBall;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokeballSummonComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleSummonEnergyLanded"), .Pointer = &UPokeballSummonComponent::execHandleSummonEnergyLanded },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokeballSummonComponent_HandleSummonEnergyLanded, "HandleSummonEnergyLanded" }, // 1444382353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokeballSummonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokeballSummonComponent_Statics

// ********** Begin Class UPokeballSummonComponent Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OnPokeBallSummonLanded = { "OnPokeBallSummonLanded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokeballSummonComponent, OnPokeBallSummonLanded), Z_Construct_UDelegateFunction_ProjectMimikyu_PokeBallSummonLanded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPokeBallSummonLanded_MetaData), NewProp_OnPokeBallSummonLanded_MetaData) }; // 1202639662
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OpenDistance = { "OpenDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokeballSummonComponent, OpenDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenDistance_MetaData), NewProp_OpenDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OpenBurstSystem = { "OpenBurstSystem", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokeballSummonComponent, OpenBurstSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenBurstSystem_MetaData), NewProp_OpenBurstSystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_SummonEnergyProjectileClass = { "SummonEnergyProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokeballSummonComponent, SummonEnergyProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ASummonEnergyProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonEnergyProjectileClass_MetaData), NewProp_SummonEnergyProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OwningPokeBall = { "OwningPokeBall", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokeballSummonComponent, OwningPokeBall), Z_Construct_UClass_APokeBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPokeBall_MetaData), NewProp_OwningPokeBall_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokeballSummonComponent, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokeballSummonComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OnPokeBallSummonLanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OpenDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OpenBurstSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_SummonEnergyProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_OwningPokeBall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokeballSummonComponent_Statics::NewProp_SourceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballSummonComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokeballSummonComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPokeballSummonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballSummonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokeballSummonComponent_Statics::ClassParams = {
	&UPokeballSummonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokeballSummonComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballSummonComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokeballSummonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokeballSummonComponent_Statics::Class_MetaDataParams)
};
void UPokeballSummonComponent::StaticRegisterNativesUPokeballSummonComponent()
{
	UClass* Class = UPokeballSummonComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokeballSummonComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokeballSummonComponent()
{
	if (!Z_Registration_Info_UClass_UPokeballSummonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokeballSummonComponent.OuterSingleton, Z_Construct_UClass_UPokeballSummonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokeballSummonComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokeballSummonComponent);
UPokeballSummonComponent::~UPokeballSummonComponent() {}
// ********** End Class UPokeballSummonComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokeballSummonComponent, UPokeballSummonComponent::StaticClass, TEXT("UPokeballSummonComponent"), &Z_Registration_Info_UClass_UPokeballSummonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokeballSummonComponent), 654101816U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h__Script_ProjectMimikyu_2267483171{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokeballSummonComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
