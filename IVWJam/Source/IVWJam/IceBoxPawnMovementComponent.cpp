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
	
	//Accelerate in chosen direction (if no input it will be adding 0)
	CurrentVelocity += ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * CharacterAcceleration;
	
	//Apply friction 
	CurrentVelocity *= std::pow(FrictionConstant, DeltaTime);

	//Clamp to max speed 
	CurrentVelocity = CurrentVelocity.GetClampedToMaxSize(10.f);
	
	//Apply Gravity 
	if(CurrentVelocity.Z >= TerminalVelocity && !OnGround)
	{
		CurrentVelocity += FVector(0.f,0.f,CharacterGravity*DeltaTime);
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("Is Falling %hs"),IsFalling()? "true" : "false" );
	// Get (and then clear) the movement vector that we set in ACollidingPawn::Tick
	FVector DesiredMovementThisFrame = CurrentVelocity;
	if (!DesiredMovementThisFrame.IsNearlyZero())
	{
		FHitResult Hit;
		SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent->GetComponentRotation(), true, Hit);
		// If we bumped into something, try to slide along it
		if (Hit.IsValidBlockingHit())
		{
			//	UE_LOG(LogTemp, Warning, TEXT("Location Of Hit: %s"),*Hit.Location.ToString());
			//	UE_LOG(LogTemp, Warning, TEXT("Location Of Actor: %s"), *location().ToString());

			//UE_LOG(LogTemp, Warning, TEXT("%s"),*Hit.GetComponent()->GetOwner()->GetClass()->GetName());

			
			if(Hit.GetComponent()->GetOwner()->GetClass()->IsChildOf(AIceBoxPawn::StaticClass()) && Hit.GetComponent() != UpdatedComponent)
			{
				
				UE_LOG(LogTemp, Warning, TEXT("Is Other Ice"));
				//Add slightly random rotation 
				//float rotation = FMath::RandRange(-15,15);
				//	FVector newDirection = FVector((cos(rotation)*CurrentVelocity.X)-(sin(rotation)*CurrentVelocity.Y),(sin(rotation)*CurrentVelocity.X)+(sin(rotation)*CurrentVelocity.Y),0.f);
				Cast<AIceBoxPawn>(Hit.GetComponent()->GetOwner())->Push(CurrentVelocity);
				

			}
			
			else
			{
				//Handle Opposite reaction Collisions, tried two methods for gravity and horizontal collisions 
				if(Hit.ImpactNormal == FVector(0.f,0.f,1.0f))
				{
					OnGround = true;
					CurrentVelocity+= FVector(0.f,0.f,1.f)*DeltaTime*(-CharacterGravity+1.f);

				}
				else
				{
					SlidingAgainstWall = true;
					LastWallDirection = FVector(1,1,1) - Hit.ImpactNormal.GetAbs();
					CurrentVelocity *= LastWallDirection;
				}
			}

			//Actual movement against a wall and surface
			float moved = SlideAlongSurface(CurrentVelocity, 1.f - Hit.Time, Hit.Normal, Hit);
			//Extra friction as its against multiple surfaces 
			CurrentVelocity *= std::pow(FrictionConstant, DeltaTime);
			
		}
		else{SlidingAgainstWall = false; }
		
		//	UE_LOG(LogTemp, Warning, TEXT("Impact Normal Of Hit: %s"),*Hit.ImpactNormal.ToString());


		}

		//UE_LOG(LogTemp, Warning, TEXT("Current Velocity : %s"),*CurrentVelocity.ToString());

	}
