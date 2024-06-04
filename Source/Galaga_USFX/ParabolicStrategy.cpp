// Fill out your copyright notice in the Description page of Project Settings.


#include "ParabolicStrategy.h"
#include "NaveEnemiga.h"

// Sets default values
AParabolicStrategy::AParabolicStrategy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AParabolicStrategy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AParabolicStrategy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AParabolicStrategy::Movement(ANaveEnemiga* enemy)
{
	if (enemy) {
		// Incrementa el tiempo transcurrido
		TimeElapsed += enemy-> GetWorld()->DeltaTimeSeconds;

		// Calcula la nueva posición de la nave enemiga
		FVector NewLocation = enemy->GetActorLocation();
		NewLocation.X -= 100.0f *enemy-> GetWorld()->DeltaTimeSeconds;
		NewLocation.Y = 100.0f * TimeElapsed - 0.5f * 100.0f * TimeElapsed * TimeElapsed;
		//NewLocation.Z = 100.0f * TimeElapsed - 0.5f * 100.0f * TimeElapsed * TimeElapsed;

		// Actualiza la posición de la nave enemiga
		enemy->SetActorLocation(NewLocation);
	}
}

