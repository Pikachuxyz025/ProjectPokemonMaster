// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonCombatInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPokemonCombatInterface Function GetAvatar ***************************
struct PokemonCombatInterface_eventGetAvatar_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonCombatInterface_eventGetAvatar_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* IPokemonCombatInterface::GetAvatar()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvatar instead.");
	PokemonCombatInterface_eventGetAvatar_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonCombatInterface_GetAvatar = FName(TEXT("GetAvatar"));
AActor* IPokemonCombatInterface::Execute_GetAvatar(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonCombatInterface::StaticClass()));
	PokemonCombatInterface_eventGetAvatar_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonCombatInterface_GetAvatar);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPokemonCombatInterface*)(O->GetNativeInterfaceAddress(UPokemonCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAvatar_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatInterface_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "GetAvatar", Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers), sizeof(PokemonCombatInterface_eventGetAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonCombatInterface_eventGetAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonCombatInterface::execGetAvatar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetAvatar_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonCombatInterface Function GetAvatar *****************************

// ********** Begin Interface UPokemonCombatInterface Function GetCombatSocketLocation *************
struct PokemonCombatInterface_eventGetCombatSocketLocation_Parms
{
	FGameplayTag MontageTag;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonCombatInterface_eventGetCombatSocketLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IPokemonCombatInterface::GetCombatSocketLocation(FGameplayTag const& MontageTag)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatSocketLocation instead.");
	PokemonCombatInterface_eventGetCombatSocketLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonCombatInterface_GetCombatSocketLocation = FName(TEXT("GetCombatSocketLocation"));
FVector IPokemonCombatInterface::Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonCombatInterface::StaticClass()));
	PokemonCombatInterface_eventGetCombatSocketLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonCombatInterface_GetCombatSocketLocation);
	if (Func)
	{
		Parms.MontageTag=MontageTag;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPokemonCombatInterface*)(O->GetNativeInterfaceAddress(UPokemonCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatSocketLocation_Implementation(MontageTag);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatInterface_eventGetCombatSocketLocation_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageTag_MetaData), NewProp_MontageTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatInterface_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "GetCombatSocketLocation", Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers), sizeof(PokemonCombatInterface_eventGetCombatSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonCombatInterface_eventGetCombatSocketLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonCombatInterface::execGetCombatSocketLocation)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MontageTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation_Implementation(Z_Param_Out_MontageTag);
	P_NATIVE_END;
}
// ********** End Interface UPokemonCombatInterface Function GetCombatSocketLocation ***************

// ********** Begin Interface UPokemonCombatInterface Function GetCombatTarget *********************
struct PokemonCombatInterface_eventGetCombatTarget_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonCombatInterface_eventGetCombatTarget_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* IPokemonCombatInterface::GetCombatTarget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatTarget instead.");
	PokemonCombatInterface_eventGetCombatTarget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonCombatInterface_GetCombatTarget = FName(TEXT("GetCombatTarget"));
