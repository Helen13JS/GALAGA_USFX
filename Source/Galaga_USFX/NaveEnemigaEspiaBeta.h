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

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
