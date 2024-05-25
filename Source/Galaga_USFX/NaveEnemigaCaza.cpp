// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "FacadeTipoDisparo.h"
#include "Foton.h"
#include "Laser.h"
#include "Engine/CollisionProfile.h"
#include "Galaga_USFXProjectile.h"
#include "Galaga_USFXPawn.h"



ANaveEnemigaCaza::ANaveEnemigaCaza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO1.TwinStickUFO1'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

    FireRate= 0;
  
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
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

void ANaveEnemigaCaza::BeginPlay()
{
    Super::BeginPlay();
	
    FacadeDisparo= GetWorld()->SpawnActor<AFacadeTipoDisparo>(AFacadeTipoDisparo::StaticClass());
    //FTimerHandle timeDisparo;
   // GetWorldTimerManager().SetTimer(timeDisparo, this, &ANaveEnemigaCaza::Disparar, 2.0f, true, 0.0f);
//}
//void ANaveEnemigaCaza::FuncionColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
//{
//    ABomba* Projectile = Cast<ABomba>(OtherActor);
//    if (Projectile)
//    {
//        // Destruir la nave enemiga
//        Destroy();
//
//    }
//}
//
}
   

void ANaveEnemigaCaza::Mover(float DeltaTime)

{
    

     

    float LimiteDerechoF = 1000.0f;
    float LimiteIzquierdoF = -1000.0f;
     //float velocidad = 0.8;

    FVector NuevaPosicionF = FVector(GetActorLocation().X , GetActorLocation().Y - velocidad* 100*DeltaTime, GetActorLocation().Z); //calcula la nueva posicion de la nave

    // Verifica los l�mites de la posici�n en X
    if (NuevaPosicionF.Y < LimiteIzquierdoF)
    {
        NuevaPosicionF.Y = LimiteDerechoF;
    }
    else if (NuevaPosicionF.Y > LimiteDerechoF)
    {
        NuevaPosicionF.Y = LimiteIzquierdoF;
    }

    SetActorLocation(NuevaPosicionF); //establece la nueva p

    

    
    
    
    
    /*// Define la velocidad de movimiento horizontal de la nave
    float VelocidadHorizontal = 200.0f; // Puedes ajustar este valor seg�n la velocidad deseada

    // Define una velocidad de rotaci�n
    float VelocidadRotacion = 40.0f; // Puedes ajustar este valor seg�n la velocidad deseada

    // Calcula el desplazamiento horizontal en la direcci�n deseada
    FVector DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); // Por ejemplo, avanza hacia adelante en el eje X
    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;//nos ayuda a emprajerar las velocidades en los diferentes dispositivos 

    // Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance m�s lentamente
    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya m�s lento (0.1f)

    // Calcula el �ngulo de rotaci�n basado en el tiempo
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El �ngulo cambia cada 6 segundos

    // Calcula las coordenadas X e Y para el movimiento circular
    float Radio = 20.0f; // Radio del c�rculo
    float X = FMath::Cos(Angulo) * Radio; // Coordenada X del c�rculo
    float Y = FMath::Sin(Angulo) * Radio; // Coordenada Y del c�rculo

    // Calcula la nueva posici�n sumando las coordenadas X e Y al desplazamiento horizontal y a la posici�n actual
    FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);

    // Establece la nueva posici�n del actor
    SetActorLocation(NuevaPosicion);*/

}
void ANaveEnemigaCaza::ShotTimerExpired()
{
    bCanFire = true;
}
void ANaveEnemigaCaza::Disparar()
{

    FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f);//distancia de disparo
    FVector _SpawnDirection = FVector(-1.0f, 0.0f, 0.0f);
    FVector SpawnDirection = _SpawnDirection;

    FacadeDisparo->Launch("Laser",SpawnLocation,SpawnDirection);

}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::Escapar()
{
}


