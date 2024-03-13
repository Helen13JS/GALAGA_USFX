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


protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
