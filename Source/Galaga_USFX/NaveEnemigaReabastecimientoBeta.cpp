// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoBeta.h"

ANaveEnemigaReabastecimientoBeta::ANaveEnemigaReabastecimientoBeta()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimientoBeta::Mover(float DeltaTime)
{
}

void ANaveEnemigaReabastecimientoBeta::Disparar()
{
}

void ANaveEnemigaReabastecimientoBeta::Destruirse()
{
}

void ANaveEnemigaReabastecimientoBeta::Escapar()
{
}
