// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"



ANaveEnemigaCaza::ANaveEnemigaCaza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
  
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}
   

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
    
    /*//Obtiene la posicion actual del actor
    FVector PosicionActual = GetActorLocation();

    //Genera nueva scoordenadas X e Y aleatorias
    float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
    float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

    //Crea un nuevo vector de posicion con las coordenads aleatorias y la misma Z que la posicion actual
    FVector NuevaPosicion = (FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z));

    //Establece la nueva posicion del actor
    SetActorLocation(NuevaPosicion);*/


   /* static FVector PosicionActual = GetActorLocation();

    static float TopeAbajo = PosicionActual.X - 1300.0f;
    static float Reaparicion = PosicionActual.X + 200.0f;
    static float MovimientoY = 0.0f;


    FVector Desplazamiento = FVector(-50.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

    FVector ReaparicionPocision = GetActorLocation() + Desplazamiento;
    if (ReaparicionPocision.X < TopeAbajo)
    {
        ReaparicionPocision.X = Reaparicion;
    }
    SetActorLocation(ReaparicionPocision);*/


    FVector PosicionActual = GetActorLocation();
    FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);


    if (NuevaPosicion.X < limiteX) 
    {

        SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

    }



    
    
    
    
    /*// Define la velocidad de movimiento horizontal de la nave
    float VelocidadHorizontal = 200.0f; // Puedes ajustar este valor según la velocidad deseada

    // Define una velocidad de rotación
    float VelocidadRotacion = 40.0f; // Puedes ajustar este valor según la velocidad deseada

    // Calcula el desplazamiento horizontal en la dirección deseada
    FVector DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); // Por ejemplo, avanza hacia adelante en el eje X
    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;//nos ayuda a emprajerar las velocidades en los diferentes dispositivos 

    // Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance más lentamente
    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya más lento (0.1f)

    // Calcula el ángulo de rotación basado en el tiempo
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El ángulo cambia cada 6 segundos

    // Calcula las coordenadas X e Y para el movimiento circular
    float Radio = 20.0f; // Radio del círculo
    float X = FMath::Cos(Angulo) * Radio; // Coordenada X del círculo
    float Y = FMath::Sin(Angulo) * Radio; // Coordenada Y del círculo

    // Calcula la nueva posición sumando las coordenadas X e Y al desplazamiento horizontal y a la posición actual
    FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);

    // Establece la nueva posición del actor
    SetActorLocation(NuevaPosicion);*/

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
