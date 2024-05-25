// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaBeta.h"

ANaveEnemigaCazaBeta::ANaveEnemigaCazaBeta()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigaCazaBeta::Mover(float DeltaTime)
{
}

void ANaveEnemigaCazaBeta::Disparar()
{
}

void ANaveEnemigaCazaBeta::Destruirse()
{
}

void ANaveEnemigaCazaBeta::Escapar()
{
}
