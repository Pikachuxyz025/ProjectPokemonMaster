// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Interfaces/PokemonCombatInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonCombatInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatInterface();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCombatInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(IPokemonCombatInterface::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPokemonCombatInterface::execGetAvatar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAvatar_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPokemonCombatInterface::execGetCombatSocketLocation)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MontageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation_Implementation(Z_Param_Out_MontageTag);
		P_NATIVE_END;
	}
	struct PokemonCombatInterface_eventGetAvatar_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		PokemonCombatInterface_eventGetAvatar_Parms()
			: ReturnValue(NULL)
		{
		}
	};
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
	struct PokemonCombatInterface_eventIsDead_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PokemonCombatInterface_eventIsDead_Parms()
			: ReturnValue(false)
		{
		}
	};
	AActor* IPokemonCombatInterface::GetAvatar()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvatar instead.");
		PokemonCombatInterface_eventGetAvatar_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IPokemonCombatInterface::GetCombatSocketLocation(FGameplayTag const& MontageTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatSocketLocation instead.");
		PokemonCombatInterface_eventGetCombatSocketLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPokemonCombatInterface::IsDead() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDead instead.");
		PokemonCombatInterface_eventIsDead_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPokemonCombatInterface::StaticRegisterNativesUPokemonCombatInterface()
	{
		UClass* Class = UPokemonCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatar", &IPokemonCombatInterface::execGetAvatar },
			{ "GetCombatSocketLocation", &IPokemonCombatInterface::execGetCombatSocketLocation },
			{ "IsDead", &IPokemonCombatInterface::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatInterface_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "GetAvatar", nullptr, nullptr, Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers), sizeof(PokemonCombatInterface_eventGetAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatInterface_eventGetCombatSocketLocation_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData), Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonCombatInterface_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "GetCombatSocketLocation", nullptr, nullptr, Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers), sizeof(PokemonCombatInterface_eventGetCombatSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonCombatInterface, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::PropPointers), sizeof(PokemonCombatInterface_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonCombatInterface_IsDead_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonCombatInterface);
	UClass* Z_Construct_UClass_UPokemonCombatInterface_NoRegister()
	{
		return UPokemonCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonCombatInterface_GetAvatar, "GetAvatar" }, // 2294433393
		{ &Z_Construct_UFunction_UPokemonCombatInterface_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 2818585652
		{ &Z_Construct_UFunction_UPokemonCombatInterface_IsDead, "IsDead" }, // 3410423078
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCombatInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PokemonCombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPokemonCombatInterface>::IsAbstract,
	};
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
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonCombatInterface>()
	{
		return UPokemonCombatInterface::StaticClass();
	}
	UPokemonCombatInterface::UPokemonCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonCombatInterface);
	UPokemonCombatInterface::~UPokemonCombatInterface() {}
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
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonCombatInterface, UPokemonCombatInterface::StaticClass, TEXT("UPokemonCombatInterface"), &Z_Registration_Info_UClass_UPokemonCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonCombatInterface), 3646233876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_3821458088(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PokemonCombatInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
