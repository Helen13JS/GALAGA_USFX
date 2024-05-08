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
//#include "Bonus.h"
#include "Puntaje.h"
#include "ShipFactory.h"
#include "Capsulas.h"
#include "CapsulasEnergia.h" 
#include "CapsulasArmas.h"
#include "CapsulasVelocidad.h"
#include "CapsulasVelocidadExtrema.h"
#include "PaqueteCapsula.h"
#include "CapVelocityBuilder.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	

}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector SpawnNaveLocation = FVector(500.f, -500.f, 200.f);
	FRotator RotacionNave = FRotator::ZeroRotator;

	FVector ubicacionDeObjetosInventario = FVector(1000.0f, -1200.0f, 100.0f);
	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	if (World != nullptr)
	{


		for (int i = 0; i < 6; i++)

		{

			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X , SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaCaza = AShipFactory::CrearNaveEnemiga("EnemigaCaza", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaCaza);
		}

		for (int i = 0; i < 6; i++)
		{
			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X+200 , SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaEspia = AShipFactory::CrearNaveEnemiga("EnemigaEspia", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaEspia);
		}

		for (int i = 0; i < 6; i++)
		{
			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X + 400, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaNodriza = AShipFactory::CrearNaveEnemiga("EnemigaNodriza", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaNodriza);
		}

		for (int i = 0; i < 6; i++)
		{
			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X - 200, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaReabastecimiento = AShipFactory::CrearNaveEnemiga("EnemigaReabastecimiento", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaReabastecimiento);
		}

		for (int i = 0; i < 6; i++)
		{
			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X - 400, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaTransporte = AShipFactory::CrearNaveEnemiga("EnemigaTransporte", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaTransporte);
		}


		/*CapsuleDirector = GetWorld()->SpawnActor<ACapsuleDirector>();


		ICapsulasInterface* Capsula = nullptr;

		switch (FMath::RandRange(1, 3))
		{
			case 1:
			   Capsula = GetWorld()->SpawnActor<ACapEnergiaBuilder>();
			break;
			case 2:
				Capsula = GetWorld()->SpawnActor<ACapMunicionBuilder>();
				break;
			case 3:
				Capsula = GetWorld()->SpawnActor<ACapVelocityBuilder>();
				break;
		
		}

		AAuxCapsulas* capsula = CapsuleDirector->ConstruirCapsula(Capsula);*/
		/*ICapsulasInterface* CapsulaEnergia = GetWorld()->SpawnActor<ACapEnergiaBuilder>();
		ICapsulasInterface* CapsulaVelocidad = GetWorld()->SpawnActor<ACapVelocityBuilder>();
		AAuxCapsulas* capsula = CapsuleDirector->ConstruirCapsula(Capsula);

		AAuxCapsulas* capsulaEnergia = CapsuleDirector->ConstruirCapsula(CapsulaEnergia);
		AAuxCapsulas* capsulaVelocidad = CapsuleDirector->ConstruirCapsula(CapsulaVelocidad);*/





		/*const int32 NumeroDeColumnasReabasteimiento = 1;
		const int32 NumeroDeFilasReabastecimiento = 5;

		// Generar naves enemigas caza y agregarlas al TMap en las columnas correspondientes

		for (int32 Columna = 0; Columna < NumeroDeColumnasReabasteimiento; ++Columna)
		{
			TArray<ANaveEnemigaReabastecimiento*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasReabastecimiento; ++Fila)
			{
				// Definir la ubicación y rotación de la nave enemiga
				FVector SpawningLocation = FVector(Columna * 300 + 1800.0f, Fila * 200 + -500.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				// Generar la nave enemiga caza y agregarla al TArray

				ANaveEnemigaReabastecimiento* NuevaNaveReabastecimiento = GetWorld()->SpawnActor<ANaveEnemigaReabastecimiento>(SpawningLocation, SpawningRotation);
				NavesEnColumna.Add(NuevaNaveReabastecimiento);
			}
			// Agregar el TArray al TMap
			ColumnaNavesEnemigasReabastecimiento.Add(Columna, NavesEnColumna);
		}

		const int32 NumeroDeColumnasNodriza = 1;
		const int32 NumeroDeFilasNodriza = 5;

		for (int32 Columna = 0; Columna < NumeroDeColumnasNodriza; ++Columna)
		{
			TArray<ANaveEnemigaNodriza*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasNodriza; ++Fila)
			{
				FVector SpawningLocation = FVector(Columna * 300 + 1500.0f, Fila * 200 + -500.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ANaveEnemigaNodriza* NuevaNaveNodriza = GetWorld()->SpawnActor<ANaveEnemigaNodriza>(SpawningLocation, SpawningRotation);
				NavesEnColumna.Add(NuevaNaveNodriza);
			}
			ColumnaNavesEnemigasNodriza.Add(Columna, NavesEnColumna);
		}

		const int32 NumeroDeColumnasEspia = 1;
		const int32 NumeroDeFilasEspia = 5;

		for (int32 Columna = 0; Columna < NumeroDeColumnasEspia; ++Columna)
		{
			TArray<ANaveEnemigaEspia*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasEspia; ++Fila)
			{
				FVector SpawningLocation = FVector(Columna * 300 + 1200.0f, Fila * 200 + -500.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ANaveEnemigaEspia* NuevaNaveEspia = GetWorld()->SpawnActor<ANaveEnemigaEspia>(SpawningLocation, SpawningRotation);
				NavesEnColumna.Add(NuevaNaveEspia);
			}
			ColumnaNavesEnemigasEspia.Add(Columna, NavesEnColumna);
		}

		const int32 NumeroDeColumnasTransporte = 1;
		const int32 NumeroDeFilasTransporte = 5;

		for (int32 Columna = 0; Columna < NumeroDeColumnasTransporte; ++Columna)
		{
			TArray<ANaveEnemigaTransporte*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasTransporte; ++Fila)
			{
				FVector SpawningLocation = FVector(Columna * 300 + 900.0f, Fila * 200 + -500.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawningLocation, SpawningRotation);
				NavesEnColumna.Add(NuevaNaveTransporte);
			}
			ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);
		}

		const int32 NumeroDeColumnasCaza = 2;
		const int32 NumeroDeFilasCaza = 5;

		for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
		{
			TArray<ANaveEnemigaCaza*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
			{
				FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + -500.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);
				NavesEnColumna.Add(NuevaNaveCaza);
				if (Fila == 2)
				{
					NuevaNaveCaza->Destroy();
				}
			}
			ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
		}*/

		

		TiempoTranscurrido = 0;

		// Inicializar el Handle del Timer
   // SpawnTimerHandle = FTimerHandle();

	//Para el spawn de las objetos de inventario
	//GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AGalaga_USFXGameMode::SpawnInventario, 30.0f, true, 0.0f);

		//Para el spawn de las capsulas
		GetWorld()->GetTimerManager().SetTimer(SpawnCapsulas, this, &AGalaga_USFXGameMode::GenerarCapsulas, 10.0f, true, 0.0f);
	
	}
		
}


