// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeNivel1.h"
#include "Capsulas.h"
#include "CapsulasEnergia.h" 
#include "CapsulasArmas.h"
#include "CapsulasVelocidad.h"
#include "CapsulasVelocidadExtrema.h"
#include "PaqueteCapsula.h"
#include "CapVelocityBuilder.h"
#include "CapMunicionBuilder.h"
#include "CapEnergiaBuilder.h"
#include "CapsuleDirector.h"
#include "NaveEnemigaCazaAlfa.h"
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

// Sets default values
AFacadeNivel1::AFacadeNivel1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeNivel1::BeginPlay()
{
	Super::BeginPlay();
	CrearNivel();
	GetWorld()->GetTimerManager().SetTimer(Spawn, this, &AFacadeNivel1::CrearCapsulas, 10.0f, true, 0.0f);

	
	
}

// Called every frame
void AFacadeNivel1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeNivel1::CrearNivel()
{
	
	//// Genera un número aleatorio entre 1 y 3
	//int nivelAleatorio = FMath::RandRange(1, 3);

	//// Crea el nivel correspondiente
	//switch (nivelAleatorio)
	//{
	//case 1:
	//	//NivelBasico();
	//	break;
	//case 2:
	//	//NivelIntermedio();
		//break;
	//case 3:
		NivelAvanzado();
		//break;
	//}

}


