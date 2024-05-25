// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeRecargar.h"
#include "Laser.h"
#include "Foton.h"
#include "Bomba.h"

// Sets default values
AFacadeRecargar::AFacadeRecargar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeRecargar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacadeRecargar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<AActor*> AFacadeRecargar::recargarMunicion()
{
	//for (int i = 0; i < 15; i++)
	//{//quiero almacenar en el array de manera aleatoria los 3 tipos de municion
	//	if (i % 5 == 0 || i == 0) {
	//		municionAleatoria = rand() % 2;
	//	}
	//	if (municionAleatoria == 0) {
	//		municiones.Add(GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass()));
	//	}
	//	else if (municionAleatoria == 1) {
	//		municiones.Add(GetWorld()->SpawnActor<ALaser>(ALaser::StaticClass()));
	//	}
	//	else if (municionAleatoria == 2) {
	//		municiones.Add(GetWorld()->SpawnActor<AFoton>(AFoton::StaticClass()));
	//	}
	//}
	return municiones;
}

//void AFacadeRecargar::Recargar(AActor* Actor)
//{
//	if (Actor->IsA(ALaser::StaticClass()))
//	{
//		ALaser* Laser = Cast<ALaser>(Actor);
//		Laser->Recargar();
//	}
//	else if (Actor->IsA(AFoton::StaticClass()))
//	{
//		AFoton* Foton = Cast<AFoton>(Actor);
//		Foton->Recargar();
//	}
//	else if (Actor->IsA(ABomba::StaticClass()))
//	{
//		ABomba* Bomba = Cast<ABomba>(Actor);
//		Bomba->Recargar();
//	}
//}

