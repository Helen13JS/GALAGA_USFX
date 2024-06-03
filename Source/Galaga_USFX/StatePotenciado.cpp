// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePotenciado.h"
#include "Galaga_USFXPawn.h"

// Sets default values
AStatePotenciado::AStatePotenciado()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStatePotenciado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStatePotenciado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStatePotenciado::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AStatePotenciado::EnergiaCompleta()
{
}

void AStatePotenciado::EstadoPotenciado()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Se activo el estado sigiloso"));
	NavePawn->SetVelocity(4000.0f);
	NavePawn->FireRate *= -2;

}


void AStatePotenciado::EstadoSigiloso()
{
}



FString AStatePotenciado::ObtenerEstado()
{
	return "Nave:Estado Potenciado";
}

void AStatePotenciado::SetNaveJugador(AGalaga_USFXPawn* NaveJugador)
{
	NavePawn = NaveJugador;
}

