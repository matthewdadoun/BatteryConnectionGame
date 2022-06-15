// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BatteryPickup.generated.h"

UCLASS()
class BATTERYCONNECTINGAME_API ABatteryPickup : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABatteryPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BatteryMeshComponent;

	UPROPERTY(EditDefaultsOnly)
	float RotationSpeed;

	/** Called when a battery gets collected */
	UFUNCTION()
	void CollectBattery(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
