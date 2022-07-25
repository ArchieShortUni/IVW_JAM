// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "IceBoxPawnMovementComponent.h" 
#include "IceBoxPawn.generated.h"

UCLASS()
class IVWJAM_API AIceBoxPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AIceBoxPawn();
	

	UPROPERTY(EditAnywhere, Category= "Components")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, Category="Components")
	UBoxComponent* HitBox;

	
	UPROPERTY()
	UIceBoxPawnMovementComponent* IceMovementComponent;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;
	
private:
	FVector MovementDirection;

	
	void MoveForward(float value);
	void MoveRight(float value);
	void Turn(float value);
};
