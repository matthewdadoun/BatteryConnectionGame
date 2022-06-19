// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BatteryPowerStation.generated.h"

class AMovingPlatform;
UCLASS()
class BATTERYCONNECTINGAME_API ABatteryPowerStation : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABatteryPowerStation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly)
	TArray<AMovingPlatform*> MovingPlatforms;

	UPROPERTY(BlueprintReadOnly)
	bool bActivated;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetPowerStationActivated(bool bPowerStationActivated);

	UFUNCTION(BlueprintCallable)
	void SetMovingPlatforms(const TArray<AMovingPlatform*>& MyPlatforms);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_PlayBatteryAnimation(bool bBatteryPlaced);

	FORCEINLINE bool GetIsPowerStationActivated() { return bActivated; }
};
