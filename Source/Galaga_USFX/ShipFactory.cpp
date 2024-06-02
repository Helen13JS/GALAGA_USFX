// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipFactory.h"

#include "NaveEnemigaCaza.h"

#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"

// Sets default values
AShipFactory::AShipFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShipFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AShipFactory::CrearNaveEnemiga(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	if (!World)
	{
		return nullptr;
	}
	FVector NuevaSpawnLocation = SpawnLocation;
	if (TipoNave == "EnemigaCaza")
	{
		ANaveEnemigaCaza* NewShip = World->SpawnActor<ANaveEnemigaCaza>(NuevaSpawnLocation, SpawnRotation);
		return NewShip;
	}
	else if (TipoNave == "EnemigaEspia")
	{
		ANaveEnemigaEspia* NewShip = World->SpawnActor<ANaveEnemigaEspia>(NuevaSpawnLocation, SpawnRotation);
		return NewShip;
	}
	else if (TipoNave == "EnemigaNodriza")
	{
		ANaveEnemigaNodriza* NewShip = World->SpawnActor<ANaveEnemigaNodriza>(NuevaSpawnLocation, SpawnRotation);
		return NewShip;
	}
	else if (TipoNave == "EnemigaReabastecimiento")
	{
		ANaveEnemigaReabastecimiento* NewShip = World->SpawnActor<ANaveEnemigaReabastecimiento>(NuevaSpawnLocation, SpawnRotation);
		return NewShip;
	}
	else if (TipoNave == "EnemigaTransporte")
	{
		ANaveEnemigaTransporte* NewShip = World->SpawnActor<ANaveEnemigaTransporte>(NuevaSpawnLocation, SpawnRotation);
		return NewShip;
	}


	return nullptr;
}




