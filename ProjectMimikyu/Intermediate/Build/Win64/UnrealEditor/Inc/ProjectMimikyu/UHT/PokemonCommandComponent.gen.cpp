// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "Command/PokemonCommandTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonCommandComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCommandComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCommandComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonCommandTarget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonCommandComponent Function AttackEnded ****************************
struct Z_Construct_UFunction_UPokemonCommandComponent_AttackEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttackEnded constinit property declarations ***************************
// ********** End Function AttackEnded constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_AttackEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "AttackEnded", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_AttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_AttackEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_AttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_AttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execAttackEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackEnded();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function AttackEnded ******************************

// ********** Begin Class UPokemonCommandComponent Function ClearActiveMove ************************
struct Z_Construct_UFunction_UPokemonCommandComponent_ClearActiveMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearActiveMove constinit property declarations ***********************
// ********** End Function ClearActiveMove constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_ClearActiveMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "ClearActiveMove", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_ClearActiveMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_ClearActiveMove_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_ClearActiveMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_ClearActiveMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execClearActiveMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearActiveMove();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function ClearActiveMove **************************

// ********** Begin Class UPokemonCommandComponent Function ClearCommandTarget *********************
struct Z_Construct_UFunction_UPokemonCommandComponent_ClearCommandTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearCommandTarget constinit property declarations ********************
// ********** End Function ClearCommandTarget constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_ClearCommandTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "ClearCommandTarget", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_ClearCommandTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_ClearCommandTarget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_ClearCommandTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_ClearCommandTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execClearCommandTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCommandTarget();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function ClearCommandTarget ***********************

// ********** Begin Class UPokemonCommandComponent Function Dodge **********************************
struct Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics
{
	struct PokemonCommandComponent_eventDodge_Parms
	{
		FVector NewDodgeDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDodgeDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Dodge constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewDodgeDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Dodge constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Dodge Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::NewProp_NewDodgeDirection = { "NewDodgeDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCommandComponent_eventDodge_Parms, NewDodgeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDodgeDirection_MetaData), NewProp_NewDodgeDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::NewProp_NewDodgeDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::PropPointers) < 2048);
// ********** End Function Dodge Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "Dodge", 	Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::PokemonCommandComponent_eventDodge_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::PokemonCommandComponent_eventDodge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_Dodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_Dodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execDodge)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewDodgeDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Dodge(Z_Param_Out_NewDodgeDirection);
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function Dodge ************************************

// ********** Begin Class UPokemonCommandComponent Function EndDodge *******************************
struct Z_Construct_UFunction_UPokemonCommandComponent_EndDodge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndDodge constinit property declarations ******************************
// ********** End Function EndDodge constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_EndDodge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "EndDodge", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_EndDodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_EndDodge_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_EndDodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_EndDodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execEndDodge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndDodge();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function EndDodge *********************************

// ********** Begin Class UPokemonCommandComponent Function GetActiveMove **************************
struct Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics
{
	struct PokemonCommandComponent_eventGetActiveMove_Parms
	{
		UPokemonMoveDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveMove constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveMove constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveMove Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCommandComponent_eventGetActiveMove_Parms, ReturnValue), Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::PropPointers) < 2048);
// ********** End Function GetActiveMove Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "GetActiveMove", 	Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::PokemonCommandComponent_eventGetActiveMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::PokemonCommandComponent_eventGetActiveMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execGetActiveMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPokemonMoveDataAsset**)Z_Param__Result=P_THIS->GetActiveMove();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function GetActiveMove ****************************

// ********** Begin Class UPokemonCommandComponent Function GetDodgeDirection **********************
struct Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics
{
	struct PokemonCommandComponent_eventGetDodgeDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDodgeDirection constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDodgeDirection constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDodgeDirection Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCommandComponent_eventGetDodgeDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::PropPointers) < 2048);
// ********** End Function GetDodgeDirection Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "GetDodgeDirection", 	Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::PokemonCommandComponent_eventGetDodgeDirection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::PokemonCommandComponent_eventGetDodgeDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execGetDodgeDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDodgeDirection();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function GetDodgeDirection ************************

// ********** Begin Class UPokemonCommandComponent Function IsCommandActive ************************
struct Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics
{
	struct PokemonCommandComponent_eventIsCommandActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCommandActive constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCommandActive constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCommandActive Property Definitions **********************************
void Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonCommandComponent_eventIsCommandActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonCommandComponent_eventIsCommandActive_Parms), &Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::PropPointers) < 2048);
// ********** End Function IsCommandActive Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "IsCommandActive", 	Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::PokemonCommandComponent_eventIsCommandActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::PokemonCommandComponent_eventIsCommandActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execIsCommandActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCommandActive();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function IsCommandActive **************************

