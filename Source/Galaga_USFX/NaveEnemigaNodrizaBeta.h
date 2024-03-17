// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaBeta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodrizaBeta : public ANaveEnemigaNodriza
{
	GENERATED_BODY()

private:
	int capacidadArmas;

public:
	FORCEINLINE int GetCapacidadArmas() const { return capacidadArmas; }
	FORCEINLINE void SetCapacidadArmas(int _capacidadArmas) { capacidadArmas = _capacidadArmas; }
	ANaveEnemigaNodrizaBeta();

	
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
