// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPowerStation.h"

#include "MovingPlatform.h"

// Sets default values
ABatteryPowerStation::ABatteryPowerStation()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PowerStationMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("PowerStationMeshComp");
}

// Called when the game starts or when spawned
void ABatteryPowerStation::BeginPlay()
{
	Super::BeginPlay();
	bActivated = false;
}

// Called every frame
void ABatteryPowerStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABatteryPowerStation::SetPlatformsActivated(bool bPlatformsMoving)
{
	for (AMovingPlatform* MovingPlatform : MovingPlatforms)
	{
		MovingPlatform->GetInterpToMovementComponent()->SetComponentTickEnabled(bPlatformsMoving);
		bActivated = bPlatformsMoving;
	}
}

void ABatteryPowerStation::SetMovingPlatforms(const TArray<AMovingPlatform*>& MyPlatforms)
{
	MovingPlatforms = MyPlatforms;
}
