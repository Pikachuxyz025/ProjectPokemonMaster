// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/SummonEnergyProjectile.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSummonEnergyProjectile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ASummonEnergyProjectile();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ASummonEnergyProjectile_NoRegister();
PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSummonEnergyLanded *************************************************
struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics
{
	struct _Script_ProjectMimikyu_eventOnSummonEnergyLanded_Parms
	{
		FVector LandingLocation;
		FVector LandingNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSummonEnergyLanded constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandingNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSummonEnergyLanded constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSummonEnergyLanded Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::NewProp_LandingLocation = { "LandingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnSummonEnergyLanded_Parms, LandingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::NewProp_LandingNormal = { "LandingNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnSummonEnergyLanded_Parms, LandingNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::NewProp_LandingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::NewProp_LandingNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSummonEnergyLanded Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnSummonEnergyLanded__DelegateSignature", 	Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnSummonEnergyLanded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnSummonEnergyLanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSummonEnergyLanded_DelegateWrapper(const FMulticastScriptDelegate& OnSummonEnergyLanded, FVector LandingLocation, FVector LandingNormal)
{
	struct _Script_ProjectMimikyu_eventOnSummonEnergyLanded_Parms
	{
		FVector LandingLocation;
		FVector LandingNormal;
	};
	_Script_ProjectMimikyu_eventOnSummonEnergyLanded_Parms Parms;
	Parms.LandingLocation=LandingLocation;
	Parms.LandingNormal=LandingNormal;
	OnSummonEnergyLanded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSummonEnergyLanded ***************************************************

// ********** Begin Class ASummonEnergyProjectile Function HandleHit *******************************
struct Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics
{
	struct SummonEnergyProjectile_eventHandleHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleHit constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleHit constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleHit Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SummonEnergyProjectile_eventHandleHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SummonEnergyProjectile_eventHandleHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SummonEnergyProjectile_eventHandleHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SummonEnergyProjectile_eventHandleHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SummonEnergyProjectile_eventHandleHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::PropPointers) < 2048);
// ********** End Function HandleHit Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASummonEnergyProjectile, nullptr, "HandleHit", 	Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::SummonEnergyProjectile_eventHandleHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::SummonEnergyProjectile_eventHandleHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASummonEnergyProjectile::execHandleHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ASummonEnergyProjectile Function HandleHit *********************************

// ********** Begin Class ASummonEnergyProjectile Function InitSummonEnergy ************************
struct Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics
{
	struct SummonEnergyProjectile_eventInitSummonEnergy_Parms
	{
		FVector InTargetLocation;
		AActor* InSourceActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitSummonEnergy constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSourceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitSummonEnergy constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitSummonEnergy Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SummonEnergyProjectile_eventInitSummonEnergy_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetLocation_MetaData), NewProp_InTargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::NewProp_InSourceActor = { "InSourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SummonEnergyProjectile_eventInitSummonEnergy_Parms, InSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::NewProp_InTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::NewProp_InSourceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::PropPointers) < 2048);
// ********** End Function InitSummonEnergy Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASummonEnergyProjectile, nullptr, "InitSummonEnergy", 	Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::SummonEnergyProjectile_eventInitSummonEnergy_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::SummonEnergyProjectile_eventInitSummonEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASummonEnergyProjectile::execInitSummonEnergy)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InTargetLocation);
	P_GET_OBJECT(AActor,Z_Param_InSourceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitSummonEnergy(Z_Param_Out_InTargetLocation,Z_Param_InSourceActor);
	P_NATIVE_END;
}
// ********** End Class ASummonEnergyProjectile Function InitSummonEnergy **************************

// ********** Begin Class ASummonEnergyProjectile **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASummonEnergyProjectile;
UClass* ASummonEnergyProjectile::GetPrivateStaticClass()
{
	using TClass = ASummonEnergyProjectile;
	if (!Z_Registration_Info_UClass_ASummonEnergyProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SummonEnergyProjectile"),
			Z_Registration_Info_UClass_ASummonEnergyProjectile.InnerSingleton,
			StaticRegisterNativesASummonEnergyProjectile,
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
	return Z_Registration_Info_UClass_ASummonEnergyProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_ASummonEnergyProjectile_NoRegister()
{
	return ASummonEnergyProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASummonEnergyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/SummonEnergyProjectile.h" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSummonEnergyLanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSystem_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandingImpactSystem_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcLiftStrength_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeAfterLanding_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "ModuleRelativePath", "Public/Items/SummonEnergyProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASummonEnergyProjectile constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSummonEnergyLanded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandingImpactSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArcLiftStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeAfterLanding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASummonEnergyProjectile constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleHit"), .Pointer = &ASummonEnergyProjectile::execHandleHit },
		{ .NameUTF8 = UTF8TEXT("InitSummonEnergy"), .Pointer = &ASummonEnergyProjectile::execInitSummonEnergy },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASummonEnergyProjectile_HandleHit, "HandleHit" }, // 1054230716
		{ &Z_Construct_UFunction_ASummonEnergyProjectile_InitSummonEnergy, "InitSummonEnergy" }, // 3350868388
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASummonEnergyProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASummonEnergyProjectile_Statics

// ********** Begin Class ASummonEnergyProjectile Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_OnSummonEnergyLanded = { "OnSummonEnergyLanded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, OnSummonEnergyLanded), Z_Construct_UDelegateFunction_ProjectMimikyu_OnSummonEnergyLanded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSummonEnergyLanded_MetaData), NewProp_OnSummonEnergyLanded_MetaData) }; // 3831617791
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_TrailComponent = { "TrailComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, TrailComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailComponent_MetaData), NewProp_TrailComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_TrailSystem = { "TrailSystem", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, TrailSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSystem_MetaData), NewProp_TrailSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_LandingImpactSystem = { "LandingImpactSystem", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, LandingImpactSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandingImpactSystem_MetaData), NewProp_LandingImpactSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, LaunchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchSpeed_MetaData), NewProp_LaunchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_ArcLiftStrength = { "ArcLiftStrength", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, ArcLiftStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcLiftStrength_MetaData), NewProp_ArcLiftStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_LifeAfterLanding = { "LifeAfterLanding", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASummonEnergyProjectile, LifeAfterLanding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeAfterLanding_MetaData), NewProp_LifeAfterLanding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASummonEnergyProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_OnSummonEnergyLanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_TrailComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_TrailSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_LandingImpactSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_LaunchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_ArcLiftStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASummonEnergyProjectile_Statics::NewProp_LifeAfterLanding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASummonEnergyProjectile_Statics::PropPointers) < 2048);
// ********** End Class ASummonEnergyProjectile Property Definitions *******************************
UObject* (*const Z_Construct_UClass_ASummonEnergyProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASummonEnergyProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASummonEnergyProjectile_Statics::ClassParams = {
	&ASummonEnergyProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASummonEnergyProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASummonEnergyProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASummonEnergyProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASummonEnergyProjectile_Statics::Class_MetaDataParams)
};
void ASummonEnergyProjectile::StaticRegisterNativesASummonEnergyProjectile()
{
	UClass* Class = ASummonEnergyProjectile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASummonEnergyProjectile_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASummonEnergyProjectile()
{
	if (!Z_Registration_Info_UClass_ASummonEnergyProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASummonEnergyProjectile.OuterSingleton, Z_Construct_UClass_ASummonEnergyProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASummonEnergyProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASummonEnergyProjectile);
ASummonEnergyProjectile::~ASummonEnergyProjectile() {}
// ********** End Class ASummonEnergyProjectile ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASummonEnergyProjectile, ASummonEnergyProjectile::StaticClass, TEXT("ASummonEnergyProjectile"), &Z_Registration_Info_UClass_ASummonEnergyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASummonEnergyProjectile), 2405652204U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h__Script_ProjectMimikyu_4183288998{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_SummonEnergyProjectile_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
