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
				Cast<AIceBoxPawn>(Hit.GetComponent()->GetOwner())->Push(CurrentVelocity);
			}
			
			else
			{



				//if(Hit.Time > 0 )
				//{
				//	float F = CharacterMass * CharacterAcceleration;
					
				//	float impusle = F * Hit.Time;
				//	float TempLength;
				//	FVector VelocityDirection;
				//	CurrentVelocity.ToDirectionAndLength(VelocityDirection,TempLength);
				//	CurrentVelocity -= CurrentVelocity; 
				//UE_LOG(LogTemp, Warning, TEXT("%s"),*VelocityDirection.ToString());
				//	UE_LOG(LogTemp, Warning, TEXT("%f"),Hit.Time);

				//} 


				//	FVector NextPosition = GetActorLocation() + Hit.Normal * moved;
				//FVector Direction = NextPosition - GetActorLocation();

				//	CurrentVelocity = Direction * CurrentVelocity.Size();
				//	CurrentVelocity += -Hit.Normal * CurrentVelocity.Size();
			
				if(Hit.ImpactNormal == FVector(0.f,0.f,1.0f))
				{
					OnGround = true;
					//+= FVector(0.f,0.f,1.f)*-CurrentVelocity.Z*DeltaTime*(-CharacterGravity+3.f);
					CurrentVelocity+= FVector(0.f,0.f,1.f)*DeltaTime*(-CharacterGravity+1.f);

				}
			
			}
			//FHitResult SlideHit;
			
			//FVector newDirection = ComputeSlideVector(DesiredMovementThisFrame,1.f-Hit.Time,Hit.Normal,SlideHit);

			//FVector newMotion = newDirection * (FVector::DotProduct(DesiredMovementThisFrame,newDirection));
			//CurrentVelocity = CurrentVelocity - newMotion;

			
			float moved = SlideAlongSurface(CurrentVelocity, 1.f - Hit.Time, Hit.Normal, Hit);
			CurrentVelocity -= .95f * CurrentVelocity * DeltaTime * Hit.Normal;
			CurrentVelocity *= std::pow(FrictionConstant, DeltaTime);

			
			//CurrentVelocity = newDirection * CurrentVelocity.Size() * DeltaTime; 
		}
		
		//	UE_LOG(LogTemp, Warning, TEXT("Impact Normal Of Hit: %s"),*Hit.ImpactNormal.ToString());


		}

		//UE_LOG(LogTemp, Warning, TEXT("Current Velocity : %s"),*CurrentVelocity.ToString());

	}
