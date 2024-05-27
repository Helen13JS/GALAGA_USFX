// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "StateInterface.h"
#include "StateSigiloso.generated.h"

UCLASS()
class GALAGA_USFX_API AStateSigiloso : public APawn, public IStateInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AStateSigiloso();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:

	class UStaticMesh* StealthMesh;
	class UStaticMesh* OriginalMesh1;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	//UPROPERTY(VisibleAnywhere, Category = "Estado Energia llena")
	class AGalaga_USFXPawn* NavePawn;

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
