// Fill out your copyright notice in the Description page of Project Settings.


#include "PaqueteCapsula.h"

// Sets default values
APaqueteCapsula::APaqueteCapsula()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaqueteCapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaqueteCapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaqueteCapsula::SetPaqueteEnergia(FString tipoE)
{
	FVector ubicacion = FVector(500.0f, 100.0f, 200.0f);
	FVector ubicacion2 = FVector(800.0f, 500.0f, 200.0f);
	if (tipoE == "EnergiaPositiva")
	{
		for (int i = 0; i < 3; i++) {

			FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
			CapsulaEnergia = GetWorld()->SpawnActor<ACapsulasEnergia>(ACapsulasEnergia::StaticClass(), Posicion, FRotator::ZeroRotator);
			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			TMCapsulasEnergia.Add(Posicion, CapsulaEnergia);

		}
	}
	else if (tipoE == "EnergiaNegativa")
	{
		for (int i = 0; i < 3; i++) {

			FVector Posicion2 = FVector(ubicacion2.X, ubicacion2.Y + i * 300.0f, ubicacion2.Z);
			CapsulaEnergiaNegativa = GetWorld()->SpawnActor<ACapsulasEnergiaNegativa>(ACapsulasEnergiaNegativa::StaticClass(), Posicion2, FRotator::ZeroRotator);
			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			TMCapsulasEnergiaNegativa.Add(Posicion2, CapsulaEnergiaNegativa);

		}
	}
}

void APaqueteCapsula::SetPaqueteMunicion(FString tipoM)
{

	FVector ubicacion = FVector(500.0f, -600.0f, 200.0f);
	FVector ubicacion2 = FVector(800.0f, 500.0f, 200.0f);
		
	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	if (tipoM == "Municion")
	{
		for (int i = 0; i < 5; i++) {

			FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
			CapsulaArma = GetWorld()->SpawnActor<ACapsulasArmas>(ACapsulasArmas::StaticClass(), Posicion, FRotator::ZeroRotator);
			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			TMCapsulasMunicion.Add(Posicion, CapsulaArma);

		}
	}
	else if (tipoM == "MunicionRapida")
	{
		for (int i = 0; i < 2; i++) {

			FVector Posicion2 = FVector(ubicacion2.X, ubicacion2.Y + i * 300.0f, ubicacion2.Z);

			CapsulaMunicionRapida = GetWorld()->SpawnActor<ACapsulasMunicionRapida>(ACapsulasMunicionRapida::StaticClass(), Posicion2, FRotator::ZeroRotator);
			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			TMCapsulasMunicionRapida.Add(Posicion2, CapsulaMunicionRapida);

		}
	}
	
}

void APaqueteCapsula::SetPaqueteVelocidad(FString tipoV)
{

	FVector ubicacion = FVector(500.0f, -1200.0f, 200.0f);
	FVector ubicacion2 = FVector(800.0f, 500.0f, 200.0f);

	if (tipoV == "VelocidadRapida")
	{
		for (int i = 0; i < 4; i++) {

			FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
			CapsulaVelocidad = GetWorld()->SpawnActor<ACapsulasVelocidad>(ACapsulasVelocidad::StaticClass(), Posicion, FRotator::ZeroRotator);
			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			TMCapsulasVelocidad.Add(Posicion, CapsulaVelocidad);

		}
	}
	else if (tipoV == "VelocidadExtrema")
	{
		for (int i = 0; i < 3; i++) {

			FVector Posicion2 = FVector(ubicacion2.X, ubicacion2.Y + i * 300.0f, ubicacion2.Z);
			CapsulaVelocidadExtrema = GetWorld()->SpawnActor<ACapsulasVelocidadExtrema>(ACapsulasVelocidadExtrema::StaticClass(), Posicion2, FRotator::ZeroRotator);
			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			TMCapsulasVelocidadExtrema.Add(Posicion2, CapsulaVelocidadExtrema);

		}
	}
}

