// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "FacadeTipoDisparo.h"
#include "NaveEnemigaEspia.h"
#include "Kismet/GameplayStatics.h"
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

    ////velocidad = 0.8;
    //bCanFire = true;
    //cantidadBombas = 0;
    //TiempoCambio = 0;
    //DireccionMovimientoHorizontal = 1;
    //LimiteInferiorX = -1000;
    //FacadeDisparo = nullptr;
    //Espia = nullptr;
    //Caza = nullptr;
    ////ShipFactory = nullptr;
  
}
//
//ANaveEnemigaCaza::~ANaveEnemigaCaza()
//{
//    if (Espia)
//    {
//		Espia->DesubscribirNave(this);
//       // Destroy();
//	}
//}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
    FireRate += DeltaTime;
    if (FireRate > 2.0f)
	{
		Disparar();
		FireRate = 0;
	}

}

void ANaveEnemigaCaza::BeginPlay()
{
    Super::BeginPlay();

    FacadeDisparo = GetWorld()->SpawnActor<AFacadeTipoDisparo>(AFacadeTipoDisparo::StaticClass());


   
     Espia = Cast<ANaveEnemigaEspia>(UGameplayStatics::GetActorOfClass(GetWorld(), ANaveEnemigaEspia::StaticClass()));
        if (Espia)
        {   
          
            Espia->SubscribirNave(this);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NaveEnemigaCaza: Suscribiendo a NaveEnemigaEspia"));
        }
   

}
   

void ANaveEnemigaCaza::Mover(float DeltaTime)

{
    float LimiteDerechoF = 1000.0f;
    float LimiteIzquierdoF = -1000.0f;
     //float velocidad = 0.8;

    FVector NuevaPosicionF = FVector(GetActorLocation().X , GetActorLocation().Y - velocidad* 100*DeltaTime, GetActorLocation().Z); //calcula la nueva posicion de la nave

    // Verifica los límites de la posición en X
    if (NuevaPosicionF.Y < LimiteIzquierdoF)
    {
        NuevaPosicionF.Y = LimiteDerechoF;
    }
    else if (NuevaPosicionF.Y > LimiteDerechoF)
    {
        NuevaPosicionF.Y = LimiteIzquierdoF;
    }

    SetActorLocation(NuevaPosicionF); //establece la nueva p

    

}
void ANaveEnemigaCaza::ShotTimerExpired()
{
   // bCanFire = true;
}

void ANaveEnemigaCaza::Disparar()
{

    FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f);//distancia de disparo
    FVector _SpawnDirection = FVector(-2.0f, 0.0f, 0.0f);
    FVector SpawnDirection = _SpawnDirection;

    FacadeDisparo->Launch("Laser",SpawnLocation,SpawnDirection);

  

}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::Escapar()
{
    // Define cuánto quieres que se mueva la nave enemiga hacia atrás
    float DistanciaRetroceso = -2000.0f;

    // Obtiene la posición actual de la nave enemiga
    FVector PosicionActual = GetActorLocation();

    // Calcula la nueva posición moviendo la nave enemiga hacia atrás en el eje Y
    FVector NuevaPosicion = PosicionActual + FVector(DistanciaRetroceso, 0, 0);

    // Mueve la nave enemiga a la nueva posición
    SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaCaza::OnNotify()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("NaveEnemigaCaza: Notificacion Recibida"));
  
        // Llama al método SpawnearNaves de la AShipFactory
    SpawnNaveEnemigaCaza();
    
   // Escapar();
}
void ANaveEnemigaCaza::SpawnNaveEnemigaCaza()
{
   for (int i = 0; i < 2; ++i)
    {
        FVector SpawnLocationextra = GetActorLocation() + FVector(-800.0f + i * 200, 0.0f, 0.0f); // Ajusta la posición según tu lógica
      
        Caza= GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(), SpawnLocationextra, FRotator::ZeroRotator);
        // Destruye la nave después de 5 segundos
        if (Caza)
        {
            Caza->SetLifeSpan(5.0f);
        }
    }
}
void ANaveEnemigaCaza::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    // Desuscribe la nave cuando se destruye
    if (Espia)
    {
        Espia->DesubscribirNave(this);
    }
}




