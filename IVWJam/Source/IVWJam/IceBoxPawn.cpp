// Fill out your copyright notice in the Description page of Project Settings.


#include "IceBoxPawn.h"


// Sets default values
AIceBoxPawn::AIceBoxPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Default possession
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	
	HitBox = CreateDefaultSubobject<UBoxComponent>("CharacterHitbox");
	HitBox->SetBoxExtent(FVector(50.f,50.f,50.f),true);
	HitBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	HitBox->SetCollisionProfileName(TEXT("Pawn"));
	RootComponent = HitBox;
	SetRootComponent(HitBox);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMesh->SetupAttachment(HitBox);

	IceMovementComponent = CreateDefaultSubobject<UIceBoxPawnMovementComponent>("CMovementComponent");
	IceMovementComponent->UpdatedComponent = RootComponent;

	SetActorRotation(FRotator(0.f,0.f,0.f));
}

// Called when the game starts or when spawned
void AIceBoxPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIceBoxPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AIceBoxPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("ForwardMovement", this, &AIceBoxPawn::MoveForward);
	PlayerInputComponent->BindAxis("RightMovement", this, &AIceBoxPawn::MoveRight); 

}

void AIceBoxPawn::MoveForward(float value)
{
	//UE_LOG(LogTemp, Log, TEXT("Value = %p"), IceMovementComponent->UpdatedComponent);

	if (IceMovementComponent && (IceMovementComponent->UpdatedComponent == RootComponent))
	{
		IceMovementComponent->AddInputVector(GetActorForwardVector() * value);
		
	}

}

void AIceBoxPawn::MoveRight(float value)
{
	if (IceMovementComponent && (IceMovementComponent->UpdatedComponent == RootComponent))
	{
		IceMovementComponent->AddInputVector(GetActorRightVector() * value);
	}
}

UPawnMovementComponent* AIceBoxPawn::GetMovementComponent() const
{
	return IceMovementComponent;
}


