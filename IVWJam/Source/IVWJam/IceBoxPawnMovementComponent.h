#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "IceBoxPawnMovementComponent.generated.h"

/**
	* 
	*/
UCLASS()
class IVWJAM_API UIceBoxPawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	//Movement Variables
	FVector CurrentVelocity = FVector(0.f,0.f,0.f);
	
	float CharacterAcceleration = 3.3f;
	float MaxMovementSpeed = 1000.f;
	float FrictionConstant = 0.55f;

	float CharacterMass = 50.f; 

	//Gravity
	float CharacterGravity = -10.f; //-10
	float TerminalVelocity = -5.f;

	bool OnGround = false; 
};