// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteAlfa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaTransporteAlfa : public ANaveEnemigaTransporte
{
	GENERATED_BODY()



private:
	int alcance;//cuan larga es la trayectoria de la nave 
public:
	FORCEINLINE float GetAlcance() const { return alcance; }
	FORCEINLINE void SetAlcance(float _alcance) { alcance = _alcance; }

protected:
	ANaveEnemigaTransporteAlfa();
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
