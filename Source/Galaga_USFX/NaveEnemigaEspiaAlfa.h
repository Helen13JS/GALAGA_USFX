// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaAlfa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspiaAlfa : public ANaveEnemigaEspia
{
	GENERATED_BODY()

private:
	int radarRastreador;

public:
	FORCEINLINE int GetRadarRastreador() const { return radarRastreador; }
	FORCEINLINE void SetRadarRastreador(int _radarRastreador) { radarRastreador = _radarRastreador; }
	ANaveEnemigaEspiaAlfa();


protected:

	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
//public:
	//virtual void Tick(float DeltaTime);
	
};
