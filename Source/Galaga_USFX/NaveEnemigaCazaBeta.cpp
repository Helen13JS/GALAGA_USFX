// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaBeta.h"
#include "StrategyInterface.h"
#include "Galaga_USFXPawn.h"
#include "Kismet/GameplayStatics.h"

ANaveEnemigaCazaBeta::ANaveEnemigaCazaBeta()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>  ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel3.EnemyLevel3'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	//CazaMesh->SetupAttachment(RootComponent);
	//CazaMesh->BodyInstance.SetCollisionProfileName("Escudo");
	//RootComponent =  CazaMesh;
	//CazaMesh->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));

	armasInteligentes = 0;

}


void ANaveEnemigaCazaBeta::Mover(float DeltaTime)
{
	Super::Mover(DeltaTime);
	if (Estrategia) {
		Estrategia->Movement(this);
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estrategia Activada"));
	}

}

void ANaveEnemigaCazaBeta::CambiarMovimiento(IStrategyInterface* _Estrategia)
{
	//Estrategia = Cast<IStrategiaInterface>
	Estrategia = _Estrategia;

}

//void ANaveEnemigaCazaBeta::ActivarEstrategias()
//{
	/*if (Estrategia) {
		Estrategia->ExecuteMovement(this);
		GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estrategia Activada"));
	}*/
	
//}

void ANaveEnemigaCazaBeta::Disparar()
{
}

void ANaveEnemigaCazaBeta::Destruirse()
{
}

void ANaveEnemigaCazaBeta::Escapar()
{
}

void ANaveEnemigaCazaBeta::BeginPlay()
{
	Super::BeginPlay();

	//Pawn = Cast<AGalaga_USFXPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

void ANaveEnemigaCazaBeta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//ActivarEstrategias();
	Mover(DeltaTime);
}
