// Fill out your copyright notice in the Description page of Project Settings.


#include "CapVelocityBuilder.h"

// Sets default values
ACapVelocityBuilder::ACapVelocityBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapVelocityBuilder::BeginPlay()
{
	Super::BeginPlay();
	TimerHandle = FTimerHandle();

	Capsula = GetWorld()->SpawnActor<APaqueteCapsula>(APaqueteCapsula::StaticClass());
	Capsula->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);


	//GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ACapVelocityBuilder::AgregarVelocidad, 20.0f, true, 0.0f);
}

// Called every frame
void ACapVelocityBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapVelocityBuilder::AgregarEnergia(FString _tipoE)
{
}

void ACapVelocityBuilder::AgregarMunicion(FString _tipoM)
{

	/*FVector ubicacion = FVector(500.0f, -600.0f, 150.0f);
	FVector ubicacion2 = FVector(800.0f, 500.0f, 150.0f);*/
	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

}

void ACapVelocityBuilder::AgregarVelocidad(FString _tipoV)
{

	Capsula ->SetPaqueteVelocidad(_tipoV);

	//FVector ubicacion = FVector(500.0f, 100.0f, 150.0f);
	//FVector ubicacion2 = FVector(800.0f, 500.0f, 150.0f);
	////FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	//for (int i = 0; i < 6; i++) {
	//	FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
	//	FVector Posicion2 = FVector(ubicacion2.X, ubicacion2.Y + i * 300.0f, ubicacion2.Z);

	//	//Generar un número aleatorio entre 0 y 1
	//	//float RandomNumber = FMath::FRandRange(0.0f, 1.0f);

	//	//if (RandomNumber <= 0.5f) {
	//	ACapsulasVelocidad* NewCapsula = GetWorld()->SpawnActor<ACapsulasVelocidad>(ACapsulasVelocidad::StaticClass(), Posicion, FRotator::ZeroRotator);
	//	ACapsulasVelocidadExtrema * NewCapsula2 = GetWorld()->SpawnActor<ACapsulasVelocidadExtrema>(ACapsulasVelocidadExtrema::StaticClass(), Posicion2, FRotator::ZeroRotator);
	//	//Spawnea el objeto de inventario en una posicion y rotacion especifica  
	//	TMCapsulas.Add(Posicion, NewCapsula);
	//	TMCapsulas.Add(Posicion, NewCapsula2);
	//	//}

	//}
}

APaqueteCapsula* ACapVelocityBuilder::GetPaqueteCapsula()
{
	return Capsula;
}

