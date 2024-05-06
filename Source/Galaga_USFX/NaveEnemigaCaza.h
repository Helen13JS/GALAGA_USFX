// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int cantidadBombas;
	int LimiteInferiorX;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	

protected:
	virtual void Mover(float DeltaTime) ;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();


public:

	virtual void Tick(float DeltaTime) override;
	int DireccionMovimientoHorizontal;

};
