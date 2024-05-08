// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PaqueteCapsula.h"
#include "CapsulasInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCapsulasInterface : public UInterface
{
	GENERATED_BODY()
};


class GALAGA_USFX_API ICapsulasInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void AgregarEnergia(FString _tipoE) = 0;
	virtual void AgregarMunicion(FString _tipoM) = 0;
	virtual void AgregarVelocidad(FString _tipoV) = 0;
	virtual class APaqueteCapsula* GetPaqueteCapsula() = 0;

};
