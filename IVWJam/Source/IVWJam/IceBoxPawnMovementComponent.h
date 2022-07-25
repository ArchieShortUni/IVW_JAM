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

	UPROPERTY(EditAnywhere,Category="Movement Variables")
	float MovementSpeed = 1.3f;
	float MaxMovementSpeed = 1000.f;
	float FrictionConstant = 0.8f;
	FVector CurrentVelocity = FVector(0.f,0.f,0.f); 
	FVector CharacterGravity = FVector(0.f,0.f,-5.f);
};