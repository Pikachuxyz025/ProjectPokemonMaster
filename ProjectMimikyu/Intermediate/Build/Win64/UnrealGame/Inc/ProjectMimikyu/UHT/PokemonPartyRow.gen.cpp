// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PokemonPartyRow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePokemonPartyRow() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonPartyRow();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonPartyRow_NoRegister();
PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UPokemonUserWidget();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPokemonPartyRow Function SetHealth **************************************
struct PokemonPartyRow_eventSetHealth_Parms
{
	float CurrentHealth;
	float MaxHealth;
};
static FName NAME_UPokemonPartyRow_SetHealth = FName(TEXT("SetHealth"));
void UPokemonPartyRow::SetHealth(const float CurrentHealth, const float MaxHealth)
{
	PokemonPartyRow_eventSetHealth_Parms Parms;
	Parms.CurrentHealth=CurrentHealth;
	Parms.MaxHealth=MaxHealth;
	UFunction* Func = FindFunctionChecked(NAME_UPokemonPartyRow_SetHealth);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHealth constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHealth constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHealth Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetHealth_Parms, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetHealth_Parms, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers) < 2048);
// ********** End Function SetHealth Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonPartyRow, nullptr, "SetHealth", 	Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::PropPointers), 
sizeof(PokemonPartyRow_eventSetHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonPartyRow_SetHealth_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UPokemonPartyRow Function SetHealth ****************************************

// ********** Begin Class UPokemonPartyRow Function SetIcon ****************************************
struct PokemonPartyRow_eventSetIcon_Parms
{
	UTexture2D* NewImage;
};
static FName NAME_UPokemonPartyRow_SetIcon = FName(TEXT("SetIcon"));
void UPokemonPartyRow::SetIcon(UTexture2D* NewImage)
{
	PokemonPartyRow_eventSetIcon_Parms Parms;
	Parms.NewImage=NewImage;
	UFunction* Func = FindFunctionChecked(NAME_UPokemonPartyRow_SetIcon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIcon constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIcon constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIcon Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::NewProp_NewImage = { "NewImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetIcon_Parms, NewImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::NewProp_NewImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers) < 2048);
// ********** End Function SetIcon Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonPartyRow, nullptr, "SetIcon", 	Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::PropPointers), 
sizeof(PokemonPartyRow_eventSetIcon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonPartyRow_SetIcon_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UPokemonPartyRow Function SetIcon ******************************************

// ********** Begin Class UPokemonPartyRow Function SetNameAndLevel ********************************
struct PokemonPartyRow_eventSetNameAndLevel_Parms
{
	FText NewPokemonName;
	int32 NewPokemonLevel;
};
static FName NAME_UPokemonPartyRow_SetNameAndLevel = FName(TEXT("SetNameAndLevel"));
void UPokemonPartyRow::SetNameAndLevel(FText const& NewPokemonName, int32 NewPokemonLevel)
{
	PokemonPartyRow_eventSetNameAndLevel_Parms Parms;
	Parms.NewPokemonName=NewPokemonName;
	Parms.NewPokemonLevel=NewPokemonLevel;
	UFunction* Func = FindFunctionChecked(NAME_UPokemonPartyRow_SetNameAndLevel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPokemonName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNameAndLevel constinit property declarations ***********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewPokemonName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPokemonLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNameAndLevel constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNameAndLevel Property Definitions **********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonName = { "NewPokemonName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetNameAndLevel_Parms, NewPokemonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPokemonName_MetaData), NewProp_NewPokemonName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonLevel = { "NewPokemonLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PokemonPartyRow_eventSetNameAndLevel_Parms, NewPokemonLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::NewProp_NewPokemonLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers) < 2048);
// ********** End Function SetNameAndLevel Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPokemonPartyRow, nullptr, "SetNameAndLevel", 	Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::PropPointers), 
sizeof(PokemonPartyRow_eventSetNameAndLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UPokemonPartyRow Function SetNameAndLevel **********************************

// ********** Begin Class UPokemonPartyRow *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPokemonPartyRow;
UClass* UPokemonPartyRow::GetPrivateStaticClass()
{
	using TClass = UPokemonPartyRow;
	if (!Z_Registration_Info_UClass_UPokemonPartyRow.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PokemonPartyRow"),
			Z_Registration_Info_UClass_UPokemonPartyRow.InnerSingleton,
			StaticRegisterNativesUPokemonPartyRow,
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
	return Z_Registration_Info_UClass_UPokemonPartyRow.InnerSingleton;
}
UClass* Z_Construct_UClass_UPokemonPartyRow_NoRegister()
{
	return UPokemonPartyRow::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPokemonPartyRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PokemonPartyRow.h" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget), BlueprintReadOnly)\n//UButton* SelectImageButton;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget), BlueprintReadOnly)\nUButton* SelectImageButton;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget), BlueprintReadOnly)\n//UProgressBar* ExperienceBar;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget), BlueprintReadOnly)\nUProgressBar* ExperienceBar;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpLeft_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokemonLevel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PokemonPartyRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedColor_MetaData[] = {
		{ "Category", "PokemonPartyRow" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularColor_MetaData[] = {
		{ "Category", "PokemonPartyRow" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[] = {
		{ "Category", "PokemonPartyRow" },
		{ "ModuleRelativePath", "Public/UI/PokemonPartyRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPokemonPartyRow constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorArrow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Health;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokemonLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegularColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPokemonPartyRow constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPokemonPartyRow_SetHealth, "SetHealth" }, // 1001964785
		{ &Z_Construct_UFunction_UPokemonPartyRow_SetIcon, "SetIcon" }, // 931159087
		{ &Z_Construct_UFunction_UPokemonPartyRow_SetNameAndLevel, "SetNameAndLevel" }, // 2133193030
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPokemonPartyRow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPokemonPartyRow_Statics

// ********** Begin Class UPokemonPartyRow Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectorArrow = { "SelectorArrow", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, SelectorArrow), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorArrow_MetaData), NewProp_SelectorArrow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, Health), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExpLeft = { "ExpLeft", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, ExpLeft), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpLeft_MetaData), NewProp_ExpLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonName = { "PokemonName", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, PokemonName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonName_MetaData), NewProp_PokemonName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonLevel = { "PokemonLevel", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, PokemonLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokemonLevel_MetaData), NewProp_PokemonLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HighlightedColor = { "HighlightedColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, HighlightedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightedColor_MetaData), NewProp_HighlightedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_RegularColor = { "RegularColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, RegularColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularColor_MetaData), NewProp_RegularColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPokemonPartyRow, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultImage_MetaData), NewProp_DefaultImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPokemonPartyRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_SelectorArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_ExpLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_PokemonLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_HighlightedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_RegularColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPokemonPartyRow_Statics::NewProp_DefaultImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::PropPointers) < 2048);
// ********** End Class UPokemonPartyRow Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UPokemonPartyRow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPokemonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokemonPartyRow_Statics::DependentSingletons) < 16);
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
void UPokemonPartyRow::StaticRegisterNativesUPokemonPartyRow()
{
}
UClass* Z_Construct_UClass_UPokemonPartyRow()
{
	if (!Z_Registration_Info_UClass_UPokemonPartyRow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokemonPartyRow.OuterSingleton, Z_Construct_UClass_UPokemonPartyRow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokemonPartyRow.OuterSingleton;
}
UPokemonPartyRow::UPokemonPartyRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPokemonPartyRow);
UPokemonPartyRow::~UPokemonPartyRow() {}
// ********** End Class UPokemonPartyRow ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h__Script_ProjectMimikyu_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokemonPartyRow, UPokemonPartyRow::StaticClass, TEXT("UPokemonPartyRow"), &Z_Registration_Info_UClass_UPokemonPartyRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokemonPartyRow), 2066315387U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h__Script_ProjectMimikyu_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h__Script_ProjectMimikyu_959254205{
	TEXT("/Script/ProjectMimikyu"),
	Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h__Script_ProjectMimikyu_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_UI_PokemonPartyRow_h__Script_ProjectMimikyu_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
