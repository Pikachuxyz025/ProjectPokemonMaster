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
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_APokemon_Parent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCommandComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonCommandComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
PROJECTMIMIKYU_API UScriptStruct* Z_Construct_UScriptStruct_FPokemonCommandTarget();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

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
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCommandTarget_MetaData[] = {
		{ "Category", "Pokemon|Command" },
		{ "ModuleRelativePath", "Public/ActorComponents/PokemonCommandComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonCommandComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPokemon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePokemonMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCommandTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonCommandComponent constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonCommandComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonCommandComponent_Statics

// ********** Begin Class UPokemonCommandComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_OwnerPokemon = { "OwnerPokemon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCommandComponent, OwnerPokemon), Z_Construct_UClass_APokemon_Parent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPokemon_MetaData), NewProp_OwnerPokemon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_ActivePokemonMove = { "ActivePokemonMove", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCommandComponent, ActivePokemonMove), Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePokemonMove_MetaData), NewProp_ActivePokemonMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_CurrentCommandTarget = { "CurrentCommandTarget", nullptr, (EPropertyFlags)0x0040008000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonCommandComponent, CurrentCommandTarget), Z_Construct_UScriptStruct_FPokemonCommandTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCommandTarget_MetaData), NewProp_CurrentCommandTarget_MetaData) }; // 1298194729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonCommandComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_OwnerPokemon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_ActivePokemonMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonCommandComponent_Statics::NewProp_CurrentCommandTarget,
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
	nullptr,
	Z_Construct_UClass_UPokemonCommandComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonCommandComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonCommandComponent_Statics::Class_MetaDataParams)
};
void UPokemonCommandComponent::StaticRegisterNativesUPokemonCommandComponent()
{
}
UClass* Z_Construct_UClass_UPokemonCommandComponent()
{
	if (!Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton, Z_Construct_UClass_UPokemonCommandComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonCommandComponent.OuterSingleton;
}
UPokemonCommandComponent::UPokemonCommandComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonCommandComponent);
UPokemonCommandComponent::~UPokemonCommandComponent() {}
// ********** End Class UPokemonCommandComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonCommandComponent, UPokemonCommandComponent::StaticClass, TEXT("UPokemonCommandComponent"), &Z_Registration_Info_UClass_UPokemonCommandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonCommandComponent), 3259160594U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_1518252894{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_PokemonCommandComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
