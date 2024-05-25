// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaAlfa.h"


ANaveEnemigaEspiaAlfa::ANaveEnemigaEspiaAlfa()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspiaAlfa::Mover(float DeltaTime)
{
}

void ANaveEnemigaEspiaAlfa::Disparar()
{
}

void ANaveEnemigaEspiaAlfa::Destruirse()
{
}

void ANaveEnemigaEspiaAlfa::Escapar()
{
}

/*void ANaveEnemigaEspiaAlfa::Tick(float DeltaTime)
{
}*/
