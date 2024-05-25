// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaAlfa.h"

ANaveEnemigaCazaAlfa::ANaveEnemigaCazaAlfa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

/*void ANaveEnemigaCazaAlfa::Tick(float DeltaTime)
{
}*/

void ANaveEnemigaCazaAlfa::Mover(float DeltaTime)
{
}

void ANaveEnemigaCazaAlfa::Disparar()
{
}

void ANaveEnemigaCazaAlfa::Destruirse()
{
}

void ANaveEnemigaCazaAlfa::Escapar()
{
}
