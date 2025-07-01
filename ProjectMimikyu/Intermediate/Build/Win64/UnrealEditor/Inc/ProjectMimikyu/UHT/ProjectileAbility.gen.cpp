// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/AbilitySystem/Abilities/ProjectileAbility.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectileAttack_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UProjectileAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileAbility::execSpawnProjectile)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectileTargetLocation);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SocketTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile(Z_Param_Out_ProjectileTargetLocation,Z_Param_Out_SocketTag);
		P_NATIVE_END;
	}
	void UProjectileAbility::StaticRegisterNativesUProjectileAbility()
	{
		UClass* Class = UProjectileAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &UProjectileAbility::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics
	{
		struct ProjectileAbility_eventSpawnProjectile_Parms
		{
			FVector ProjectileTargetLocation;
			FGameplayTag SocketTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation = { "ProjectileTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventSpawnProjectile_Parms, ProjectileTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData), Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileAbility_eventSpawnProjectile_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag_MetaData), Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::NewProp_SocketTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileAbility, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::ProjectileAbility_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::ProjectileAbility_eventSpawnProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectileAbility_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileAbility_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileAbility);
	UClass* Z_Construct_UClass_UProjectileAbility_NoRegister()
	{
		return UProjectileAbility::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPokemonGameplayAbilities,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileAbility_SpawnProjectile, "SpawnProjectile" }, // 2751801605
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ProjectileAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ProjectileAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAbility, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAbility_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileAbility_Statics::ClassParams = {
		&UProjectileAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectileAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProjectileAbility()
	{
		if (!Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton, Z_Construct_UClass_UProjectileAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileAbility.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UProjectileAbility>()
	{
		return UProjectileAbility::StaticClass();
	}
	UProjectileAbility::UProjectileAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileAbility);
	UProjectileAbility::~UProjectileAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileAbility, UProjectileAbility::StaticClass, TEXT("UProjectileAbility"), &Z_Registration_Info_UClass_UProjectileAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileAbility), 939832052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_1599665068(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_AbilitySystem_Abilities_ProjectileAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
