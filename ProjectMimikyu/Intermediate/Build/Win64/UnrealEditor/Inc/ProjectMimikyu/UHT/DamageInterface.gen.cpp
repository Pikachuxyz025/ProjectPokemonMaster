// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/DamageInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDamageInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UDamageInterface Function HasFainted *********************************
struct DamageInterface_eventHasFainted_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DamageInterface_eventHasFainted_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDamageInterface::HasFainted()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasFainted instead.");
	DamageInterface_eventHasFainted_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDamageInterface_HasFainted = FName(TEXT("HasFainted"));
bool IDamageInterface::Execute_HasFainted(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()));
	DamageInterface_eventHasFainted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDamageInterface_HasFainted);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDamageInterface*)(O->GetNativeInterfaceAddress(UDamageInterface::StaticClass())))
	{
		Parms.ReturnValue = I->HasFainted_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDamageInterface_HasFainted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasFainted constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasFainted constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasFainted Property Definitions ***************************************
void Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DamageInterface_eventHasFainted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DamageInterface_eventHasFainted_Parms), &Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers) < 2048);
// ********** End Function HasFainted Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "HasFainted", 	Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers), 
sizeof(DamageInterface_eventHasFainted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DamageInterface_eventHasFainted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageInterface_HasFainted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageInterface::execHasFainted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFainted_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDamageInterface Function HasFainted ***********************************

// ********** Begin Interface UDamageInterface Function IsAttacking ********************************
struct DamageInterface_eventIsAttacking_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DamageInterface_eventIsAttacking_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDamageInterface::IsAttacking()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAttacking instead.");
	DamageInterface_eventIsAttacking_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDamageInterface_IsAttacking = FName(TEXT("IsAttacking"));
bool IDamageInterface::Execute_IsAttacking(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()));
	DamageInterface_eventIsAttacking_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDamageInterface_IsAttacking);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDamageInterface*)(O->GetNativeInterfaceAddress(UDamageInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsAttacking_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsAttacking constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAttacking constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAttacking Property Definitions **************************************
void Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DamageInterface_eventIsAttacking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DamageInterface_eventIsAttacking_Parms), &Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers) < 2048);
// ********** End Function IsAttacking Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "IsAttacking", 	Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers), 
sizeof(DamageInterface_eventIsAttacking_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DamageInterface_eventIsAttacking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageInterface_IsAttacking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageInterface::execIsAttacking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAttacking_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDamageInterface Function IsAttacking **********************************

// ********** Begin Interface UDamageInterface Function RecieveHealth ******************************
struct DamageInterface_eventRecieveHealth_Parms
{
	float AddHealthPercent;
};
void IDamageInterface::RecieveHealth(float AddHealthPercent)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RecieveHealth instead.");
}
static FName NAME_UDamageInterface_RecieveHealth = FName(TEXT("RecieveHealth"));
void IDamageInterface::Execute_RecieveHealth(UObject* O, float AddHealthPercent)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()));
	DamageInterface_eventRecieveHealth_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDamageInterface_RecieveHealth);
	if (Func)
	{
		Parms.AddHealthPercent=std::move(AddHealthPercent);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDamageInterface*)(O->GetNativeInterfaceAddress(UDamageInterface::StaticClass())))
	{
		I->RecieveHealth_Implementation(AddHealthPercent);
	}
}
struct Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RecieveHealth constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RecieveHealth constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RecieveHealth Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::NewProp_AddHealthPercent = { "AddHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageInterface_eventRecieveHealth_Parms, AddHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::NewProp_AddHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers) < 2048);
// ********** End Function RecieveHealth Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "RecieveHealth", 	Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers), 
sizeof(DamageInterface_eventRecieveHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DamageInterface_eventRecieveHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageInterface_RecieveHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageInterface::execRecieveHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AddHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecieveHealth_Implementation(Z_Param_AddHealthPercent);
	P_NATIVE_END;
}
// ********** End Interface UDamageInterface Function RecieveHealth ********************************

// ********** Begin Interface UDamageInterface *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDamageInterface;
UClass* UDamageInterface::GetPrivateStaticClass()
{
	using TClass = UDamageInterface;
	if (!Z_Registration_Info_UClass_UDamageInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DamageInterface"),
			Z_Registration_Info_UClass_UDamageInterface.InnerSingleton,
			StaticRegisterNativesUDamageInterface,
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
	return Z_Registration_Info_UClass_UDamageInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UDamageInterface_NoRegister()
{
	return UDamageInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDamageInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UDamageInterface constinit property declarations *********************
// ********** End Interface UDamageInterface constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HasFainted"), .Pointer = &IDamageInterface::execHasFainted },
		{ .NameUTF8 = UTF8TEXT("IsAttacking"), .Pointer = &IDamageInterface::execIsAttacking },
		{ .NameUTF8 = UTF8TEXT("RecieveHealth"), .Pointer = &IDamageInterface::execRecieveHealth },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageInterface_HasFainted, "HasFainted" }, // 1667096427
		{ &Z_Construct_UFunction_UDamageInterface_IsAttacking, "IsAttacking" }, // 1986501273
		{ &Z_Construct_UFunction_UDamageInterface_RecieveHealth, "RecieveHealth" }, // 1976624481
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDamageInterface_Statics
UObject* (*const Z_Construct_UClass_UDamageInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageInterface_Statics::ClassParams = {
	&UDamageInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams)
};
void UDamageInterface::StaticRegisterNativesUDamageInterface()
{
	UClass* Class = UDamageInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDamageInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDamageInterface()
{
	if (!Z_Registration_Info_UClass_UDamageInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageInterface.OuterSingleton, Z_Construct_UClass_UDamageInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageInterface.OuterSingleton;
}
UDamageInterface::UDamageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDamageInterface);
// ********** End Interface UDamageInterface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageInterface, UDamageInterface::StaticClass, TEXT("UDamageInterface"), &Z_Registration_Info_UClass_UDamageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageInterface), 3986291462U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h__Script_ProjectMimikyu_31841315{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
