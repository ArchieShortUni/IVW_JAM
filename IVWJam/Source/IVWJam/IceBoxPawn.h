// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "IceBoxPawnMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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

	//Face Hit boxes
	UPROPERTY(EditAnywhere, Category="Components")
	UBoxComponent* XPosBox;
	UPROPERTY(EditAnywhere, Category="Components")
	UBoxComponent* XNegBox;
	UPROPERTY(EditAnywhere, Category="Components")
	UBoxComponent* YPosBox;
	UPROPERTY(EditAnywhere, Category="Components")
	UBoxComponent* YNegBox;
	UPROPERTY(EditAnywhere, Category="Components")
	UBoxComponent* ZPosBox;
	UPROPERTY(EditAnywhere, Category="Components")
	UBoxComponent* ZNegBox;

	UPROPERTY(VisibleAnywhere, Category="Player Variables")
	float IceLevelZ = 100;
	
	UPROPERTY(VisibleAnywhere, Category="Player Variables")
	float IceLevelX = 100;
	//350 Max limit for now for current hitbox strat

	UPROPERTY(VisibleAnywhere, Category="Player Variables")
	float IceLevelY = 100;

	UPROPERTY(VisibleAnywhere, Category="Player Variables")
	bool InHazard = false;

	UPROPERTY(VisibleAnywhere, Category="Player Variables")
	bool InCold= false;

	UPROPERTY(EditAnywhere, Category="Player Variables")
	float IceMeltMultiplier = 4.f; // 2

	
	UPROPERTY()
	UIceBoxPawnMovementComponent* IceMovementComponent;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;
	
	void Push(FVector Direction); 

	UFUNCTION(BlueprintCallable)
	void CustomScale(FVector newScale);

	float LocationAdjustmentFromScale(float scale);

	UFUNCTION(BlueprintCallable)
	FVector GetIceVelocity();

	UFUNCTION(BlueprintCallable)
	void SetIceVelocity(FVector newVelocity);
private:
	FVector MovementDirection;

	
	void MoveForward(float value);
	void MoveRight(float value);

	void Turn(float value);
};
