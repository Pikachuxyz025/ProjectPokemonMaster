// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/TargetableInterface.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTargetableInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTargetableInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();
PROJECTMIMIKYU_API UEnum* Z_Construct_UEnum_ProjectMimikyu_EAimContext();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UTargetableInterface Function CanBeFreeAimTargeted *******************
struct TargetableInterface_eventCanBeFreeAimTargeted_Parms
{
	EAimContext AimContext;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventCanBeFreeAimTargeted_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::CanBeFreeAimTargeted(EAimContext AimContext) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeFreeAimTargeted instead.");
	TargetableInterface_eventCanBeFreeAimTargeted_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_CanBeFreeAimTargeted = FName(TEXT("CanBeFreeAimTargeted"));
bool ITargetableInterface::Execute_CanBeFreeAimTargeted(const UObject* O, EAimContext AimContext)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventCanBeFreeAimTargeted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_CanBeFreeAimTargeted);
	if (Func)
	{
		Parms.AimContext=std::move(AimContext);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanBeFreeAimTargeted_Implementation(AimContext);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can this actor be free-aim targeted in the current aim context? */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can this actor be free-aim targeted in the current aim context?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CanBeFreeAimTargeted constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AimContext_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AimContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanBeFreeAimTargeted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanBeFreeAimTargeted Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_AimContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_AimContext = { "AimContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventCanBeFreeAimTargeted_Parms, AimContext), Z_Construct_UEnum_ProjectMimikyu_EAimContext, METADATA_PARAMS(0, nullptr) }; // 726377209
void Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventCanBeFreeAimTargeted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventCanBeFreeAimTargeted_Parms), &Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_AimContext_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_AimContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::PropPointers) < 2048);
// ********** End Function CanBeFreeAimTargeted Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "CanBeFreeAimTargeted", 	Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::PropPointers), 
sizeof(TargetableInterface_eventCanBeFreeAimTargeted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventCanBeFreeAimTargeted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execCanBeFreeAimTargeted)
{
	P_GET_ENUM(EAimContext,Z_Param_AimContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeFreeAimTargeted_Implementation(EAimContext(Z_Param_AimContext));
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function CanBeFreeAimTargeted *********************

// ********** Begin Interface UTargetableInterface Function CanBeLockOnTargeted ********************
struct TargetableInterface_eventCanBeLockOnTargeted_Parms
{
	EAimContext AimContext;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventCanBeLockOnTargeted_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::CanBeLockOnTargeted(EAimContext AimContext) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeLockOnTargeted instead.");
	TargetableInterface_eventCanBeLockOnTargeted_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_CanBeLockOnTargeted = FName(TEXT("CanBeLockOnTargeted"));
bool ITargetableInterface::Execute_CanBeLockOnTargeted(const UObject* O, EAimContext AimContext)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventCanBeLockOnTargeted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_CanBeLockOnTargeted);
	if (Func)
	{
		Parms.AimContext=std::move(AimContext);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanBeLockOnTargeted_Implementation(AimContext);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can this actor be lock-on targeted in the current aim context? */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can this actor be lock-on targeted in the current aim context?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CanBeLockOnTargeted constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AimContext_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AimContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanBeLockOnTargeted constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanBeLockOnTargeted Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_AimContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_AimContext = { "AimContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventCanBeLockOnTargeted_Parms, AimContext), Z_Construct_UEnum_ProjectMimikyu_EAimContext, METADATA_PARAMS(0, nullptr) }; // 726377209
void Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventCanBeLockOnTargeted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventCanBeLockOnTargeted_Parms), &Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_AimContext_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_AimContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::PropPointers) < 2048);
// ********** End Function CanBeLockOnTargeted Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "CanBeLockOnTargeted", 	Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::PropPointers), 
sizeof(TargetableInterface_eventCanBeLockOnTargeted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventCanBeLockOnTargeted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execCanBeLockOnTargeted)
{
	P_GET_ENUM(EAimContext,Z_Param_AimContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeLockOnTargeted_Implementation(EAimContext(Z_Param_AimContext));
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function CanBeLockOnTargeted **********************

// ********** Begin Interface UTargetableInterface Function GetLockOnFocusPoint ********************
struct TargetableInterface_eventGetLockOnFocusPoint_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventGetLockOnFocusPoint_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector ITargetableInterface::GetLockOnFocusPoint() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLockOnFocusPoint instead.");
	TargetableInterface_eventGetLockOnFocusPoint_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_GetLockOnFocusPoint = FName(TEXT("GetLockOnFocusPoint"));
FVector ITargetableInterface::Execute_GetLockOnFocusPoint(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventGetLockOnFocusPoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_GetLockOnFocusPoint);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLockOnFocusPoint_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional lock-on focus point, can be same as aim point. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional lock-on focus point, can be same as aim point." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLockOnFocusPoint constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLockOnFocusPoint constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLockOnFocusPoint Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventGetLockOnFocusPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::PropPointers) < 2048);
// ********** End Function GetLockOnFocusPoint Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "GetLockOnFocusPoint", 	Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::PropPointers), 
sizeof(TargetableInterface_eventGetLockOnFocusPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventGetLockOnFocusPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execGetLockOnFocusPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLockOnFocusPoint_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function GetLockOnFocusPoint **********************

// ********** Begin Interface UTargetableInterface Function GetTargetAimPoint **********************
struct TargetableInterface_eventGetTargetAimPoint_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventGetTargetAimPoint_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector ITargetableInterface::GetTargetAimPoint() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetAimPoint instead.");
	TargetableInterface_eventGetTargetAimPoint_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_GetTargetAimPoint = FName(TEXT("GetTargetAimPoint"));
FVector ITargetableInterface::Execute_GetTargetAimPoint(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventGetTargetAimPoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_GetTargetAimPoint);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetAimPoint_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the world-space point abilities and reticles should aim at. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the world-space point abilities and reticles should aim at." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetAimPoint constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetAimPoint constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetAimPoint Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventGetTargetAimPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::PropPointers) < 2048);
// ********** End Function GetTargetAimPoint Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "GetTargetAimPoint", 	Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::PropPointers), 
sizeof(TargetableInterface_eventGetTargetAimPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventGetTargetAimPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execGetTargetAimPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTargetAimPoint_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function GetTargetAimPoint ************************

// ********** Begin Interface UTargetableInterface Function GetTargetingSocketName *****************
struct TargetableInterface_eventGetTargetingSocketName_Parms
{
	FName ReturnValue;
};
FName ITargetableInterface::GetTargetingSocketName() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetingSocketName instead.");
	TargetableInterface_eventGetTargetingSocketName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_GetTargetingSocketName = FName(TEXT("GetTargetingSocketName"));
FName ITargetableInterface::Execute_GetTargetingSocketName(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventGetTargetingSocketName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_GetTargetingSocketName);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetingSocketName_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional socket name for targeting, useful for skeletal meshes. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional socket name for targeting, useful for skeletal meshes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetingSocketName constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetingSocketName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetingSocketName Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventGetTargetingSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::PropPointers) < 2048);
// ********** End Function GetTargetingSocketName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "GetTargetingSocketName", 	Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::PropPointers), 
sizeof(TargetableInterface_eventGetTargetingSocketName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventGetTargetingSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execGetTargetingSocketName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetTargetingSocketName_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function GetTargetingSocketName *******************

// ********** Begin Interface UTargetableInterface Function GetTargetingTags ***********************
struct TargetableInterface_eventGetTargetingTags_Parms
{
	FGameplayTagContainer ReturnValue;
};
FGameplayTagContainer ITargetableInterface::GetTargetingTags() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetingTags instead.");
	TargetableInterface_eventGetTargetingTags_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_GetTargetingTags = FName(TEXT("GetTargetingTags"));
FGameplayTagContainer ITargetableInterface::Execute_GetTargetingTags(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventGetTargetingTags_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_GetTargetingTags);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetingTags_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional gameplay tags affecting targeting behavior. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional gameplay tags affecting targeting behavior." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetingTags constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetingTags constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetingTags Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventGetTargetingTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::PropPointers) < 2048);
// ********** End Function GetTargetingTags Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "GetTargetingTags", 	Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::PropPointers), 
sizeof(TargetableInterface_eventGetTargetingTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventGetTargetingTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_GetTargetingTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_GetTargetingTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execGetTargetingTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetingTags_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function GetTargetingTags *************************

// ********** Begin Interface UTargetableInterface Function GetTargetPriorityScore *****************
struct TargetableInterface_eventGetTargetPriorityScore_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventGetTargetPriorityScore_Parms()
		: ReturnValue(0)
	{
	}
};
float ITargetableInterface::GetTargetPriorityScore() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetPriorityScore instead.");
	TargetableInterface_eventGetTargetPriorityScore_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_GetTargetPriorityScore = FName(TEXT("GetTargetPriorityScore"));
float ITargetableInterface::Execute_GetTargetPriorityScore(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventGetTargetPriorityScore_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_GetTargetPriorityScore);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetPriorityScore_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional target priority score for lock-on selection. Higher is better. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional target priority score for lock-on selection. Higher is better." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetPriorityScore constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetPriorityScore constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetPriorityScore Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventGetTargetPriorityScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::PropPointers) < 2048);
// ********** End Function GetTargetPriorityScore Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "GetTargetPriorityScore", 	Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::PropPointers), 
sizeof(TargetableInterface_eventGetTargetPriorityScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventGetTargetPriorityScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execGetTargetPriorityScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTargetPriorityScore_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function GetTargetPriorityScore *******************

// ********** Begin Interface UTargetableInterface Function IsCatchableTarget **********************
struct TargetableInterface_eventIsCatchableTarget_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventIsCatchableTarget_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::IsCatchableTarget() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsCatchableTarget instead.");
	TargetableInterface_eventIsCatchableTarget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_IsCatchableTarget = FName(TEXT("IsCatchableTarget"));
bool ITargetableInterface::Execute_IsCatchableTarget(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventIsCatchableTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_IsCatchableTarget);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsCatchableTarget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this actor is catchable in the current context. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this actor is catchable in the current context." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsCatchableTarget constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCatchableTarget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCatchableTarget Property Definitions ********************************
void Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventIsCatchableTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventIsCatchableTarget_Parms), &Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::PropPointers) < 2048);
// ********** End Function IsCatchableTarget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "IsCatchableTarget", 	Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::PropPointers), 
sizeof(TargetableInterface_eventIsCatchableTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventIsCatchableTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execIsCatchableTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCatchableTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function IsCatchableTarget ************************

// ********** Begin Interface UTargetableInterface Function IsFaintedForTargeting ******************
struct TargetableInterface_eventIsFaintedForTargeting_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventIsFaintedForTargeting_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::IsFaintedForTargeting() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsFaintedForTargeting instead.");
	TargetableInterface_eventIsFaintedForTargeting_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_IsFaintedForTargeting = FName(TEXT("IsFaintedForTargeting"));
bool ITargetableInterface::Execute_IsFaintedForTargeting(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventIsFaintedForTargeting_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_IsFaintedForTargeting);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsFaintedForTargeting_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this actor currently fainted / downed / invalid for combat targeting? */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this actor currently fainted / downed / invalid for combat targeting?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsFaintedForTargeting constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFaintedForTargeting constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFaintedForTargeting Property Definitions ****************************
void Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventIsFaintedForTargeting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventIsFaintedForTargeting_Parms), &Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::PropPointers) < 2048);
// ********** End Function IsFaintedForTargeting Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "IsFaintedForTargeting", 	Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::PropPointers), 
sizeof(TargetableInterface_eventIsFaintedForTargeting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventIsFaintedForTargeting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execIsFaintedForTargeting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFaintedForTargeting_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function IsFaintedForTargeting ********************

// ********** Begin Interface UTargetableInterface Function IsHostileToActor ***********************
struct TargetableInterface_eventIsHostileToActor_Parms
{
	const AActor* RequestingActor;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventIsHostileToActor_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::IsHostileToActor(const AActor* RequestingActor) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsHostileToActor instead.");
	TargetableInterface_eventIsHostileToActor_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_IsHostileToActor = FName(TEXT("IsHostileToActor"));
bool ITargetableInterface::Execute_IsHostileToActor(const UObject* O, const AActor* RequestingActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventIsHostileToActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_IsHostileToActor);
	if (Func)
	{
		Parms.RequestingActor=std::move(RequestingActor);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsHostileToActor_Implementation(RequestingActor);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this target is considered hostile to the requesting actor. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this target is considered hostile to the requesting actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHostileToActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestingActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHostileToActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHostileToActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::NewProp_RequestingActor = { "RequestingActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableInterface_eventIsHostileToActor_Parms, RequestingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestingActor_MetaData), NewProp_RequestingActor_MetaData) };
void Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventIsHostileToActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventIsHostileToActor_Parms), &Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::NewProp_RequestingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::PropPointers) < 2048);
// ********** End Function IsHostileToActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "IsHostileToActor", 	Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::PropPointers), 
sizeof(TargetableInterface_eventIsHostileToActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventIsHostileToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_IsHostileToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_IsHostileToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execIsHostileToActor)
{
	P_GET_OBJECT(AActor,Z_Param_RequestingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHostileToActor_Implementation(Z_Param_RequestingActor);
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function IsHostileToActor *************************

// ********** Begin Interface UTargetableInterface Function IsInteractableTarget *******************
struct TargetableInterface_eventIsInteractableTarget_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventIsInteractableTarget_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::IsInteractableTarget() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInteractableTarget instead.");
	TargetableInterface_eventIsInteractableTarget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_IsInteractableTarget = FName(TEXT("IsInteractableTarget"));
bool ITargetableInterface::Execute_IsInteractableTarget(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventIsInteractableTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_IsInteractableTarget);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsInteractableTarget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this actor is interactable in the current context. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this actor is interactable in the current context." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsInteractableTarget constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInteractableTarget constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInteractableTarget Property Definitions *****************************
void Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventIsInteractableTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventIsInteractableTarget_Parms), &Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::PropPointers) < 2048);
// ********** End Function IsInteractableTarget Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "IsInteractableTarget", 	Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::PropPointers), 
sizeof(TargetableInterface_eventIsInteractableTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventIsInteractableTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execIsInteractableTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInteractableTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function IsInteractableTarget *********************

// ********** Begin Interface UTargetableInterface Function IsTargetable ***************************
struct TargetableInterface_eventIsTargetable_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventIsTargetable_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::IsTargetable() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsTargetable instead.");
	TargetableInterface_eventIsTargetable_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_IsTargetable = FName(TEXT("IsTargetable"));
bool ITargetableInterface::Execute_IsTargetable(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventIsTargetable_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_IsTargetable);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsTargetable_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** General: can this actor be targeted at all right now? */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General: can this actor be targeted at all right now?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsTargetable constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTargetable constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTargetable Property Definitions *************************************
void Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventIsTargetable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventIsTargetable_Parms), &Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::PropPointers) < 2048);
// ********** End Function IsTargetable Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "IsTargetable", 	Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::PropPointers), 
sizeof(TargetableInterface_eventIsTargetable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventIsTargetable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_IsTargetable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_IsTargetable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execIsTargetable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetable_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function IsTargetable *****************************

// ********** Begin Interface UTargetableInterface Function IsTargetHidden *************************
struct TargetableInterface_eventIsTargetHidden_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventIsTargetHidden_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::IsTargetHidden() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsTargetHidden instead.");
	TargetableInterface_eventIsTargetHidden_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_IsTargetHidden = FName(TEXT("IsTargetHidden"));
bool ITargetableInterface::Execute_IsTargetHidden(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventIsTargetHidden_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_IsTargetHidden);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsTargetHidden_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this actor hidden / untargetable / decoy-protected etc. */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this actor hidden / untargetable / decoy-protected etc." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsTargetHidden constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTargetHidden constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTargetHidden Property Definitions ***********************************
void Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventIsTargetHidden_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventIsTargetHidden_Parms), &Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::PropPointers) < 2048);
// ********** End Function IsTargetHidden Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "IsTargetHidden", 	Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::PropPointers), 
sizeof(TargetableInterface_eventIsTargetHidden_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventIsTargetHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_IsTargetHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_IsTargetHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execIsTargetHidden)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetHidden_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function IsTargetHidden ***************************