void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

 TiempoTranscurrido ++;

}

void AGalaga_USFXGameMode::GenerarCapsulas()
{
	
	CapsuleDirector = GetWorld()->SpawnActor<ACapsuleDirector>();


	//ICapsulasInterface* Capsula = nullptr;

	switch (FMath::RandRange(1, 3))
	{
	case 1:
		CapVelocityBuilder = GetWorld()->SpawnActor<ACapVelocityBuilder>();
		//Capsula = GetWorld()->SpawnActor<ACapEnergiaBuilder>();
		CapsuleDirector->ConstruirPaqueteCapsula(CapVelocityBuilder);
		CapsuleDirector->GenerarCapsulasEnergia();

		break;
	case 2:

		CapMunicionBuilder = GetWorld()->SpawnActor<ACapMunicionBuilder>();
		CapsuleDirector->ConstruirPaqueteCapsula(CapMunicionBuilder);
		CapsuleDirector->GenerarCapsulasMunicion();
		//Capsula = GetWorld()->SpawnActor<ACapMunicionBuilder>();
		break;
	case 3:
		CapEnergiaBuilder = GetWorld()->SpawnActor<ACapEnergiaBuilder>();
		CapsuleDirector->ConstruirPaqueteCapsula(CapEnergiaBuilder);
		CapsuleDirector->GenerarCapsulasVelocidad();
		//Capsula = GetWorld()->SpawnActor<ACapVelocityBuilder>();
		break;

	}
	APaqueteCapsula* capsulas = CapsuleDirector->PaqueteCapsula();

	//AAuxCapsulas* capsula = CapsuleDirector->ConstruirCapsula(Capsula);
}

//void AGalaga_USFXGameMode::SpawnInventario()
//
//{
//	FVector ubicacionDeObjetosInventario = FVector(1000.0f, -1200.0f, 100.0f);
//	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
//	for (int i = 0; i < 6; i++) {
//		FVector PosicionInventario = FVector(ubicacionDeObjetosInventario.X, ubicacionDeObjetosInventario.Y + i * 500.0f, ubicacionDeObjetosInventario.Z);
//		//Generar un número aleatorio entre 0 y 1
//		float RandomNumber = FMath::FRandRange(0.0f, 1.0f);
//
//		if (RandomNumber <= 0.5f) {
//			ACapsulas* ObjetoInventario = GetWorld()->SpawnActor<ACapsulas>(ACapsulasArmas::StaticClass(), PosicionInventario, rotacionNave);
//			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
//		}
//		else {
//			ACapsulas* ObjetoInventario = GetWorld()->SpawnActor<ACapsulas>(ACapsulasEnergia::StaticClass(), PosicionInventario, rotacionNave);
//			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
//		}
//	}
//}


