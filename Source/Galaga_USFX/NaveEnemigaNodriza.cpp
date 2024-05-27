// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"
#include "FacadeTipoDisparo.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
    tiempoDisparo += DeltaTime;

    if (tiempoDisparo >= 1.0f)
	{
		Disparar();
		tiempoDisparo = 0.0f;
	}
}

void ANaveEnemigaNodriza::BeginPlay()
{
    Super::BeginPlay();

    Disparo = GetWorld()->SpawnActor<AFacadeTipoDisparo>(AFacadeTipoDisparo::StaticClass());
}



void ANaveEnemigaNodriza::Mover(float DeltaTime)
{

    float LimiteDerecho = 1000.0f;
    float LimiteIzquierdo = -1000.0f;
    //    float velocidad = 0.8;

    FVector NuevaPosicion = FVector(GetActorLocation().X, GetActorLocation().Y - velocidad * 100 * DeltaTime, GetActorLocation().Z); //calcula la nueva posicion de la nave

    // Verifica los límites de la posición en X
    if (NuevaPosicion.Y < LimiteIzquierdo)
    {
        NuevaPosicion.Y = LimiteDerecho;
    }
    else if (NuevaPosicion.Y > LimiteDerecho)
    {
        NuevaPosicion.Y = LimiteIzquierdo;
    }

    SetActorLocation(NuevaPosicion); //establece la nueva p



    /*static FVector PosicionActual = GetActorLocation();

    static float TopeAbajo = PosicionActual.X - 1300.0f;
    static float Reaparicion = PosicionActual.X + 200.0f;
    static float MovimientoY = 0.0f;


    FVector Desplazamiento = FVector(-100.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

    FVector ReaparicionPocision = GetActorLocation() + Desplazamiento;
    if (ReaparicionPocision.X < TopeAbajo)
    {
        ReaparicionPocision.X = Reaparicion;
    }
    SetActorLocation(ReaparicionPocision);*/



    //Obtiene la posicion actual del actor
   /* FVector PosicionActual = GetActorLocation();

    //Genera nueva scoordenadas X e Y aleatorias
    float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
    float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

    //Crea un nuevo vector de posicion con las coordenads aleatorias y la misma Z que la posicion actual
    FVector NuevaPosicion = (FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z));

    //Establece la nueva posicion del actor
    SetActorLocation(NuevaPosicion);*/

}

void ANaveEnemigaNodriza::Disparar()
{

    FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f);//distancia de disparo
    FVector _SpawnDirection = FVector(-1.0f, 0.0f, 0.0f);
    FVector SpawnDirection = _SpawnDirection;

    Disparo->Launch("Bomba", SpawnLocation, SpawnDirection);
}

void ANaveEnemigaNodriza::Destruirse()
{
}

void ANaveEnemigaNodriza::Escapar()
{
}
