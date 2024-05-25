// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeTipoDisparo.h"
#include "Laser.h"
#include "Foton.h"
#include "Bomba.h"
#include "FacadeRecargar.h"
#include "ShipFactory.h"
//#include ""
#include "GameFramework/ProjectileMovementComponent.h" 
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaTransporte.h"

// Sets default values
AFacadeTipoDisparo::AFacadeTipoDisparo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeTipoDisparo::BeginPlay()
{
	Super::BeginPlay();
	//recargar = GetWorld()->SpawnActor<AFacadeRecargar>(AFacadeRecargar::StaticClass());
	
}

// Called every frame
void AFacadeTipoDisparo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeTipoDisparo::AsignarDisparo(FString TipoDisparo)
{
	/*if (TipoDisparo == "Bomba")
	{
		DisparoBomba();
		municion.Add(GetWorld()->SpawnActor<ALaser>(ALaser::StaticClass()));

	}
	else if (TipoDisparo == "Foton")
	{
		DisparoFoton();
		municion.Add(GetWorld()->SpawnActor<AFoton>(AFoton::StaticClass()));
	}
	else if (TipoDisparo == "Laser")
	{
		DisparoLaser();
		municion.Add(GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass()));
	}*/
}


void AFacadeTipoDisparo::Launch(FString TipoDisparo,FVector SpawnLocation,FVector SpawnDirection)
{

	if (TipoDisparo == "Misile")
	{
		bomba = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}
	else if (TipoDisparo == "Foton")
	{	
		foton = GetWorld()->SpawnActor<AFoton>(AFoton::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}
	else if (TipoDisparo == "Laser")
	{
		laser = GetWorld()->SpawnActor<ALaser>(ALaser::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	}

	

	

	
	//if (municion.Num() > 0)
	//{
	//	municion[0]->SetActorLocation(FVector(0, 0, 200));
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando"));

	//	//if (municion[0]->IsA(ABomba::StaticClass()))
	//	//{
	//	//	bomba = Cast<ABomba>(municion[0]);
	//	//}
	//	//else if (municion[0]->IsA(ALaser::StaticClass()))
	//	//{
	//	//	laser = Cast<ALaser>(municion[0]);
	//	//}
	//	//else if (municion[0]->IsA(AFoton::StaticClass()))
	//	//{
	//	//	foton = Cast<AFoton>(municion[0]);
	//	//}
	//	//municion.RemoveAt(0);
	//}
	//else {//si esta vacio el array, pide una recarga al otro facade
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay municion"));
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Recargando"));
	//	if (recargar != nullptr)
	//	{
	//		municion = recargar->recargarMunicion();
	//	}
	//	else
	//	{
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay recargador"));
	//	}
	//}

	//if (municion.Num() > 0)
	//{
	//	// Aquí es donde deberías mover tu láser
	//	municion[0]->SetActorLocation(FVector(0, 0, 200));
	//	municion[0]->SetActorHiddenInGame(false);  // Hace el láser visible

	//	// Set the direction of the laser
	//	ALaser* Laser = Cast<ALaser>(municion[0]);
	//	if (Laser != nullptr)
	//	{
	//		Laser->ProjectileMovementComponent->Velocity = Laser->GetActorForwardVector() * Laser->ProjectileMovementComponent->InitialSpeed;
	//	}

	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando"));
	//	municion.RemoveAt(0);
	//}
	//else {
	//	// Si no hay municiones, recarga
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay municion"));
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Recargando"));
	//	if (recargar != nullptr)
	//	{
	//		municion = recargar->recargarMunicion();
	//		for (AActor* actor : municion) {
	//			actor->SetActorHiddenInGame(true);  // Hace los láseres recargados invisibles hasta que se disparen
	//		}
	//	}
	//	else
	//	{
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay recargador"));
	//	}
	//}

	/*if (municion.Num() > 0)
	{
		municion[0]->SetActorLocation(SpawnLocation);
		municion.RemoveAt(0);
	}
	else
	{
		if (recargar != nullptr)
		{
			municion = recargar->recargarMunicion();
		}
	}*/

}

void AFacadeTipoDisparo::DisparoLaser()
{
	/*UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(1000.0f, -510.0f + i * 800, 200.0f);
			ANaveEnemiga* NuevaNaveCaza = AShipFactory::CrearNaveEnemiga("EnemigaCaza", World, PosicionNaveActual, FRotator(180.0f,0.0f,0.0f));
			NuevaNaveCaza->SetFireRate(0.1f);
			if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza))
			{
				NaveCaza->NewProjectileLaser = ALaser::StaticClass();
			}
		}
	}*/
}

void AFacadeTipoDisparo::DisparoFoton()
{
	/*UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(1000.0f, -510.0f + i * 800, 200.0f);
			ANaveEnemiga* NuevaNaveCaza = AShipFactory::CrearNaveEnemiga("EnemigaTransporte", World, PosicionNaveActual, FRotator(180.0f, 0.0f, 0.0f));
			NuevaNaveCaza->SetFireRate(0.2f);

			if (ANaveEnemigaTransporte* NaveCaza = Cast<ANaveEnemigaTransporte>(NuevaNaveCaza))
			{
				
				NaveCaza->NewProjectileFoton = AFoton::StaticClass();
			}
		}
	}*/
}

void AFacadeTipoDisparo::DisparoBomba()
{
	/*UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(1000.0f, -510.0f + i * 800, 200.0f);
			ANaveEnemiga* NuevaNaveCaza = AShipFactory::CrearNaveEnemiga("EnemigaEspia", World, PosicionNaveActual, FRotator(180.0f, 0.0f, 0.0f));
			NuevaNaveCaza->SetFireRate(0.3f);
			if (ANaveEnemigaEspia* NaveCaza = Cast<ANaveEnemigaEspia>(NuevaNaveCaza))
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo bomba"));
				NaveCaza->NewProjectileBomba = ABomba::StaticClass();
			}
		}
	}*/
}

//void AFacadeTipoDisparo::Recargar()
//{
//}

