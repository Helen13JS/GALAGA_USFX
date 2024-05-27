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

	GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Energia Completa"));
	
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

void AStateEnergiaFull::EstablecerNaveJugador(AGalaga_USFXPawn* NaveJugador)
{
	NavePawn = NaveJugador;
}

void AStateEnergiaFull::EnergiaCompleta()
{
	NavePawn->SetState(NavePawn->GetEstadoEnergiaMedia());
}

void AStateEnergiaFull::EstadoPotenciado()
{
}

void AStateEnergiaFull::EstadoSigiloso()
{
}

void AStateEnergiaFull::EstadoDefensivo()
{
}

FString AStateEnergiaFull::ObtenerEstado()
{
	return "Estado de energia llena";
}

