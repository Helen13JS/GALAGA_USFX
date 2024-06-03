// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "StateInterface.h"
#include "ShieldedState.generated.h"

UCLASS()
class GALAGA_USFX_API AShieldedState : public APawn, public IStateInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShieldedState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Estado Defensivo")
	class AGalaga_USFXPawn* NavePawn;
	//class AEscudoPawn* Escudo;

	void EstadoProtegido() override;
	FString ObtenerEstado() override;
	void SetNaveJugador(class AGalaga_USFXPawn* NaveJugador) override;

private:
	void EnergiaCompleta() override {};
	void EstadoPotenciado() override {};
	void EstadoSigiloso() override {};

};
