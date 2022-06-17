// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryConnectinGame_init() {}
	BATTERYCONNECTINGAME_API UFunction* Z_Construct_UDelegateFunction_BatteryConnectinGame_OnPickUp__DelegateSignature();
	BATTERYCONNECTINGAME_API UFunction* Z_Construct_UDelegateFunction_BatteryConnectinGame_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BatteryConnectinGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BatteryConnectinGame()
	{
		if (!Z_Registration_Info_UPackage__Script_BatteryConnectinGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BatteryConnectinGame_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BatteryConnectinGame_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BatteryConnectinGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x738C88F6,
				0xBC48107C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BatteryConnectinGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BatteryConnectinGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BatteryConnectinGame(Z_Construct_UPackage__Script_BatteryConnectinGame, TEXT("/Script/BatteryConnectinGame"), Z_Registration_Info_UPackage__Script_BatteryConnectinGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x738C88F6, 0xBC48107C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
