// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas.h"
#include "Engine/CollisionProfile.h"
#include "MovimientoVertical.h"


// Sets default values
ACapsulas::ACapsulas():Super()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(
			UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
	MovementComponent = CreateDefaultSubobject<UMovimientoVertical>(TEXT("MovimientoVertical"));

}

// Called when the game starts or when spawned
void ACapsulas::BeginPlay()
{
	Super::BeginPlay();

	CustomizeAppearance(); // Llama a la función de personalización al comienzo del juego
	//SetLifeSpan(10.0f); // Destruye el objeto después de 10 segundos
	
}

// Called every frame
void ACapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsulas::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void ACapsulas::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}
void ACapsulas::CustomizeAppearance()
{
	// No hace nada en la clase base, las clases hijas pueden sobrescribir esta función
}
