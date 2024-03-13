// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"


//// Create the mesh component
//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));



ANaveEnemigaCaza::ANaveEnemigaCaza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
  
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
}

void ANaveEnemigaCaza::Mover()
{
    SetActorLocation(FVector (GetActorLocation().X+1, GetActorLocation().Y+1, GetActorLocation().Z));

}

    

void ANaveEnemigaCaza::Disparar()
{
}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::Escapar()
{
}
