// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMimikyu/Public/Input/MyInputTriggerComboAction.h"
#include "InputTriggers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInputTriggerComboAction() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputCancelAction();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputComboStepData();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMyInputTriggerComboAction();
	PROJECTMIMIKYU_API UClass* Z_Construct_UClass_UMyInputTriggerComboAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectMimikyu();
// End Cross Module References
	void UMyInputTriggerComboAction::StaticRegisterNativesUMyInputTriggerComboAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInputTriggerComboAction);
	UClass* Z_Construct_UClass_UMyInputTriggerComboAction_NoRegister()
	{
		return UMyInputTriggerComboAction::StaticClass();
	}
	struct Z_Construct_UClass_UMyInputTriggerComboAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentComboStepIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentComboStepIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeBetweenComboSteps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTimeBetweenComboSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordableAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RecordableAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputCancelActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCancelActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputCancelActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyInputTriggerComboAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMimikyu,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInputTriggerComboAction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Axis Value Combo" },
		{ "IncludePath", "Input/MyInputTriggerComboAction.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Input/MyInputTriggerComboAction.h" },
		{ "NotInputConfigurable", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentComboStepIndex_MetaData[] = {
		{ "Category", "Trigger Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keeps track of what action we're currently at in the combo\n" },
#endif
		{ "ModuleRelativePath", "Public/Input/MyInputTriggerComboAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps track of what action we're currently at in the combo" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentComboStepIndex = { "CurrentComboStepIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInputTriggerComboAction, CurrentComboStepIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentComboStepIndex_MetaData), Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentComboStepIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentTimeBetweenComboSteps_MetaData[] = {
		{ "Category", "Trigger Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time elapsed between last combo InputAction trigger and current time\n" },
#endif
		{ "ModuleRelativePath", "Public/Input/MyInputTriggerComboAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time elapsed between last combo InputAction trigger and current time" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentTimeBetweenComboSteps = { "CurrentTimeBetweenComboSteps", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInputTriggerComboAction, CurrentTimeBetweenComboSteps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentTimeBetweenComboSteps_MetaData), Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentTimeBetweenComboSteps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_RecordableAction_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ModuleRelativePath", "Public/Input/MyInputTriggerComboAction.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_RecordableAction = { "RecordableAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInputTriggerComboAction, RecordableAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_RecordableAction_MetaData), Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_RecordableAction_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_ComboActions_Inner = { "ComboActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputComboStepData, METADATA_PARAMS(0, nullptr) }; // 2640413010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_ComboActions_MetaData[] = {
		{ "Category", "Trigger Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of input actions that need to be completed (according to Combo Step Completion States) to trigger this action.\n\x09 * Input actions must be triggered in order (starting at index 0) to count towards the triggering of the combo.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/Input/MyInputTriggerComboAction.h" },
		{ "TitleProperty", "ComboStepAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions that need to be completed (according to Combo Step Completion States) to trigger this action.\nInput actions must be triggered in order (starting at index 0) to count towards the triggering of the combo." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_ComboActions = { "ComboActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInputTriggerComboAction, ComboActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_ComboActions_MetaData), Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_ComboActions_MetaData) }; // 2640413010
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_InputCancelActions_Inner = { "InputCancelActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputCancelAction, METADATA_PARAMS(0, nullptr) }; // 1716846416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_InputCancelActions_MetaData[] = {
		{ "Category", "Trigger Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actions that will cancel the combo if they are completed (according to Cancellation States)\n" },
#endif
		{ "DisplayName", "Cancel Actions" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/Input/MyInputTriggerComboAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actions that will cancel the combo if they are completed (according to Cancellation States)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_InputCancelActions = { "InputCancelActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInputTriggerComboAction, InputCancelActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_InputCancelActions_MetaData), Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_InputCancelActions_MetaData) }; // 1716846416
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInputTriggerComboAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentComboStepIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_CurrentTimeBetweenComboSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_RecordableAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_ComboActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_ComboActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_InputCancelActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInputTriggerComboAction_Statics::NewProp_InputCancelActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyInputTriggerComboAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInputTriggerComboAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInputTriggerComboAction_Statics::ClassParams = {
		&UMyInputTriggerComboAction::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyInputTriggerComboAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInputTriggerComboAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInputTriggerComboAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyInputTriggerComboAction()
	{
		if (!Z_Registration_Info_UClass_UMyInputTriggerComboAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInputTriggerComboAction.OuterSingleton, Z_Construct_UClass_UMyInputTriggerComboAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyInputTriggerComboAction.OuterSingleton;
	}
	template<> PROJECTMIMIKYU_API UClass* StaticClass<UMyInputTriggerComboAction>()
	{
		return UMyInputTriggerComboAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInputTriggerComboAction);
	UMyInputTriggerComboAction::~UMyInputTriggerComboAction() {}
	struct Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_MyInputTriggerComboAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_MyInputTriggerComboAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyInputTriggerComboAction, UMyInputTriggerComboAction::StaticClass, TEXT("UMyInputTriggerComboAction"), &Z_Registration_Info_UClass_UMyInputTriggerComboAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInputTriggerComboAction), 1262538053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_MyInputTriggerComboAction_h_382462491(TEXT("/Script/ProjectMimikyu"),
		Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_MyInputTriggerComboAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1351d_OneDrive_Documents_GitHub_ProjectPokemonMaster_ProjectMimikyu_Source_ProjectMimikyu_Public_Input_MyInputTriggerComboAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
