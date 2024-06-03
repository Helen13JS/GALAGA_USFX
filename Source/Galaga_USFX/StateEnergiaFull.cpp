// Fill out your copyright notice in the Description page of Project Settings.


#include "StateEnergiaFull.h"
#include "Galaga_USFXPawn.h"

// Sets default values
AStateEnergiaFull::AStateEnergiaFull()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateEnergiaFull::BeginPlay()
{
	Super::BeginPlay();

	//GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Energia Completa"));
	
}

// Called every frame
void AStateEnergiaFull::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStateEnergiaFull::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AStateEnergiaFull::SetNaveJugador(AGalaga_USFXPawn* NaveJugador)
{
	NavePawn = Cast<AGalaga_USFXPawn>(NaveJugador);
	NavePawn->SetEstados(NavePawn->GetEstadoEnergiaCompleta());
	//NavePawn = NaveJugador;
}

void AStateEnergiaFull::EnergiaCompleta()
{
	//codigo para modificar la velocidad de la nave
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Se activo el estado de energia llena"));
	NavePawn->SetVelocity(3000.0f);
	//NavePawn->SetState(NavePawn->GetEstadoEnergiaMedia());
}




FString AStateEnergiaFull::ObtenerEstado()
{
	return "Estado de energia llena";
}

