// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaAlfa.h"
#include "FacadeTipoDisparo.h"

ANaveEnemigaCazaAlfa::ANaveEnemigaCazaAlfa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_4.TwinStickUFO_4'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	FireRate = 0;

}

void ANaveEnemigaCazaAlfa::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	Mover(DeltaTime);

	FireRate += DeltaTime;
	if (FireRate > 1.0f)
	{
		Disparar();
		FireRate = 0;
	}
}

void ANaveEnemigaCazaAlfa::BeginPlay()
{
	Super::BeginPlay();
	FacadeDisparo = GetWorld()->SpawnActor<AFacadeTipoDisparo>(AFacadeTipoDisparo::StaticClass());
}

void ANaveEnemigaCazaAlfa::Mover(float DeltaTime)
{

    // Define una velocidad de rotaci�n
    float VelocidadRotacion = 10.0f; // Puedes ajustar este valor seg�n la velocidad deseada

    // Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance m�s lentamente
    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya m�s lento (0.1f)

    // Calcula el �ngulo de rotaci�n basado en el tiempo
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El �ngulo cambia cada 6 segundos

    // Calcula las coordenadas X e Y para el movimiento circular
    float Radio = 10.0f; // Radio del c�rculo
    float X = FMath::Cos(Angulo) * Radio; // Coordenada X del c�rculo
    float Y = FMath::Sin(Angulo) * Radio; // Coordenada Y del c�rculo

    // Calcula la nueva posici�n sumando las coordenadas X e Y a la posici�n del punto alrededor del cual quieres que la nave se mueva
    FVector PuntoCentral = GetActorLocation(); // Cambia esto a la posici�n inicial de la nave
    FVector NuevaPosicion = PuntoCentral + FVector(X, Y, 0.0f);

    // Establece la nueva posici�n del actor
    SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaCazaAlfa::Disparar()
{

    FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f);//distancia de disparo
    FVector _SpawnDirection = FVector(-1.0f, 0.0f, 0.0f);
    FVector SpawnDirection = _SpawnDirection;

    FacadeDisparo->Launch("Basico", SpawnLocation, SpawnDirection);
}

void ANaveEnemigaCazaAlfa::Destruirse()
{
}

void ANaveEnemigaCazaAlfa::Escapar()
{
}
