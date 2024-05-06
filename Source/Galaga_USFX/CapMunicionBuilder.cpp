// Fill out your copyright notice in the Description page of Project Settings.


#include "CapMunicionBuilder.h"

// Sets default values
ACapMunicionBuilder::ACapMunicionBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapMunicionBuilder::BeginPlay()
{
	Super::BeginPlay();

	TimerHandle = FTimerHandle();


	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ACapMunicionBuilder::AgregarMunicion, 10.0f, true, 0.0f);
	
}

// Called every frame
void ACapMunicionBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapMunicionBuilder::AgregarEnergia()
{
	/*for (int i = 0; i < 5; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 250.0f);
		ACapsulasEnergia* NewCapsula = GetWorld()->SpawnActor<ACapsulasEnergia>(ACapsulasEnergia::StaticClass(), SpawnLocation, FRotator::ZeroRotator);;
	
		TMCapsulas.Add(SpawnLocation, NewCapsula);
	}*/

	


		//FVector ubicacion = FVector(500.0f, -1200.0f, 100.0f);
		//	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
		//	for (int i = 0; i < 6; i++) {
		//		FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
		//		//Generar un número aleatorio entre 0 y 1
		//		//float RandomNumber = FMath::FRandRange(0.0f, 1.0f);
		//
		//		//if (RandomNumber <= 0.5f) {
		//			ACapsulasEnergia* NewCapsula = GetWorld()->SpawnActor<ACapsulasEnergia>(ACapsulasEnergia::StaticClass(), Posicion, FRotator::ZeroRotator);
		//			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
		//			TMCapsulas.Add(Posicion, NewCapsula);
		//		//}
		//		
		//	}
}

void ACapMunicionBuilder::AgregarMunicion()
{

	FVector ubicacion = FVector(500.0f, -600.0f, 100.0f);
	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	for (int i = 0; i < 6; i++) {
		FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
		//Generar un número aleatorio entre 0 y 1
		//float RandomNumber = FMath::FRandRange(0.0f, 1.0f);

		//if (RandomNumber <= 0.5f) {
			ACapsulasArmas* NewCapsula = GetWorld()->SpawnActor<ACapsulasArmas>(ACapsulasArmas::StaticClass(), Posicion, FRotator::ZeroRotator);
			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			TMCapsulas.Add(Posicion, NewCapsula);
		//}

	}

	
}

void ACapMunicionBuilder::AgregarSalud()
{
}

AAuxCapsulas* ACapMunicionBuilder::GetCapsula()
{
	//AAuxCapsulas* Capsula = NewObject<AAuxCapsulas>();
	return Capsula;
}