// ********** Begin Interface UTargetableInterface Function IsTargetObscured ***********************
struct TargetableInterface_eventIsTargetObscured_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TargetableInterface_eventIsTargetObscured_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITargetableInterface::IsTargetObscured() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsTargetObscured instead.");
	TargetableInterface_eventIsTargetObscured_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetableInterface_IsTargetObscured = FName(TEXT("IsTargetObscured"));
bool ITargetableInterface::Execute_IsTargetObscured(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	TargetableInterface_eventIsTargetObscured_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_IsTargetObscured);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsTargetObscured_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this actor visually or mechanically obscured enough to break or deny lock? */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this actor visually or mechanically obscured enough to break or deny lock?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsTargetObscured constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTargetObscured constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTargetObscured Property Definitions *********************************
void Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TargetableInterface_eventIsTargetObscured_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetableInterface_eventIsTargetObscured_Parms), &Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::PropPointers) < 2048);
// ********** End Function IsTargetObscured Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "IsTargetObscured", 	Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::PropPointers), 
sizeof(TargetableInterface_eventIsTargetObscured_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TargetableInterface_eventIsTargetObscured_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetableInterface_IsTargetObscured()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_IsTargetObscured_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execIsTargetObscured)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetObscured_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTargetableInterface Function IsTargetObscured *************************

