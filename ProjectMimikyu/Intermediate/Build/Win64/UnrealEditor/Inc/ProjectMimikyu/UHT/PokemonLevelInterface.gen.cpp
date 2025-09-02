// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/PokemonLevelInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePokemonLevelInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonLevelInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonLevelInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPokemonLevelInterface Function AddToAttributePoints *****************
struct PokemonLevelInterface_eventAddToAttributePoints_Parms
{
	int32 InAttributePoints;
};
void IPokemonLevelInterface::AddToAttributePoints(int32 InAttributePoints)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToAttributePoints instead.");
}
static FName NAME_UPokemonLevelInterface_AddToAttributePoints = FName(TEXT("AddToAttributePoints"));
void IPokemonLevelInterface::Execute_AddToAttributePoints(UObject* O, int32 InAttributePoints)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventAddToAttributePoints_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_AddToAttributePoints);
	if (Func)
	{
		Parms.InAttributePoints=InAttributePoints;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		I->AddToAttributePoints_Implementation(InAttributePoints);
	}
}
struct Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InAttributePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::NewProp_InAttributePoints = { "InAttributePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventAddToAttributePoints_Parms, InAttributePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::NewProp_InAttributePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "AddToAttributePoints", Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::PropPointers), sizeof(PokemonLevelInterface_eventAddToAttributePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventAddToAttributePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execAddToAttributePoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InAttributePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToAttributePoints_Implementation(Z_Param_InAttributePoints);
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function AddToAttributePoints *******************

// ********** Begin Interface UPokemonLevelInterface Function AddToPokemonLevel ********************
struct PokemonLevelInterface_eventAddToPokemonLevel_Parms
{
	int32 InPlayerLevel;
};
void IPokemonLevelInterface::AddToPokemonLevel(int32 InPlayerLevel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToPokemonLevel instead.");
}
static FName NAME_UPokemonLevelInterface_AddToPokemonLevel = FName(TEXT("AddToPokemonLevel"));
void IPokemonLevelInterface::Execute_AddToPokemonLevel(UObject* O, int32 InPlayerLevel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventAddToPokemonLevel_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_AddToPokemonLevel);
	if (Func)
	{
		Parms.InPlayerLevel=InPlayerLevel;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		I->AddToPokemonLevel_Implementation(InPlayerLevel);
	}
}
struct Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPlayerLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::NewProp_InPlayerLevel = { "InPlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventAddToPokemonLevel_Parms, InPlayerLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::NewProp_InPlayerLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "AddToPokemonLevel", Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::PropPointers), sizeof(PokemonLevelInterface_eventAddToPokemonLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventAddToPokemonLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execAddToPokemonLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InPlayerLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToPokemonLevel_Implementation(Z_Param_InPlayerLevel);
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function AddToPokemonLevel **********************

// ********** Begin Interface UPokemonLevelInterface Function AddToSpellPoints *********************
struct PokemonLevelInterface_eventAddToSpellPoints_Parms
{
	int32 InSpellPoints;
};
void IPokemonLevelInterface::AddToSpellPoints(int32 InSpellPoints)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToSpellPoints instead.");
}
static FName NAME_UPokemonLevelInterface_AddToSpellPoints = FName(TEXT("AddToSpellPoints"));
void IPokemonLevelInterface::Execute_AddToSpellPoints(UObject* O, int32 InSpellPoints)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventAddToSpellPoints_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_AddToSpellPoints);
	if (Func)
	{
		Parms.InSpellPoints=InSpellPoints;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		I->AddToSpellPoints_Implementation(InSpellPoints);
	}
}
struct Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSpellPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::NewProp_InSpellPoints = { "InSpellPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventAddToSpellPoints_Parms, InSpellPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::NewProp_InSpellPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "AddToSpellPoints", Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::PropPointers), sizeof(PokemonLevelInterface_eventAddToSpellPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventAddToSpellPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execAddToSpellPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSpellPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToSpellPoints_Implementation(Z_Param_InSpellPoints);
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function AddToSpellPoints ***********************

// ********** Begin Interface UPokemonLevelInterface Function AddToXP ******************************
struct PokemonLevelInterface_eventAddToXP_Parms
{
	int32 InXP;
};
void IPokemonLevelInterface::AddToXP(int32 InXP)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToXP instead.");
}
static FName NAME_UPokemonLevelInterface_AddToXP = FName(TEXT("AddToXP"));
void IPokemonLevelInterface::Execute_AddToXP(UObject* O, int32 InXP)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventAddToXP_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_AddToXP);
	if (Func)
	{
		Parms.InXP=InXP;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		I->AddToXP_Implementation(InXP);
	}
}
struct Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::NewProp_InXP = { "InXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventAddToXP_Parms, InXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::NewProp_InXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "AddToXP", Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::PropPointers), sizeof(PokemonLevelInterface_eventAddToXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventAddToXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_AddToXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_AddToXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execAddToXP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToXP_Implementation(Z_Param_InXP);
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function AddToXP ********************************

// ********** Begin Interface UPokemonLevelInterface Function FindLevelForXP ***********************
struct PokemonLevelInterface_eventFindLevelForXP_Parms
{
	int32 InXP;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonLevelInterface_eventFindLevelForXP_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IPokemonLevelInterface::FindLevelForXP(int32 InXP) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FindLevelForXP instead.");
	PokemonLevelInterface_eventFindLevelForXP_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonLevelInterface_FindLevelForXP = FName(TEXT("FindLevelForXP"));
int32 IPokemonLevelInterface::Execute_FindLevelForXP(const UObject* O, int32 InXP)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventFindLevelForXP_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_FindLevelForXP);
	if (Func)
	{
		Parms.InXP=InXP;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		Parms.ReturnValue = I->FindLevelForXP_Implementation(InXP);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::NewProp_InXP = { "InXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventFindLevelForXP_Parms, InXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventFindLevelForXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::NewProp_InXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "FindLevelForXP", Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::PropPointers), sizeof(PokemonLevelInterface_eventFindLevelForXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventFindLevelForXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execFindLevelForXP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FindLevelForXP_Implementation(Z_Param_InXP);
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function FindLevelForXP *************************

// ********** Begin Interface UPokemonLevelInterface Function GetAttributePoints *******************
struct PokemonLevelInterface_eventGetAttributePoints_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonLevelInterface_eventGetAttributePoints_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IPokemonLevelInterface::GetAttributePoints() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttributePoints instead.");
	PokemonLevelInterface_eventGetAttributePoints_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonLevelInterface_GetAttributePoints = FName(TEXT("GetAttributePoints"));
int32 IPokemonLevelInterface::Execute_GetAttributePoints(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventGetAttributePoints_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_GetAttributePoints);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAttributePoints_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventGetAttributePoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "GetAttributePoints", Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::PropPointers), sizeof(PokemonLevelInterface_eventGetAttributePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventGetAttributePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execGetAttributePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAttributePoints_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function GetAttributePoints *********************

// ********** Begin Interface UPokemonLevelInterface Function GetAttributePointsReward *************
struct PokemonLevelInterface_eventGetAttributePointsReward_Parms
{
	int32 Level;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonLevelInterface_eventGetAttributePointsReward_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IPokemonLevelInterface::GetAttributePointsReward(int32 Level) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttributePointsReward instead.");
	PokemonLevelInterface_eventGetAttributePointsReward_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonLevelInterface_GetAttributePointsReward = FName(TEXT("GetAttributePointsReward"));
int32 IPokemonLevelInterface::Execute_GetAttributePointsReward(const UObject* O, int32 Level)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventGetAttributePointsReward_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_GetAttributePointsReward);
	if (Func)
	{
		Parms.Level=Level;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAttributePointsReward_Implementation(Level);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventGetAttributePointsReward_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventGetAttributePointsReward_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "GetAttributePointsReward", Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::PropPointers), sizeof(PokemonLevelInterface_eventGetAttributePointsReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventGetAttributePointsReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execGetAttributePointsReward)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAttributePointsReward_Implementation(Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function GetAttributePointsReward ***************

// ********** Begin Interface UPokemonLevelInterface Function GetSpellPoints ***********************
struct PokemonLevelInterface_eventGetSpellPoints_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonLevelInterface_eventGetSpellPoints_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IPokemonLevelInterface::GetSpellPoints() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpellPoints instead.");
	PokemonLevelInterface_eventGetSpellPoints_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonLevelInterface_GetSpellPoints = FName(TEXT("GetSpellPoints"));
int32 IPokemonLevelInterface::Execute_GetSpellPoints(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventGetSpellPoints_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_GetSpellPoints);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSpellPoints_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventGetSpellPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "GetSpellPoints", Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::PropPointers), sizeof(PokemonLevelInterface_eventGetSpellPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventGetSpellPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execGetSpellPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSpellPoints_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function GetSpellPoints *************************

// ********** Begin Interface UPokemonLevelInterface Function GetSpellPointsReward *****************
struct PokemonLevelInterface_eventGetSpellPointsReward_Parms
{
	int32 Level;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonLevelInterface_eventGetSpellPointsReward_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IPokemonLevelInterface::GetSpellPointsReward(int32 Level) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpellPointsReward instead.");
	PokemonLevelInterface_eventGetSpellPointsReward_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonLevelInterface_GetSpellPointsReward = FName(TEXT("GetSpellPointsReward"));
int32 IPokemonLevelInterface::Execute_GetSpellPointsReward(const UObject* O, int32 Level)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventGetSpellPointsReward_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_GetSpellPointsReward);
	if (Func)
	{
		Parms.Level=Level;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSpellPointsReward_Implementation(Level);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventGetSpellPointsReward_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventGetSpellPointsReward_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "GetSpellPointsReward", Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::PropPointers), sizeof(PokemonLevelInterface_eventGetSpellPointsReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventGetSpellPointsReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execGetSpellPointsReward)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSpellPointsReward_Implementation(Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function GetSpellPointsReward *******************

// ********** Begin Interface UPokemonLevelInterface Function GetXP ********************************
struct PokemonLevelInterface_eventGetXP_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	PokemonLevelInterface_eventGetXP_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IPokemonLevelInterface::GetXP() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetXP instead.");
	PokemonLevelInterface_eventGetXP_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPokemonLevelInterface_GetXP = FName(TEXT("GetXP"));
int32 IPokemonLevelInterface::Execute_GetXP(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	PokemonLevelInterface_eventGetXP_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_GetXP);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetXP_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonLevelInterface_eventGetXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "GetXP", Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::PropPointers), sizeof(PokemonLevelInterface_eventGetXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PokemonLevelInterface_eventGetXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_GetXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_GetXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execGetXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetXP_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function GetXP **********************************

// ********** Begin Interface UPokemonLevelInterface Function LevelUp ******************************
void IPokemonLevelInterface::LevelUp()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LevelUp instead.");
}
static FName NAME_UPokemonLevelInterface_LevelUp = FName(TEXT("LevelUp"));
void IPokemonLevelInterface::Execute_LevelUp(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPokemonLevelInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPokemonLevelInterface_LevelUp);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPokemonLevelInterface*)(O->GetNativeInterfaceAddress(UPokemonLevelInterface::StaticClass())))
	{
		I->LevelUp_Implementation();
	}
}
struct Z_Construct_UFunction_UPokemonLevelInterface_LevelUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonLevelInterface_LevelUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonLevelInterface, nullptr, "LevelUp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonLevelInterface_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonLevelInterface_LevelUp_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonLevelInterface_LevelUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonLevelInterface_LevelUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPokemonLevelInterface::execLevelUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LevelUp_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPokemonLevelInterface Function LevelUp ********************************

// ********** Begin Interface UPokemonLevelInterface ***********************************************
void UPokemonLevelInterface::StaticRegisterNativesUPokemonLevelInterface()
{
	UClass* Class = UPokemonLevelInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToAttributePoints", &IPokemonLevelInterface::execAddToAttributePoints },
		{ "AddToPokemonLevel", &IPokemonLevelInterface::execAddToPokemonLevel },
		{ "AddToSpellPoints", &IPokemonLevelInterface::execAddToSpellPoints },
		{ "AddToXP", &IPokemonLevelInterface::execAddToXP },
		{ "FindLevelForXP", &IPokemonLevelInterface::execFindLevelForXP },
		{ "GetAttributePoints", &IPokemonLevelInterface::execGetAttributePoints },
		{ "GetAttributePointsReward", &IPokemonLevelInterface::execGetAttributePointsReward },
		{ "GetSpellPoints", &IPokemonLevelInterface::execGetSpellPoints },
		{ "GetSpellPointsReward", &IPokemonLevelInterface::execGetSpellPointsReward },
		{ "GetXP", &IPokemonLevelInterface::execGetXP },
		{ "LevelUp", &IPokemonLevelInterface::execLevelUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonLevelInterface;
UClass* UPokemonLevelInterface::GetPrivateStaticClass()
{
	using TClass = UPokemonLevelInterface;
	if (!Z_Registration_Info_UClass_UPokemonLevelInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PokemonLevelInterface"),
			Z_Registration_Info_UClass_UPokemonLevelInterface.InnerSingleton,
			StaticRegisterNativesUPokemonLevelInterface,
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
	return Z_Registration_Info_UClass_UPokemonLevelInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonLevelInterface_NoRegister()
{
	return UPokemonLevelInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonLevelInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonLevelInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonLevelInterface_AddToAttributePoints, "AddToAttributePoints" }, // 2567180429
		{ &Z_Construct_UFunction_UPokemonLevelInterface_AddToPokemonLevel, "AddToPokemonLevel" }, // 136007309
		{ &Z_Construct_UFunction_UPokemonLevelInterface_AddToSpellPoints, "AddToSpellPoints" }, // 3144669531
		{ &Z_Construct_UFunction_UPokemonLevelInterface_AddToXP, "AddToXP" }, // 2879792472
		{ &Z_Construct_UFunction_UPokemonLevelInterface_FindLevelForXP, "FindLevelForXP" }, // 2137756837
		{ &Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePoints, "GetAttributePoints" }, // 3576962979
		{ &Z_Construct_UFunction_UPokemonLevelInterface_GetAttributePointsReward, "GetAttributePointsReward" }, // 3325439409
		{ &Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPoints, "GetSpellPoints" }, // 2428025049
		{ &Z_Construct_UFunction_UPokemonLevelInterface_GetSpellPointsReward, "GetSpellPointsReward" }, // 544311634
		{ &Z_Construct_UFunction_UPokemonLevelInterface_GetXP, "GetXP" }, // 783178004
		{ &Z_Construct_UFunction_UPokemonLevelInterface_LevelUp, "LevelUp" }, // 3450889485
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPokemonLevelInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPokemonLevelInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonLevelInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonLevelInterface_Statics::ClassParams = {
	&UPokemonLevelInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonLevelInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonLevelInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokemonLevelInterface()
{
	if (!Z_Registration_Info_UClass_UPokemonLevelInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonLevelInterface.OuterSingleton, Z_Construct_UClass_UPokemonLevelInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonLevelInterface.OuterSingleton;
}
UPokemonLevelInterface::UPokemonLevelInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonLevelInterface);
// ********** End Interface UPokemonLevelInterface *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonLevelInterface, UPokemonLevelInterface::StaticClass, TEXT("UPokemonLevelInterface"), &Z_Registration_Info_UClass_UPokemonLevelInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonLevelInterface), 205148145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h__Script_ProjectMimikyu_2218791626(TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonLevelInterface_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
