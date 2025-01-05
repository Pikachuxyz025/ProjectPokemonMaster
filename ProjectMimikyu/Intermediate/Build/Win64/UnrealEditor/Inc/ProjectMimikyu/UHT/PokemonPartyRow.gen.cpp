// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/UI/PokemonPartyRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokemonPartyRow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonPartyRow();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonPartyRow_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	struct PokemonPartyRow_eventSetHealth_Parms
	{
		float CurrentHealth;
		float MaxHealth;
	};
	struct PokemonPartyRow_eventSetIcon_Parms
	{
		UObject* NewImage;
	};
	struct PokemonPartyRow_eventSetNameAndLevel_Parms
	{
		FText NewPokemonName;
		int32 NewPokemonLevel;
	};
	static FName NAME_UPokemonPartyRow_SetHealth = FName(TEXT("SetHealth"));
	void UPokemonPartyRow::SetHealth(const float CurrentHealth, const float MaxHealth)
	{
		PokemonPartyRow_eventSetHealth_Parms Parms;
		Parms.CurrentHealth=CurrentHealth;
		Parms.MaxHealth=MaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_UPokemonPartyRow_SetHealth),&Parms);
	}
	static FName NAME_UPokemonPartyRow_SetIcon = FName(TEXT("SetIcon"));
	void UPokemonPartyRow::SetIcon(UObject* NewImage)
	{
		PokemonPartyRow_eventSetIcon_Parms Parms;
		Parms.NewImage=NewImage;
		ProcessEvent(FindFunctionChecked(NAME_UPokemonPartyRow_SetIcon),&Parms);
	}
	static FName NAME_UPokemonPartyRow_SetNameAndLevel = FName(TEXT("SetNameAndLevel"));
	void UPokemonPartyRow::SetNameAndLevel(FText const& NewPokemonName, int32 NewPokemonLevel)
	{
		PokemonPartyRow_eventSetNameAndLevel_Parms Parms;
		Parms.NewPokemonName=NewPokemonName;
		Parms.NewPokemonLevel=NewPokemonLevel;
		ProcessEvent(FindFunctionChecked(NAME_UPokemonPartyRow_SetNameAndLevel),&Parms);
	}
	void UPokemonPartyRow::StaticRegisterNativesUPokemonPartyRow()
	{
	}
	struct Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetHealth_Parms, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetHealth_Parms, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonPartyRow, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers), sizeof(PokemonPartyRow_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(PokemonPartyRow_eventSetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonPartyRow_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::NewProp_NewImage = { "NewImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetIcon_Parms, NewImage), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::NewProp_NewImage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonPartyRow, nullptr, "SetIcon", nullptr, nullptr, Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers), sizeof(PokemonPartyRow_eventSetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(PokemonPartyRow_eventSetIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonPartyRow_SetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPokemonName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewPokemonName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewPokemonLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonName = { "NewPokemonName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetNameAndLevel_Parms, NewPokemonName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonName_MetaData), Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonLevel = { "NewPokemonLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetNameAndLevel_Parms, NewPokemonLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPokemonPartyRow, nullptr, "SetNameAndLevel", nullptr, nullptr, Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers), sizeof(PokemonPartyRow_eventSetNameAndLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(PokemonPartyRow_eventSetNameAndLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokemonPartyRow);
	UClass* Z_Construct_UClass_UPokemonPartyRow_NoRegister()
	{
		return UPokemonPartyRow::StaticClass();
	}
	struct Z_Construct_UClass_UPokemonPartyRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectImageButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectImageButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectImageButtonBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectImageButtonBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightedColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegularColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPokemonPartyRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPokemonPartyRow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonPartyRow_SetHealth, "SetHealth" }, // 4024266150
		{ &Z_Construct_UFunction_UPokemonPartyRow_SetIcon, "SetIcon" }, // 191308258
		{ &Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel, "SetNameAndLevel" }, // 3899820316
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonPartyRow.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButton = { "SelectImageButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, SelectImageButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButton_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectorArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectorArrow = { "SelectorArrow", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, SelectorArrow), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectorArrow_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectorArrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExperienceBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExperienceBar = { "ExperienceBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, ExperienceBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExperienceBar_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExperienceBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, Health), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExpLeft_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExpLeft = { "ExpLeft", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, ExpLeft), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExpLeft_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExpLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonName = { "PokemonName", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, PokemonName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonName_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonLevel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonLevel = { "PokemonLevel", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, PokemonLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonLevel_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButtonBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButtonBorder = { "SelectImageButtonBorder", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, SelectImageButtonBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButtonBorder_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButtonBorder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HighlightedColor_MetaData[] = {
		{ "Category", "PokemonPartyRow" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HighlightedColor = { "HighlightedColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, HighlightedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HighlightedColor_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HighlightedColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_RegularColor_MetaData[] = {
		{ "Category", "PokemonPartyRow" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_RegularColor = { "RegularColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, RegularColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_RegularColor_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_RegularColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_DefaultImage_MetaData[] = {
		{ "Category", "PokemonPartyRow" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_DefaultImage_MetaData), Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_DefaultImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonPartyRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectorArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExperienceBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectImageButtonBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HighlightedColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_RegularColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_DefaultImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPokemonPartyRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonPartyRow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokemonPartyRow_Statics::ClassParams = {
		&UPokemonPartyRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPokemonPartyRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokemonPartyRow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPokemonPartyRow()
	{
		if (!Z_Registration_Info_UClass_UPokemonPartyRow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonPartyRow.OuterSingleton, Z_Construct_UClass_UPokemonPartyRow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPokemonPartyRow.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UPokemonPartyRow>()
	{
		return UPokemonPartyRow::StaticClass();
	}
	UPokemonPartyRow::UPokemonPartyRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPokemonPartyRow);
	UPokemonPartyRow::~UPokemonPartyRow() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonPartyRow, UPokemonPartyRow::StaticClass, TEXT("UPokemonPartyRow"), &Z_Registration_Info_UClass_UPokemonPartyRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonPartyRow), 3908955850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h_2024933867(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
