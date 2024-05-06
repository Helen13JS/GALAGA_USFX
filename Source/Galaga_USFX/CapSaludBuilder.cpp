// Fill out your copyright notice in the Description page of Project Settings.


#include "CapSaludBuilder.h"

// Sets default values
ACapSaludBuilder::ACapSaludBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapSaludBuilder::BeginPlay()
{
	Super::BeginPlay();

	TimerHandle = FTimerHandle();


	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ACapSaludBuilder::AgregarSalud, 20.0f, true, 0.0f);
	
}

// Called every frame
void ACapSaludBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapSaludBuilder::AgregarEnergia()
{
}

void ACapSaludBuilder::AgregarMunicion()
{
}

void ACapSaludBuilder::AgregarSalud()
{

	FVector ubicacion = FVector(500.0f, 100.0f, 100.0f);
	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	for (int i = 0; i < 6; i++) {
		FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
		//Generar un número aleatorio entre 0 y 1
		//float RandomNumber = FMath::FRandRange(0.0f, 1.0f);

		//if (RandomNumber <= 0.5f) {
		ACapsulasVelocidad* NewCapsula = GetWorld()->SpawnActor<ACapsulasVelocidad>(ACapsulasVelocidad::StaticClass(), Posicion, FRotator::ZeroRotator);
		//Spawnea el objeto de inventario en una posicion y rotacion especifica  
		TMCapsulas.Add(Posicion, NewCapsula);
		//}

	}

	
}

AAuxCapsulas* ACapSaludBuilder::GetCapsula()
{

	return Capsula;
}

