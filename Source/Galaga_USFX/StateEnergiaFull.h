// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "StateInterface.h"
#include "StateEnergiaFull.generated.h"

UCLASS()
class GALAGA_USFX_API AStateEnergiaFull : public APawn, public IStateInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AStateEnergiaFull();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Estado Energia llena")
	AGalaga_USFXPawn* NavePawn;

public:

	virtual void EnergiaCompleta() override;
	//virtual void EnergiaMedia() override;
	//virtual void EnergiaBaja() override;
	virtual void EstadoPotenciado() override;
	virtual void EstadoSigiloso() override;
	virtual void EstadoDefensivo() override;

	virtual FString ObtenerEstado() override;
	virtual void EstablecerNaveJugador(class AGalaga_USFXPawn* NaveJugador) override;

};
