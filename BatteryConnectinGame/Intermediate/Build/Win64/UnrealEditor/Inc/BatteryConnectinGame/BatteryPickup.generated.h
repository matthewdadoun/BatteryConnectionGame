// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BATTERYCONNECTINGAME_BatteryPickup_generated_h
#error "BatteryPickup.generated.h already included, missing '#pragma once' in BatteryPickup.h"
#endif
#define BATTERYCONNECTINGAME_BatteryPickup_generated_h

#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_SPARSE_DATA
#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectBattery);


#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectBattery);


#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryPickup(); \
	friend struct Z_Construct_UClass_ABatteryPickup_Statics; \
public: \
	DECLARE_CLASS(ABatteryPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryConnectinGame"), NO_API) \
	DECLARE_SERIALIZER(ABatteryPickup)


#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatteryPickup(); \
	friend struct Z_Construct_UClass_ABatteryPickup_Statics; \
public: \
	DECLARE_CLASS(ABatteryPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryConnectinGame"), NO_API) \
	DECLARE_SERIALIZER(ABatteryPickup)


#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryPickup(ABatteryPickup&&); \
	NO_API ABatteryPickup(const ABatteryPickup&); \
public:


#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryPickup(ABatteryPickup&&); \
	NO_API ABatteryPickup(const ABatteryPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryPickup)


#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_9_PROLOG
#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_SPARSE_DATA \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_RPC_WRAPPERS \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_INCLASS \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_SPARSE_DATA \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_INCLASS_NO_PURE_DECLS \
	FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCONNECTINGAME_API UClass* StaticClass<class ABatteryPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BatteryConnectinGame_Source_BatteryConnectinGame_BatteryPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
