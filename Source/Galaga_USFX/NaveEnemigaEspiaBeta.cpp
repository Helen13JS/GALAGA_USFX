// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaBeta.h"


ANaveEnemigaEspiaBeta::ANaveEnemigaEspiaBeta()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigaEspiaBeta::Mover(float DeltaTime)
{
}

void ANaveEnemigaEspiaBeta::Disparar()
{
}

void ANaveEnemigaEspiaBeta::Destruirse()
{
}

void ANaveEnemigaEspiaBeta::Escapar()
{
}

/*void ANaveEnemigaEspiaBeta::Tick(float DeltaTime)
{
}*/