// ********** Begin Class UPokemonCommandComponent Function IsDodging ******************************
struct Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics
{
	struct PokemonCommandComponent_eventIsDodging_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDodging constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDodging constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDodging Property Definitions ****************************************
void Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonCommandComponent_eventIsDodging_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonCommandComponent_eventIsDodging_Parms), &Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::PropPointers) < 2048);
// ********** End Function IsDodging Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "IsDodging", 	Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::PokemonCommandComponent_eventIsDodging_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::PokemonCommandComponent_eventIsDodging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_IsDodging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_IsDodging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execIsDodging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDodging();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function IsDodging ********************************

// ********** Begin Class UPokemonCommandComponent Function IsUsingMove ****************************
struct Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics
{
	struct PokemonCommandComponent_eventIsUsingMove_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsUsingMove constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsUsingMove constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsUsingMove Property Definitions **************************************
void Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonCommandComponent_eventIsUsingMove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonCommandComponent_eventIsUsingMove_Parms), &Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::PropPointers) < 2048);
// ********** End Function IsUsingMove Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "IsUsingMove", 	Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::PokemonCommandComponent_eventIsUsingMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::PokemonCommandComponent_eventIsUsingMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execIsUsingMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingMove();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function IsUsingMove ******************************

// ********** Begin Class UPokemonCommandComponent Function SelectRandomMove ***********************
struct Z_Construct_UFunction_UPokemonCommandComponent_SelectRandomMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectRandomMove constinit property declarations **********************
// ********** End Function SelectRandomMove constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_SelectRandomMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "SelectRandomMove", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_SelectRandomMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_SelectRandomMove_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_SelectRandomMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_SelectRandomMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execSelectRandomMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectRandomMove();
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function SelectRandomMove *************************

// ********** Begin Class UPokemonCommandComponent Function SetCommandTarget ***********************
struct Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics
{
	struct PokemonCommandComponent_eventSetCommandTarget_Parms
	{
		FPokemonCommandTarget NewCommandTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCommandTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCommandTarget constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewCommandTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCommandTarget constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCommandTarget Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::NewProp_NewCommandTarget = { "NewCommandTarget", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCommandComponent_eventSetCommandTarget_Parms, NewCommandTarget), Z_Construct_UScriptStruct_FPokemonCommandTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCommandTarget_MetaData), NewProp_NewCommandTarget_MetaData) }; // 1298194729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::NewProp_NewCommandTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::PropPointers) < 2048);
