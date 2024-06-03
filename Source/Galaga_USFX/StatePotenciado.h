// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "StateInterface.h"
#include "StatePotenciado.generated.h"

UCLASS()
class GALAGA_USFX_API AStatePotenciado : public APawn, public IStateInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AStatePotenciado();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	//UPROPERTY(VisibleAnywhere, Category = "Estado Energia llena")
	class AGalaga_USFXPawn* NavePawn;

private:
	virtual void EstadoSigiloso() override;
	virtual void EstadoProtegido() override {};
	virtual void EnergiaCompleta() override;
public:
	virtual void EstadoPotenciado() override;
	

	virtual FString ObtenerEstado() override;
	virtual void SetNaveJugador(class AGalaga_USFXPawn* NaveJugador) override;


};
