// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int capacidadSuministros;
public:
	FORCEINLINE int GetCapacidadSuministros() const { return capacidadSuministros; }
	FORCEINLINE void SetCapacidadSuministros(int _capacidadSuministros) { capacidadSuministros = _capacidadSuministros; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
public:
	ANaveEnemigaReabastecimiento();
	virtual void Tick(float DeltaTime) override;

};
