// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldedState.h"
#include "Galaga_USFXPawn.h"
#include "EscudoPawn.h"

// Sets default values
AShieldedState::AShieldedState()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShieldedState::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShieldedState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShieldedState::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AShieldedState::EstadoProtegido()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Se activo el estado protegido"));
	//en este codigo crearemos un escudo para la nave

	FVector PosicionEscudo = NavePawn->GetActorLocation();
	AEscudoPawn* Escudo = GetWorld()->SpawnActor<AEscudoPawn>(AEscudoPawn::StaticClass(), PosicionEscudo, FRotator::ZeroRotator);

	if (Escudo != nullptr) {
		Escudo->AttachToActor(NavePawn, FAttachmentTransformRules::SnapToTargetIncludingScale);
		Escudo->SetActorRelativeLocation(FVector(0.0f, 10.0f, 180.0f));
		Escudo->SetActorScale3D(FVector(2.0f, 0.6f, 1.0f));
		//Escudo->SetActorRotation(FRotator(0.0f, 90.0f, -100.0f));

		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Escudo]()
			{
				Escudo->Destroy();
			}, 5.0f, false);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo crear el escudo"));
	}
}

FString AShieldedState::ObtenerEstado()
{
	return "Nave en estado Protegido";
}

void AShieldedState::SetNaveJugador(AGalaga_USFXPawn* NaveJugador)
{
		NavePawn = NaveJugador;
}

