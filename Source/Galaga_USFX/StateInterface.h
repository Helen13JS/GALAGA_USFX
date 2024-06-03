// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StateInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UStateInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API IStateInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EstadoPotenciado() = 0;
	//virtual void EstadoNormal() = 0;
	virtual void EstadoSigiloso() = 0;
	virtual void EstadoProtegido() = 0;

	virtual void EnergiaCompleta() = 0;
	//virtual void EnergiaMedia() = 0;
	//virtual void EnergiaBaja() = 0;

	virtual FString ObtenerEstado() = 0;
	virtual void SetNaveJugador(class AGalaga_USFXPawn* NaveJugador) = 0;
};
