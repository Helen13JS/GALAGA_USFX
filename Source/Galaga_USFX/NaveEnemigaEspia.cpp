// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"


ANaveEnemigaEspia::ANaveEnemigaEspia()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}


void ANaveEnemigaEspia::Mover(float DeltaTime)
{

    //Obtiene la posicion actual del actor
    FVector PosicionActual = GetActorLocation();

    //Genera nueva scoordenadas X e Y aleatorias
    float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
    float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

    //Crea un nuevo vector de posicion con las coordenads aleatorias y la misma Z que la posicion actual
    FVector NuevaPosicion = (FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z));

    //Establece la nueva posicion del actor
    SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaEspia::Disparar()
{
}

void ANaveEnemigaEspia::Destruirse()
{
}

void ANaveEnemigaEspia::Escapar()
{
}
