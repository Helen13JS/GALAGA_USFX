// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaAlfa.h"

ANaveEnemigaNodrizaAlfa::ANaveEnemigaNodrizaAlfa()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}




void ANaveEnemigaNodrizaAlfa::Mover()
{
    

}

void ANaveEnemigaNodrizaAlfa::Disparar()
{
}

void ANaveEnemigaNodrizaAlfa::Destruirse()
{
}

void ANaveEnemigaNodrizaAlfa::Escapar()
{
}
