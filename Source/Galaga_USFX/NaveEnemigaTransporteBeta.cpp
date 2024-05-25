// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteBeta.h"

ANaveEnemigaTransporteBeta::ANaveEnemigaTransporteBeta()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaTransporteBeta::Mover(float DeltaTime)
{
}

void ANaveEnemigaTransporteBeta::Disparar()
{
}

void ANaveEnemigaTransporteBeta::Destruirse()
{
}

void ANaveEnemigaTransporteBeta::Escapar()
{
}
