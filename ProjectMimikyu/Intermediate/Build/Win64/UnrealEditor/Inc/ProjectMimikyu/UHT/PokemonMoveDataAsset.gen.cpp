// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/DataAssets/PokemonMoveDataAsset.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonMoveDataAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UPokemonMoveDataAsset::StaticRegisterNativesUPokemonMoveDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonMoveDataAsset);
	UClass* Z_Construct_UClass_UPokemonMoveDataAsset_NoRegister()
	{
		return UPokemonMoveDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonMoveDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MoveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MoveDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonMoveDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/PokemonMoveDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* UPROPERTY(EditAnywhere,BlueprintReadOnly)\n\x09""FText MoveName;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""FText MoveDescription;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""float BaseDamage = 0;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""EMoveType Category = EMoveType::EMT_None;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""EMoveAction MoveAction = EMoveAction::EMA_None;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""EElementalType MoveElementalType = EElementalType::EET_None;\n\n\x09UPROPERTY(EditAnywhere,Category = \"Pokemon Ability\")\n\x09TSubclassOf<UPokemonGameplayAbilities> PGAClass;\n\n\x09UPROPERTY(EditAnywhere, meta = (EditCondition = \"MoveAction == EMoveAction::EMA_Melee\", EditConditionHides))\n\x09""float IdealRange = 0;\n\n\x09UPROPERTY(EditAnywhere, meta = (EditCondition = \"MoveAction == EMoveAction::EMA_Melee || MoveAction == EMoveAction::EMA_Charging\", EditConditionHides))\n\x09""float SpeedMultiplier = 1;\n\n\x09UPROPERTY(EditAnywhere, meta = (EditCondition = \"MoveAction == EMoveAction::EMA_Projectile\", EditConditionHides))\n\x09""bool bNeedsToBeInLineOfSight = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""EDamageResponse DamageResponse = EDamageResponse::EDR_None;\n\n\x09UPROPERTY(EditAnywhere, meta = (EditCondition = \"DamageResponse == EDamageResponse::EDR_Stun\", EditConditionHides))\n\x09""float ChanceOfFlinching = 0;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""float RechargeTime = 0;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bShouldDamageInvincible = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bCanBeBlocked = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bCanBeParried = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bShouldForceInterrupt = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bIsTutorMove = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bIsTM = false;\n\n\x09UPROPERTY(EditAnywhere, meta = (EditCondition = \"bIsTM\", EditConditionHides))\n\x09int32 TMNumber = 0;\n\n\x09UPROPERTY(EditAnywhere, Category = \"Status Effect\")\n\x09""bool bHasStatus = false;\n\n\x09UPROPERTY(EditAnywhere, meta = (EditCondition = \"bHasStatus\", EditConditionHides), Category = \"Status Effect\")\n\x09""EStatusType InflictableStatus = EStatusType::EST_None;\n\n\x09UPROPERTY(EditAnywhere, meta = (EditCondition = \"bHasStatus\", EditConditionHides), Category = \"Status Effect\")\n\x09""float ChanceOfStatus = 0;\n\n\x09void SetInputTag(FGameplayTag NewInputTag) { InputTag = NewInputTag; }\n\x09""FGameplayTag GetInputTag() { return InputTag; }\n\n\x09\x09""FGameplayTag InputTag;\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* UPROPERTY(EditAnywhere,BlueprintReadOnly)\nFText MoveName;\n\nUPROPERTY(EditAnywhere)\nFText MoveDescription;\n\nUPROPERTY(EditAnywhere)\nfloat BaseDamage = 0;\n\nUPROPERTY(EditAnywhere)\nEMoveType Category = EMoveType::EMT_None;\n\nUPROPERTY(EditAnywhere)\nEMoveAction MoveAction = EMoveAction::EMA_None;\n\nUPROPERTY(EditAnywhere)\nEElementalType MoveElementalType = EElementalType::EET_None;\n\nUPROPERTY(EditAnywhere,Category = \"Pokemon Ability\")\nTSubclassOf<UPokemonGameplayAbilities> PGAClass;\n\nUPROPERTY(EditAnywhere, meta = (EditCondition = \"MoveAction == EMoveAction::EMA_Melee\", EditConditionHides))\nfloat IdealRange = 0;\n\nUPROPERTY(EditAnywhere, meta = (EditCondition = \"MoveAction == EMoveAction::EMA_Melee || MoveAction == EMoveAction::EMA_Charging\", EditConditionHides))\nfloat SpeedMultiplier = 1;\n\nUPROPERTY(EditAnywhere, meta = (EditCondition = \"MoveAction == EMoveAction::EMA_Projectile\", EditConditionHides))\nbool bNeedsToBeInLineOfSight = false;\n\nUPROPERTY(EditAnywhere)\nEDamageResponse DamageResponse = EDamageResponse::EDR_None;\n\nUPROPERTY(EditAnywhere, meta = (EditCondition = \"DamageResponse == EDamageResponse::EDR_Stun\", EditConditionHides))\nfloat ChanceOfFlinching = 0;\n\nUPROPERTY(EditAnywhere)\nfloat RechargeTime = 0;\n\nUPROPERTY(EditAnywhere)\nbool bShouldDamageInvincible = false;\n\nUPROPERTY(EditAnywhere)\nbool bCanBeBlocked = false;\n\nUPROPERTY(EditAnywhere)\nbool bCanBeParried = false;\n\nUPROPERTY(EditAnywhere)\nbool bShouldForceInterrupt = false;\n\nUPROPERTY(EditAnywhere)\nbool bIsTutorMove = false;\n\nUPROPERTY(EditAnywhere)\nbool bIsTM = false;\n\nUPROPERTY(EditAnywhere, meta = (EditCondition = \"bIsTM\", EditConditionHides))\nint32 TMNumber = 0;\n\nUPROPERTY(EditAnywhere, Category = \"Status Effect\")\nbool bHasStatus = false;\n\nUPROPERTY(EditAnywhere, meta = (EditCondition = \"bHasStatus\", EditConditionHides), Category = \"Status Effect\")\nEStatusType InflictableStatus = EStatusType::EST_None;\n\nUPROPERTY(EditAnywhere, meta = (EditCondition = \"bHasStatus\", EditConditionHides), Category = \"Status Effect\")\nfloat ChanceOfStatus = 0;\n\nvoid SetInputTag(FGameplayTag NewInputTag) { InputTag = NewInputTag; }\nFGameplayTag GetInputTag() { return InputTag; }\n\n        FGameplayTag InputTag;" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName = { "MoveName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, MoveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription = { "MoveDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, MoveDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Categories", "Abilities" },
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_StatusTag_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_StatusTag = { "StatusTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, StatusTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_StatusTag_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_StatusTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InputTag_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_CooldownTag_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_CooldownTag_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_CooldownTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityType_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, AbilityType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityType_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "PokemonMoveDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/PokemonMoveDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonMoveDataAsset, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UPokemonGameplayAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Ability_MetaData), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Ability_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_MoveDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_StatusTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_AbilityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonMoveDataAsset_Statics::NewProp_Ability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonMoveDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonMoveDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonMoveDataAsset_Statics::ClassParams = {
		&UPokemonMoveDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonMoveDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonMoveDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonMoveDataAsset()
	{
		if (!Z_Registration_Info_UClass_UPokemonMoveDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonMoveDataAsset.OuterSingleton, Z_Construct_UClass_UPokemonMoveDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonMoveDataAsset.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonMoveDataAsset>()
	{
		return UPokemonMoveDataAsset::StaticClass();
	}
	UPokemonMoveDataAsset::UPokemonMoveDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonMoveDataAsset);
	UPokemonMoveDataAsset::~UPokemonMoveDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonMoveDataAsset, UPokemonMoveDataAsset::StaticClass, TEXT("UPokemonMoveDataAsset"), &Z_Registration_Info_UClass_UPokemonMoveDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonMoveDataAsset), 2789207884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_908558482(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_DataAssets_PokemonMoveDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
