// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaBeta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspiaBeta : public ANaveEnemigaEspia
{
	GENERATED_BODY()

private:
	int tiempoInvisible;

public:
	FORCEINLINE int GetTiempoInvisible() const { return tiempoInvisible; }
	FORCEINLINE void SetTiempoInvisible(int _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }
	ANaveEnemigaEspiaBeta();

protected:
	
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
