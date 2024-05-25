// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaAlfa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodrizaAlfa : public ANaveEnemigaNodriza 
{
	GENERATED_BODY()

private:
	int capacidadNaves;

public:
	FORCEINLINE int GetCapacidadNaves() const { return capacidadNaves; }
	FORCEINLINE void SetCapacidadNaves(int _capacidadNaves) { capacidadNaves = _capacidadNaves; }
	ANaveEnemigaNodrizaAlfa();

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
