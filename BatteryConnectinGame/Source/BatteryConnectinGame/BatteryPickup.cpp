// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickup.h"

#include "BatteryConnectinGameCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABatteryPickup::ABatteryPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BatteryMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BatteryMeshComponent");
	RootComponent = BatteryMeshComponent;
}

void ABatteryPickup::CollectBattery(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(ABatteryConnectinGameCharacter* MainCharacter = Cast<ABatteryConnectinGameCharacter>(UGameplayStatics::GetPlayerPawn(this, 0)))
	{
		if (OtherActor == MainCharacter)
		{
			if(!MainCharacter->GetIsHoldingBattery())
			{
				MainCharacter->SetIsHoldingBattery(true);
				Destroy();
			}
		}
	}
}

// Called when the game starts or when spawned
void ABatteryPickup::BeginPlay()
{
	Super::BeginPlay();

	BatteryMeshComponent->SetWorldRotation(FRotator(30, 0 , 0));
	BatteryMeshComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::CollectBattery);
}

// Called every frame
void ABatteryPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	BatteryMeshComponent->AddWorldRotation(FRotator(0,RotationSpeed, 0)); 

}

