// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteBeta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaTransporteBeta : public ANaveEnemigaTransporte
{
	GENERATED_BODY()


protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
