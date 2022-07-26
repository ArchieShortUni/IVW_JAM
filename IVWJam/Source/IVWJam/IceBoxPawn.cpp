// Fill out your copyright notice in the Description page of Project Settings.


#include "IceBoxPawn.h"

#include <vector>


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
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AIceBoxPawn::AIceBoxPawn::OnOverlapBegin);
	
	RootComponent = HitBox;
	SetRootComponent(HitBox);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMesh->SetupAttachment(HitBox);

	//Setup Hitboxes for detection of which side impact occurs 
	XPosBox = CreateDefaultSubobject<UBoxComponent>("XPosBox");
	XPosBox->SetBoxExtent(FVector(4.f,50.f,50.f),true);
	XPosBox->SetRelativeLocation(FVector(54.f,0.f,0.f)); 
	XPosBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	XPosBox->SetupAttachment(HitBox);

	XNegBox = CreateDefaultSubobject<UBoxComponent>("XNegBox");
	XNegBox->SetBoxExtent(FVector(4.f,50.f,50.f),true);
	XNegBox->SetRelativeLocation(FVector(-54.f,0.f,0.f)); 
	XNegBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	XNegBox->SetupAttachment(HitBox);

	YPosBox = CreateDefaultSubobject<UBoxComponent>("YPosBox");
	YPosBox->SetBoxExtent(FVector(50.f,4.f,50.f),true);
	YPosBox->SetRelativeLocation(FVector(0,54.f,0.f)); 
	YPosBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	YPosBox->SetupAttachment(HitBox);

	YNegBox = CreateDefaultSubobject<UBoxComponent>("YNegBox");
	YNegBox->SetBoxExtent(FVector(50.f,4,50.f),true);
	YNegBox->SetRelativeLocation(FVector(0,-54.f,0.f)); 
	YNegBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	YNegBox->SetupAttachment(HitBox);

	ZPosBox = CreateDefaultSubobject<UBoxComponent>("ZPosBox");
	ZPosBox->SetBoxExtent(FVector(50.f,50.f,4.f),true);
	ZPosBox->SetRelativeLocation(FVector(0,0.f,54.f)); 
	ZPosBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ZPosBox->SetupAttachment(HitBox);

	ZNegBox = CreateDefaultSubobject<UBoxComponent>("ZNegBox");
	ZNegBox->SetBoxExtent(FVector(50.f,50,4.f),true);
	ZNegBox->SetRelativeLocation(FVector(0,0.f,-54.f)); 
	ZNegBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ZNegBox->SetupAttachment(HitBox);

	IceMovementComponent = CreateDefaultSubobject<UIceBoxPawnMovementComponent>("CMovementComponent");
	IceMovementComponent->UpdatedComponent = RootComponent;

	SetActorRotation(FRotator(0.f,0.f,0.f));
}

void AIceBoxPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OverlappedComp->GetOwner()->GetClass()->IsChildOf(AIceBoxPawn::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("OtherIceCollision"));

	}

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
	
	//Shoot out 4 Line traces per tick on all 4 corners to see if we are currently on a surface. If so we are on the ground and dont apply gravitational force 
	//Melt
	const FVector CurrentScale = GetActorScale();

	if(iceLevelZ >= 5 && IceMovementComponent->OnGround == true)
	{
		iceLevelZ -= DeltaTime*2;
		Custom_Scale(FVector(iceLevelZ/100,CurrentScale.Y,CurrentScale.Z));
	//	SetActorScale3D(FVector(CurrentScale.X,CurrentScale.Y,CurrentScale.Z));
	}
	
	FCollisionQueryParams CollisionParams;
	
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AIceBoxPawn::StaticClass(), FoundActors);
	CollisionParams.AddIgnoredActors(FoundActors);
	
	std::vector<FVector> CornerDirections = {
		FVector(1.f,1.f,1.f),
		FVector(1.f,-1.f,1.f),
		FVector(-1.f,1.f,1.f),
		FVector(-1.f,-1.f,1.f),
	};

	bool hitGround = false; 
	for(int i =0; i<=3; i++)
	{
		FHitResult Corner;
		FVector StartL = GetActorLocation() - (CurrentScale*50*CornerDirections.at(i)); 
		FVector EndL = StartL + FVector(0.f,0.f,-300.f);
		DrawDebugLine(GetWorld(), StartL, EndL, FColor::Blue, false, DeltaTime+0.001f, 0, 2);
		
		if(GetWorld()->LineTraceSingleByChannel(Corner, StartL, EndL, ECC_WorldStatic, CollisionParams))
		{
			if(Corner.Distance < .005f){hitGround = true; }
		}}
	IceMovementComponent->OnGround = hitGround; 

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

void AIceBoxPawn::Turn(float value)
{
}

void AIceBoxPawn::Push(FVector Direction)
{
	if (IceMovementComponent && (IceMovementComponent->UpdatedComponent == RootComponent))
	{
		IceMovementComponent->CurrentVelocity = Direction;
	}
}

void AIceBoxPawn::Custom_Scale(FVector newScale)
{
	SetActorScale3D(newScale);
	XPosBox->SetRelativeScale3D(FVector(1/newScale.X,1.f,1.f));
	
}

UPawnMovementComponent* AIceBoxPawn::GetMovementComponent() const
{
	return IceMovementComponent;
}


