// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryConnectinGame/TitleScreenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleScreenWidget() {}
// Cross Module References
	BATTERYCONNECTINGAME_API UClass* Z_Construct_UClass_UTitleScreenWidget_NoRegister();
	BATTERYCONNECTINGAME_API UClass* Z_Construct_UClass_UTitleScreenWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BatteryConnectinGame();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTitleScreenWidget::execExitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTitleScreenWidget::execShowControls)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowControls();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTitleScreenWidget::execShowStory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowStory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTitleScreenWidget::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	void UTitleScreenWidget::StaticRegisterNativesUTitleScreenWidget()
	{
		UClass* Class = UTitleScreenWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitGame", &UTitleScreenWidget::execExitGame },
			{ "ShowControls", &UTitleScreenWidget::execShowControls },
			{ "ShowStory", &UTitleScreenWidget::execShowStory },
			{ "StartGame", &UTitleScreenWidget::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTitleScreenWidget_ExitGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTitleScreenWidget_ExitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleScreenWidget_ExitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleScreenWidget, nullptr, "ExitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTitleScreenWidget_ExitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleScreenWidget_ExitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTitleScreenWidget_ExitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleScreenWidget_ExitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTitleScreenWidget_ShowControls_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTitleScreenWidget_ShowControls_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleScreenWidget_ShowControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleScreenWidget, nullptr, "ShowControls", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTitleScreenWidget_ShowControls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleScreenWidget_ShowControls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTitleScreenWidget_ShowControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleScreenWidget_ShowControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTitleScreenWidget_ShowStory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTitleScreenWidget_ShowStory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleScreenWidget_ShowStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleScreenWidget, nullptr, "ShowStory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTitleScreenWidget_ShowStory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleScreenWidget_ShowStory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTitleScreenWidget_ShowStory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleScreenWidget_ShowStory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTitleScreenWidget_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTitleScreenWidget_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleScreenWidget_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleScreenWidget, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTitleScreenWidget_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleScreenWidget_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTitleScreenWidget_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleScreenWidget_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitleScreenWidget);
	UClass* Z_Construct_UClass_UTitleScreenWidget_NoRegister()
	{
		return UTitleScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTitleScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleLogo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleLogo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoryButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlsButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTitleScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryConnectinGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTitleScreenWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleScreenWidget_ExitGame, "ExitGame" }, // 312440230
		{ &Z_Construct_UFunction_UTitleScreenWidget_ShowControls, "ShowControls" }, // 987154983
		{ &Z_Construct_UFunction_UTitleScreenWidget_ShowStory, "ShowStory" }, // 539898948
		{ &Z_Construct_UFunction_UTitleScreenWidget_StartGame, "StartGame" }, // 3405587118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TitleScreenWidget.h" },
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_TitleLogo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "true" },
		{ "Category", "TitleScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_TitleLogo = { "TitleLogo", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleScreenWidget, TitleLogo), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_TitleLogo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_TitleLogo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StartButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "true" },
		{ "Category", "TitleScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleScreenWidget, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StartButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_BackButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "true" },
		{ "Category", "TitleScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleScreenWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StoryButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "true" },
		{ "Category", "TitleScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StoryButton = { "StoryButton", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleScreenWidget, StoryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StoryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StoryButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ControlsButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "true" },
		{ "Category", "TitleScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ControlsButton = { "ControlsButton", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleScreenWidget, ControlsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ControlsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ControlsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ExitButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "true" },
		{ "Category", "TitleScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TitleScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleScreenWidget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ExitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ExitButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleScreenWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_TitleLogo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StartButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_BackButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_StoryButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ControlsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreenWidget_Statics::NewProp_ExitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTitleScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleScreenWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleScreenWidget_Statics::ClassParams = {
		&UTitleScreenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTitleScreenWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTitleScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTitleScreenWidget()
	{
		if (!Z_Registration_Info_UClass_UTitleScreenWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleScreenWidget.OuterSingleton, Z_Construct_UClass_UTitleScreenWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTitleScreenWidget.OuterSingleton;
	}
	template<> BATTERYCONNECTINGAME_API UClass* StaticClass<UTitleScreenWidget>()
	{
		return UTitleScreenWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleScreenWidget);
	struct Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_TitleScreenWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_TitleScreenWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTitleScreenWidget, UTitleScreenWidget::StaticClass, TEXT("UTitleScreenWidget"), &Z_Registration_Info_UClass_UTitleScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleScreenWidget), 2901346285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_TitleScreenWidget_h_739602931(TEXT("/Script/BatteryConnectinGame"),
		Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_TitleScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_TitleScreenWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
