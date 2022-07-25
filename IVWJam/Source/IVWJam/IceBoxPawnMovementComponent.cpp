// Fill out your copyright notice in the Description page of Project Settings.


#include "IceBoxPawnMovementComponent.h"
#include "IceBoxPawn.h"
#include <valarray>
#include <ThirdParty/openexr/Deploy/OpenEXR-2.3.0/OpenEXR/include/ImathMath.h>

void UIceBoxPawnMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Make sure that everything is still valid, and that we are allowed to move.
	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	//CALCULATE CHANGE IN VELOCITY
	//CurrentVelocity += ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * MovementSpeed;
	//if((CurrentVelocity+ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * MovementSpeed).Size() <= MaxMovementSpeed)
	//{
		CurrentVelocity += ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * MovementSpeed;
		CurrentVelocity *= std::pow(FrictionConstant, DeltaTime);

	//Add Gravity
		//CurrentVelocity += CharacterGravity * DeltaTime;
	
		if(GetLastInputVector().IsNearlyZero())
		{
			CurrentVelocity -= CurrentVelocity * .5f * DeltaTime;
		}
	


	//}
	


	
	//FVector GravityMovement = CharacterGravity * DeltaTime;
	//FHitResult GHit;
	//SafeMoveUpdatedComponent(GravityMovement, UpdatedComponent->GetComponentRotation(), true, GHit);

	// Get (and then clear) the movement vector that we set in ACollidingPawn::Tick
	
	FVector DesiredMovementThisFrame = CurrentVelocity;
	if (!DesiredMovementThisFrame.IsNearlyZero())
	{
		FHitResult Hit;
		SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent->GetComponentRotation(), true, Hit);

		// If we bumped into something, try to slide along it
		if (Hit.IsValidBlockingHit())
		{

			if(Hit.GetComponent()->GetOwner()->GetClass()->IsChildOf(AIceBoxPawn::StaticClass()))
			{
				UE_LOG(LogTemp, Warning, TEXT("Is Other Ice"));
				Cast<AIceBoxPawn>(Hit.GetComponent()->GetOwner())->Push(CurrentVelocity);
			}
			}
			else{}

			//UE_LOG(LogTemp, Warning, TEXT("%s"),*Hit.GetComponent()->GetOwner()->GetClass()())

			SlideAlongSurface(DesiredMovementThisFrame, 1.f - Hit.Time, Hit.Normal, Hit);
			CurrentVelocity -= CurrentVelocity * .3f * DeltaTime;

		}
	}
