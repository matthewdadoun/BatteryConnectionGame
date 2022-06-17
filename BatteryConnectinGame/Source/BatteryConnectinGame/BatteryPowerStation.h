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

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PowerStationMeshComponent;

	UPROPERTY(EditDefaultsOnly)
	TArray<AMovingPlatform*> MovingPlatforms;

	bool bActivated;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetPlatformsActivated(bool bPlatformsMoving);

	UFUNCTION(BlueprintCallable)
	void SetMovingPlatforms(const TArray<AMovingPlatform*>& MyPlatforms);

	FORCEINLINE bool GetIsPowerStationActivated() { return bActivated; }
};
