// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoAlfa.h"

ANaveEnemigaReabastecimientoAlfa::ANaveEnemigaReabastecimientoAlfa()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimientoAlfa::Mover()
{
}

void ANaveEnemigaReabastecimientoAlfa::Disparar()
{
}

void ANaveEnemigaReabastecimientoAlfa::Destruirse()
{
}

void ANaveEnemigaReabastecimientoAlfa::Escapar()
{
}
