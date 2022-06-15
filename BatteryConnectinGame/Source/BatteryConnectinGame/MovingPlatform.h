// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InterpToMovementComponent.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

class UStaticMeshComponent;
class UInterpToMovementComponent;
class UMoveToComponent; 
UCLASS()
class BATTERYCONNECTINGAME_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UInterpToMovementComponent* InterpToMovementComponent;

	UPROPERTY(EditDefaultsOnly, meta=(MakeEditWidget = "true"))
	TArray<FVector> MovementPositions;

	UPROPERTY(EditDefaultsOnly)
	float DurationBetweenPoints; 

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* Used to get a reference to the InterpToMovementComponent */

};
