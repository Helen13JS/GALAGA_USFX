// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteAlfa.h"
#include "NaveEnemigaTransporteBeta.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaAlfa.h"
#include "NaveEnemigaCazaBeta.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaAlfa.h"
#include "NaveEnemigaEspiaBeta.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaAlfa.h"
#include "NaveEnemigaNodrizaBeta.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoAlfa.h"
#include "NaveEnemigaReabastecimientoBeta.h"
#include "Bonus.h"
#include "Puntaje.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	//NaveEnemiga01 = nullptr;
	//Bonus01 = nullptr;
	//Puntaje01 = nullptr;

}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(0.0f, 1000.0f, 200.0f);
	FVector ubicacionNave001 = FVector(-250.0f, 700.0f, 200.0f);
	FVector ubicacionNave0001 = FVector(-500.0f, 700.0f, 200.0f);
	FVector ubicacionNave02 = FVector(0.0f, 700.0f, 200.0f);
	FVector ubicacionNave002 = FVector(-250.0f, 1000.0f, 200.0f);
	FVector ubicacionNave0002 = FVector(-500.0f, 1000.0f, 200.0f);
	FVector ubicacionNave03 = FVector(0.0f, 400.0f, 200.0f);
	FVector ubicacionNave003 = FVector(-250.0f, 400.0f, 200.0f);
	FVector ubicacionNave0003 = FVector(-500.0f, 400.0f, 200.0f);
	FVector ubicacionNave04 = FVector(0.0f, 100.0f, 200.0f);
	FVector ubicacionNave004 = FVector(-250.0f, 100.0f, 200.0f);
	FVector ubicacionNave0004 = FVector(-500.0f, 100.0f, 200.0f);
	FVector ubicacionNave05 = FVector(0.0f, -200.0f, 200.0f);
	FVector ubicacionNave005 = FVector(-250.0f, -200.0f, 200.0f);
	FVector ubicacionNave0005 = FVector(-500.0f, -200.0f, 200.0f);

	//FVector UbicacionInicioNavesEnemigasCaza = FVector(-500.0f, -200.0f, 200.0f);
	
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	//FVector ubicacionBonus = FVector(300.0f, 0.0f, 200.0f);
	//FRotator rotacionBonus = FRotator(0.0f, 0.0f, 0.0f);


	//FVector ubicacionPuntaje = FVector(100.0f, 700.0f, 350.0f);
	//FRotator rotacionPuntaje = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		
		
		// spawn the projectile
		//NaveEnemiga01 = World->SpawnActor<ANaveEnemiga>(ubicacionNave, rotacionNave);
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigaTransporteAlfa01 = World->SpawnActor<ANaveEnemigaTransporteAlfa>(ubicacionNave001, rotacionNave);
		NaveEnemigaTransporteBeta01 = World->SpawnActor<ANaveEnemigaTransporteBeta>(ubicacionNave0001, rotacionNave);

		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
		NaveEnemigaCazaAlfa01 = World->SpawnActor<ANaveEnemigaCazaAlfa>(ubicacionNave002, rotacionNave);
		NaveEnemigaCazaBeta01 = World->SpawnActor<ANaveEnemigaCazaBeta>(ubicacionNave0002, rotacionNave);

		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNave03, rotacionNave);
		NaveEnemigaEspiaAlfa01 = World->SpawnActor<ANaveEnemigaEspiaAlfa>(ubicacionNave003, rotacionNave);
		NaveEnemigaEspiaBeta01 = World->SpawnActor<ANaveEnemigaEspiaBeta>(ubicacionNave0003, rotacionNave);

		NaveEnemigaReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNave04, rotacionNave);
		NaveEnemigaReabastecimientoAlfa01 = World->SpawnActor<ANaveEnemigaReabastecimientoAlfa>(ubicacionNave004, rotacionNave);
		NaveEnemigaReabastecimientoBeta01 = World->SpawnActor<ANaveEnemigaReabastecimientoBeta>(ubicacionNave0004, rotacionNave);


		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNave05, rotacionNave);
		NaveEnemigaNodrizaAlfa01 = World->SpawnActor<ANaveEnemigaNodrizaAlfa>(ubicacionNave005, rotacionNave);
		NaveEnemigaNodrizaBeta01 = World->SpawnActor<ANaveEnemigaNodrizaBeta>(ubicacionNave0005, rotacionNave);

		//Bonus01 = World->SpawnActor<ABonus>(ubicacionBonus, rotacionBonus);
		//Puntaje01 = World->SpawnActor<APuntaje>(ubicacionPuntaje, rotacionPuntaje);
		
	}
	//NaveEnemiga01->SetPosicion(FVector(2000.0f, 0.0f, 120.0f));
	NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaCazaAlfa01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaCazaBeta01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));

	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporteAlfa01->SetPosicion(FVector(500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporteBeta01->SetPosicion(FVector(500.0f, 500.0f, 200.0f));

	NaveEnemigaEspia01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaEspiaAlfa01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaEspiaBeta01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));

	NaveEnemigaNodriza01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaNodrizaAlfa01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaNodrizaBeta01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));

	NaveEnemigaReabastecimiento01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaReabastecimientoAlfa01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaReabastecimientoBeta01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));

	//Bonus01->SetPosicion(FVector(1000.0f, 0.0f, 130.0f));
	//Puntaje01->SetPosicion(FVector(3000.0f, 100.0f, 500.0f));


	const int32 NumeroDeColumnas = 2; // Número de columnas
	const int32 NumeroDeFilas = 3;    // Número de filas

	// Generar naves enemigas caza y agregarlas al TMap en las columnas correspondientes
	for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
		{
			// Definir la ubicación y rotación de la nave enemiga
			FVector SpawnLocation = FVector(Columna * 200.0f, Fila * 200.0f, 350.0f); // Ejemplo de ubicación de generación
			FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial

			// Generar la nave enemiga caza y agregarla al TArray
			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
			if (NuevaNaveCaza)
			{
				// Configurar la lógica de la nave enemiga caza si es necesario

			}
			else
			{
				// Ocurrió un error al crear la nave enemiga caza
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga caza."));
			}

			NavesEnColumna.Add(NuevaNaveCaza);
		}

		// Agregar el TArray al TMap
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}


	//En esta columna proporcioname lo que llegaria a ser un modificador que hago lo mismo que en la columna
	//Generar naves enemigas transporte y agregarlas al TMap en las columnas correspondientes
	for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	{
		TArray<ANaveEnemigaTransporte*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
		{
			// Definir la ubicación y rotación de la nave enemiga
			FVector SpawnLocation = FVector(Columna * 200.0f, Fila * 200.0f, 350.0f); // Ejemplo de ubicación de generación
			FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial

			// Generar la nave enemiga transporte y agregarla al TArray
			ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
			if (NuevaNaveTransporte)
			{
				// Configurar la lógica de la nave enemiga transporte si es necesario
			}
			else
			{
				// Ocurrió un error al crear la nave enemiga transporte
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga transporte."));
			}

			NavesEnColumna.Add(NuevaNaveTransporte);
		}

		// Agregar el TArray al TMap
		ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);

	}

	//Generar naves enemigas nodriza y agregarlas al TMap en las columnas correspondientes
	for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	{
		TArray<ANaveEnemigaNodriza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
		{
			// Definir la ubicación y rotación de la nave enemiga
			FVector SpawnLocation = FVector(Columna * 200.0f, Fila * 200.0f, 350.0f); // Ejemplo de ubicación de generación
			FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial

			// Generar la nave enemiga nodriza y agregarla al TArray
			ANaveEnemigaNodriza* NuevaNaveNodriza = GetWorld()->SpawnActor<ANaveEnemigaNodriza>(SpawnLocation, SpawnRotation);
			if (NuevaNaveNodriza)
			{
				// Configurar la lógica de la nave enemiga nodriza si es necesario
			}
			else
			{
				// Ocurrió un error al crear la nave enemiga nodriza
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga nodriza."));
			}

			NavesEnColumna.Add(NuevaNaveNodriza);
		}

		// Agregar el TArray al TMap
		ColumnaNavesEnemigasNodriza.Add(Columna, NavesEnColumna);
	}

}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido ++;


	if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}
}
