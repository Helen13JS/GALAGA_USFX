// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePotenciado.h"

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
}


void AStatePotenciado::EstadoSigiloso()
{
}

void AStatePotenciado::EstadoDefensivo()
{
}

FString AStatePotenciado::ObtenerEstado()
{
	return FString();
}

void AStatePotenciado::EstablecerNaveJugador(AGalaga_USFXPawn* NaveJugador)
{
}

