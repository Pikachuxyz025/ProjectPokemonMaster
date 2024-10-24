// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Items/ProjectileAttack.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileAttack() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectile();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectileAttack();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_AProjectileAttack_NoRegister();
	PROJECTMIMIKYU_API UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics
	{
		struct _Script_ProjectMimikyu_eventOnProjectileImpact_Parms
		{
			AActor* OtherActor;
			FHitResult HitResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnProjectileImpact_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectMimikyu_eventOnProjectileImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectMimikyu, nullptr, "OnProjectileImpact__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnProjectileImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::_Script_ProjectMimikyu_eventOnProjectileImpact_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectMimikyu_OnProjectileImpact__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnProjectileImpact_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileImpact, AActor* OtherActor, FHitResult HitResult)
{
	struct _Script_ProjectMimikyu_eventOnProjectileImpact_Parms
	{
		AActor* OtherActor;
		FHitResult HitResult;
	};
	_Script_ProjectMimikyu_eventOnProjectileImpact_Parms Parms;
	Parms.OtherActor=OtherActor;
	Parms.HitResult=HitResult;
	OnProjectileImpact.ProcessMulticastDelegate<UObject>(&Parms);
}
	void AProjectileAttack::StaticRegisterNativesAProjectileAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileAttack);
	UClass* Z_Construct_UClass_AProjectileAttack_NoRegister()
	{
		return AProjectileAttack::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectSpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectSpecHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoming_MetaData[];
#endif
		static void NewProp_bIsHoming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileGravity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ProjectileAttack.h" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileMesh_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_DamageEffectSpecHandle_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_DamageEffectSpecHandle = { "DamageEffectSpecHandle", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, DamageEffectSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_DamageEffectSpecHandle_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_DamageEffectSpecHandle_MetaData) }; // 2882128022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactParticles_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactParticles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactSound_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailSystem_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailSystem = { "TrailSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, TrailSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailSystem_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailComponent_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailComponent = { "TrailComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, TrailComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailComponent_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_Target_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_InitialSpeed_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_InitialSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_bIsHoming_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	void Z_Construct_UClass_AProjectileAttack_Statics::NewProp_bIsHoming_SetBit(void* Obj)
	{
		((AProjectileAttack*)Obj)->bIsHoming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_bIsHoming = { "bIsHoming", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectileAttack), &Z_Construct_UClass_AProjectileAttack_Statics::NewProp_bIsHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_bIsHoming_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_bIsHoming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileGravity_MetaData[] = {
		{ "Category", "ProjectileAttack" },
		{ "ModuleRelativePath", "Public/Items/ProjectileAttack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileGravity = { "ProjectileGravity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileAttack, ProjectileGravity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileGravity_MetaData), Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileGravity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_DamageEffectSpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_TrailComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_InitialSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_bIsHoming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileAttack_Statics::NewProp_ProjectileGravity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileAttack_Statics::ClassParams = {
		&AProjectileAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileAttack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileAttack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProjectileAttack()
	{
		if (!Z_Registration_Info_UClass_AProjectileAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileAttack.OuterSingleton, Z_Construct_UClass_AProjectileAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileAttack.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<AProjectileAttack>()
	{
		return AProjectileAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileAttack);
	AProjectileAttack::~AProjectileAttack() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_ProjectileAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_ProjectileAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileAttack, AProjectileAttack::StaticClass, TEXT("AProjectileAttack"), &Z_Registration_Info_UClass_AProjectileAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileAttack), 3788210863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_ProjectileAttack_h_580661387(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_ProjectileAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Items_ProjectileAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
