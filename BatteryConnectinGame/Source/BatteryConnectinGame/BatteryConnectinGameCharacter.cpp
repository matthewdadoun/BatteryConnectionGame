// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryConnectinGameCharacter.h"
#include "BatteryConnectinGameProjectile.h"
#include "BatteryPickup.h"
#include "BatteryPowerStation.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Kismet/GameplayStatics.h"


//////////////////////////////////////////////////////////////////////////
// ABatteryConnectinGameCharacter

ABatteryConnectinGameCharacter::ABatteryConnectinGameCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));
}

void ABatteryConnectinGameCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	Mesh1P->SetVisibility(false, true);
}

//////////////////////////////////////////////////////////////////////////// Input

void ABatteryConnectinGameCharacter::DropBattery()
{
	if (bIsHoldingBattery && GetMovementComponent()->IsMovingOnGround())
	{
		/** Setting beginning and ending point of the line trace */
		FVector StartLocation = GetFirstPersonCameraComponent()->GetComponentLocation();
		FVector EndLocation = GetFirstPersonCameraComponent()->GetComponentLocation() + (GetControlRotation().Vector() * DistanceToSpawnBattery);

		FCollisionShape Shape;
		Shape.SetSphere(20.0f);

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);

		// Sets which objects are part of the line trace
		FCollisionObjectQueryParams ObjectQueryParams;
		ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);

		FHitResult HitResult;

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = this;

		FRotator ProjRotation = FRotationMatrix::MakeFromX(EndLocation - StartLocation).Rotator();

		if (GetWorld()->SweepSingleByObjectType(HitResult, StartLocation, EndLocation, FQuat::Identity, ObjectQueryParams, Shape, Params))
		{
			if (HitResult.GetActor())
				// Overwrites trace end with impact point in world
				EndLocation = HitResult.ImpactPoint;
		}

		//spawn actor at EndLocation
		FTransform SpawnTM = FTransform(ProjRotation, EndLocation);
		SetIsHoldingBattery(false);
		GetWorld()->SpawnActor<ABatteryPickup>(BatteryPickupClass, SpawnTM, SpawnParams);
	}
}

void ABatteryConnectinGameCharacter::InsertBattery()
{
	/** Setting beginning and ending point of the line trace */
	FVector StartLocation = GetFirstPersonCameraComponent()->GetComponentLocation();
	FVector EndLocation = GetFirstPersonCameraComponent()->GetComponentLocation() + (GetControlRotation().Vector() * DistanceToSpawnBattery);

	FCollisionShape Shape;
	Shape.SetSphere(20.0f);

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	// Sets which objects are part of the line trace
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);

	FHitResult HitResult;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = this;

	if (GetWorld()->SweepSingleByObjectType(HitResult, StartLocation, EndLocation, FQuat::Identity, ObjectQueryParams, Shape, Params))
	{
		if (ABatteryPowerStation* PowerStation = Cast<ABatteryPowerStation>(HitResult.GetActor()))
		{
			if(bIsHoldingBattery && !PowerStation->GetIsPowerStationActivated())
			{
				PowerStation->SetPlatformsActivated(true);
				SetIsHoldingBattery(false);
			}
			else if (!bIsHoldingBattery && PowerStation->GetIsPowerStationActivated())
			{
				PowerStation->SetPlatformsActivated(false);
				SetIsHoldingBattery(true);
			}
		}
	}
}

void ABatteryConnectinGameCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("DropBattery", IE_Pressed, this, &ABatteryConnectinGameCharacter::DropBattery);
	PlayerInputComponent->BindAction("InsertBattery", IE_Pressed, this, &ABatteryConnectinGameCharacter::InsertBattery);

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &ABatteryConnectinGameCharacter::OnPrimaryAction);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ABatteryConnectinGameCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ABatteryConnectinGameCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ABatteryConnectinGameCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ABatteryConnectinGameCharacter::LookUpAtRate);
}

void ABatteryConnectinGameCharacter::OnPrimaryAction()
{
	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();
}

void ABatteryConnectinGameCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnPrimaryAction();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ABatteryConnectinGameCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void ABatteryConnectinGameCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ABatteryConnectinGameCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ABatteryConnectinGameCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ABatteryConnectinGameCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

bool ABatteryConnectinGameCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ABatteryConnectinGameCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ABatteryConnectinGameCharacter::EndTouch);

		return true;
	}

	return false;
}

void ABatteryConnectinGameCharacter::SetIsHoldingBattery(bool bHoldState)
{
	Mesh1P->SetVisibility(bHoldState, true);
	bIsHoldingBattery = bHoldState;
}
