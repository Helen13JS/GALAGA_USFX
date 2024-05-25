// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteAlfa.h"

ANaveEnemigaTransporteAlfa::ANaveEnemigaTransporteAlfa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaTransporteAlfa::Mover(float DeltaTime)
{
}

void ANaveEnemigaTransporteAlfa::Disparar()
{
}

void ANaveEnemigaTransporteAlfa::Destruirse()
{
}

void ANaveEnemigaTransporteAlfa::Escapar()
{
}
