// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaBeta.h"

ANaveEnemigaNodrizaBeta::ANaveEnemigaNodrizaBeta()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodrizaBeta::Mover()
{
}

void ANaveEnemigaNodrizaBeta::Disparar()
{
}

void ANaveEnemigaNodrizaBeta::Destruirse()
{
}

void ANaveEnemigaNodrizaBeta::Escapar()
{
}
