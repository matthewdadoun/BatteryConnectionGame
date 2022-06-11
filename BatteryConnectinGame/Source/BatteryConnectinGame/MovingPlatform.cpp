// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

#include "Components/InterpToMovementComponent.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComp");
	RootComponent = StaticMeshComponent;

	InterpToMovementComponent = CreateDefaultSubobject<UInterpToMovementComponent>("InterpToMoveComp");
	InterpToMovementComponent->BehaviourType = EInterpToBehaviourType::PingPong;
	//
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
}

void AMovingPlatform::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	TArray<FInterpControlPoint> MyControlPoints;
	if(MovementPositions.Num() > 0)
	{
		for(FVector Vector : MovementPositions)
		{
			MyControlPoints.Add(FInterpControlPoint(Vector, true));
		}
		
		//InterpToMovementComponent->ResetControlPoints();
		InterpToMovementComponent->ControlPoints = MyControlPoints;
		//InterpToMovementComponent->UpdatedComponent = RootComponent;
		InterpToMovementComponent->Duration = 1; 
	}
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

