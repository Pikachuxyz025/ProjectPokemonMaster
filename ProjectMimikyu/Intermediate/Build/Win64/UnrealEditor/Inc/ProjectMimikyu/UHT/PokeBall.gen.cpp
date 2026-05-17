// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/PokeBall.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokeBall() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokeBall_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EPokeballType();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APokeBall Function DestroyPokeball ***************************************
struct Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyPokeball constinit property declarations ***********************
// ********** End Function DestroyPokeball constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "DestroyPokeball", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APokeBall_DestroyPokeball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_DestroyPokeball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execDestroyPokeball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPokeball();
	P_NATIVE_END;
}
// ********** End Class APokeBall Function DestroyPokeball *****************************************

// ********** Begin Class APokeBall Function OnPokeballStop ****************************************
struct Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics
{
	struct PokeBall_eventOnPokeballStop_Parms
	{
		FHitResult ImpactResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPokeballStop constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPokeballStop constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPokeballStop Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokeBall_eventOnPokeballStop_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::NewProp_ImpactResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers) < 2048);
// ********** End Function OnPokeballStop Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APokeBall, nullptr, "OnPokeballStop", 	Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PokeBall_eventOnPokeballStop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::PokeBall_eventOnPokeballStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APokeBall_OnPokeballStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APokeBall_OnPokeballStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APokeBall::execOnPokeballStop)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPokeballStop(Z_Param_Out_ImpactResult);
	P_NATIVE_END;
}
// ********** End Class APokeBall Function OnPokeballStop ******************************************

// ********** Begin Class APokeBall ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APokeBall;
UClass* APokeBall::GetPrivateStaticClass()
{
	using TClass = APokeBall;
	if (!Z_Registration_Info_UClass_APokeBall.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokeBall"),
			Z_Registration_Info_UClass_APokeBall.InnerSingleton,
			StaticRegisterNativesAPokeBall,
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
	return Z_Registration_Info_UClass_APokeBall.InnerSingleton;
}
UClass* Z_Construct_UClass_APokeBall_NoRegister()
{
	return APokeBall::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APokeBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/PokeBall.h" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyAfterStopDelay_MetaData[] = {
		{ "Category", "Pokeball" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokeball_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseModifier_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostedModifier_MetaData[] = {
		{ "Category", "PokeBall" },
		{ "ModuleRelativePath", "Public/Items/PokeBall.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APokeBall constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyAfterStopDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPokeball_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPokeball;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostedModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APokeBall constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DestroyPokeball"), .Pointer = &APokeBall::execDestroyPokeball },
		{ .NameUTF8 = UTF8TEXT("OnPokeballStop"), .Pointer = &APokeBall::execOnPokeballStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APokeBall_DestroyPokeball, "DestroyPokeball" }, // 459954646
		{ &Z_Construct_UFunction_APokeBall_OnPokeballStop, "OnPokeballStop" }, // 2171056402
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokeBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APokeBall_Statics

// ********** Begin Class APokeBall Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_DestroyAfterStopDelay = { "DestroyAfterStopDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, DestroyAfterStopDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyAfterStopDelay_MetaData), NewProp_DestroyAfterStopDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, ProjectileMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball = { "CurrentPokeball", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, CurrentPokeball), Z_Construct_UEnum_ProjectMimikyu_EPokeballType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokeball_MetaData), NewProp_CurrentPokeball_MetaData) }; // 2498691174
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_BaseModifier = { "BaseModifier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, BaseModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseModifier_MetaData), NewProp_BaseModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APokeBall_Statics::NewProp_BoostedModifier = { "BoostedModifier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokeBall, BoostedModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostedModifier_MetaData), NewProp_BoostedModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokeBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_DestroyAfterStopDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_ProjectileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_CurrentPokeball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_BaseModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokeBall_Statics::NewProp_BoostedModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::PropPointers) < 2048);
// ********** End Class APokeBall Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_APokeBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokeBall_Statics::ClassParams = {
	&APokeBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APokeBall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokeBall_Statics::Class_MetaDataParams), Z_Construct_UClass_APokeBall_Statics::Class_MetaDataParams)
};
void APokeBall::StaticRegisterNativesAPokeBall()
{
	UClass* Class = APokeBall::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APokeBall_Statics::Funcs));
}
UClass* Z_Construct_UClass_APokeBall()
{
	if (!Z_Registration_Info_UClass_APokeBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokeBall.OuterSingleton, Z_Construct_UClass_APokeBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokeBall.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APokeBall);
APokeBall::~APokeBall() {}
// ********** End Class APokeBall ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokeBall, APokeBall::StaticClass, TEXT("APokeBall"), &Z_Registration_Info_UClass_APokeBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokeBall), 4110259861U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_3730629471{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_PokeBall_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
