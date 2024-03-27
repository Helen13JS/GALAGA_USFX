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

#include "Capsulas.h"
#include "CapsulasEnergia.h" 
#include "CapsulasArmas.h"

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

	//FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, 500.0f, 200.0f);
	//FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 200.0f);
	//FVector ubicacionInicioNAvesEnemigasReabastecimiento = FVector(1000.0f, 500.0f, 200.0f);



	//FVector ubicacionNave01 = FVector(0.0f, 1000.0f, 200.0f);
	/*FVector ubicacionNave001 = FVector(-250.0f, 700.0f, 200.0f);
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
	FVector ubicacionNave0005 = FVector(-500.0f, -200.0f, 200.0f);*/

	//FVector UbicacionInicioNavesEnemigasCaza = FVector(-500.0f, -200.0f, 200.0f);
	
	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	//FVector ubicacionBonus = FVector(300.0f, 0.0f, 200.0f);
	//FRotator rotacionBonus = FRotator(0.0f, 0.0f, 0.0f);


	//FVector ubicacionPuntaje = FVector(100.0f, 700.0f, 350.0f);
	//FRotator rotacionPuntaje = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionDeObjetosInventario = FVector(-700.0f, 300.0f, 700.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	if (World != nullptr)
	{

			/*FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasCaza.Z);
			AMyNaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<AMyNaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);*/


			//FVector PosicionNaveTransActual = FVector(ubicacionInicioNavesEnemigasTransporte.X, ubicacionInicioNavesEnemigasTransporte.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
			//ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
			//TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);


		const int32 NumeroDeColumnasReabasteimiento = 1;
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
		}

		/*const int32 NumeroDeColumnasKamikaze = 1;
		const int32 NumeroDeFilasKamikaze = 5;

		for (int32 Columna = 0; Columna < NumeroDeColumnasKamikaze; ++Columna)
		{
			TArray<ANaveEnemigaKamikaze*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasKamikaze; ++Fila)
			{
				FVector SpawningLocation = FVector(Columna * 300 + 0.0f, Fila * 200 + -500.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ANaveEnemigaKamikaze* NuevaNaveKamikaze = GetWorld()->SpawnActor<ANaveEnemigaKamikaze>(SpawningLocation, SpawningRotation);
				NavesEnColumna.Add(NuevaNaveKamikaze);
				if (Fila % 2 == 1)
				{
					NuevaNaveKamikaze->Destroy();
				}
			}
			ColumnaNavesEnemigasKamikaze.Add(Columna, NavesEnColumna);
		}*/

		TiempoTranscurrido = 0;

		//Para el spauwn de las objetos de inventario
		for (int i = 0; i < 6; i++) {
			FVector PosicionInventario = FVector(ubicacionDeObjetosInventario.X, ubicacionDeObjetosInventario.Y + i * 100.0f, ubicacionDeObjetosInventario.Z);
			//Generar un número aleatorio entre 0 y 1
			float RandomNumber = FMath::FRandRange(0.0f, 1.0f);

			// Probabilidad de generar una nave caza o transporte (50% cada una)
			if (RandomNumber <= 0.5f) {
				ACapsulas* ObjetoInventario = World->SpawnActor<ACapsulas>(ACapsulasArmas::StaticClass(), PosicionInventario, rotacionNave);
				//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			}
			else {
				ACapsulas* ObjetoInventario = World->SpawnActor<ACapsulas>(ACapsulasEnergia::StaticClass(), PosicionInventario, rotacionNave);
				//Spawnea el objeto de inventario en una posicion y rotacion especifica  
			}

		}

	}

		/*float nevaPosicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;

		


		
		// spawn the projectile
		//NaveEnemiga01 = World->SpawnActor<ANaveEnemiga>(ubicacionNave, rotacionNave);
		/*NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
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
	//Puntaje01->SetPosicion(FVector(3000.0f, 100.0f, 500.0f));*/


	
		
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido ++;

}
