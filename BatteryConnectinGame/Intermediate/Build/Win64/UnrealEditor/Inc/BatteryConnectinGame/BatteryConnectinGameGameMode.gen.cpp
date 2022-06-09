// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryConnectinGame/BatteryConnectinGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryConnectinGameGameMode() {}
// Cross Module References
	BATTERYCONNECTINGAME_API UClass* Z_Construct_UClass_ABatteryConnectinGameGameMode_NoRegister();
	BATTERYCONNECTINGAME_API UClass* Z_Construct_UClass_ABatteryConnectinGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BatteryConnectinGame();
// End Cross Module References
	void ABatteryConnectinGameGameMode::StaticRegisterNativesABatteryConnectinGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatteryConnectinGameGameMode);
	UClass* Z_Construct_UClass_ABatteryConnectinGameGameMode_NoRegister()
	{
		return ABatteryConnectinGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryConnectinGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BatteryConnectinGameGameMode.h" },
		{ "ModuleRelativePath", "BatteryConnectinGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryConnectinGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics::ClassParams = {
		&ABatteryConnectinGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryConnectinGameGameMode()
	{
		if (!Z_Registration_Info_UClass_ABatteryConnectinGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatteryConnectinGameGameMode.OuterSingleton, Z_Construct_UClass_ABatteryConnectinGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABatteryConnectinGameGameMode.OuterSingleton;
	}
	template<> BATTERYCONNECTINGAME_API UClass* StaticClass<ABatteryConnectinGameGameMode>()
	{
		return ABatteryConnectinGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryConnectinGameGameMode);
	struct Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryConnectinGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryConnectinGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABatteryConnectinGameGameMode, ABatteryConnectinGameGameMode::StaticClass, TEXT("ABatteryConnectinGameGameMode"), &Z_Registration_Info_UClass_ABatteryConnectinGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatteryConnectinGameGameMode), 2123178174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryConnectinGameGameMode_h_4173470444(TEXT("/Script/BatteryConnectinGame"),
		Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryConnectinGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryConnectinGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
