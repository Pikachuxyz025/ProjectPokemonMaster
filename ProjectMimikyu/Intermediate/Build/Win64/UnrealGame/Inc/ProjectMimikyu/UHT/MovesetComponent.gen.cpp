// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/MovesetComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovesetComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMovesetComponent();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMovesetComponent_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovesetComponent ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMovesetComponent;
UClass* UMovesetComponent::GetPrivateStaticClass()
{
	using TClass = UMovesetComponent;
	if (!Z_Registration_Info_UClass_UMovesetComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MovesetComponent"),
			Z_Registration_Info_UClass_UMovesetComponent.InnerSingleton,
			StaticRegisterNativesUMovesetComponent,
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
	return Z_Registration_Info_UClass_UMovesetComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovesetComponent_NoRegister()
{
	return UMovesetComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovesetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/MovesetComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/MovesetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPokemonMoves_MetaData[] = {
		{ "Category", "MovesetComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly)\n//TMap<int32, TSubclassOf<UPokemonGameplayAbilities>> PokemonLevelUpAbilities;\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponents/MovesetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly)\nTMap<int32, TSubclassOf<UPokemonGameplayAbilities>> PokemonLevelUpAbilities;" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMovesetComponent constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPokemonMoves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPokemonMoves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMovesetComponent constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMovesetComponent_Statics

// ********** Begin Class UMovesetComponent Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves_Inner = { "CurrentPokemonMoves", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves = { "CurrentPokemonMoves", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovesetComponent, CurrentPokemonMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPokemonMoves_MetaData), NewProp_CurrentPokemonMoves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovesetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetComponent_Statics::NewProp_CurrentPokemonMoves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::PropPointers) < 2048);
// ********** End Class UMovesetComponent Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UMovesetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovesetComponent_Statics::ClassParams = {
	&UMovesetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovesetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovesetComponent_Statics::Class_MetaDataParams)
};
void UMovesetComponent::StaticRegisterNativesUMovesetComponent()
{
}
UClass* Z_Construct_UClass_UMovesetComponent()
{
	if (!Z_Registration_Info_UClass_UMovesetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovesetComponent.OuterSingleton, Z_Construct_UClass_UMovesetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovesetComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovesetComponent);
UMovesetComponent::~UMovesetComponent() {}
// ********** End Class UMovesetComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovesetComponent, UMovesetComponent::StaticClass, TEXT("UMovesetComponent"), &Z_Registration_Info_UClass_UMovesetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovesetComponent), 3350791002U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h__Script_ProjectMimikyu_646450791{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_ActorComponents_MovesetComponent_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