// ********** End Function SetCommandTarget Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "SetCommandTarget", 	Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::PokemonCommandComponent_eventSetCommandTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::PokemonCommandComponent_eventSetCommandTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execSetCommandTarget)
{
	P_GET_STRUCT_REF(FPokemonCommandTarget,Z_Param_Out_NewCommandTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCommandTarget(Z_Param_Out_NewCommandTarget);
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function SetCommandTarget *************************

// ********** Begin Class UPokemonCommandComponent Function SetIsDodging ***************************
struct Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics
{
	struct PokemonCommandComponent_eventSetIsDodging_Parms
	{
		bool bNewDodging;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsDodging constinit property declarations **************************
	static void NewProp_bNewDodging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDodging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsDodging constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsDodging Property Definitions *************************************
void Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::NewProp_bNewDodging_SetBit(void* Obj)
{
	((PokemonCommandComponent_eventSetIsDodging_Parms*)Obj)->bNewDodging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::NewProp_bNewDodging = { "bNewDodging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonCommandComponent_eventSetIsDodging_Parms), &Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::NewProp_bNewDodging_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::NewProp_bNewDodging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::PropPointers) < 2048);
// ********** End Function SetIsDodging Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "SetIsDodging", 	Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::PokemonCommandComponent_eventSetIsDodging_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::PokemonCommandComponent_eventSetIsDodging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execSetIsDodging)
{
	P_GET_UBOOL(Z_Param_bNewDodging);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsDodging(Z_Param_bNewDodging);
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function SetIsDodging *****************************

// ********** Begin Class UPokemonCommandComponent Function TryCallCommand *************************
struct Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics
{
	struct PokemonCommandComponent_eventTryCallCommand_Parms
	{
		int32 MoveIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryCallCommand constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryCallCommand constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryCallCommand Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::NewProp_MoveIndex = { "MoveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCommandComponent_eventTryCallCommand_Parms, MoveIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PokemonCommandComponent_eventTryCallCommand_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PokemonCommandComponent_eventTryCallCommand_Parms), &Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::NewProp_MoveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::PropPointers) < 2048);
// ********** End Function TryCallCommand Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonCommandComponent, nullptr, "TryCallCommand", 	Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::PokemonCommandComponent_eventTryCallCommand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::PokemonCommandComponent_eventTryCallCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPokemonCommandComponent::execTryCallCommand)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MoveIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryCallCommand(Z_Param_MoveIndex);
	P_NATIVE_END;
}
// ********** End Class UPokemonCommandComponent Function TryCallCommand ***************************

// ********** Begin Class UPokemonCommandComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonCommandComponent;
UClass* UPokemonCommandComponent::GetPrivateStaticClass()
{
	using TClass = UPokemonCommandComponent;
	if (!Z_Registration_Info_UClass_UPokemonCommandComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonCommandComponent"),
			Z_Registration_Info_UClass_UPokemonCommandComponent.InnerSingleton,
			StaticRegisterNativesUPokemonCommandComponent,
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
	return Z_Registration_Info_UClass_UPokemonCommandComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonCommandComponent_NoRegister()
{
	return UPokemonCommandComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonCommandComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pokemon" },
		{ "IncludePath", "ActorComponents/PokemonCommandComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPokemon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePokemonMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCommandTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCharging_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDodging_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonCommandComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePokemonMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCommandTarget;
	static void NewProp_bIsCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCharging;
	static void NewProp_bIsDodging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDodging;
	static void NewProp_bIsUsingMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DodgeDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonCommandComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AttackEnded"), .Pointer = &UPokemonCommandComponent::execAttackEnded },
		{ .NameUTF8 = UTF8TEXT("ClearActiveMove"), .Pointer = &UPokemonCommandComponent::execClearActiveMove },
		{ .NameUTF8 = UTF8TEXT("ClearCommandTarget"), .Pointer = &UPokemonCommandComponent::execClearCommandTarget },
		{ .NameUTF8 = UTF8TEXT("Dodge"), .Pointer = &UPokemonCommandComponent::execDodge },
		{ .NameUTF8 = UTF8TEXT("EndDodge"), .Pointer = &UPokemonCommandComponent::execEndDodge },
		{ .NameUTF8 = UTF8TEXT("GetActiveMove"), .Pointer = &UPokemonCommandComponent::execGetActiveMove },
		{ .NameUTF8 = UTF8TEXT("GetDodgeDirection"), .Pointer = &UPokemonCommandComponent::execGetDodgeDirection },
		{ .NameUTF8 = UTF8TEXT("IsCommandActive"), .Pointer = &UPokemonCommandComponent::execIsCommandActive },
		{ .NameUTF8 = UTF8TEXT("IsDodging"), .Pointer = &UPokemonCommandComponent::execIsDodging },
		{ .NameUTF8 = UTF8TEXT("IsUsingMove"), .Pointer = &UPokemonCommandComponent::execIsUsingMove },
		{ .NameUTF8 = UTF8TEXT("SelectRandomMove"), .Pointer = &UPokemonCommandComponent::execSelectRandomMove },
		{ .NameUTF8 = UTF8TEXT("SetCommandTarget"), .Pointer = &UPokemonCommandComponent::execSetCommandTarget },
		{ .NameUTF8 = UTF8TEXT("SetIsDodging"), .Pointer = &UPokemonCommandComponent::execSetIsDodging },
		{ .NameUTF8 = UTF8TEXT("TryCallCommand"), .Pointer = &UPokemonCommandComponent::execTryCallCommand },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonCommandComponent_AttackEnded, "AttackEnded" }, // 4266771882
		{ &Z_Construct_UFunction_UPokemonCommandComponent_ClearActiveMove, "ClearActiveMove" }, // 4036089608
		{ &Z_Construct_UFunction_UPokemonCommandComponent_ClearCommandTarget, "ClearCommandTarget" }, // 726443159
		{ &Z_Construct_UFunction_UPokemonCommandComponent_Dodge, "Dodge" }, // 1811864827
		{ &Z_Construct_UFunction_UPokemonCommandComponent_EndDodge, "EndDodge" }, // 3319407492
		{ &Z_Construct_UFunction_UPokemonCommandComponent_GetActiveMove, "GetActiveMove" }, // 356422406
		{ &Z_Construct_UFunction_UPokemonCommandComponent_GetDodgeDirection, "GetDodgeDirection" }, // 96287565
		{ &Z_Construct_UFunction_UPokemonCommandComponent_IsCommandActive, "IsCommandActive" }, // 3130054859
		{ &Z_Construct_UFunction_UPokemonCommandComponent_IsDodging, "IsDodging" }, // 417652439
		{ &Z_Construct_UFunction_UPokemonCommandComponent_IsUsingMove, "IsUsingMove" }, // 1519177075
		{ &Z_Construct_UFunction_UPokemonCommandComponent_SelectRandomMove, "SelectRandomMove" }, // 2701915985
		{ &Z_Construct_UFunction_UPokemonCommandComponent_SetCommandTarget, "SetCommandTarget" }, // 3859772253
		{ &Z_Construct_UFunction_UPokemonCommandComponent_SetIsDodging, "SetIsDodging" }, // 1238880687
		{ &Z_Construct_UFunction_UPokemonCommandComponent_TryCallCommand, "TryCallCommand" }, // 1732815244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonCommandComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonCommandComponent_Statics

// ********** Begin Class UPokemonCommandComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_OwnerPokemon = { "OwnerPokemon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCommandComponent, OwnerPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPokemon_MetaData), NewProp_OwnerPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_ActivePokemonMove = { "ActivePokemonMove", nullptr, (EPropertyFlags)0x0144000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCommandComponent, ActivePokemonMove), Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePokemonMove_MetaData), NewProp_ActivePokemonMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_CurrentCommandTarget = { "CurrentCommandTarget", nullptr, (EPropertyFlags)0x0040008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCommandComponent, CurrentCommandTarget), Z_Construct_UScriptStruct_FPokemonCommandTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCommandTarget_MetaData), NewProp_CurrentCommandTarget_MetaData) }; // 1298194729
void Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsCharging_SetBit(void* Obj)
{
	((UPokemonCommandComponent*)Obj)->bIsCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsCharging = { "bIsCharging", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonCommandComponent), &Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCharging_MetaData), NewProp_bIsCharging_MetaData) };
void Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsDodging_SetBit(void* Obj)
{
	((UPokemonCommandComponent*)Obj)->bIsDodging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsDodging = { "bIsDodging", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonCommandComponent), &Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsDodging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDodging_MetaData), NewProp_bIsDodging_MetaData) };
void Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsUsingMove_SetBit(void* Obj)
{
	((UPokemonCommandComponent*)Obj)->bIsUsingMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsUsingMove = { "bIsUsingMove", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPokemonCommandComponent), &Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsUsingMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUsingMove_MetaData), NewProp_bIsUsingMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_DodgeDirection = { "DodgeDirection", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCommandComponent, DodgeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeDirection_MetaData), NewProp_DodgeDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonCommandComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_OwnerPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_ActivePokemonMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_CurrentCommandTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsDodging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_bIsUsingMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_DodgeDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::PropPointers) < 2048);
// ********** End Class UPokemonCommandComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPokemonCommandComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonCommandComponent_Statics::ClassParams = {
	&UPokemonCommandComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPokemonCommandComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonCommandComponent_Statics::Class_MetaDataParams)
};
void UPokemonCommandComponent::StaticRegisterNativesUPokemonCommandComponent()
{
	UClass* Class = UPokemonCommandComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPokemonCommandComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPokemonCommandComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton, Z_Construct_UClass_UPokemonCommandComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonCommandComponent);
UPokemonCommandComponent::~UPokemonCommandComponent() {}
// ********** End Class UPokemonCommandComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonCommandComponent, UPokemonCommandComponent::StaticClass, TEXT("UPokemonCommandComponent"), &Z_Registration_Info_UClass_UPokemonCommandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonCommandComponent), 1660922549U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_3280515682{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
