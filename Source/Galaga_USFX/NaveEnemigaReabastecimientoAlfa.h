// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoAlfa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaReabastecimientoAlfa : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()

private:
	int capacidadCombustible;

public:
	FORCEINLINE int GetCapacidadCombustible() const { return capacidadCombustible; }
	FORCEINLINE void SetCapacidadCombustible(int _capacidadCombustible) { capacidadCombustible = _capacidadCombustible; }
	ANaveEnemigaReabastecimientoAlfa();


protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