// ********** Begin Interface UTargetableInterface *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTargetableInterface;
UClass* UTargetableInterface::GetPrivateStaticClass()
{
	using TClass = UTargetableInterface;
	if (!Z_Registration_Info_UClass_UTargetableInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TargetableInterface"),
			Z_Registration_Info_UClass_UTargetableInterface.InnerSingleton,
			StaticRegisterNativesUTargetableInterface,
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
	return Z_Registration_Info_UClass_UTargetableInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UTargetableInterface_NoRegister()
{
	return UTargetableInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTargetableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/TargetableInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UTargetableInterface constinit property declarations *****************
// ********** End Interface UTargetableInterface constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanBeFreeAimTargeted"), .Pointer = &ITargetableInterface::execCanBeFreeAimTargeted },
		{ .NameUTF8 = UTF8TEXT("CanBeLockOnTargeted"), .Pointer = &ITargetableInterface::execCanBeLockOnTargeted },
		{ .NameUTF8 = UTF8TEXT("GetLockOnFocusPoint"), .Pointer = &ITargetableInterface::execGetLockOnFocusPoint },
		{ .NameUTF8 = UTF8TEXT("GetTargetAimPoint"), .Pointer = &ITargetableInterface::execGetTargetAimPoint },
		{ .NameUTF8 = UTF8TEXT("GetTargetingSocketName"), .Pointer = &ITargetableInterface::execGetTargetingSocketName },
		{ .NameUTF8 = UTF8TEXT("GetTargetingTags"), .Pointer = &ITargetableInterface::execGetTargetingTags },
		{ .NameUTF8 = UTF8TEXT("GetTargetPriorityScore"), .Pointer = &ITargetableInterface::execGetTargetPriorityScore },
		{ .NameUTF8 = UTF8TEXT("IsCatchableTarget"), .Pointer = &ITargetableInterface::execIsCatchableTarget },
		{ .NameUTF8 = UTF8TEXT("IsFaintedForTargeting"), .Pointer = &ITargetableInterface::execIsFaintedForTargeting },
		{ .NameUTF8 = UTF8TEXT("IsHostileToActor"), .Pointer = &ITargetableInterface::execIsHostileToActor },
		{ .NameUTF8 = UTF8TEXT("IsInteractableTarget"), .Pointer = &ITargetableInterface::execIsInteractableTarget },
		{ .NameUTF8 = UTF8TEXT("IsTargetable"), .Pointer = &ITargetableInterface::execIsTargetable },
		{ .NameUTF8 = UTF8TEXT("IsTargetHidden"), .Pointer = &ITargetableInterface::execIsTargetHidden },
		{ .NameUTF8 = UTF8TEXT("IsTargetObscured"), .Pointer = &ITargetableInterface::execIsTargetObscured },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetableInterface_CanBeFreeAimTargeted, "CanBeFreeAimTargeted" }, // 2996662919
		{ &Z_Construct_UFunction_UTargetableInterface_CanBeLockOnTargeted, "CanBeLockOnTargeted" }, // 2505102606
		{ &Z_Construct_UFunction_UTargetableInterface_GetLockOnFocusPoint, "GetLockOnFocusPoint" }, // 2221293612
		{ &Z_Construct_UFunction_UTargetableInterface_GetTargetAimPoint, "GetTargetAimPoint" }, // 2126216610
		{ &Z_Construct_UFunction_UTargetableInterface_GetTargetingSocketName, "GetTargetingSocketName" }, // 1713755811
		{ &Z_Construct_UFunction_UTargetableInterface_GetTargetingTags, "GetTargetingTags" }, // 1202741282
		{ &Z_Construct_UFunction_UTargetableInterface_GetTargetPriorityScore, "GetTargetPriorityScore" }, // 3279562859
		{ &Z_Construct_UFunction_UTargetableInterface_IsCatchableTarget, "IsCatchableTarget" }, // 883704983
		{ &Z_Construct_UFunction_UTargetableInterface_IsFaintedForTargeting, "IsFaintedForTargeting" }, // 1477600073
		{ &Z_Construct_UFunction_UTargetableInterface_IsHostileToActor, "IsHostileToActor" }, // 4126901146
		{ &Z_Construct_UFunction_UTargetableInterface_IsInteractableTarget, "IsInteractableTarget" }, // 2069857230
		{ &Z_Construct_UFunction_UTargetableInterface_IsTargetable, "IsTargetable" }, // 3445712729
		{ &Z_Construct_UFunction_UTargetableInterface_IsTargetHidden, "IsTargetHidden" }, // 1493797807
		{ &Z_Construct_UFunction_UTargetableInterface_IsTargetObscured, "IsTargetObscured" }, // 4089492579
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTargetableInterface_Statics
UObject* (*const Z_Construct_UClass_UTargetableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetableInterface_Statics::ClassParams = {
	&UTargetableInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetableInterface_Statics::Class_MetaDataParams)
};
void UTargetableInterface::StaticRegisterNativesUTargetableInterface()
{
	UClass* Class = UTargetableInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTargetableInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTargetableInterface()
{
	if (!Z_Registration_Info_UClass_UTargetableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetableInterface.OuterSingleton, Z_Construct_UClass_UTargetableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetableInterface.OuterSingleton;
}
UTargetableInterface::UTargetableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTargetableInterface);
// ********** End Interface UTargetableInterface ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetableInterface, UTargetableInterface::StaticClass, TEXT("UTargetableInterface"), &Z_Registration_Info_UClass_UTargetableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetableInterface), 2207626993U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h__Script_ProjectMimikyu_1439136721{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_TargetableInterface_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
