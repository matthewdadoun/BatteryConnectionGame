// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryConnectinGameGameMode.h"
#include "BatteryConnectinGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABatteryConnectinGameGameMode::ABatteryConnectinGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
