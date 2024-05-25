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
#include "FacadeTipoDisparo.h"


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
	FRotator RotacionNave = FRotator(180.0f,0.0f,0.0f);

	FVector ubicacionDeObjetosInventario = FVector(1000.0f, -1200.0f, 100.0f);
	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	if (World != nullptr)
	{


		for (int i = 0; i < 6; i++)

		{

			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X , SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaCaza = AShipFactory::CrearNaveEnemiga("EnemigaCaza", World, PosicionNaveActual, RotacionNave);
            //NuevaNaveEnemigaCaza->SetFacadeDisparo(FacadeTipoDisparo);
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


		 //FacadeTipoDisparo = GetWorld()->SpawnActor<AFacadeTipoDisparo>(AFacadeTipoDisparo::StaticClass());
		 //FacadeTipoDisparo->AsignarDisparo("Laser");
		 //FacadeTipoDisparo->AsignarDisparo("Bomba");
		 //FacadeTipoDisparo->AsignarDisparo("Foton");
		//FTimerHandle timeDisparo;
		//GetWorldTimerManager().SetTimer(timeDisparo, this, &::Disparar, 2.0f, true, 0.0f);


		
		

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


