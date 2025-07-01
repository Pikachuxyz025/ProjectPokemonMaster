// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Player/TrainerPlayerState.h"
#include "ProjectMimikyu/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainerPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerPlayerState();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_ATrainerPlayerState_NoRegister();
	PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonInfo();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(ATrainerPlayerState::execSetPartyIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPartyIndex(Z_Param_NewIndex);
		P_NATIVE_END;
	}
	void ATrainerPlayerState::StaticRegisterNativesATrainerPlayerState()
	{
		UClass* Class = ATrainerPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPartyIndex", &ATrainerPlayerState::execSetPartyIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics
	{
		struct TrainerPlayerState_eventSetPartyIndex_Parms
		{
			int32 NewIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainerPlayerState_eventSetPartyIndex_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TrainerPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerPlayerState, nullptr, "SetPartyIndex", nullptr, nullptr, Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::TrainerPlayerState_eventSetPartyIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::TrainerPlayerState_eventSetPartyIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrainerPlayerState);
	UClass* Z_Construct_UClass_ATrainerPlayerState_NoRegister()
	{
		return ATrainerPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATrainerPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentParty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentParty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentParty;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPartyInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPartyInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPartyInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePokemon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActivePokemon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngagedPokemon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EngagedPokemon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInCombat_MetaData[];
#endif
		static void NewProp_bIsInCombat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInCombat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrainerPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrainerPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrainerPlayerState_SetPartyIndex, "SetPartyIndex" }, // 1506383604
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/TrainerPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/TrainerPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentParty_Inner = { "CurrentParty", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentParty_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Player/TrainerPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentParty = { "CurrentParty", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerPlayerState, CurrentParty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentParty_MetaData), Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentParty_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentPartyInfo_Inner = { "CurrentPartyInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPokemonInfo, METADATA_PARAMS(0, nullptr) }; // 1826758845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentPartyInfo_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Player/TrainerPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentPartyInfo = { "CurrentPartyInfo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerPlayerState, CurrentPartyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentPartyInfo_MetaData), Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentPartyInfo_MetaData) }; // 1826758845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_ActivePokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Player/TrainerPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_ActivePokemon = { "ActivePokemon", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerPlayerState, ActivePokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_ActivePokemon_MetaData), Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_ActivePokemon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_EngagedPokemon_MetaData[] = {
		{ "Category", "Pokemon Party" },
		{ "ModuleRelativePath", "Public/Player/TrainerPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_EngagedPokemon = { "EngagedPokemon", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainerPlayerState, EngagedPokemon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_EngagedPokemon_MetaData), Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_EngagedPokemon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_bIsInCombat_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TrainerPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_bIsInCombat_SetBit(void* Obj)
	{
		((ATrainerPlayerState*)Obj)->bIsInCombat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_bIsInCombat = { "bIsInCombat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrainerPlayerState), &Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_bIsInCombat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_bIsInCombat_MetaData), Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_bIsInCombat_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainerPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentParty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentParty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentPartyInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_CurrentPartyInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_ActivePokemon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_EngagedPokemon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerPlayerState_Statics::NewProp_bIsInCombat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrainerPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainerPlayerState_Statics::ClassParams = {
		&ATrainerPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrainerPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainerPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATrainerPlayerState()
	{
		if (!Z_Registration_Info_UClass_ATrainerPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainerPlayerState.OuterSingleton, Z_Construct_UClass_ATrainerPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrainerPlayerState.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<ATrainerPlayerState>()
	{
		return ATrainerPlayerState::StaticClass();
	}
	ATrainerPlayerState::ATrainerPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainerPlayerState);
	ATrainerPlayerState::~ATrainerPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrainerPlayerState, ATrainerPlayerState::StaticClass, TEXT("ATrainerPlayerState"), &Z_Registration_Info_UClass_ATrainerPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainerPlayerState), 2653114273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_2634181992(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Player_TrainerPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
