// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}


void ANaveEnemigaTransporte::Mover(float DeltaTime)
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



	// Define la velocidad de movimiento horizontal de la nave
	float VelocidadHorizontal = 200.0f; // Puedes ajustar este valor según la velocidad deseada

	// Define una velocidad de rotación
	float VelocidadRotacion = 40.0f; // Puedes ajustar este valor según la velocidad deseada

	// Calcula el desplazamiento horizontal en la dirección deseada
	FVector DireccionMovimiento = GetActorForwardVector(); // Mueve la nave hacia adelante
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	// Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance más lentamente
	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya más lento (0.1f)

	// Calcula el ángulo de rotación basado en el tiempo
	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El ángulo cambia cada 6 segundos

	// Calcula las coordenadas X e Y para el movimiento en zigzag
	float AmplitudZigzag = 20.0f; // Amplitud del zigzag
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag; // Calcula el desplazamiento en el eje Y para el zigzag

	// Calcula la nueva posición sumando el desplazamiento horizontal, el zigzag y la posición actual
	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(0.0f, ZigzagOffset, 0.0f);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaTransporte::Disparar()
{
}

void ANaveEnemigaTransporte::Destruirse()
{
}

void ANaveEnemigaTransporte::Escapar()
{
}
