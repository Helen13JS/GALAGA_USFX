// Fill out your copyright notice in the Description page of Project Settings.


#include "CircularStrategy.h"
#include "NaveEnemiga.h"

// Sets default values
ACircularStrategy::ACircularStrategy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACircularStrategy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACircularStrategy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACircularStrategy::Movement(ANaveEnemiga* enemy)
{
    // Define una velocidad de rotación
    float VelocidadRotacion = 10.0f; // Puedes ajustar este valor según la velocidad deseada

    // Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance más lentamente
    float TiempoTranscurrido = enemy->GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya más lento (0.1f)

    // Calcula el ángulo de rotación basado en el tiempo
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El ángulo cambia cada 6 segundos

    // Calcula las coordenadas X e Y para el movimiento circular
    float Radio = 3.0f; // Radio del círculo
    float X = FMath::Cos(Angulo) * Radio; // Coordenada X del círculo
    float Y = FMath::Sin(Angulo) * Radio; // Coordenada Y del círculo

    // Calcula la nueva posición sumando las coordenadas X e Y a la posición del punto alrededor del cual quieres que la nave se mueva
    FVector PuntoCentral = enemy->GetActorLocation(); // Cambia esto a la posición inicial de la nave
    FVector NuevaPosicion = PuntoCentral + FVector(X, Y, 0.0f);

    // Establece la nueva posición del actor
    enemy->SetActorLocation(NuevaPosicion);
}

