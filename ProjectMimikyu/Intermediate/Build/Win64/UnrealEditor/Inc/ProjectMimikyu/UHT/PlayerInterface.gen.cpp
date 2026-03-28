// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/PlayerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInterface();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPlayerInterface Function UpdatePokemonInfoInParty *******************
struct PlayerInterface_eventUpdatePokemonInfoInParty_Parms
{
	APokemon_Parent* AlteredPokemon;
};
void IPlayerInterface::UpdatePokemonInfoInParty(APokemon_Parent* AlteredPokemon)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePokemonInfoInParty instead.");
}
static FName NAME_UPlayerInterface_UpdatePokemonInfoInParty = FName(TEXT("UpdatePokemonInfoInParty"));
void IPlayerInterface::Execute_UpdatePokemonInfoInParty(UObject* O, APokemon_Parent* AlteredPokemon)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
	PlayerInterface_eventUpdatePokemonInfoInParty_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_UpdatePokemonInfoInParty);
	if (Func)
	{
		Parms.AlteredPokemon=std::move(AlteredPokemon);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
	{
		I->UpdatePokemonInfoInParty_Implementation(AlteredPokemon);
	}
}
struct Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PlayerInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePokemonInfoInParty constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlteredPokemon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdatePokemonInfoInParty constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdatePokemonInfoInParty Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::NewProp_AlteredPokemon = { "AlteredPokemon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventUpdatePokemonInfoInParty_Parms, AlteredPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::NewProp_AlteredPokemon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::PropPointers) < 2048);
// ********** End Function UpdatePokemonInfoInParty Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "UpdatePokemonInfoInParty", 	Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::PropPointers), 
sizeof(PlayerInterface_eventUpdatePokemonInfoInParty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerInterface_eventUpdatePokemonInfoInParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPlayerInterface::execUpdatePokemonInfoInParty)
{
	P_GET_OBJECT(APokemon_Parent,Z_Param_AlteredPokemon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePokemonInfoInParty_Implementation(Z_Param_AlteredPokemon);
	P_NATIVE_END;
}
// ********** End Interface UPlayerInterface Function UpdatePokemonInfoInParty *********************

// ********** Begin Interface UPlayerInterface *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerInterface;
UClass* UPlayerInterface::GetPrivateStaticClass()
{
	using TClass = UPlayerInterface;
	if (!Z_Registration_Info_UClass_UPlayerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerInterface"),
			Z_Registration_Info_UClass_UPlayerInterface.InnerSingleton,
			StaticRegisterNativesUPlayerInterface,
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
	return Z_Registration_Info_UClass_UPlayerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerInterface_NoRegister()
{
	return UPlayerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PlayerInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UPlayerInterface constinit property declarations *********************
// ********** End Interface UPlayerInterface constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdatePokemonInfoInParty"), .Pointer = &IPlayerInterface::execUpdatePokemonInfoInParty },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInterface_UpdatePokemonInfoInParty, "UpdatePokemonInfoInParty" }, // 348891060
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPlayerInterface_Statics
UObject* (*const Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInterface_Statics::ClassParams = {
	&UPlayerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams)
};
void UPlayerInterface::StaticRegisterNativesUPlayerInterface()
{
	UClass* Class = UPlayerInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPlayerInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPlayerInterface()
{
	if (!Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton, Z_Construct_UClass_UPlayerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton;
}
UPlayerInterface::UPlayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPlayerInterface);
// ********** End Interface UPlayerInterface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PlayerInterface_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInterface, UPlayerInterface::StaticClass, TEXT("UPlayerInterface"), &Z_Registration_Info_UClass_UPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInterface), 537825841U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PlayerInterface_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PlayerInterface_h__Script_ProjectMimikyu_1153968990{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PlayerInterface_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Interfaces_PlayerInterface_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
