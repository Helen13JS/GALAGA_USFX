// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoBeta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaReabastecimientoBeta : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()


private:
	int capacidadResistencia;

public:
	FORCEINLINE int GetCapacidadResistencia() const { return capacidadResistencia; }
	FORCEINLINE void SetCapacidadResistencia(int _capacidadResistencia) { capacidadResistencia = _capacidadResistencia; }
	ANaveEnemigaReabastecimientoBeta();


protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
