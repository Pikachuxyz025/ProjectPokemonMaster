// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Interfaces/DamageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageInterface();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(IDamageInterface::execIsAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttacking_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDamageInterface::execHasFainted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFainted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDamageInterface::execRecieveHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddHealthPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecieveHealth_Implementation(Z_Param_AddHealthPercent);
		P_NATIVE_END;
	}
	struct DamageInterface_eventHasFainted_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DamageInterface_eventHasFainted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DamageInterface_eventIsAttacking_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DamageInterface_eventIsAttacking_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DamageInterface_eventRecieveHealth_Parms
	{
		float AddHealthPercent;
	};
	bool IDamageInterface::HasFainted()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasFainted instead.");
		DamageInterface_eventHasFainted_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDamageInterface::IsAttacking()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAttacking instead.");
		DamageInterface_eventIsAttacking_Parms Parms;
		return Parms.ReturnValue;
	}
	void IDamageInterface::RecieveHealth(float AddHealthPercent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RecieveHealth instead.");
	}
	void UDamageInterface::StaticRegisterNativesUDamageInterface()
	{
		UClass* Class = UDamageInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasFainted", &IDamageInterface::execHasFainted },
			{ "IsAttacking", &IDamageInterface::execIsAttacking },
			{ "RecieveHealth", &IDamageInterface::execRecieveHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageInterface_HasFainted_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DamageInterface_eventHasFainted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DamageInterface_eventHasFainted_Parms), &Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "HasFainted", nullptr, nullptr, Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers), sizeof(DamageInterface_eventHasFainted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_HasFainted_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DamageInterface_eventIsAttacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DamageInterface_eventIsAttacking_Parms), &Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "IsAttacking", nullptr, nullptr, Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers), sizeof(DamageInterface_eventIsAttacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_IsAttacking_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AddHealthPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::NewProp_AddHealthPercent = { "AddHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageInterface_eventRecieveHealth_Parms, AddHealthPercent), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::NewProp_AddHealthPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "RecieveHealth", nullptr, nullptr, Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers), sizeof(DamageInterface_eventRecieveHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_RecieveHealth_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageInterface);
	UClass* Z_Construct_UClass_UDamageInterface_NoRegister()
	{
		return UDamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageInterface_HasFainted, "HasFainted" }, // 3360489062
		{ &Z_Construct_UFunction_UDamageInterface_IsAttacking, "IsAttacking" }, // 1351699343
		{ &Z_Construct_UFunction_UDamageInterface_RecieveHealth, "RecieveHealth" }, // 3921189720
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DamageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageInterface>::IsAbstract,
	};
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
	UClass* Z_Construct_UClass_UDamageInterface()
	{
		if (!Z_Registration_Info_UClass_UDamageInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageInterface.OuterSingleton, Z_Construct_UClass_UDamageInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageInterface.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UDamageInterface>()
	{
		return UDamageInterface::StaticClass();
	}
	UDamageInterface::UDamageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageInterface);
	UDamageInterface::~UDamageInterface() {}
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
	static FName NAME_UDamageInterface_RecieveHealth = FName(TEXT("RecieveHealth"));
	void IDamageInterface::Execute_RecieveHealth(UObject* O, float AddHealthPercent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()));
		DamageInterface_eventRecieveHealth_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageInterface_RecieveHealth);
		if (Func)
		{
			Parms.AddHealthPercent=AddHealthPercent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamageInterface*)(O->GetNativeInterfaceAddress(UDamageInterface::StaticClass())))
		{
			I->RecieveHealth_Implementation(AddHealthPercent);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageInterface, UDamageInterface::StaticClass, TEXT("UDamageInterface"), &Z_Registration_Info_UClass_UDamageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageInterface), 632616990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_2882920854(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_DamageInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
