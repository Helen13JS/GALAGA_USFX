// Fill out your copyright notice in the Description page of Project Settings.


#include "CapMunicionBuilder.h"
#include "PaqueteCapsula.h"

// Sets default values
ACapMunicionBuilder::ACapMunicionBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapMunicionBuilder::BeginPlay()
{
	Super::BeginPlay();

	Capsula = GetWorld()->SpawnActor<APaqueteCapsula>(APaqueteCapsula::StaticClass());
	Capsula->AttachToActor(this ,FAttachmentTransformRules::KeepRelativeTransform);
	//TimerHandle = FTimerHandle();


	//GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ACapMunicionBuilder::AgregarMunicion, 10.0f, true, 0.0f);
	
}

// Called every frame
void ACapMunicionBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapMunicionBuilder::AgregarEnergia(FString _tipoE)
{
	/*for (int i = 0; i < 5; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 250.0f);
		ACapsulasEnergia* NewCapsula = GetWorld()->SpawnActor<ACapsulasEnergia>(ACapsulasEnergia::StaticClass(), SpawnLocation, FRotator::ZeroRotator);;
	
		TMCapsulas.Add(SpawnLocation, NewCapsula);
	}*/

	


		//FVector ubicacion = FVector(500.0f, -1200.0f, 100.0f);
		//	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
		//	for (int i = 0; i < 6; i++) {
		//		FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
		//		//Generar un número aleatorio entre 0 y 1
		//		//float RandomNumber = FMath::FRandRange(0.0f, 1.0f);
		//
		//		//if (RandomNumber <= 0.5f) {
		//			ACapsulasEnergia* NewCapsula = GetWorld()->SpawnActor<ACapsulasEnergia>(ACapsulasEnergia::StaticClass(), Posicion, FRotator::ZeroRotator);
		//			//Spawnea el objeto de inventario en una posicion y rotacion especifica  
		//			TMCapsulas.Add(Posicion, NewCapsula);
		//		//}
		//		
		//	}

	Capsula->SetPaqueteEnergia(_tipoE);
}

void ACapMunicionBuilder::AgregarMunicion(FString _tipoM)
{

	//FVector ubicacion = FVector(500.0f, -600.0f, 150.0f);
	//FVector ubicacion2 = FVector(800.0f, 500.0f, 150.0f);
	////FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	//for (int i = 0; i < 6; i++) {
	//	FVector Posicion = FVector(ubicacion.X, ubicacion.Y + i * 300.0f, ubicacion.Z);
	//	FVector Posicion2 = FVector(ubicacion2.X, ubicacion2.Y + i * 300.0f, ubicacion2.Z);
	//	//Generar un número aleatorio entre 0 y 1

	//	
	//		ACapsulasArmas* NewCapsula = GetWorld()->SpawnActor<ACapsulasArmas>(ACapsulasArmas::StaticClass(), Posicion, FRotator::ZeroRotator);
	//		ACapsulasMunicionRapida* NewCapsula2 = GetWorld()->SpawnActor<ACapsulasMunicionRapida>(ACapsulasMunicionRapida::StaticClass(), Posicion2, FRotator::ZeroRotator);
	//		//Spawnea el objeto de inventario en una posicion y rotacion especifica  
	//		TMCapsulas.Add(Posicion, NewCapsula);
	//		TMCapsulas.Add(Posicion, NewCapsula2);

	//}

	Capsula -> SetPaqueteMunicion(_tipoM);


	
}

void ACapMunicionBuilder::AgregarVelocidad(FString _tipoV)
{
	Capsula->SetPaqueteVelocidad(_tipoV);
}

APaqueteCapsula* ACapMunicionBuilder::GetPaqueteCapsula()
{
	
	return Capsula;
}

