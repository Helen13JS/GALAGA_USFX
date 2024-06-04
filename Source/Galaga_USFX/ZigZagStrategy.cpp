// Fill out your copyright notice in the Description page of Project Settings.


#include "ZigZagStrategy.h"
#include "NaveEnemiga.h"
#include "Galaga_USFXPawn.h"

// Sets default values
AZigZagStrategy::AZigZagStrategy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 80.0f;
	ZigZagTime = 0.0f;
	ZigZagInterval = 30.0f;  // Cambia la dirección cada 2 segundos
	CurrentDirection = FVector(0.0f, 5.0f, 0.0f);  // Dirección inicial

	limit = 2000.0f;

}

// Called when the game starts or when spawned
void AZigZagStrategy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZigZagStrategy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ZigZagTime += DeltaTime;
	if (ZigZagTime >= ZigZagInterval)
	{
		ZigZagTime = 0.0f;
		CurrentDirection.Y *= -1.0f;// Cambia la dirección en el eje X
		CurrentDirection.X *= -1.0f;// Cambia la dirección en el eje Z
	}
	

}

void AZigZagStrategy::Movement(ANaveEnemiga* enemy)
{

	if (enemy) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ZigZagStrategy::ExecuteMovement"));
		FVector NewLocation = enemy->GetActorLocation() + CurrentDirection * Speed * enemy->GetWorld()->DeltaTimeSeconds;

		// Si la nave llega al límite en el eje X, cambia la dirección
		if (NewLocation.X <= -1500.0f || NewLocation.X >= 1500.0f) {
			CurrentDirection.X *= -1.0f;
		}
		// Si la nave llega al límite en el eje Y, cambia la dirección
		if (NewLocation.Y <= -1500.0f || NewLocation.Y >= 1500.0f) {
			CurrentDirection.Y *= -1.0f;
		}

		// Calcula la nueva ubicación después de cambiar la dirección
		NewLocation = enemy->GetActorLocation() + CurrentDirection * Speed * enemy->GetWorld()->DeltaTimeSeconds;

		enemy->SetActorLocation(NewLocation);
	}
}

void AZigZagStrategy::ExecuteMovementPawn(AGalaga_USFXPawn* Pawn)
{

	//if (Pawn) {
	//	FVector NewLocation = Pawn->GetActorLocation() + CurrentDirection * Speed * GetWorld()->DeltaTimeSeconds;

	//	// Si la nave llega al límite inferior, haz que reaparezca en la parte superior
	//	if (NewLocation.X <= -1900.0f) {
	//		NewLocation.X = 1800.0f;
	//	}

	//	Pawn->SetActorLocation(NewLocation);
	//}
}