AActor* IPokemonCombatInterface::Execute_GetCombatTarget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonCombatInterface::StaticClass()));
	PokemonCombatInterface_eventGetCombatTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonCombatInterface_GetCombatTarget);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPokemonCombatInterface*)(O->GetNativeInterfaceAddress(UPokemonCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatTarget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatInterface_eventGetCombatTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "GetCombatTarget", Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::PropPointers), sizeof(PokemonCombatInterface_eventGetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonCombatInterface_eventGetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonCombatInterface::execGetCombatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCombatTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonCombatInterface Function GetCombatTarget ***********************

// ********** Begin Interface UPokemonCombatInterface Function IsDead ******************************
struct PokemonCombatInterface_eventIsDead_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonCombatInterface_eventIsDead_Parms()
		: ReturnValue(false)
	{
	}
};
bool IPokemonCombatInterface::IsDead() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDead instead.");
	PokemonCombatInterface_eventIsDead_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonCombatInterface_IsDead = FName(TEXT("IsDead"));
bool IPokemonCombatInterface::Execute_IsDead(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonCombatInterface::StaticClass()));
	PokemonCombatInterface_eventIsDead_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonCombatInterface_IsDead);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPokemonCombatInterface*)(O->GetNativeInterfaceAddress(UPokemonCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsDead_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonCombatInterface_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonCombatInterface_eventIsDead_Parms), &Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "IsDead", Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::PropPointers), sizeof(PokemonCombatInterface_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonCombatInterface_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCombatInterface_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonCombatInterface::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonCombatInterface Function IsDead ********************************

// ********** Begin Interface UPokemonCombatInterface Function UpdatePokemonInfoInParty ************
void IPokemonCombatInterface::UpdatePokemonInfoInParty()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePokemonInfoInParty instead.");
}
static FName NAME_UPokemonCombatInterface_UpdatePokemonInfoInParty = FName(TEXT("UpdatePokemonInfoInParty"));
void IPokemonCombatInterface::Execute_UpdatePokemonInfoInParty(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonCombatInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPokemonCombatInterface_UpdatePokemonInfoInParty);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPokemonCombatInterface*)(O->GetNativeInterfaceAddress(UPokemonCombatInterface::StaticClass())))
	{
		I->UpdatePokemonInfoInParty_Implementation();
	}
}
struct Z_Construct_UFunction_UPokemonCombatInterface_UpdatePokemonInfoInParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_UpdatePokemonInfoInParty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "UpdatePokemonInfoInParty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_UpdatePokemonInfoInParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_UpdatePokemonInfoInParty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonCombatInterface_UpdatePokemonInfoInParty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCombatInterface_UpdatePokemonInfoInParty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonCombatInterface::execUpdatePokemonInfoInParty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePokemonInfoInParty_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonCombatInterface Function UpdatePokemonInfoInParty **************

// ********** Begin Interface UPokemonCombatInterface **********************************************
void UPokemonCombatInterface::StaticRegisterNativesUPokemonCombatInterface()
{
	UClass* Class = UPokemonCombatInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvatar", &IPokemonCombatInterface::execGetAvatar },
		{ "GetCombatSocketLocation", &IPokemonCombatInterface::execGetCombatSocketLocation },
		{ "GetCombatTarget", &IPokemonCombatInterface::execGetCombatTarget },
		{ "IsDead", &IPokemonCombatInterface::execIsDead },
		{ "UpdatePokemonInfoInParty", &IPokemonCombatInterface::execUpdatePokemonInfoInParty },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonCombatInterface;
UClass* UPokemonCombatInterface::GetPrivateStaticClass()
{
	using TClass = UPokemonCombatInterface;
	if (!Z_Registration_Info_UClass_UPokemonCombatInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonCombatInterface"),
			Z_Registration_Info_UClass_UPokemonCombatInterface.InnerSingleton,
			StaticRegisterNativesUPokemonCombatInterface,
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
	return Z_Registration_Info_UClass_UPokemonCombatInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonCombatInterface_NoRegister()
{
	return UPokemonCombatInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar, "GetAvatar" }, // 3015777323
		{ &Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 1232990443
		{ &Z_Construct_UFunction_UPokemonCombatInterface_GetCombatTarget, "GetCombatTarget" }, // 2389272741
		{ &Z_Construct_UFunction_UPokemonCombatInterface_IsDead, "IsDead" }, // 1170299628
		{ &Z_Construct_UFunction_UPokemonCombatInterface_UpdatePokemonInfoInParty, "UpdatePokemonInfoInParty" }, // 221493604
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPokemonCombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPokemonCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonCombatInterface_Statics::ClassParams = {
	&UPokemonCombatInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonCombatInterface()
{
	if (!Z_Registration_Info_UClass_UPokemonCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonCombatInterface.OuterSingleton, Z_Construct_UClass_UPokemonCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonCombatInterface.OuterSingleton;
}
UPokemonCombatInterface::UPokemonCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonCombatInterface);
// ********** End Interface UPokemonCombatInterface ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonCombatInterface, UPokemonCombatInterface::StaticClass, TEXT("UPokemonCombatInterface"), &Z_Registration_Info_UClass_UPokemonCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonCombatInterface), 3799101431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h__Script_ProjectMimikyu_1632434710(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
