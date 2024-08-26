// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"
#include "Laser.h"
#include "Bomba.h"
#include "Foton.h"
#include "Engine/CollisionProfile.h"
#include "NaveEnemigaCaza.h"
#include "SubscriptorInterface.h"
#include "Galaga_USFXPawn.h"

#include "FacadeTipoDisparo.h"


ANaveEnemigaEspia::ANaveEnemigaEspia()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_2.TwinStickUFO_2'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

    

}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
    FireRate += DeltaTime;
    if (FireRate > 3.0f)
    {
        Disparar();
        FireRate = 0;
    }

   // UpdateNave();

}

void ANaveEnemigaEspia::BeginPlay()
{
    Super::BeginPlay();
	DisparoFacade = GetWorld()->SpawnActor<AFacadeTipoDisparo>(AFacadeTipoDisparo::StaticClass());
    AGalaga_USFXPawn* PlayerPawn = Cast<AGalaga_USFXPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
    if (PlayerPawn)
    {
        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PlayerPawn encontrado,suscribiendo"));
        PlayerPawn->OnMunitionCapsuleConsumed.AddDynamic(this, &ANaveEnemigaEspia::NotificarNaves);
    }

   
	
}

void ANaveEnemigaEspia::SubscribirNave(ISubscriptorInterface* navesubscriptora)
{
    if (navesubscriptora) {
    NavesSubscriptoras.Add(navesubscriptora);
    }
    ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(navesubscriptora);
    if (NaveCaza)
    {
       // evento.AddDynamic(NaveCaza, &ANaveEnemigaCaza::OnNotify);
    }
}

void ANaveEnemigaEspia::DesubscribirNave(ISubscriptorInterface* navesubscriptora)
{
    NavesSubscriptoras.Remove(navesubscriptora);
    ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(navesubscriptora);
    if (NaveCaza)
    {
	//	evento.RemoveDynamic(NaveCaza, &ANaveEnemigaCaza::OnNotify);
	}
}

void ANaveEnemigaEspia::NotificarNaves()
{

   for (ISubscriptorInterface* nave : NavesSubscriptoras)
    {
       if (nave) {
           nave->OnNotify();
       }
	}
    GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Notificando a las naves enemigas caza"));
   // OnNotify.Broadcast();
    evento.Broadcast();

}


//void ANaveEnemigaEspia::UpdateNave()
//{
//    NotificarNaves();
//}


void ANaveEnemigaEspia::Mover(float DeltaTime)
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


    FVector Desplazamiento = FVector(-75.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

    FVector ReaparicionPocision = GetActorLocation() + Desplazamiento;
    if (ReaparicionPocision.X < TopeAbajo)
    {
        ReaparicionPocision.X = Reaparicion;
    }
    SetActorLocation(ReaparicionPocision);*/


    

}

void ANaveEnemigaEspia::Disparar()
{
    FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f);//distancia de disparo
    

    // Spawnear el proyectil
    //ABomba* NewProjectile = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), SpawnLocation, FRotator::ZeroRotator);


    //if (NewProjectile)
    //{
    //    // Modificar dirección y velocidad del proyectil según sea necesario
      FVector _SpawnDirection = FVector(-2.0f, 0.0f, 0.0f);
      FVector SpawnDirection = _SpawnDirection;
    //    NewProjectile->FireInDirection(SpawnDirection);
    //}
      DisparoFacade->Launch("Foton", SpawnLocation, _SpawnDirection);


}

void ANaveEnemigaEspia::Destruirse()
{
}

void ANaveEnemigaEspia::Escapar()
{
}
