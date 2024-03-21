// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}


void ANaveEnemigaReabastecimiento::Mover(float DeltaTime)
{
    static FVector PosicionActual = GetActorLocation();

    static float TopeAbajo = PosicionActual.X - 1300.0f;
    static float Reaparicion = PosicionActual.X + 200.0f;
    static float MovimientoY = 0.0f;


    FVector Desplazamiento = FVector(-125.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

    FVector ReaparicionPocision = GetActorLocation() + Desplazamiento;
    if (ReaparicionPocision.X < TopeAbajo)
    {
        ReaparicionPocision.X = Reaparicion;
    }
    SetActorLocation(ReaparicionPocision);
    
    
    
    
    
    
    /*/Obtiene la posicion actual del actor
    FVector PosicionActual = GetActorLocation();

    //Genera nueva scoordenadas X e Y aleatorias
    float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
    float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

    //Crea un nuevo vector de posicion con las coordenads aleatorias y la misma Z que la posicion actual
    FVector NuevaPosicion = (FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z));

    //Establece la nueva posicion del actor
    SetActorLocation(NuevaPosicion);*/

}
void ANaveEnemigaReabastecimiento::Disparar()
{
}

void ANaveEnemigaReabastecimiento::Destruirse()
{
}

void ANaveEnemigaReabastecimiento::Escapar()
{
}
