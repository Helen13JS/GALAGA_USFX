// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoVertical.h"

// Sets default values for this component's properties
UMovimientoVertical::UMovimientoVertical()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MovementRadius = 1;

	// ...
}


// Called when the game starts
void UMovimientoVertical::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoVertical::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Parent = GetOwner();
	 float Speed= 100.0f;

	if (Parent)
	{
		if (Parent->GetActorLocation().Z >= -1.f)
		{
			// Calcular el desplazamiento basado en la velocidad y DeltaTime
			FVector DeltaPos = FVector(-Speed * DeltaTime, 0, 0);
			// Find a new position for the object to go to
			auto NewPos = Parent->GetActorLocation() + DeltaPos;
			/*FVector
			(
				FMath::FRandRange(-1, 1) *
				MovementRadius,
				FMath::FRandRange(-1, 1) *
				MovementRadius,
				FMath::FRandRange(-1, 1) *
				MovementRadius
			);*/
			// Update the object's position
			Parent->SetActorLocation(NewPos);
		}
	}

	// ...
}