void AFacadeNivel1::NivelAvanzado()
{
	

	FRotator RotacionNave = FRotator(180.0f, 0.0f, 0.0f);
	FVector SpawnNaveLocation2 = FVector(100.f, -500.f, 200.f);
	UWorld* const World = GetWorld();
	NaveCazaAlfa = GetWorld()->SpawnActor<ANaveEnemigaCazaAlfa>(SpawnNaveLocation2, RotacionNave);


	FVector SpawnNaveLocation = FVector(500.f, -500.f, 200.f);
	//FRotator RotacionNave = FRotator(180.0f, 0.0f, 0.0f);

	FVector ubicacionDeObjetosInventario = FVector(1000.0f, -1200.0f, 100.0f);


	if (World != nullptr)
	{
		CrearCapsulas();


		for (int i = 0; i < 6; i++)

		{

			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
			ANaveEnemiga* NuevaNaveEnemigaCaza = AShipFactory::CrearNaveEnemiga("EnemigaCaza", World, PosicionNaveActual, RotacionNave);
			TANavesEnemigas.Push(NuevaNaveEnemigaCaza);
		}

		for (int i = 0; i < 6; i++)
		{
			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X + 200, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
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

	}
}

void AFacadeNivel1::CrearCapsulas()
{
	//crear power ups
	CapsuleDirector = GetWorld()->SpawnActor<ACapsuleDirector>();



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

	APaqueteCapsula* capsulas = CapsuleDirector->ObtenerPaqueteCapsula();

}


void AFacadeNivel1::NivelBasico()
{

	//FVector SpawnNaveLocation = FVector(500.f, -500.f, 200.f);
	//FRotator RotacionNave = FRotator(180.0f, 0.0f, 0.0f);

	//FVector ubicacionDeObjetosInventario = FVector(1000.0f, -1200.0f, 100.0f);
	////FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	//FVector SpawnNaveLocation2 = FVector(100.f, -500.f, 200.f);

	//UWorld* const World = GetWorld();

	//if (World != nullptr)
	//{


	//	CapMunicionBuilder = GetWorld()->SpawnActor<ACapMunicionBuilder>();
	//	CapsuleDirector->ConstruirPaqueteCapsula(CapMunicionBuilder);
	//	CapsuleDirector->GenerarCapsulasMunicion();

	//	for (int i = 0; i < 6; i++)

	//	{

	//		FVector PosicionNaveActual = FVector(SpawnNaveLocation.X, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
	//		ANaveEnemiga* NuevaNaveEnemigaCaza = AShipFactory::CrearNaveEnemiga("EnemigaCaza", World, PosicionNaveActual, RotacionNave);
	//		//NuevaNaveEnemigaCaza->SetFacadeDisparo(FacadeTipoDisparo);
	//		TANavesEnemigas.Push(NuevaNaveEnemigaCaza);
	//	}

	//	for (int i = 0; i < 6; i++)
	//	{
	//		FVector PosicionNaveActual = FVector(SpawnNaveLocation.X + 200, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
	//		ANaveEnemiga* NuevaNaveEnemigaEspia = AShipFactory::CrearNaveEnemiga("EnemigaEspia", World, PosicionNaveActual, RotacionNave);
	//		TANavesEnemigas.Push(NuevaNaveEnemigaEspia);
	//	}

	//	for (int i = 0; i < 6; i++)
	//	{
	//		FVector PosicionNaveActual = FVector(SpawnNaveLocation.X + 400, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
	//		ANaveEnemiga* NuevaNaveEnemigaNodriza = AShipFactory::CrearNaveEnemiga("EnemigaNodriza", World, PosicionNaveActual, RotacionNave);
	//		TANavesEnemigas.Push(NuevaNaveEnemigaNodriza);
	//	}

	//	for (int i = 0; i < 6; i++)
	//	{
	//		FVector PosicionNaveActual = FVector(SpawnNaveLocation.X - 200, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
	//		ANaveEnemiga* NuevaNaveEnemigaReabastecimiento = AShipFactory::CrearNaveEnemiga("EnemigaReabastecimiento", World, PosicionNaveActual, RotacionNave);
	//		TANavesEnemigas.Push(NuevaNaveEnemigaReabastecimiento);
	//	}

	//	for (int i = 0; i < 6; i++)
	//	{
	//		FVector PosicionNaveActual = FVector(SpawnNaveLocation.X - 400, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
	//		ANaveEnemiga* NuevaNaveEnemigaTransporte = AShipFactory::CrearNaveEnemiga("EnemigaTransporte", World, PosicionNaveActual, RotacionNave);
	//		TANavesEnemigas.Push(NuevaNaveEnemigaTransporte);
	//	}

	//}
}

void AFacadeNivel1::NivelIntermedio()
{
//	FRotator RotacionNave = FRotator(180.0f, 0.0f, 0.0f);
//
//	//FVector ubicacionDeObjetosInventario = FVector(1000.0f, -1200.0f, 100.0f);
//	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
//
//	FVector SpawnNaveLocation2 = FVector(100.f, -500.f, 200.f);
//	UWorld* const World = GetWorld();
//	NaveCazaAlfa = GetWorld()->SpawnActor<ANaveEnemigaCazaAlfa>(SpawnNaveLocation2, RotacionNave);
//
//	FVector SpawnNaveLocation = FVector(500.f, -500.f, 200.f);
////	FRotator RotacionNave = FRotator(180.0f, 0.0f, 0.0f);
//
//	FVector ubicacionDeObjetosInventario = FVector(1000.0f, -1200.0f, 100.0f);
//	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
//
//	//FVector SpawnNaveLocation2 = FVector(100.f, -500.f, 200.f);
//
////	UWorld* const World = GetWorld();
//
//	if (World != nullptr)
//	{
//
//
//		CapMunicionBuilder = GetWorld()->SpawnActor<ACapMunicionBuilder>();
//		CapsuleDirector->ConstruirPaqueteCapsula(CapMunicionBuilder);
//		CapsuleDirector->GenerarCapsulasMunicion();
//		CapVelocityBuilder = GetWorld()->SpawnActor<ACapVelocityBuilder>();
//		//Capsula = GetWorld()->SpawnActor<ACapEnergiaBuilder>();
//		CapsuleDirector->ConstruirPaqueteCapsula(CapVelocityBuilder);
//		CapsuleDirector->GenerarCapsulasEnergia();
//
//		for (int i = 0; i < 6; i++)
//
//		{
//
//			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
//			ANaveEnemiga* NuevaNaveEnemigaCaza = AShipFactory::CrearNaveEnemiga("EnemigaCaza", World, PosicionNaveActual, RotacionNave);
//			//NuevaNaveEnemigaCaza->SetFacadeDisparo(FacadeTipoDisparo);
//			TANavesEnemigas.Push(NuevaNaveEnemigaCaza);
//		}
//
//		for (int i = 0; i < 6; i++)
//		{
//			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X + 200, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
//			ANaveEnemiga* NuevaNaveEnemigaEspia = AShipFactory::CrearNaveEnemiga("EnemigaEspia", World, PosicionNaveActual, RotacionNave);
//			TANavesEnemigas.Push(NuevaNaveEnemigaEspia);
//		}
//
//		for (int i = 0; i < 6; i++)
//		{
//			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X + 400, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
//			ANaveEnemiga* NuevaNaveEnemigaNodriza = AShipFactory::CrearNaveEnemiga("EnemigaNodriza", World, PosicionNaveActual, RotacionNave);
//			TANavesEnemigas.Push(NuevaNaveEnemigaNodriza);
//		}
//
//		for (int i = 0; i < 6; i++)
//		{
//			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X - 200, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
//			ANaveEnemiga* NuevaNaveEnemigaReabastecimiento = AShipFactory::CrearNaveEnemiga("EnemigaReabastecimiento", World, PosicionNaveActual, RotacionNave);
//			TANavesEnemigas.Push(NuevaNaveEnemigaReabastecimiento);
//		}
//
//		for (int i = 0; i < 6; i++)
//		{
//			FVector PosicionNaveActual = FVector(SpawnNaveLocation.X - 400, SpawnNaveLocation.Y + i * 200, SpawnNaveLocation.Z);
//			ANaveEnemiga* NuevaNaveEnemigaTransporte = AShipFactory::CrearNaveEnemiga("EnemigaTransporte", World, PosicionNaveActual, RotacionNave);
//			TANavesEnemigas.Push(NuevaNaveEnemigaTransporte);
//		}
//
//	}
}


