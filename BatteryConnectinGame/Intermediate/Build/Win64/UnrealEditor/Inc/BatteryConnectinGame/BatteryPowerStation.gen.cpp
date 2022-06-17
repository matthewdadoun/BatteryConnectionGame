// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryConnectinGame/BatteryPowerStation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPowerStation() {}
// Cross Module References
	BATTERYCONNECTINGAME_API UClass* Z_Construct_UClass_ABatteryPowerStation_NoRegister();
	BATTERYCONNECTINGAME_API UClass* Z_Construct_UClass_ABatteryPowerStation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BatteryConnectinGame();
	BATTERYCONNECTINGAME_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABatteryPowerStation::execSetMovingPlatforms)
	{
		P_GET_TARRAY_REF(AMovingPlatform*,Z_Param_Out_MyPlatforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovingPlatforms(Z_Param_Out_MyPlatforms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABatteryPowerStation::execSetPlatformsActivated)
	{
		P_GET_UBOOL(Z_Param_bPlatformsMoving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlatformsActivated(Z_Param_bPlatformsMoving);
		P_NATIVE_END;
	}
	void ABatteryPowerStation::StaticRegisterNativesABatteryPowerStation()
	{
		UClass* Class = ABatteryPowerStation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMovingPlatforms", &ABatteryPowerStation::execSetMovingPlatforms },
			{ "SetPlatformsActivated", &ABatteryPowerStation::execSetPlatformsActivated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics
	{
		struct BatteryPowerStation_eventSetMovingPlatforms_Parms
		{
			TArray<AMovingPlatform*> MyPlatforms;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPlatforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyPlatforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyPlatforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::NewProp_MyPlatforms_Inner = { "MyPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMovingPlatform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::NewProp_MyPlatforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::NewProp_MyPlatforms = { "MyPlatforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryPowerStation_eventSetMovingPlatforms_Parms, MyPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::NewProp_MyPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::NewProp_MyPlatforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::NewProp_MyPlatforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::NewProp_MyPlatforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BatteryPowerStation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryPowerStation, nullptr, "SetMovingPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::BatteryPowerStation_eventSetMovingPlatforms_Parms), Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics
	{
		struct BatteryPowerStation_eventSetPlatformsActivated_Parms
		{
			bool bPlatformsMoving;
		};
		static void NewProp_bPlatformsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlatformsMoving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::NewProp_bPlatformsMoving_SetBit(void* Obj)
	{
		((BatteryPowerStation_eventSetPlatformsActivated_Parms*)Obj)->bPlatformsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::NewProp_bPlatformsMoving = { "bPlatformsMoving", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatteryPowerStation_eventSetPlatformsActivated_Parms), &Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::NewProp_bPlatformsMoving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::NewProp_bPlatformsMoving,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BatteryPowerStation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryPowerStation, nullptr, "SetPlatformsActivated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::BatteryPowerStation_eventSetPlatformsActivated_Parms), Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatteryPowerStation);
	UClass* Z_Construct_UClass_ABatteryPowerStation_NoRegister()
	{
		return ABatteryPowerStation::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryPowerStation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerStationMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PowerStationMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovingPlatforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingPlatforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MovingPlatforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryPowerStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryConnectinGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatteryPowerStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatteryPowerStation_SetMovingPlatforms, "SetMovingPlatforms" }, // 1076316621
		{ &Z_Construct_UFunction_ABatteryPowerStation_SetPlatformsActivated, "SetPlatformsActivated" }, // 2825073803
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPowerStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BatteryPowerStation.h" },
		{ "ModuleRelativePath", "BatteryPowerStation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_PowerStationMeshComponent_MetaData[] = {
		{ "Category", "BatteryPowerStation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryPowerStation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_PowerStationMeshComponent = { "PowerStationMeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryPowerStation, PowerStationMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_PowerStationMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_PowerStationMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_MovingPlatforms_Inner = { "MovingPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMovingPlatform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_MovingPlatforms_MetaData[] = {
		{ "Category", "BatteryPowerStation" },
		{ "ModuleRelativePath", "BatteryPowerStation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_MovingPlatforms = { "MovingPlatforms", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryPowerStation, MovingPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_MovingPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_MovingPlatforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryPowerStation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_PowerStationMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_MovingPlatforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPowerStation_Statics::NewProp_MovingPlatforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryPowerStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPowerStation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPowerStation_Statics::ClassParams = {
		&ABatteryPowerStation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatteryPowerStation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPowerStation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryPowerStation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPowerStation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryPowerStation()
	{
		if (!Z_Registration_Info_UClass_ABatteryPowerStation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatteryPowerStation.OuterSingleton, Z_Construct_UClass_ABatteryPowerStation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABatteryPowerStation.OuterSingleton;
	}
	template<> BATTERYCONNECTINGAME_API UClass* StaticClass<ABatteryPowerStation>()
	{
		return ABatteryPowerStation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPowerStation);
	struct Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPowerStation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPowerStation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABatteryPowerStation, ABatteryPowerStation::StaticClass, TEXT("ABatteryPowerStation"), &Z_Registration_Info_UClass_ABatteryPowerStation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatteryPowerStation), 2507655453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPowerStation_h_949370770(TEXT("/Script/BatteryConnectinGame"),
		Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPowerStation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPowerStation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
