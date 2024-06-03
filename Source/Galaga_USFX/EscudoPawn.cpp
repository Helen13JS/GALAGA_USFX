// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoPawn.h"

// Sets default values
AEscudoPawn::AEscudoPawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Trim.Shape_Trim'"));

	EscudoPawn = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
	EscudoPawn->SetStaticMesh(Mesh.Object);
	EscudoPawn->SetupAttachment(RootComponent);
	EscudoPawn->BodyInstance.SetCollisionProfileName("Escudo");
	RootComponent = EscudoPawn;


}

// Called when the game starts or when spawned
void AEscudoPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudoPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

